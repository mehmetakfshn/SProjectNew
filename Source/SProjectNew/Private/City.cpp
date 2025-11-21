#include "Public/City.h"
#include "Math/UnrealMathUtility.h"

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

void ACity::ProcessTurn(UHexGridComponent* GridComp)
{
    if (!GridComp)
    {
        return;
    }

    // 1) Bu turn þehir toplam yield'ini hesapla
    int32 YieldFood = 0;
    int32 YieldProduction = 0;
    int32 YieldGold = 0;
    GetTotalYield(GridComp, YieldFood, YieldProduction, YieldGold);

    // 2) Þimdilik sadece Food'u growth için kullanýyoruz
    //    (Production ve Gold'u Faz 6'da kullanacaðýz)
    const int32 FoodPerPop = 2; // Kiþi baþý tüketim
    const int32 FoodConsumed = Population * FoodPerPop;
    const int32 NetFood = YieldFood - FoodConsumed;

    if (NetFood >= 0)
    {
        FoodStored += static_cast<float>(NetFood);
    }
    else
    {
        // Açlýk: FoodStored azalýr ama 0'ýn altýna inmesin
        FoodStored = FMath::Max(0.0f, FoodStored + static_cast<float>(NetFood));
    }

    // 3) Yeterince food biriktirdiysek nüfus artýþý
    while (FoodStored >= FoodNeededForNextPop)
    {
        FoodStored -= FoodNeededForNextPop;
        Population++;

        // Basit bir artan maliyet fonksiyonu
        FoodNeededForNextPop = 20.0f + Population * 10.0f;
    }
}

float ACity::GetGrowthProgress() const
{
    if (FoodNeededForNextPop <= 0.0f)
    {
        return 0.0f;
    }

    return FoodStored / FoodNeededForNextPop;
}