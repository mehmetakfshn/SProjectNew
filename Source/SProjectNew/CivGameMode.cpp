#include "CivGameMode.h"
#include "CivGameState.h"
#include "CivGameInstance.h"
#include "CivPlayerController.h" // Kendi PlayerController'ýmýzý dahil ediyoruz
#include "UnitBase.h"
#include "Kismet/GameplayStatics.h"
#include "UnitBase.h" // YENÝ: UnitBasei tanýmak için
#include "Kismet/GameplayStatics.h" // YENÝ: GetActorOfClass için
#include "CivSaveGame.h"
#include "PathfindingComponent.h"
#include "Public/HexGridComponent.h"
#include "sqlite3.h"
#include "Database/DatabaseInitializer.h"
#include "Database/DatabaseReader.h"  
#include "Public/Managers/UnitManager.h"
#include "Public/UnitData.h"
#include "Public/CivilizationManager.h"
#include "Public/CivilizationData.h" 
#include "Public/HexGridActor.h"
#include "Public/HexGridComponent.h"








ACivGameMode::ACivGameMode()
{
	GameStateClass = ACivGameState::StaticClass();
	PlayerControllerClass = ACivPlayerController::StaticClass();
    DefaultUnitClass = AUnitBase::StaticClass();

}


void ACivGameMode::BeginPlay()
{
    Super::BeginPlay();

    UCivGameInstance* GI = Cast<UCivGameInstance>(GetGameInstance());
    if (!GI)
    {
        UE_LOG(LogTemp, Error, TEXT("CivGameInstance cast FAILED in GameMode!"));
        return;
    }

    // ======================================================
    // PLAYER CIV
    // ======================================================
    ActiveCiv = GI->SelectedCiv;

    PlayerCivManager = NewObject<UCivilizationManager>(this);
    PlayerCivManager->Init(ActiveCiv); // ÞÝMDÝ sadece renk ve BaseInfo set eder
    AllCivs.Add(PlayerCivManager);


    // ======================================================
    // AI CIVS
    // ======================================================
    AICivs = GI->SelectedAICivs;

    for (const FCivInfo& Info : AICivs)
    {
        UCivilizationManager* NewAI = NewObject<UCivilizationManager>(this);
        NewAI->Init(Info);
        AICivManagers.Add(NewAI);
    }

    // ======================================================
    // DATABASE AÇILIYOR
    // ======================================================
    UDatabaseInitializer::InitializeDatabase();

    DBReader = NewObject<UDatabaseReader>();

    FString DBPath = FPaths::ProjectContentDir() / TEXT("Data/GameData.db");
    if (!DBReader->OpenDatabase(DBPath))
    {
        UE_LOG(LogTemp, Error, TEXT("FAILED TO OPEN DB at %s"), *DBPath);
        return;
    }


    // PLAYER BAÞKENTÝ
    SpawnCity(PlayerCivManager, TEXT("Capital"), FIntPoint(30, 30));

    // AI CIV BAÞKENTLERÝ
    for (int32 i = 0; i < AICivManagers.Num(); i++)
    {
        int32 X = 40 + i * 10;
        int32 Y = 30;

        SpawnCity(AICivManagers[i],
            FString::Printf(TEXT("AI Capital %d"), i + 1),
            FIntPoint(X, Y));
    }




    // ======================================================
    // UNIT MANAGER
    // ======================================================
    UnitManager = NewObject<UUnitManager>();
    UnitManager->Init(DBReader);

    // ======================================================
    // ALLOWED UNIT TYPES YÜKLENÝYOR
    // ======================================================
    {
        TArray<FString> PlayerUnits;
        DBReader->GetUnitsForCiv(ActiveCiv.Name, PlayerUnits);
        PlayerCivManager->GetCivilizationData()->AllowedUnitTypes = PlayerUnits;
    }

    for (int32 i = 0; i < AICivs.Num(); i++)
    {
        TArray<FString> AIUnits;
        DBReader->GetUnitsForCiv(AICivs[i].Name, AIUnits);
        AICivManagers[i]->GetCivilizationData()->AllowedUnitTypes = AIUnits;

    }

    // ======================================================
    // UNIT FACTORY
    // ======================================================
    InitUnitFactory();
}


void ACivGameMode::ProcessCityGrowth()
{
    // Grid component'i al
    AHexGridActor* GridActor = Cast<AHexGridActor>(
        UGameplayStatics::GetActorOfClass(GetWorld(), AHexGridActor::StaticClass())
    );

    if (!GridActor || !GridActor->HexGridComponent)
    {
        UE_LOG(LogTemp, Warning, TEXT("ProcessCityGrowth: HexGridComponent bulunamadi."));
        return;
    }

    UHexGridComponent* HexComp = GridActor->HexGridComponent;

    // Tüm civ'ler için (player + AI) þehir growth'u iþle
    for (UCivilizationManager* Civ : AllCivs)
    {
        if (!Civ) continue;

        for (ACity* City : Civ->Cities)
        {
            if (!City) continue;

            City->ProcessTurn(HexComp);
        }
    }
}


void ACivGameMode::EndPlayerTurn()
{
	UE_LOG(LogTemp, Warning, TEXT("ACivGameMode: EndPlayerTurn() cagrildi."));

	// 1. GameState'e Ulaþ ve Turu Ýlerlet
	ACivGameState* const GS = GetGameState<ACivGameState>();
	if (!GS)
	{
		UE_LOG(LogTemp, Error, TEXT("EndPlayerTurn: CivGameState bulunamadi!"));
		return;
	}
	GS->AdvanceTurn(); // örn: 1. Tur  2. Tur

    ProcessCityGrowth(); // þehir büyümesini hesaplýyoruz.

	// 2. YENÝ MANTIK: Sahnede AUnitBase tipindeki TÜM aktörleri bul
	TArray<AActor*> FoundUnits;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AUnitBase::StaticClass(), FoundUnits);

	UE_LOG(LogTemp, Warning, TEXT("C++: Sahnede %d adet birim bulundu, puanlar yenileniyor..."), FoundUnits.Num());

	// 3. Bulunan her birimin puanýný yenile
	for (AActor* UnitActor : FoundUnits)
	{
		AUnitBase* Unit = Cast<AUnitBase>(UnitActor);
		if (Unit)
		{
			Unit->ResetForNewTurn(); // Bizim C++ fonksiyonumuz
		}
	}
}


void ACivGameMode::SaveGameToSlot()
{
    UCivSaveGame* SaveGameInstance = Cast<UCivSaveGame>(
        UGameplayStatics::CreateSaveGameObject(UCivSaveGame::StaticClass())
    );

    if (!SaveGameInstance)
    {
        UE_LOG(LogTemp, Error, TEXT("SaveGameToSlot: SaveGameInstance olusturulamadi!"));
        return;
    }

    // 1) TURN
    ACivGameState* GS = GetGameState<ACivGameState>();
    if (GS)
    {
        SaveGameInstance->SavedTurnNumber = GS->GetCurrentTurn();
    }

    // 2) GRID DATA 
    AHexGridActor* GridActor = Cast<AHexGridActor>(
        UGameplayStatics::GetActorOfClass(GetWorld(), AHexGridActor::StaticClass())
    );

    if (GridActor && GridActor->HexGridComponent)
    {
        UHexGridComponent* HexComp = GridActor->HexGridComponent;

        // Ek güvenlik: grid üzerindeki tüm tile'larýn yield'lerini güncelle
        HexComp->RecalculateAllTileYields();

        // GridData'yý doðrudan savegame'e kopyala
        SaveGameInstance->SavedGridData = HexComp->GridData;
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("SaveGameToSlot: HexGridActor veya HexGridComponent bulunamadi, grid kaydedilemedi."));
    }

    // 3) TÜM BÝRÝMLERÝ KAYDET
    TArray<AActor*> FoundUnits;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), AUnitBase::StaticClass(), FoundUnits);

    for (AActor* Actor : FoundUnits)
    {
        AUnitBase* Unit = Cast<AUnitBase>(Actor);
        if (Unit)
        {
            FUnitSaveData Data;
            Data.WorldLocation = Unit->GetActorLocation();
            Data.GridCoords = Unit->CurrentGridCoords;
            Data.CurrentMovement = Unit->CurrentMovementPoints;
            Data.MaxMovement = Unit->MaxMovementPoints;

            // Class path ? spawn için gerekli
            Data.UnitClassPath = Unit->GetClass()->GetPathName();

            SaveGameInstance->SavedUnits.Add(Data);
        }
    }

    // 4) DOSYAYA YAZ
    if (UGameplayStatics::SaveGameToSlot(SaveGameInstance, TEXT("CivSaveSlot"), 0))
    {
        UE_LOG(LogTemp, Warning, TEXT("SAVE BASARILI."));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("SAVE BASARISIZ!"));
    }
}


void ACivGameMode::LoadGameFromSlot()
{
    USaveGame* Loaded = UGameplayStatics::LoadGameFromSlot(TEXT("CivSaveSlot"), 0);
    UCivSaveGame* SaveGameInstance = Cast<UCivSaveGame>(Loaded);

    if (!SaveGameInstance)
    {
        UE_LOG(LogTemp, Error, TEXT("LOAD BASARISIZ! Save dosyasi yok."));
        return;
    }

    // 1) TURN'I YÜKLE
    ACivGameState* GS = GetGameState<ACivGameState>();
    if (GS)
    {
        GS->SetCurrentTurn(SaveGameInstance->SavedTurnNumber);
    }

    // 2) GRID'I YÜKLE
    AActor* GridActor = UGameplayStatics::GetActorOfClass(GetWorld(),
        StaticLoadClass(UObject::StaticClass(), nullptr, TEXT("/Game/BP_GridLogicNew.BP_GridLogicNew_C"))
    );

    if (GridActor)
    {
        FProperty* Property = GridActor->GetClass()->FindPropertyByName(TEXT("GridData"));
        FArrayProperty* ArrayProp = CastField<FArrayProperty>(Property);

        if (ArrayProp)
        {
            FScriptArrayHelper ArrayHelper(ArrayProp, ArrayProp->ContainerPtrToValuePtr<void>(GridActor));
            ArrayHelper.EmptyValues();

            for (const FHexTileData& Tile : SaveGameInstance->SavedGridData)
            {
                int32 NewIndex = ArrayHelper.AddValue();
                FHexTileData* TilePtr = reinterpret_cast<FHexTileData*>(ArrayHelper.GetRawPtr(NewIndex));
                *TilePtr = Tile;
            }
        }
    }

    // 3) SAHNEDEKÝ TÜM BÝRÝMLERÝ SÝL
    {
        TArray<AActor*> FoundUnits;
        UGameplayStatics::GetAllActorsOfClass(GetWorld(), AUnitBase::StaticClass(), FoundUnits);

        for (AActor* Actor : FoundUnits)
        {
            Actor->Destroy();
        }
    }

    // 4) KAYITLI BÝRÝMLERÝ YENÝDEN SPAWN ET
    for (const FUnitSaveData& SavedUnit : SaveGameInstance->SavedUnits)
    {
        UClass* UnitClass = LoadObject<UClass>(nullptr, *SavedUnit.UnitClassPath);
        if (!UnitClass) continue;

        FActorSpawnParameters Params;
        AUnitBase* NewUnit = GetWorld()->SpawnActor<AUnitBase>(
            UnitClass,
            SavedUnit.WorldLocation,
            FRotator::ZeroRotator,
            Params
        );

        if (NewUnit)
        {
            NewUnit->CurrentGridCoords = SavedUnit.GridCoords;
            NewUnit->MaxMovementPoints = SavedUnit.MaxMovement;
            NewUnit->CurrentMovementPoints = SavedUnit.CurrentMovement;
        }
    }

    UE_LOG(LogTemp, Warning, TEXT("LOAD TAMAMLANDI."));
}


AUnitBase* ACivGameMode::SpawnUnitAtTile(TSubclassOf<AUnitBase> UnitClass, FIntPoint GridCoords)
{
    if (!UnitClass) return nullptr;

    // Grid actorýný bul (BP_HexGrid)
    UClass* GridClass = LoadClass<AActor>(nullptr, TEXT("/Game/BP_HexGrid.BP_HexGrid_C"));
    AActor* GridActor = UGameplayStatics::GetActorOfClass(GetWorld(), GridClass);

    if (!GridActor)
    {
        UE_LOG(LogTemp, Error, TEXT("SpawnUnitAtTile: BP_HexGrid bulunamadý!"));
        return nullptr;
    }

    // HexGridComponent'i al
    UHexGridComponent* HexComp = GridActor->FindComponentByClass<UHexGridComponent>();
    if (!HexComp)
    {
        UE_LOG(LogTemp, Error, TEXT("SpawnUnitAtTile: HexGridComponent bulunamadý!"));
        return nullptr;
    }

    // GridToWorld -> HexGridComponent local space kullanýr
    FVector WorldPos = HexComp->GridToWorld(GridCoords.X, GridCoords.Y);


    // Local -> World offset ekle
    WorldPos += GridActor->GetActorLocation();

    // Z offset (zeminde görünür olsun)
    WorldPos.Z += 50.f;

    // Spawn parameters
    FActorSpawnParameters Params;
    Params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

    // Spawn actor
    AUnitBase* SpawnedUnit = GetWorld()->SpawnActor<AUnitBase>(UnitClass, WorldPos, FRotator::ZeroRotator, Params);

    if (SpawnedUnit)
    {
        SpawnedUnit->CurrentGridCoords = GridCoords;
        UE_LOG(LogTemp, Warning, TEXT("Unit spawn edildi. Koord: X=%d, Y=%d"), GridCoords.X, GridCoords.Y);
    }

    return SpawnedUnit;
}


void ACivGameMode::ClaimTileForCiv(UCivilizationManager* OwnerCiv, const FIntPoint& GridCoords)
{
    if (!OwnerCiv)
        return;

    // 1) Grid actor bul
    TArray<AActor*> Found;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), AHexGridActor::StaticClass(), Found);

    if (Found.Num() == 0)
    {
        UE_LOG(LogTemp, Error, TEXT("ClaimTileForCiv: HexGridActor not found!"));
        return;
    }

    AHexGridActor* GridActor = Cast<AHexGridActor>(Found[0]);
    if (!GridActor)
        return;

    UHexGridComponent* HexComp = GridActor->HexGridComponent;
    if (!HexComp)
        return;

    // 2) Civ index
    int32 CivIndex = AllCivs.IndexOfByKey(OwnerCiv);
    if (CivIndex < 0)
        return;

    // 3) Tile index
    int32 Index = GridCoords.Y * HexComp->GridWidth + GridCoords.X;
    if (!HexComp->GridData.IsValidIndex(Index))
        return;

    // 4) Tile modify
    FHexTileData TileCopy = HexComp->GridData[Index];
    TileCopy.OwnerCivIndex = CivIndex;
    HexComp->GridData[Index] = TileCopy;

    // 5) Civ runtime
    OwnerCiv->AddOwnedTile(GridCoords);
}


void ACivGameMode::CreatePlayerCiv()
{
    PlayerCivManager = NewObject<UCivilizationManager>(this);
    PlayerCivManager->Init(ActivePlayerCiv);

    UE_LOG(LogTemp, Warning, TEXT("Created Player Civilization Manager for %s"), *ActivePlayerCiv.Name);
}


void ACivGameMode::CreateAICivs()
{
    for (int32 i = 0; i < AICivs.Num(); i++)
    {
        UCivilizationManager* NewAI = NewObject<UCivilizationManager>(this);
        NewAI->Init(AICivs[i]);

        AICivManagers.Add(NewAI);
        
        AllCivs.Add(NewAI);

        UE_LOG(LogTemp, Warning, TEXT("Created AI Civilization Manager for: %s"), *AICivs[i].Name);
    }
}


void ACivGameMode::InitUnitFactory()
{
    UnitFactory = NewObject<UUnitFactory>(this);
    UnitFactory->Init(this);

    UE_LOG(LogTemp, Warning, TEXT("UnitFactory initialized"));
}


ACity* ACivGameMode::SpawnCity(UCivilizationManager* OwnerCiv, const FString& CityName, const FIntPoint& GridPos)
{
    if (!OwnerCiv)
        return nullptr;

    UWorld* World = GetWorld();
    if (!World)
        return nullptr;

    // Þehrin world position'ý (þimdilik düz çarpan)
    FVector WorldPos(GridPos.X * 200.f, GridPos.Y * 200.f, 50.f);

    FActorSpawnParameters Params;
    ACity* NewCity = World->SpawnActor<ACity>(
        ACity::StaticClass(),
        WorldPos,
        FRotator::ZeroRotator,
        Params
    );

    if (!NewCity)
        return nullptr;

    // ==============================================================
    // Þehir property’leri
    // ==============================================================
    NewCity->CityName = CityName;
    NewCity->OwnerCivIndex = AllCivs.IndexOfByKey(OwnerCiv);
    NewCity->GridCoords = GridPos;

    // Civ tarafýna ekle
    OwnerCiv->AddCity(NewCity);

    // ==============================================================
    // 1) Þehir merkez tile’ýný cive ver
    // ==============================================================
    ClaimTileForCiv(OwnerCiv, GridPos);

    // ==============================================================
    // 2) GridActor + HexGridComponent al
    // ==============================================================
    AHexGridActor* GridActor = Cast<AHexGridActor>(
        UGameplayStatics::GetActorOfClass(GetWorld(), AHexGridActor::StaticClass())
    );

    UHexGridComponent* HexComp = nullptr;

    if (GridActor)
        HexComp = GridActor->HexGridComponent;

    // ==============================================================
    // 3) Komþu tile’larý cive ver
    // ==============================================================
    if (HexComp)
    {
        TArray<FIntPoint> Neighbors = HexComp->GetNeighbors(GridPos.X, GridPos.Y);
        for (const FIntPoint& N : Neighbors)
        {
            ClaimTileForCiv(OwnerCiv, N);
        }

        // ==============================================================
        // 4) Þehrin WorkedTiles listesini oluþtur
        // ==============================================================
        NewCity->InitializeWorkedTiles(HexComp);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("SpawnCity: HexGridComponent bulunamadý!"));
    }

    return NewCity;
}


FLinearColor ACivGameMode::GetCivColor(int32 CivIndex) const
{
    if (AllCivs.IsValidIndex(CivIndex) && AllCivs[CivIndex] && AllCivs[CivIndex]->CivData)
    {
        return AllCivs[CivIndex]->CivData->CivColor;
    }

    return FLinearColor::White;
}



