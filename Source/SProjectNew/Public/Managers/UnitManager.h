#pragma once

#include "CoreMinimal.h"
#include "Public/UnitData.h"
#include "UnitManager.generated.h"

class UDatabaseReader;

UCLASS()
class SPROJECTNEW_API UUnitManager : public UObject
{
    GENERATED_BODY()

public:

    UPROPERTY(BlueprintReadOnly)
    TMap<FString, FUnitData> AllUnits;

    void Init(UDatabaseReader* DBReader);

    bool GetUnitData(const FString& UnitType, FUnitData& OutData) const;
};
