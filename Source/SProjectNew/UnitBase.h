#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UnitBase.generated.h"

UCLASS()
class SPROJECTNEW_API AUnitBase : public AActor
{
	GENERATED_BODY()

public:
	AUnitBase();

protected:
	virtual void BeginPlay() override;

public:
	/** Birimin görünür modeli (mesh) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Unit")
	UStaticMeshComponent* UnitMesh;

	/** Birimin o an bulunduðu ýzgara koordinatý */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Unit")
	FIntPoint CurrentGridCoord;

	/** Birimin her tur baþýnda sahip olacaðý maksimum puan (örn: 2) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Unit|Stats")
	int32 MaxMovementPoints;

	/** Birimin bu turda kalan mevcut puaný */
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "Unit|Stats")
	int32 CurrentMovementPoints;

	/**
	 * Bu birimin ýzgara koordinatýný ayarlar (hareket için kullanýlacak).
	 * @param NewCoord Yeni koordinat.
	 */
	UFUNCTION(BlueprintCallable, Category = "Unit")
	void SetGridCoord(FIntPoint NewCoord);

	/** Birimin hareket edip edemeyeceðini kontrol eder */
	UFUNCTION(BlueprintCallable, Category = "Unit|Stats")
	bool CanMove() const;

	/** Birim hareket ettiðinde puanýný harcar */
	UFUNCTION(BlueprintCallable, Category = "Unit|Stats")
	void SpendMovement(int32 Cost);

	/** Yeni tur baþladýðýnda puanlarý yeniler */
	UFUNCTION(BlueprintCallable, Category = "Unit|Stats")
	void ResetForNewTurn();
};