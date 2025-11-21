// CivilizationData.h

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Database/DatabaseReader.h"   // FCivInfo burada tanýmlýysa
#include "CivilizationData.generated.h"

UCLASS(BlueprintType)
class SPROJECTNEW_API UCivilizationData : public UObject
{
    GENERATED_BODY()

public:

    // SQL'den gelen ham civ bilgisi
    UPROPERTY(BlueprintReadOnly)
    FCivInfo BaseInfo;

    // Ana ve ikincil renk (UI için)
    UPROPERTY(BlueprintReadOnly)
    FLinearColor CivColor;

    UPROPERTY(BlueprintReadOnly)
    FLinearColor CivSecondaryColor;

    // Ýleride dolduracaðýmýz alanlar (þimdilik boþ kalsýn)
    UPROPERTY(BlueprintReadOnly)
    FString CapitalName;

    UPROPERTY(BlueprintReadOnly)
    TArray<FString> CityNames;

    // Bu civin üretebileceði unit türleri (CivUnits tablosundan)
    UPROPERTY(BlueprintReadOnly)
    TArray<FString> AllowedUnitTypes;
};
