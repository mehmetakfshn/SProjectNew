#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Database/DatabaseReader.h"
#include "W_SelectCiv.generated.h"

class UW_CivEntry;
class UScrollBox;
class UButton;

UCLASS()
class SPROJECTNEW_API UW_SelectCiv : public UUserWidget
{
    GENERATED_BODY()

public:

    // Seçilen oyuncu civ'i
    UPROPERTY(BlueprintReadOnly)
    FCivInfo SelectedCiv;

    // Seçilen AI civ listesi (checkbox'tan gelir)
    UPROPERTY(BlueprintReadOnly)
    TArray<FCivInfo> SelectedAICivs;

protected:

    virtual void NativeConstruct() override;

    // Civ entry için widget class (zaten büyük ihtimalle var)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Civ")
    TSubclassOf<class UW_CivEntry> CivEntryClass;

    // Civ listesinin doldurulduðu ScrollBox (zaten muhtemelen var)
    UPROPERTY(meta = (BindWidget))
    class UScrollBox* ScrollBox_Civs;

    // Start Game butonu
    UPROPERTY(meta = (BindWidget))
    class UButton* Button_StartGame;

private:

    // Listeyi doldurur
    void PopulateCivList();

    // Bir entry týklanýnca (player civ seçimi)
    UFUNCTION()
    void OnCivSelected(const FCivInfo& Info);

    // YENÝ: Entry'deki AI checkbox deðiþince
    UFUNCTION()
    void OnAICivSelectionChanged(const FCivInfo& Info, bool bIsSelected);

    // StartGame butonuna basýlýrsa
    UFUNCTION()
    void HandleStartGameClicked();
};

