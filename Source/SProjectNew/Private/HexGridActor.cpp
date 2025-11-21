#include "Public/HexGridActor.h"
#include "Public/HexGridVisualActor.h"
#include "Kismet/GameplayStatics.h"

AHexGridActor::AHexGridActor()
{
    PrimaryActorTick.bCanEverTick = false;

    // Root
    USceneComponent* Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    RootComponent = Root;

    // Hex grid logic component
    HexGridComponent = CreateDefaultSubobject<UHexGridComponent>(TEXT("HexGridComponent"));
}

void AHexGridActor::BeginPlay()
{
    Super::BeginPlay();

    // Parametreleri component'e aktar
    HexGridComponent->GridWidth = GridWidth;
    HexGridComponent->GridHeight = GridHeight;
    HexGridComponent->TileScale = TileScale;

    // TileScale dâhil tüm parametrelerle grid verisini üret
    HexGridComponent->GenerateGrid();

    UE_LOG(LogTemp, Warning,
        TEXT("AHexGridActor: Grid generated with %d tiles"),
        HexGridComponent->GridData.Num());

    // Visual actor bul
    AHexGridVisualActor* Visual = Cast<AHexGridVisualActor>(
        UGameplayStatics::GetActorOfClass(GetWorld(), AHexGridVisualActor::StaticClass())
    );

    if (!Visual)
    {
        UE_LOG(LogTemp, Error, TEXT("AHexGridActor: Could not find AHexGridVisualActor!"));
        return;
    }

    Visual->SetTileScale(TileScale);
    Visual->BuildFromGridData(HexGridComponent->GridData);
}

void AHexGridActor::RebuildVisual()
{
    if (!HexGridComponent)
    {
        UE_LOG(LogTemp, Error, TEXT("RebuildVisual: HexGridComponent yok!"));
        return;
    }

    AHexGridVisualActor* Visual = Cast<AHexGridVisualActor>(
        UGameplayStatics::GetActorOfClass(GetWorld(), AHexGridVisualActor::StaticClass())
    );

    if (!Visual)
    {
        UE_LOG(LogTemp, Error, TEXT("RebuildVisual: AHexGridVisualActor sahnede bulunamadi!"));
        return;
    }

    Visual->SetTileScale(TileScale);
    Visual->BuildFromGridData(HexGridComponent->GridData);
}

