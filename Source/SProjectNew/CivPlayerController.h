#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "UnitBase.h"
#include "CivPlayerController.generated.h"

UCLASS()
class SPROJECTNEW_API ACivPlayerController : public APlayerController 
{
	GENERATED_BODY()

public:
	ACivPlayerController();
	UFUNCTION(Server, Reliable, BlueprintCallable)
	void Server_RequestEndTurn();

	UFUNCTION(BlueprintCallable, Category = "Civ|Entegrasyon")
	void HandleTileClick(AActor* ActorOnTile, const FVector& TileWorldLocation);

	/** YENÝ: Haritanýn (BP) vurgulayýcýyý ayarlayabilmesi için */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Civ|Entegrasyon")
	AUnitBase* GetSelectedUnit() const;

protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;
	void OnLeftMouseClick();
	void OnRightMouseClick();
	void HandlePauseMenu();
	virtual void Tick(float DeltaSeconds) override;


	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "UI")
	TSubclassOf<class UCivHUDWidget> HUDWidgetClass;

	UPROPERTY(BlueprintReadOnly, Category = "UI")
	UCivHUDWidget* HUDWidgetInstance;

	UPROPERTY(EditDefaultsOnly, Category = "UI")
	TSubclassOf<UUserWidget> PauseMenuClass;

	



private:
	void SelectUnit(AUnitBase* UnitToSelect);
	void AttemptMoveSelectedUnit(const FVector& TargetLocation);

	UPROPERTY(VisibleAnywhere, Category = "Selection")
	AUnitBase* SelectedUnit;
};