#include "Public/W_CivEntry.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Components/CheckBox.h"

void UW_CivEntry::NativeConstruct()
{
    Super::NativeConstruct();

    if (Button_Select)
    {
        Button_Select->OnClicked.Clear();
        Button_Select->OnClicked.AddDynamic(this, &UW_CivEntry::HandleClick);
    }

    if (CheckBox_IsAI)
    {
        CheckBox_IsAI->OnCheckStateChanged.Clear();
        CheckBox_IsAI->OnCheckStateChanged.AddDynamic(this, &UW_CivEntry::HandleAICheckChanged);
    }
}

void UW_CivEntry::SetCiv(const FCivInfo& Info)
{
    CivInfo = Info;

    if (Text_CivName)
    {
        Text_CivName->SetText(FText::FromString(Info.Name));
    }

    // Ýstersen burada CheckBox_IsAI'yi baþlangýçta false yapabilirsin:
    if (CheckBox_IsAI)
    {
        CheckBox_IsAI->SetIsChecked(false);
    }
}

void UW_CivEntry::HandleClick()
{
    // Oyuncu kendi civini seçti
    OnCivSelected.Broadcast(CivInfo);
}

void UW_CivEntry::HandleAICheckChanged(bool bIsChecked)
{
    // Bu civ AI listesine eklenmeli mi?
    OnAISelectionChanged.Broadcast(CivInfo, bIsChecked);
}
