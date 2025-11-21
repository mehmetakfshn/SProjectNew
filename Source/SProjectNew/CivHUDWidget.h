#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CivHUDWidget.generated.h"


class UButton;
class UTextBlock;

UCLASS()
class SPROJECTNEW_API UCivHUDWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(meta = (BindWidget))
	UButton* NextTurnButton;

	UPROPERTY(meta = (BindWidgetOptional))
	UTextBlock* TurnText;

	/** Widget oluþturulduðunda çaðrýlýr (BeginPlay gibi) */
	virtual void NativeConstruct() override;

	/** NextTurnButton'a týklandýðýnda bu fonksiyon çalýþýr */
	UFUNCTION()
	void OnNextTurnClicked();

public:
	// YENÝ: UMG'de Text Bind ile kullanacaðýmýz fonksiyon
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Turn System")
	FText GetTurnText() const;
};