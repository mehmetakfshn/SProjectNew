#include "Public/City.h"

ACity::ACity()
{
    PrimaryActorTick.bCanEverTick = false;
}

void ACity::InitializeWorkedTiles(UHexGridComponent* GridComp)
{
    WorkedTiles.Empty();

    // Merkez tile
    WorkedTiles.Add(GridCoords);

    // Komþu tile'larý al (return value!)
    TArray<FIntPoint> Neighbors = GridComp->GetNeighbors(GridCoords.X, GridCoords.Y);

    for (const FIntPoint& N : Neighbors)
    {
        WorkedTiles.Add(N);
    }
}


void ACity::GetTotalYield(UHexGridComponent* GridComp, int32& OutFood, int32& OutProduction, int32& OutGold) const
{
    OutFood = 0;
    OutProduction = 0;
    OutGold = 0;

    if (!GridComp) return;

    for (const FIntPoint& Coords : WorkedTiles)
    {
        int32 F = 0, P = 0, G = 0;
        GridComp->GetTileYieldAt(Coords.X, Coords.Y, F, P, G);

        OutFood += F;
        OutProduction += P;
        OutGold += G;
    }
}
