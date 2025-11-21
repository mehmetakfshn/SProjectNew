#include "MapEditorGameMode.h"
#include "Public/HexGridActor.h"
#include "Public/HexGridComponent.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"

AMapEditorGameMode::AMapEditorGameMode()
{
    // Gerekirse buraya varsayýlan Pawn, vs. atanabilir.
}

void AMapEditorGameMode::BeginPlay()
{
    Super::BeginPlay();

    UE_LOG(LogTemp, Warning, TEXT("MapEditorGameMode::BeginPlay çalýþtý!"));

    // 1) Grid aktörünü bul (BP_HexGrid sahnede olmalý)
    GridActor = Cast<AHexGridActor>(
        UGameplayStatics::GetActorOfClass(GetWorld(), AHexGridActor::StaticClass())
    );

    if (!GridActor)
    {
        UE_LOG(LogTemp, Error, TEXT("MapEditorGameMode: AHexGridActor sahnede bulunamadi!"));
    }
    else
    {
        UHexGridComponent* HexComp = GridActor->FindComponentByClass<UHexGridComponent>();
        if (!HexComp)
        {
            UE_LOG(LogTemp, Error, TEXT("MapEditorGameMode: HexGridComponent bulunamadi!"));
        }
        else
        {
            // EDITOR: her zaman sabit 120x96 grid oluþtur.
            HexComp->InitializeEditorGrid();
            HexComp->RequestRebuildVisual();
        }
    }

    // 2) Editor HUD widget'ýný aç
    if (MapEditorWidgetClass)
    {
        MapEditorWidget = CreateWidget<UUserWidget>(GetWorld(), MapEditorWidgetClass);
        if (MapEditorWidget)
        {
            MapEditorWidget->AddToViewport();
        }
    }
}

void AMapEditorGameMode::SaveCurrentMap()
{
    if (!GridActor)
    {
        UE_LOG(LogTemp, Error, TEXT("SaveCurrentMap: GridActor yok!"));
        return;
    }

    UHexGridComponent* HexComp = GridActor->FindComponentByClass<UHexGridComponent>();
    if (!HexComp)
    {
        UE_LOG(LogTemp, Error, TEXT("SaveCurrentMap: HexGridComponent yok!"));
        return;
    }

    if (HexComp->SaveGridToDatabase())
    {
        UE_LOG(LogTemp, Log, TEXT("MapEditorGameMode: Harita GameData.db icine kaydedildi."));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("MapEditorGameMode: SaveGridToDatabase FAILED!"));
    }
}
