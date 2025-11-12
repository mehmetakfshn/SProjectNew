#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "CivGameState.generated.h"

UCLASS()
class SPROJECTNEW_API ACivGameState : public AGameStateBase
{
	GENERATED_BODY()

public:
	ACivGameState();

	/**
	 * Deðiþkenlerin að üzerinden (veya sunucudan UI'a) nasýl kopyalanacaðýný
	 * belirleyen standart Unreal fonksiyonu.
	 */
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	/**
	 * Sunucu tarafýnda (GameMode) çaðrýlýr ve tur sayýsýný 1 artýrýr.
	 */
	void AdvanceTurn();

	/**
	 * Her yerden (özellikle UI'dan) mevcut tur sayýsýný güvenle almak için.
	 */
	UFUNCTION(BlueprintCallable, Category = "Turn System")
	int32 GetCurrentTurn() const;

protected:
	/**
	 * Mevcut tur sayýsý.
	 * "Replicated" (Çoðaltýlmýþ) olarak iþaretlendi, böylece sunucuda deðiþtiðinde
	 * otomatik olarak tüm istemcilere (ve UI'a) bildirilir.
	 */
	UPROPERTY(VisibleInstanceOnly, Replicated, BlueprintReadOnly, Category = "Turn System")
	int32 CurrentTurnNumber;
};