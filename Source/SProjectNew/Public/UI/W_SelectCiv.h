#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Public/CivilizationData.h" // FCivInfo struct'ý için
#include "W_SelectCiv.generated.h"

// --- Forward Declarations ---
class UButton;
class UScrollBox;
class UComboBoxString;
class UW_CivEntry;

UCLASS()
class SPROJECTNEW_API UW_SelectCiv : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeConstruct() override;

public:
	// --- UI Components (BindWidget) ---

	// Oyunu Baþlat Butonu
	UPROPERTY(meta = (BindWidget))
	UButton* Button_StartGame;

	// Medeniyetlerin listeleneceði kutu
	UPROPERTY(meta = (BindWidget))
	UScrollBox* ScrollBox_Civs;

	// [YENÝ] Harita Seçimi için Açýlýr Liste
	UPROPERTY(meta = (BindWidget))
	UComboBoxString* MapSelector;

	// Entry Widget Sýnýfý (Editörden WBP_CivEntry seçilmeli)
	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<UW_CivEntry> CivEntryClass;


	// --- Data ---

	// Seçilen Oyuncu Medeniyeti
	FCivInfo SelectedCiv;

	// Seçilen Yapay Zeka Medeniyetleri
	TArray<FCivInfo> SelectedAICivs;

	// [YENÝ] Seçilen Harita Ýsmi
	FString SelectedMapName;


	// --- Functions ---

	void PopulateCivList();
	void PopulateMapList(); // Haritalarý doldurur

	// Oyuncu bir Civ seçtiðinde
	UFUNCTION()
	void OnCivSelected(const FCivInfo& Info);

	// AI Checkbox deðiþtiðinde
	UFUNCTION()
	void OnAICivSelectionChanged(const FCivInfo& Info, bool bIsSelected);

	// Harita deðiþtiðinde
	UFUNCTION()
	void OnMapSelectionChanged(FString SelectedItem, ESelectInfo::Type SelectionType);

	// Baþlat'a basýldýðýnda
	UFUNCTION()
	void HandleStartGameClicked();
};