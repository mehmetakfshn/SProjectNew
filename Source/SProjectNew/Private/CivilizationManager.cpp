// CivilizationManager.cpp

#include "CivilizationManager.h"
#include "CivilizationData.h"
#include "Database/DatabaseReader.h"
#include "Engine/Engine.h"
#include "Public/City.h"

namespace
{
    // #RRGGBBAA veya RRGGBB, baþtaki '#' opsiyonel
    bool ParseHexColor(const FString& HexString, FLinearColor& OutColor)
    {
        if (HexString.IsEmpty())
        {
            return false;
        }

        // UE'nin kendi helper'ý
        FColor SRGB = FColor::FromHex(HexString);
        OutColor = FLinearColor(SRGB);
        return true;
    }
}

void UCivilizationManager::Init(const FCivInfo& SelectedCiv)
{
    CivData = NewObject<UCivilizationData>(this);
    if (!CivData)
    {
        UE_LOG(LogTemp, Error, TEXT("CivilizationManager::Init - CivData olusturulamadi!"));
        return;
    }

    // SQL'den gelen ham bilgiyi kopyala
    CivData->BaseInfo = SelectedCiv;

    // Renkleri parse et
    FLinearColor PrimaryColor;
    FLinearColor SecondaryColor;

    if (!ParseHexColor(SelectedCiv.ColorPrimary, PrimaryColor))
    {
        UE_LOG(LogTemp, Warning,
            TEXT("Civ %s icin ColorPrimary parse edilemedi: '%s'"),
            *SelectedCiv.Name, *SelectedCiv.ColorPrimary);
        PrimaryColor = FLinearColor::Red;
    }

    if (!ParseHexColor(SelectedCiv.ColorSecondary, SecondaryColor))
    {
        UE_LOG(LogTemp, Warning,
            TEXT("Civ %s icin ColorSecondary parse edilemedi: '%s'"),
            *SelectedCiv.Name, *SelectedCiv.ColorSecondary);
        SecondaryColor = FLinearColor::Black;
    }

    CivData->CivColor = PrimaryColor;
    CivData->CivSecondaryColor = SecondaryColor;

    UE_LOG(LogTemp, Log, TEXT("CivManager Initialized: %s (Leader: %s)"),
        *SelectedCiv.Name, *SelectedCiv.Leader);
}

bool UCivilizationManager::CanProduceUnit(const FString& UnitType) const
{
    if (!CivData)
    {
        return false;
    }

    return CivData->AllowedUnitTypes.Contains(UnitType);
}

UCivilizationData* UCivilizationManager::GetCivilizationData() const
{
    return CivData;
}

void UCivilizationManager::AddOwnedTile(const FIntPoint& Tile)
{
    OwnedTiles.Add(Tile);
}

bool UCivilizationManager::OwnsTile(const FIntPoint& Tile) const
{
    return OwnedTiles.Contains(Tile);
}

void UCivilizationManager::AddUnit(AUnitBase* Unit)
{
    if (Unit)
    {
        Units.Add(Unit);
    }
}

void UCivilizationManager::AddCity(ACity* City)
{
    if (City)
    {
        Cities.Add(City);
    }
}