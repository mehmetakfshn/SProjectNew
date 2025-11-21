#include "Public/UI/CityDetailsWidget.h"
#include "Components/TextBlock.h"
#include "Components/ProgressBar.h"
#include "Kismet/GameplayStatics.h"
#include "Public/HexGridActor.h" // Grid Actor baþlýðýný eklemeyi unutmayýn

void UCityDetailsWidget::SetSelectedCity(ACity* NewCity)
{
	CurrentCity = NewCity;

	if (CurrentCity)
	{
		// Þehir atandýðý an UI'ý güncelle
		UpdateCityUI();

		// Paneli görünür yap (Ýsteðe baðlý, BP'den de yönetilebilir)
		SetVisibility(ESlateVisibility::Visible);
	}
	else
	{
		// Þehir yoksa gizle
		SetVisibility(ESlateVisibility::Collapsed);
	}
}

void UCityDetailsWidget::UpdateCityUI()
{
	if (!CurrentCity) return;

	// 1. City Name
	if (Text_CityName)
	{
		Text_CityName->SetText(FText::FromString(CurrentCity->CityName));
	}

	// 2. Population
	if (Text_Population)
	{
		FString PopStr = FString::Printf(TEXT("%d"), CurrentCity->Population);
		Text_Population->SetText(FText::FromString(PopStr));
	}

	// 3. Food Info (Stored / Needed)
	if (Text_FoodInfo)
	{
		// "15.2 / 40.0" formatýnda
		FString FoodStr = FString::Printf(TEXT("%.1f / %.1f"), CurrentCity->FoodStored, CurrentCity->FoodNeededForNextPop);
		Text_FoodInfo->SetText(FText::FromString(FoodStr));
	}

	// 4. Growth Progress Bar
	if (Bar_Growth)
	{
		float Progress = CurrentCity->GetGrowthProgress();
		Bar_Growth->SetPercent(Progress);
	}

	// 5. Yield Calculation (Food/Prod/Gold)
	// Yield hesaplamak için GridComponent'e ihtiyacýmýz var.
	UHexGridComponent* GridComp = GetHexGridComponent();
	if (GridComp)
	{
		int32 F = 0, P = 0, G = 0;
		CurrentCity->GetTotalYield(GridComp, F, P, G);

		if (Text_FoodYield) Text_FoodYield->SetText(FText::AsNumber(F));
		if (Text_ProdYield) Text_ProdYield->SetText(FText::AsNumber(P));
		if (Text_GoldYield) Text_GoldYield->SetText(FText::AsNumber(G));
	}
}

UHexGridComponent* UCityDetailsWidget::GetHexGridComponent() const
{
	// Sahnedeki AHexGridActor'u bulup componentini dönüyoruz.
	// Not: Multiplayer veya birden çok grid varsa burasý daha spesifik olmalý.
	AActor* GridActor = UGameplayStatics::GetActorOfClass(GetWorld(), AHexGridActor::StaticClass());
	if (GridActor)
	{
		return GridActor->FindComponentByClass<UHexGridComponent>();
	}
	return nullptr;
}