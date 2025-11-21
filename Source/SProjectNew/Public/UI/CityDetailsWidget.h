#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Public/City.h" // ACity sýnýfýný tanýmasý için
#include "CityDetailsWidget.generated.h"

// Forward Declarations
class UTextBlock;
class UProgressBar;
class UHexGridComponent;

/**
 * Þehir seçildiðinde detaylarý gösteren Widget.
 * Logic tamamen C++ tarafýndadýr.
 */
UCLASS()
class SPROJECTNEW_API UCityDetailsWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	// UI'ý belirli bir þehir verisiyle günceller
	UFUNCTION(BlueprintCallable, Category = "City UI")
	void SetSelectedCity(ACity* NewCity);

	// Verileri ekrana tekrar basar (Turn bittiðinde çaðrýlabilir)
	UFUNCTION(BlueprintCallable, Category = "City UI")
	void UpdateCityUI();

protected:
	// --- BIND WIDGETS ---
	// Blueprint'te bu isimlerle TextBlock ve ProgressBar oluþturmalýsýnýz.

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_CityName;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_Population;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_FoodInfo; // Örn: "15 / 40"

	UPROPERTY(meta = (BindWidget))
	UProgressBar* Bar_Growth;

	// Yield Bilgileri
	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_FoodYield;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_ProdYield;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_GoldYield;

private:
	// Þu an görüntülenen þehir
	UPROPERTY()
	ACity* CurrentCity;

	// Grid Component referansýný bulmak için yardýmcý fonksiyon
	UHexGridComponent* GetHexGridComponent() const;
};