#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "City.generated.h"

UCLASS()
class SPROJECTNEW_API ACity : public AActor
{
    GENERATED_BODY()

public:
    ACity();

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString CityName;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 OwnerCivIndex;

    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FIntPoint GridCoords;
};
