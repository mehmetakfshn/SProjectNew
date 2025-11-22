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

void AMapEditorPlayerController::OnLeftMouseClick()
{
    FHitResult Hit;
    if (!GetHitResultUnderCursor(ECC_Visibility, false, Hit))
    {
        UE_LOG(LogTemp, Warning, TEXT("MapEditor: Mouse hit hiçbir þeye çarpmadý."));
        return;
    }

    // Dünya -> Grid aktörünü bul (C++ AHexGridActor)
    AHexGridActor* GridActor = Cast<AHexGridActor>(
        UGameplayStatics::GetActorOfClass(GetWorld(), AHexGridActor::StaticClass())
    );

    if (!GridActor)
    {
        UE_LOG(LogTemp, Error, TEXT("MapEditor: AHexGridActor sahnede bulunamadi!"));
        return;
    }

    UHexGridComponent* HexComp = GridActor->FindComponentByClass<UHexGridComponent>();
    if (!HexComp)
    {
        UE_LOG(LogTemp, Error, TEXT("MapEditor: HexGridComponent bulunamadi!"));
        return;
    }

    // Dünya -> local -> grid koordinatý
    FVector LocalPos = Hit.Location - GridActor->GetActorLocation();
    FIntPoint GridCoords = HexComp->WorldToGrid(LocalPos);

    if (!HexComp->IsValidCoords(GridCoords.X, GridCoords.Y))
    {
        UE_LOG(LogTemp, Warning, TEXT("MapEditor: Tiklanan yer grid disinda (%d,%d)."),
            GridCoords.X, GridCoords.Y);
        return;
    }

    if (bRiverMode)
    {
        // Þimdilik sabit NE kenarýna nehir
        HexComp->SetRiverAtEdge(GridCoords.X, GridCoords.Y, ERiverEdge::NE, true);
        HexComp->RequestRebuildVisual();
    }
    else
    {
        HexComp->SetTileTypeAt(GridCoords.X, GridCoords.Y, CurrentPaintTileType);
    }
}


void AMapEditorPlayerController::OnRightMouseClick()
{
    FHitResult Hit;
    if (!GetHitResultUnderCursor(ECC_Visibility, false, Hit))
    {
        UE_LOG(LogTemp, Warning, TEXT("MapEditor: Mouse hit hiçbir þeye çarpmadý (RightClick)."));
        return;
    }

    AHexGridActor* GridActor = Cast<AHexGridActor>(
        UGameplayStatics::GetActorOfClass(GetWorld(), AHexGridActor::StaticClass())
    );

    if (!GridActor)
    {
        UE_LOG(LogTemp, Error, TEXT("MapEditor: AHexGridActor sahnede bulunamadi! (RightClick)"));
        return;
    }

    UHexGridComponent* HexComp = GridActor->FindComponentByClass<UHexGridComponent>();
    if (!HexComp)
    {
        UE_LOG(LogTemp, Error, TEXT("MapEditor: HexGridComponent bulunamadi! (RightClick)"));
        return;
    }

    FVector LocalPos = Hit.Location - GridActor->GetActorLocation();
    FIntPoint GridCoords = HexComp->WorldToGrid(LocalPos);

    if (!HexComp->IsValidCoords(GridCoords.X, GridCoords.Y))
    {
        return;
    }

    HexComp->AddTileHeightLevel(GridCoords.X, GridCoords.Y, CurrentHeightDelta);
    HexComp->RequestRebuildVisual();
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



