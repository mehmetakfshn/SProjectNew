#pragma once
#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class ERiverEdge : uint8
{
    NE = 0 UMETA(DisplayName = "NorthEast"),
    E = 1 UMETA(DisplayName = "East"),
    SE = 2 UMETA(DisplayName = "SouthEast"),
    SW = 3 UMETA(DisplayName = "SouthWest"),
    W = 4 UMETA(DisplayName = "West"),
    NW = 5 UMETA(DisplayName = "NorthWest")
};
