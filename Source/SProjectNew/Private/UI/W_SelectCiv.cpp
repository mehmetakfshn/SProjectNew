#include "UI/W_SelectCiv.h"
#include "Public/W_CivEntry.h"
#include "Public/CivGameInstance.h"      // GameInstance eriþimi
#include "Public/MapEditorLibrary.h"     // Harita listesi için
#include "Database/DatabaseReader.h"     // Civ listesi için
#include "Components/ComboBoxString.h"
#include "Components/ScrollBox.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"

void UW_SelectCiv::NativeConstruct()
{
	Super::NativeConstruct();

	// Listeleri Doldur
	PopulateCivList();
	PopulateMapList();

	// Baþlat Butonu Ayarlarý
	if (Button_StartGame)
	{
		Button_StartGame->SetIsEnabled(false); // Civ seçmeden basýlmasýn
		Button_StartGame->OnClicked.AddDynamic(this, &UW_SelectCiv::HandleStartGameClicked);
	}

	// Harita Seçici Ayarlarý
	if (MapSelector)
	{
		MapSelector->OnSelectionChanged.AddDynamic(this, &UW_SelectCiv::OnMapSelectionChanged);
	}
}

void UW_SelectCiv::PopulateCivList()
{
	if (!CivEntryClass || !ScrollBox_Civs)
	{
		UE_LOG(LogTemp, Error, TEXT("W_SelectCiv: CivEntryClass veya ScrollBox eksik!"));
		return;
	}

	ScrollBox_Civs->ClearChildren();

	// DatabaseReader'dan listeyi çek
	TArray<FCivInfo> Civs = UDatabaseReader::GetAllCivilizations();

	for (const FCivInfo& Civ : Civs)
	{
		UW_CivEntry* Entry = CreateWidget<UW_CivEntry>(GetWorld(), CivEntryClass);
		if (Entry)
		{
			Entry->SetCiv(Civ);

			// Delegate Baðlamalarý
			Entry->OnCivSelected.AddDynamic(this, &UW_SelectCiv::OnCivSelected);
			Entry->OnAISelectionChanged.AddDynamic(this, &UW_SelectCiv::OnAICivSelectionChanged);

			ScrollBox_Civs->AddChild(Entry);
		}
	}
}

void UW_SelectCiv::PopulateMapList()
{
	if (!MapSelector) return;

	MapSelector->ClearOptions();

	// MapEditorLibrary ile veritabanýndaki harita isimlerini al
	TArray<FString> Maps = UMapEditorLibrary::GetAllMapNames();

	for (const FString& MapName : Maps)
	{
		MapSelector->AddOption(MapName);
	}

	// Varsayýlan seçim yap
	if (Maps.Num() > 0)
	{
		MapSelector->SetSelectedIndex(0);
		SelectedMapName = Maps[0];
	}
	else
	{
		// Hiç harita yoksa varsayýlan (Fallback)
		FString DefaultMap = TEXT("Earth_120x96");
		MapSelector->AddOption(DefaultMap);
		MapSelector->SetSelectedIndex(0);
		SelectedMapName = DefaultMap;
	}
}

void UW_SelectCiv::OnCivSelected(const FCivInfo& Info)
{
	SelectedCiv = Info;

	UE_LOG(LogTemp, Log, TEXT("Player Selected Civ: %s"), *Info.Name);

	// Artýk baþlatabiliriz
	if (Button_StartGame)
	{
		Button_StartGame->SetIsEnabled(true);
	}
}

void UW_SelectCiv::OnAICivSelectionChanged(const FCivInfo& Info, bool bIsSelected)
{
	if (bIsSelected)
	{
		// Listede yoksa ekle
		bool bAlready = SelectedAICivs.ContainsByPredicate([&](const FCivInfo& Other) {
			return Other.Name == Info.Name;
			});

		if (!bAlready)
		{
			SelectedAICivs.Add(Info);
		}
	}
	else
	{
		// Listeden çýkar
		SelectedAICivs.RemoveAll([&](const FCivInfo& Other) {
			return Other.Name == Info.Name;
			});
	}
}

void UW_SelectCiv::OnMapSelectionChanged(FString SelectedItem, ESelectInfo::Type SelectionType)
{
	SelectedMapName = SelectedItem;
	UE_LOG(LogTemp, Log, TEXT("Selected Map Changed: %s"), *SelectedMapName);
}

void UW_SelectCiv::HandleStartGameClicked()
{
	UCivGameInstance* GI = Cast<UCivGameInstance>(GetGameInstance());
	if (GI)
	{
		// 1. Player Civ Kaydet
		GI->SelectedCiv = SelectedCiv;

		// 2. AI Civs Kaydet
		GI->SelectedAICivs = SelectedAICivs;
		GI->NumAICivs = SelectedAICivs.Num();

		// 3. [YENÝ] Harita Ýsmini Kaydet
		GI->MapToLoad = SelectedMapName;

		UE_LOG(LogTemp, Warning, TEXT("Starting Game... Map: %s, Player: %s, AI Count: %d"),
			*SelectedMapName, *SelectedCiv.Name, GI->NumAICivs);

		// 4. Level'ý Yükle
		UGameplayStatics::OpenLevel(this, FName("Lvl_TopDown"));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("CivGameInstance bulunamadi!"));
	}
}