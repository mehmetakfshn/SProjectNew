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

    // ============================
    //  POPULATION & GROWTH
    // ============================
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "City|Population")
    int32 Population = 1;

    // Þehirde biriken food (growth bar)
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "City|Population")
    float FoodStored = 0.0f;

    // Bir sonraki nüfus artýþý için gereken food
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "City|Population")
    float FoodNeededForNextPop = 20.0f;

    // ============================
    //  YIELD & GROWTH FONKSÝYONLARI
    // ============================

    // Bu þehrin worked tile'larýndan ürettiði toplam yield
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTotalYield(UHexGridComponent* GridComp, int32& OutFood, int32& OutProduction, int32& OutGold) const;

    // City center + komþu 6 tile => WorkedTiles
    void InitializeWorkedTiles(class UHexGridComponent* GridComp);

    // Her turn sonunda þehir büyümesini hesaplar
    UFUNCTION(BlueprintCallable, Category = "City|Population")
    void ProcessTurn(class UHexGridComponent* GridComp);

    // UI için: growth bar yüzdesi (0..1)
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "City|Population")
    float GetGrowthProgress() const;
};
