#include "UnitFactory.h"
#include "CivGameMode.h"
#include "CivilizationManager.h"
#include "Public/Managers/UnitManager.h"
#include "UnitBase.h"
#include "HexGridComponent.h"
#include "Public/CivilizationManager.h"
#include "Public/CivilizationData.h" 


void UUnitFactory::Init(ACivGameMode* InGameMode)
{
    GameMode = InGameMode;
}

AUnitBase* UUnitFactory::CreateUnit(
    UCivilizationManager* OwnerCiv,
    const FString& UnitType,
    const FIntPoint& GridPos)
{
    if (!GameMode || !GameMode->UnitManager)
    {
        UE_LOG(LogTemp, Error, TEXT("[UnitFactory] GameMode or UnitManager NULL!"));
        return nullptr;
    }

    if (!OwnerCiv)
    {
        UE_LOG(LogTemp, Error, TEXT("[UnitFactory] OwnerCiv is NULL!"));
        return nullptr;
    }

    // 1) Unit verisini SQL’den çek
    FUnitData Data;
    if (!GameMode->UnitManager->GetUnitData(UnitType, Data))
    {
        UE_LOG(LogTemp, Error, TEXT("[UnitFactory] UnitType NOT FOUND: %s"), *UnitType);
        return nullptr;
    }

    // 2) World koordinatý hesapla
    FVector SpawnLocation(GridPos.X * 200.f, GridPos.Y * 200.f, 0.f);

    // 3) Dünyaya bir unit spawn et
    AUnitBase* NewUnit = GameMode->GetWorld()->SpawnActor<AUnitBase>(
        GameMode->UnitBlueprintClass,      // Blueprint Class (senin sistemin)
        SpawnLocation,
        FRotator::ZeroRotator
    );

    if (!NewUnit)
    {
        return nullptr;
    }

    // 4) Unit’e civ verisi
    NewUnit->InitUnit(OwnerCiv, Data, GridPos);

    // ======================================================
    // 5) YENÝ: CivilizationManager’a bu unit'i ekle
    // ======================================================
    OwnerCiv->AddUnit(NewUnit);

    // Eðer UnitBase içinde OwnerCiv deðiþkeni varsa:
    // NewUnit->OwnerCiv = OwnerCiv;

    // 6) Log
    UE_LOG(LogTemp, Warning, TEXT("[UnitFactory] Spawned %s for %s at %d,%d"),
        *UnitType,
        *OwnerCiv->GetCivilizationData()->BaseInfo.Name,
        GridPos.X, GridPos.Y);

    return NewUnit;
}

