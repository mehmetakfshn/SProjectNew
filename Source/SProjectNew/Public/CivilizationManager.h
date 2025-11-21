#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Database/DatabaseReader.h"
#include "CivilizationManager.generated.h"


class UCivilizationData;
class AUnitBase;
class ACity;

UCLASS(BlueprintType)
class SPROJECTNEW_API UCivilizationManager : public UObject
{
    GENERATED_BODY()

public:

    // CIV DATA
    UPROPERTY(BlueprintReadOnly)
    UCivilizationData* CivData = nullptr;

    // === RUNTIME STATE ===

    UPROPERTY(BlueprintReadWrite)
    int32 Gold = 0;

    UPROPERTY(BlueprintReadWrite)
    int32 Science = 0;

    UPROPERTY(BlueprintReadWrite)
    int32 Culture = 0;

    UPROPERTY(BlueprintReadOnly)
    TSet<FIntPoint> OwnedTiles;

    UPROPERTY(BlueprintReadOnly)
    TArray<AUnitBase*> Units;

    UPROPERTY(BlueprintReadOnly)
    TArray<ACity*> Cities;

public:

    UFUNCTION(BlueprintCallable)
    void Init(const FCivInfo& SelectedCiv);

    UFUNCTION(BlueprintCallable)
    bool CanProduceUnit(const FString& UnitType) const;

    UFUNCTION(BlueprintCallable)
    UCivilizationData* GetCivilizationData() const;

    UFUNCTION(BlueprintCallable)
    void AddOwnedTile(const FIntPoint& Tile);

    UFUNCTION(BlueprintCallable)
    bool OwnsTile(const FIntPoint& Tile) const;

    UFUNCTION(BlueprintCallable)
    void AddUnit(AUnitBase* Unit);

    UFUNCTION(BlueprintCallable)
    void AddCity(ACity* City);
};
