#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UnitFactory.generated.h"

class AUnitBase;
class ACivGameMode;
class UCivilizationManager;

UCLASS()
class SPROJECTNEW_API UUnitFactory : public UObject
{
    GENERATED_BODY()

public:

    void Init(ACivGameMode* InGameMode);

    AUnitBase* CreateUnit(
        UCivilizationManager* OwnerCiv,
        const FString& UnitType,
        const FIntPoint& GridPos
    );

private:

    UPROPERTY()
    ACivGameMode* GameMode;
};
