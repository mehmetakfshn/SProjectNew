#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "Public/HexTileData.h"
#include "CivSaveGame.generated.h"

// Tek bir birimin kaydedilmesi için küçük struct
USTRUCT(BlueprintType)
struct FUnitSaveData
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite)
    FString UnitClassPath;

    UPROPERTY(BlueprintReadWrite)
    FVector WorldLocation;

    UPROPERTY(BlueprintReadWrite)
    FIntPoint GridCoords;

    UPROPERTY(BlueprintReadWrite)
    int32 CurrentMovement;

    UPROPERTY(BlueprintReadWrite)
    int32 MaxMovement;

    FUnitSaveData()
    {
        UnitClassPath = "";
        WorldLocation = FVector::ZeroVector;
        GridCoords = FIntPoint(-1, -1);
        CurrentMovement = 0;
        MaxMovement = 0;
    }
};

UCLASS()
class SPROJECTNEW_API UCivSaveGame : public USaveGame
{
    GENERATED_BODY()

public:

    // --- GENEL OYUN VERÝLERÝ ---
    UPROPERTY(BlueprintReadWrite)
    int32 SavedTurnNumber;

    // --- HARÝTA VERÝLERÝ ---
    UPROPERTY(BlueprintReadWrite)
    TArray<FHexTileData> SavedGridData;

    // --- TÜM BÝRÝMLER ---
    UPROPERTY(BlueprintReadWrite)
    TArray<FUnitSaveData> SavedUnits;

    UCivSaveGame()
    {
        SavedTurnNumber = 1;
    }
};
