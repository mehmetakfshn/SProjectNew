#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Database/DatabaseReader.h"   // FCivInfo için
#include "W_CivEntry.generated.h"

// Zaten mevcut olmasý muhtemel, ama yoksa ekle:
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCivSelectedSignature, const FCivInfo&, Info);

// YENÝ: AI seçimi deðiþtiðinde kullanýlacak delegate
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCivAISelectionChangedSignature, const FCivInfo&, Info, bool, bIsSelected);

UCLASS()
class SPROJECTNEW_API UW_CivEntry : public UUserWidget
{
    GENERATED_BODY()

public:

    // Entry'deki Civ bilgisini tutar
    UPROPERTY(BlueprintReadOnly)
    FCivInfo CivInfo;

    // Oyuncu kendi civini seçtiðinde tetiklenir
    UPROPERTY(BlueprintAssignable, Category = "Civ")
    FCivSelectedSignature OnCivSelected;

    // Bu civ AI listesine eklenip/çýkarýldýðýnda tetiklenir
    UPROPERTY(BlueprintAssignable, Category = "Civ")
    FCivAISelectionChangedSignature OnAISelectionChanged;

    // C++ tarafýndan CivInfo atamak için kullanýlan fonksiyon
    UFUNCTION(BlueprintCallable)
    void SetCiv(const FCivInfo& Info);

protected:

    virtual void NativeConstruct() override;

    // Blueprint ile bind edilecek UI elemanlarý
    UPROPERTY(meta = (BindWidget))
    class UButton* Button_Select;

    UPROPERTY(meta = (BindWidget))
    class UTextBlock* Text_CivName;

    // YENÝ: Bu satýrý AI için iþaretlemek amacýyla kullanacaðýz
    UPROPERTY(meta = (BindWidgetOptional))
    class UCheckBox* CheckBox_IsAI;

    // Ýç týklama fonksiyonu (Select butonu)
    UFUNCTION()
    void HandleClick();

    // YENÝ: Checkbox deðiþince çaðrýlacak fonksiyon
    UFUNCTION()
    void HandleAICheckChanged(bool bIsChecked);
};
