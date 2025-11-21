#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Public/HexGridComponent.h"
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

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "City")
    TArray<FIntPoint> WorkedTiles;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTotalYield(UHexGridComponent* GridComp, int32& OutFood, int32& OutProduction, int32& OutGold) const;

    void InitializeWorkedTiles(class UHexGridComponent* GridComp);



};
