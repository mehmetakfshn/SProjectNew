#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CivHUDWidget.generated.h"

// --- FORWARD DECLARATIONS ---
// Bu sýnýflarý burada 'class Isim;' þeklinde tanýtýyoruz.
// Böylece header dosyasýna #include eklememize gerek kalmýyor (Include Loop'u engeller).
class UCityDetailsWidget;
class ACity;
class UButton;
class UTextBlock;

UCLASS()
class SPROJECTNEW_API UCivHUDWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	// --- TURN SYSTEM ---

	// UI'da Text'e bind edilecek fonksiyon (Turn: 5 - 4000 BC gibi)
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Turn System")
	FText GetTurnText() const;

	// --- CITY UI ENTEGRASYONU ---

	// PlayerController þehre týkladýðýnda bunu çaðýracak
	UFUNCTION(BlueprintCallable, Category = "City UI")
	void OpenCityDetails(ACity* CityToDisplay);

	// Þehir seçiminden çýkýldýðýnda paneli kapatýr
	UFUNCTION(BlueprintCallable, Category = "City UI")
	void CloseCityDetails();

	// Tur bittiðinde veya veri deðiþtiðinde açýk olan pencereyi günceller
	void RefreshCurrentCity();

protected:
	// Widget oluþturulduðunda (BeginPlay benzeri)
	virtual void NativeConstruct() override;

	// --- UI BÝLEÞENLERÝ (BIND WIDGET) ---

	UPROPERTY(meta = (BindWidget))
	UButton* NextTurnButton;

	// Opsiyonel yaptýk, eðer BP'de eklemezsen çökmez
	UPROPERTY(meta = (BindWidgetOptional))
	UTextBlock* TurnText;

	// NextTurnButton'a týklanma olayý
	UFUNCTION()
	void OnNextTurnClicked();

	// --- CITY DETAILS WIDGET SETUP ---

	// Editörden (BP_CivHUD içinde) oluþturulacak Widget sýnýfýný (WBP_CityDetails) buradan seçeceðiz.
	// Forward declaration (class UCityDetailsWidget;) sayesinde hata vermez.
	UPROPERTY(EditDefaultsOnly, Category = "City UI")
	TSubclassOf<UCityDetailsWidget> CityDetailsClass;

	// Oluþturduðumuz widget'ýn canlý örneðini burada tutuyoruz.
	UPROPERTY()
	UCityDetailsWidget* CityDetailsWidgetInstance;
};