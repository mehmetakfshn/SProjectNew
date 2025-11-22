#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h" 
#include "CivilizationData.generated.h"

// Forward Declaration
class UTexture2D;

/**
 * Medeniyet verilerini tutan ana yapý.
 */
USTRUCT(BlueprintType)
struct SPROJECTNEW_API FCivInfo : public FTableRowBase
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    int32 ID = -1;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Name;   // Örn: "Republic of Turkey"

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Leader; // Örn: "Mustafa Kemal Ataturk"

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString Description;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString ColorPrimary;   // Hex Kodu (String olarak: "#FF0000")

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString ColorSecondary; // Hex Kodu

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FString StartingTech;

    // --- GÖRSEL ÖÐELER (YENÝ) ---

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UTexture2D* FlagIcon;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    UTexture2D* LeaderPortrait;

    // Ýþlenmiþ Renk (UI'da direkt kullanmak için)
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FLinearColor PrimaryColor = FLinearColor::White;
};

/**
 * Oyun içinde aktif olarak kullanýlan Runtime Objesi
 */
UCLASS(BlueprintType)
class SPROJECTNEW_API UCivilizationData : public UObject
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintReadOnly)
    FCivInfo BaseInfo;

    // Ana Renk (FLinearColor hali)
    UPROPERTY(BlueprintReadOnly)
    FLinearColor CivColor;

    // Ýkincil Renk
    UPROPERTY(BlueprintReadOnly)
    FLinearColor CivSecondaryColor;

    UPROPERTY(BlueprintReadOnly)
    TArray<FString> CityNames;

    // CivGameMode.cpp bunu kullanýyor
    UPROPERTY(BlueprintReadOnly)
    TArray<FString> AllowedUnitTypes;
};