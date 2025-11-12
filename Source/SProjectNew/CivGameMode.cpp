#include "CivGameMode.h"
#include "CivGameState.h" // Kendi GameState'imizi dahil ediyoruz
#include "CivPlayerController.h" // Kendi PlayerController'ýmýzý dahil ediyoruz
#include "HexGridManager.h" // YENÝ: GridManager'ý tanýmak için
#include "UnitBase.h" // YENÝ: UnitBase'i tanýmak için
#include "Kismet/GameplayStatics.h" // YENÝ: GetActorOfClass için

ACivGameMode::ACivGameMode()
{
	// ÇOK ÖNEMLÝ:
	// Motora, bu GameMode çalýþtýrýldýðýnda, veri katmaný olarak
	// bizim özel GameState'imizi (ACivGameState) kullanmasýný söylüyoruz.
	GameStateClass = ACivGameState::StaticClass();

	// Motora, varsayýlan PlayerController olarak bizimkini kullanmasýný söylüyoruz
	// (Bunu Proje Ayarlarý'ndan da yapmýþtýk ama burada olmasý garantidir).
	PlayerControllerClass = ACivPlayerController::StaticClass();
}

void ACivGameMode::EndPlayerTurn()
{
	UE_LOG(LogTemp, Warning, TEXT("ACivGameMode: EndPlayerTurn() cagrildi."));

	// 1. GameState'e Ulaþ ve Turu Ýlerlet
	ACivGameState* const GS = GetGameState<ACivGameState>();
	if (!GS)
	{
		UE_LOG(LogTemp, Error, TEXT("EndPlayerTurn: CivGameState bulunamadi!"));
		return;
	}
	GS->AdvanceTurn(); // örn: 1. Tur -> 2. Tur

	// 2. YENÝ: GridManager'ý Bul ve Tüm Birimleri Sýfýrla

	// Sahnemizdeki tek GridManager'ý bul
	AHexGridManager* GridManager = Cast<AHexGridManager>(UGameplayStatics::GetActorOfClass(GetWorld(), AHexGridManager::StaticClass()));
	if (!GridManager)
	{
		UE_LOG(LogTemp, Error, TEXT("EndPlayerTurn: AHexGridManager bulunamadi!"));
		return;
	}

	// 3. GridManager'ýn birim haritasýndaki (TMap) tüm birimleri dolaþ
	// UnitData (TMap<FIntPoint, AUnitBase*>)
	for (const TPair<FIntPoint, AUnitBase*>& Pair : GridManager->UnitData)
	{
		AUnitBase* Unit = Pair.Value;
		if (Unit)
		{
			// Her birimin "Puan Yenileme" fonksiyonunu çaðýr
			Unit->ResetForNewTurn();
		}
	}
}