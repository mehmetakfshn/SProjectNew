#pragma once

#include "CoreMinimal.h"
#include "UnitData.generated.h"

USTRUCT(BlueprintType)
struct FUnitData
{
    GENERATED_BODY()

public:

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FString Type;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FString DisplayName;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FString Description;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    int32 CombatStrength = 0;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    int32 RangedStrength = 0;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    int32 Movement = 0;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    int32 Cost = 0;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FString RequiredTech;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FString RequiredResource;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FString MeshPath;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FString IconPath;
};
