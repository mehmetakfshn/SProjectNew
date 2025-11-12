#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
class AUnitBase;
#include "CivPlayerController.generated.h"

UCLASS()
class SPROJECTNEW_API ACivPlayerController : public APlayerController // YOURPROJECTNAME_API'yi düzenleyin
{
	GENERATED_BODY()

public:
	ACivPlayerController();

protected:
	virtual void BeginPlay() override;

	/** Girdi (Input) bileþenlerini ayarlar. */
	virtual void SetupInputComponent() override;

	/** "LeftMouseClick" isimli Eylem Tetiklendiðinde (Action Mapping) çalýþacak fonksiyon. */
	void OnLeftMouseClick();

private:
	/** Sahnemizdeki HexGridManager'ý bulup bu deðiþkende saklayacaðýz. */
	UPROPERTY()
	class AHexGridManager* GridManagerRef;

	/**
	 * YENÝ: Oyuncunun o an seçmiþ olduðu birim.
	 * Eðer nullptr (boþ) ise, hiçbir birim seçilmemiþ demektir.
	 */
	UPROPERTY(VisibleAnywhere, Category = "Selection")
	AUnitBase* SelectedUnit;
};