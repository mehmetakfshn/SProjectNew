#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CivGameMode.generated.h"

UCLASS()
class SPROJECTNEW_API ACivGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ACivGameMode();

	/**
	 * Oyuncudan (PlayerController) "Sýramý bitirdim" çaðrýsý geldiðinde
	 * bu fonksiyonu tetikleyeceðiz.
	 */
	UFUNCTION(BlueprintCallable, Category = "Turn System")
	void EndPlayerTurn();
};