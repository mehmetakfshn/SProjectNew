#include "Public/MapEditorPlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "sqlite3.h"
#include "Misc/Paths.h"
#include "HAL/PlatformFilemanager.h"
#include "Public/HexGridComponent.h"
#include "Public/HexGridActor.h"

AMapEditorPlayerController::AMapEditorPlayerController()
{
    bShowMouseCursor = true;
    bEnableClickEvents = true;
    bEnableMouseOverEvents = true;

    CurrentPaintTileType = ETileType::TT_Grass;
    CurrentHeightDelta = 1;
    bRiverMode = false;
}

void AMapEditorPlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();

    check(InputComponent);

    // Project Settings > Input > Action Mappings:
    // MapEditor_LeftClick -> Mouse Left
    // MapEditor_RightClick -> Mouse Right
    InputComponent->BindAction("MapEditor_LeftClick", IE_Pressed, this, &AMapEditorPlayerController::OnLeftMouseClick);
    InputComponent->BindAction("MapEditor_RightClick", IE_Pressed, this, &AMapEditorPlayerController::OnRightMouseClick);
}

void AMapEditorPlayerController::SetCurrentTileType(ETileType NewType)
{
    CurrentPaintTileType = NewType;
}

void AMapEditorPlayerController::SetCurrentHeightDelta(int32 NewDelta)
{
    CurrentHeightDelta = NewDelta;
}

void AMapEditorPlayerController::SetRiverDrawMode(bool bEnable)
{
    bRiverMode = bEnable;
}


void AMapEditorPlayerController::SetBrushSize(int32 NewSize)
{
    BrushSize = FMath::Max(1, NewSize);
    UE_LOG(LogTemp, Warning, TEXT("Brush Size: %d"), BrushSize);
}


void AMapEditorPlayerController::OnLeftMouseClick()
{
    FHitResult Hit;
    if (!GetHitResultUnderCursor(ECC_Visibility, false, Hit)) return;

    AHexGridActor* GridActor = Cast<AHexGridActor>(UGameplayStatics::GetActorOfClass(GetWorld(), AHexGridActor::StaticClass()));
    if (!GridActor) return;

    UHexGridComponent* HexComp = GridActor->FindComponentByClass<UHexGridComponent>();
    if (!HexComp) return;

    FVector LocalPos = Hit.Location - GridActor->GetActorLocation();
    FIntPoint CenterCoords = HexComp->WorldToGrid(LocalPos);

    if (!HexComp->IsValidCoords(CenterCoords.X, CenterCoords.Y)) return;

    // --- NEHÝR MODU (Þimdilik Tekli) ---
    if (bRiverMode)
    {
        // Nehirler kenar (Edge) bazlý olduðu için fýrça mantýðý zordur, tekli býrakýyoruz.
        HexComp->SetRiverAtEdge(CenterCoords.X, CenterCoords.Y, ERiverEdge::NE, true);
        HexComp->RequestRebuildVisual(); // Nehir için rebuild þart
    }
    // --- FIRÇA ÝLE ZEMÝN BOYAMA ---
    else
    {
        // 1. Etkilenen kareleri bul
        TArray<FIntPoint> TilesToPaint = HexComp->GetTilesInRadius(CenterCoords.X, CenterCoords.Y, BrushSize);

        // 2. Hepsini boya (Hýzlý güncelleme sayesinde kasmaz)
        for (const FIntPoint& P : TilesToPaint)
        {
            HexComp->SetTileTypeAt(P.X, P.Y, CurrentPaintTileType);
        }
    }
}


void AMapEditorPlayerController::OnRightMouseClick()
{
    FHitResult Hit;
    if (!GetHitResultUnderCursor(ECC_Visibility, false, Hit)) return;

    AHexGridActor* GridActor = Cast<AHexGridActor>(UGameplayStatics::GetActorOfClass(GetWorld(), AHexGridActor::StaticClass()));
    if (!GridActor) return;

    UHexGridComponent* HexComp = GridActor->FindComponentByClass<UHexGridComponent>();
    if (!HexComp) return;

    FVector LocalPos = Hit.Location - GridActor->GetActorLocation();
    FIntPoint CenterCoords = HexComp->WorldToGrid(LocalPos);

    if (!HexComp->IsValidCoords(CenterCoords.X, CenterCoords.Y)) return;

    // --- FIRÇA ÝLE YÜKSEKLÝK AYARI ---
    TArray<FIntPoint> TilesToPaint = HexComp->GetTilesInRadius(CenterCoords.X, CenterCoords.Y, BrushSize);

    for (const FIntPoint& P : TilesToPaint)
    {
        HexComp->AddTileHeightLevel(P.X, P.Y, CurrentHeightDelta);
    }
}

void AMapEditorPlayerController::SaveMapWithName(const FString& MapName)
{
    UE_LOG(LogTemp, Warning, TEXT("MapEditor: SaveMapWithName called (%s)"), *MapName);

    AHexGridActor* GridActor = Cast<AHexGridActor>(
        UGameplayStatics::GetActorOfClass(GetWorld(), AHexGridActor::StaticClass())
    );

    if (!GridActor)
    {
        UE_LOG(LogTemp, Error, TEXT("MapEditor: SaveMap FAILED -> GridActor not found"));
        return;
    }

    UHexGridComponent* HexComp = GridActor->FindComponentByClass<UHexGridComponent>();

    if (!HexComp)
    {
        UE_LOG(LogTemp, Error, TEXT("MapEditor: SaveMap FAILED -> HexGridComponent not found"));
        return;
    }

    bool bSuccess = HexComp->SaveGridToDatabaseWithName(MapName);

    if (bSuccess)
    {
        UE_LOG(LogTemp, Warning, TEXT("MapEditor: SaveMap successful (%s)"), *MapName);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("MapEditor: SaveMap FAILED (%s)"), *MapName);
    }
}

TArray<FString> AMapEditorPlayerController::GetSavedMapList() const
{
    TArray<FString> Maps;

    FString DBPath = FPaths::ProjectContentDir() / TEXT("Data/GameData.db");
    sqlite3* DB = nullptr;

    if (sqlite3_open(TCHAR_TO_UTF8(*DBPath), &DB) != SQLITE_OK)
        return Maps;

    const char* Query = "SELECT DISTINCT MapName FROM Tiles;";
    sqlite3_stmt* Stmt = nullptr;

    if (sqlite3_prepare_v2(DB, Query, -1, &Stmt, nullptr) != SQLITE_OK)
        return Maps;

    while (sqlite3_step(Stmt) == SQLITE_ROW)
    {
        const char* NameCStr = (const char*)sqlite3_column_text(Stmt, 0);
        if (NameCStr)
            Maps.Add(UTF8_TO_TCHAR(NameCStr));
    }

    sqlite3_finalize(Stmt);
    sqlite3_close(DB);

    return Maps;
}

void AMapEditorPlayerController::LoadMap(const FString& MapName)
{
    // Grid actor'u bul
    AHexGridActor* GridActor = Cast<AHexGridActor>(
        UGameplayStatics::GetActorOfClass(GetWorld(), AHexGridActor::StaticClass())
    );

    if (!GridActor)
    {
        UE_LOG(LogTemp, Error, TEXT("MapEditor: LoadMap FAILED GridActor not found"));
        return;
    }

    // Grid component'i al
    UHexGridComponent* HexComp = GridActor->FindComponentByClass<UHexGridComponent>();
    if (!HexComp)
    {
        UE_LOG(LogTemp, Error, TEXT("MapEditor: LoadMap FAILED HexGridComponent not found"));
        return;
    }

    // DB'den yükle
    bool bOK = HexComp->LoadGridFromDatabaseWithName(MapName);

    if (bOK)
    {
        UE_LOG(LogTemp, Warning, TEXT("MapEditor: Loaded map '%s' successfully"), *MapName);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("MapEditor: Load map FAILED for '%s'"), *MapName);
    }
}



