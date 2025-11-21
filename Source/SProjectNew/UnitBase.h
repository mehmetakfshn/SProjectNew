#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CivTypes.h" // FHexTileData'yý tanýmak için
#include "Public/UnitData.h"  
#include "UnitBase.generated.h"

// Forward declaration (tamamýný include etmemek için)
class UPathfindingComponent;

UCLASS(BlueprintType) // BlueprintType ekledik
class SPROJECTNEW_API AUnitBase : public AActor
{
	GENERATED_BODY()

public:
	AUnitBase();

protected:
	virtual void BeginPlay() override;

	UPROPERTY()
	UCivilizationManager* OwnerCivilization;

	UPROPERTY()
	FUnitData UnitData;

	UPROPERTY()
	FIntPoint GridPosition;


public:
	// --- Yeni Tick Fonksiyonu ---
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Unit")
	UStaticMeshComponent* UnitMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Unit")
	FIntPoint CurrentGridCoords;

	/** Birimin hareket hýzý (VInterpTo için) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Unit|Movement")
	float MovementSpeed;

	// --- Ýstatistikler (Deðiþiklik Yok) ---
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Unit|Stats")
	int32 MaxMovementPoints;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "Unit|Stats")
	int32 CurrentMovementPoints;

	UFUNCTION(BlueprintCallable, Category = "Unit|Stats")
	bool CanMove() const;

	UFUNCTION(BlueprintCallable, Category = "Unit|Stats")
	void SpendMovement(int32 Cost);

	UFUNCTION(BlueprintCallable, Category = "Unit|Stats")
	void ResetForNewTurn();

	UFUNCTION(BlueprintCallable, Category = "Unit|Movement")
	void MoveAlongPath(
		const TArray<FIntPoint>& PathCoordinates,
		UPathfindingComponent* PathfindingComponent,
		float TileSize
	);

	UFUNCTION()
	void InitUnit(UCivilizationManager* OwnerCiv, const FUnitData& Data, const FIntPoint& GridPos);


private:
	// --- Akýcý Hareket (Smooth Movement) için ---
	bool bIsMoving;
	int32 CurrentPathIndex;
	TArray<FVector> WorldPathToFollow;

	/** Yolu çizer (kullanýcýnýn isteði) */
	void DrawPath();
};