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