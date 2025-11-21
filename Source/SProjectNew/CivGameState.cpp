#include "CivGameState.h"
#include "Net/UnrealNetwork.h" // Replikasyon (DOREPLIFETIME) için bu gereklidir

ACivGameState::ACivGameState()
{
	// Oyun baþladýðýnda 1. turdan baþla
	CurrentTurnNumber = 1;
}

void ACivGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// CurrentTurnNumber deðiþkenini "Replikasyon Listesi"ne ekle
	DOREPLIFETIME(ACivGameState, CurrentTurnNumber);
}

void ACivGameState::AdvanceTurn()
{
	// Bu fonksiyon sadece sunucuda (GameMode tarafýndan) çaðrýlmalýdýr
	if (HasAuthority()) // HasAuthority() == "Ben Sunucu muyum?"
	{
		CurrentTurnNumber++;
		UE_LOG(LogTemp, Warning, TEXT("=== YENI TUR BASLADI: Tur %d ==="), CurrentTurnNumber);
	}
}

int32 ACivGameState::GetCurrentTurn() const
{
	return CurrentTurnNumber;
}

FText ACivGameState::GetCurrentDateText() const
{
    // Basit tarih sistemi:
    // Turn 1 = 4000 BC
    // Her turn = 40 yýl

    int32 Turn = CurrentTurnNumber;

    // Unreal'da garanti olmasý için
    if (Turn < 1)
    {
        Turn = 1;
    }

    int32 Year = 4000 - (Turn - 1) * 40;

    FString DateString;

    if (Year > 0)
    {
        // BC formatý
        DateString = FString::Printf(TEXT("%d BC"), Year);
    }
    else
    {
        // AD formatý
        int32 ADYear = FMath::Abs(Year);
        DateString = FString::Printf(TEXT("%d AD"), ADYear);
    }

    return FText::FromString(DateString);
}

void ACivGameState::SetCurrentTurn(int32 NewTurn)
{
    CurrentTurnNumber = NewTurn;
}
