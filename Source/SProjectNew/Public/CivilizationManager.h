
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Database/DatabaseReader.h"
#include "CivilizationManager.generated.h"

class UCivilizationData;

UCLASS(BlueprintType)
class SPROJECTNEW_API UCivilizationManager : public UObject
{
    GENERATED_BODY()

public:

    UPROPERTY(BlueprintReadOnly)
    UCivilizationData* CivData = nullptr;

    // Civ'i ham FCivInfo'dan kur
    UFUNCTION(BlueprintCallable)
    void Init(const FCivInfo& SelectedCiv);

    // Bu civ bu unit tipini üretebilir mi?
    UFUNCTION(BlueprintCallable)
    bool CanProduceUnit(const FString& UnitType) const;

    // Dýþarýya data eriþimi için getter
    UFUNCTION(BlueprintCallable)
    UCivilizationData* GetCivilizationData() const;

    UFUNCTION(BlueprintCallable)
    void AddOwnedTile(const FIntPoint& Tile);

    UFUNCTION(BlueprintCallable)
    bool OwnsTile(const FIntPoint& Tile) const;

    UFUNCTION(BlueprintCallable)
    void AddUnit(AUnitBase* Unit);

    class ACity;

    UPROPERTY(BlueprintReadOnly)
    TArray<ACity*> Cities;
    
    void AddCity(ACity* City);

};
