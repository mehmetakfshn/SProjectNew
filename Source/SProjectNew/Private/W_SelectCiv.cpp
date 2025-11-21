#include "Public/W_SelectCiv.h"
#include "Public/W_CivEntry.h"
#include "CivGameInstance.h"

#include "Components/ScrollBox.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"

void UW_SelectCiv::NativeConstruct()
{
    Super::NativeConstruct();

    // Civ listesi UI'ya C++ ile doldurulacak
    PopulateCivList();

    // Buton disable baþlasýn
    if (Button_StartGame)
    {
        Button_StartGame->OnClicked.Clear();
        Button_StartGame->SetIsEnabled(false);
        Button_StartGame->OnClicked.AddDynamic(this, &UW_SelectCiv::HandleStartGameClicked);
    }
}

void UW_SelectCiv::PopulateCivList()
{
    if (!CivEntryClass)
    {
        UE_LOG(LogTemp, Error, TEXT("CivEntryClass NOT SET in Select Civ Widget!"));
        return;
    }

    // SQL'den tüm Medeniyetleri çek
    TArray<FCivInfo> Civs = UDatabaseReader::GetAllCivilizations();

    for (const FCivInfo& Civ : Civs)
    {
        // C++ entry widget oluþtur
        UW_CivEntry* Entry = CreateWidget<UW_CivEntry>(GetWorld(), CivEntryClass);

        if (!Entry)
            continue;

        Entry->SetCiv(Civ);

        // C++ delegate baðlama - PLAYER civ seçimi için
        Entry->OnCivSelected.AddDynamic(this, &UW_SelectCiv::OnCivSelected);

        // YENÝ: AI civ seçimi için
        Entry->OnAISelectionChanged.AddDynamic(this, &UW_SelectCiv::OnAICivSelectionChanged);

        // ScrollBox'a ekle
        if (ScrollBox_Civs)
            ScrollBox_Civs->AddChild(Entry);

    }
}

void UW_SelectCiv::OnCivSelected(const FCivInfo& Info)
{
    SelectedCiv = Info;

    UE_LOG(LogTemp, Warning, TEXT("C++ Selected Civ: %s (Leader: %s)"),
        *Info.Name,
        *Info.Leader);

    if (Button_StartGame)
        Button_StartGame->SetIsEnabled(true);
}

// YENÝ: AI checkbox deðiþince buraya düþer
void UW_SelectCiv::OnAICivSelectionChanged(const FCivInfo& Info, bool bIsSelected)
{
    if (bIsSelected)
    {
        // Zaten listede mi kontrol et
        bool bAlready = SelectedAICivs.ContainsByPredicate(
            [&Info](const FCivInfo& Other)
            {
                return Other.Name == Info.Name;
            }
        );

        if (!bAlready)
        {
            SelectedAICivs.Add(Info);
            UE_LOG(LogTemp, Warning, TEXT("AI Civ added: %s"), *Info.Name);
        }
    }
    else
    {
        // Uncheck edildiðinde listeden çýkar
        int32 Removed = SelectedAICivs.RemoveAll(
            [&Info](const FCivInfo& Other)
            {
                return Other.Name == Info.Name;
            }
        );

        if (Removed > 0)
        {
            UE_LOG(LogTemp, Warning, TEXT("AI Civ removed: %s"), *Info.Name);
        }
    }

    UE_LOG(LogTemp, Warning, TEXT("Total AI civs selected: %d"), SelectedAICivs.Num());
}

void UW_SelectCiv::HandleStartGameClicked()
{
    // GameInstance'a civ yaz
    if (UCivGameInstance* GI = Cast<UCivGameInstance>(GetGameInstance()))
    {
        GI->SelectedCiv = SelectedCiv;
        GI->SelectedAICivs = SelectedAICivs;
        GI->NumAICivs = SelectedAICivs.Num();

        UE_LOG(LogTemp, Warning, TEXT("GI Saved Player Civ: %s"), *SelectedCiv.Name);
        UE_LOG(LogTemp, Warning, TEXT("GI Saved %d AI civs."), GI->NumAICivs);

        for (const FCivInfo& AICiv : GI->SelectedAICivs)
        {
            UE_LOG(LogTemp, Warning, TEXT("  AI Civ: %s (Leader: %s)"),
                *AICiv.Name,
                *AICiv.Leader);
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("CivGameInstance CAST FAILED!"));
    }

    // Level aç
    UGameplayStatics::OpenLevel(this, TEXT("Lvl_TopDown"));
}
