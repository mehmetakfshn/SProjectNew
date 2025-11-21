#pragma once

#include "HexEnums.h"
#include "CoreMinimal.h"
#include "Math/IntPoint.h"
#include "UObject/NoExportTypes.h"
#include "HexTileData.generated.h"



UENUM(BlueprintType)
enum class ETileType : uint8
{
    TT_Grass    UMETA(DisplayName = "Grass"),
    TT_Desert   UMETA(DisplayName = "Desert"),
    TT_Plains   UMETA(DisplayName = "Plains"),
    TT_Tundra   UMETA(DisplayName = "Tundra"),
    TT_Snow     UMETA(DisplayName = "Snow"),
    TT_Mountain UMETA(DisplayName = "Mountain"),
    TT_Water    UMETA(DisplayName = "Water")
};

USTRUCT(BlueprintType)
struct FHexTileData
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FIntPoint Coordinates = FIntPoint(0, 0);

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    ETileType TileType = ETileType::TT_Grass;

    // Heightmapten gelen normalize yükseklik [0..1]
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float Height01 = 0.0f;

    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 HeightLevel = 0;

    // world pos plus Z offset bu structta dursun
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector WorldPosition = FVector::ZeroVector;

    // Pathfinding cost vs.
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 Cost = 1;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bIsCoast = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bIsLake = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bIsOcean = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bIsHill = false;

    // Bu tilenin cliff olup olmadýðý
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bHasCliff = false;

    // Hangi kenarlarda cliff var? 6 uzunluklu bool dizi
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<bool> CliffEdges;

    UPROPERTY()
    TArray<bool> RiverEdges;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    TArray<bool> CoastEdges;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FLinearColor BiomeColor = FLinearColor::White;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 OwnerCivIndex = -1;  // -1 = boþ, 0+ = civ index

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bHasCity = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString CityName;




    FHexTileData() {}
};
