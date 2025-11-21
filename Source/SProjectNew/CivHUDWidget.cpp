#include "CivHUDWidget.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"     // YENÝ
#include "CivPlayerController.h"      // Kendi PlayerController'ýmýz
#include "CivGameState.h"             // YENÝ: Tur sayýsýný buradan alacaðýz


void UCivHUDWidget::NativeConstruct()
{
	Super::NativeConstruct();

	// Butonun var olduðundan ve Blueprint'te doðru isimlendirildiðinden emin ol
	if (NextTurnButton)
	{
		// Butonun OnClicked (Týklandýðýnda) olayýna,
		// bizim OnNextTurnClicked fonksiyonumuzu baðla (ekle).
		NextTurnButton->OnClicked.AddDynamic(this, &UCivHUDWidget::OnNextTurnClicked);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("CivHUDWidget: 'NextTurnButton' adli Buton Blueprint'te bulunamadi!"));
	}
}

void UCivHUDWidget::OnNextTurnClicked()
{
	// Bu UI Widget'ýnýn sahibi olan PlayerController'ý al
	ACivPlayerController* PC = Cast<ACivPlayerController>(GetOwningPlayer());
	if (PC)
	{
		// PlayerController'a "Turu bitirme isteði gönder" diyoruz
		// (Bu fonksiyonu bir sonraki adýmda oluþturacaðýz)
		PC->Server_RequestEndTurn();
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("OnNextTurnClicked: CivPlayerController bulunamadi!"));
	}
}

FText UCivHUDWidget::GetTurnText() const
{
	UWorld* World = GetWorld();
	if (!World)
	{
		return FText::FromString(TEXT("Turn: ?"));
	}

	ACivGameState* CivGS = World->GetGameState<ACivGameState>();
	if (!CivGS)
	{
		return FText::FromString(TEXT("Turn: ?"));
	}

	int32 TurnNumber = CivGS->GetCurrentTurn();
	FText DateText = CivGS->GetCurrentDateText();

	FString FinalString = FString::Printf(TEXT("Turn: %d - %s"), TurnNumber, *DateText.ToString());
	return FText::FromString(FinalString);
}

