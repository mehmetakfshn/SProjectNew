#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Database/DatabaseReader.h"       // FCivInfo struct için
#include "CivGameInstance.generated.h"

UCLASS()
class SPROJECTNEW_API UCivGameInstance : public UGameInstance
{
    GENERATED_BODY()

public:

    // Kullanýcýnýn seçtiði Civilization bilgisi
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FCivInfo SelectedCiv;

    // Seçilen AI Civilization'lar
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    TArray<FCivInfo> SelectedAICivs;

    // Kolaylýk olsun diye AI sayýsýný da tutalým (SelectedAICivs.Num() ile uyumlu olacak)
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    int32 NumAICivs = 0;

    UPROPERTY(BlueprintReadWrite, Category = "Game Setup")
    FString MapToLoad;
};
