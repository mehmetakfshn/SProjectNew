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

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	void AdvanceTurn();

	UFUNCTION(BlueprintCallable, Category = "Turn System")
	int32 GetCurrentTurn() const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Turn System")
	FText GetCurrentDateText() const;

	UFUNCTION(BlueprintCallable, Category = "Turn System")
	void SetCurrentTurn(int32 NewTurn);


protected:
	
	UPROPERTY(VisibleInstanceOnly, Replicated, BlueprintReadOnly, Category = "Turn System")
	int32 CurrentTurnNumber;
};