#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "UnitBase.h"
#include "Components/StaticMeshComponent.h" // YENÝ: Vurgulayýcý mesh için
#include "HexGridManager.generated.h"

// ... (FTileData ve ETileType enum'ý ayný kalýyor) ...
UENUM(BlueprintType)
enum class ETileType : uint8
{
	TT_Grass	UMETA(DisplayName = "Grass"),
	TT_Water	UMETA(DisplayName = "Water"),
	TT_Mountain	UMETA(DisplayName = "Mountain"),
	TT_Desert	UMETA(DisplayName = "Desert")
};

USTRUCT(BlueprintType)
struct FTileData
{
	GENERATED_BODY()
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Tile Data")
	FIntPoint GridCoordinates;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Tile Data")
	ETileType TileType;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Tile Data")
	FVector WorldPosition;
	FTileData()
	{
		GridCoordinates = FIntPoint(-1, -1);
		TileType = ETileType::TT_Grass;
		WorldPosition = FVector::ZeroVector;
	}
};
// ... (FTileData ve ETileType enum'ý ayný kalýyor) ...


UCLASS()
class SPROJECTNEW_API AHexGridManager : public AActor // API makrosu güncellendi
{
	GENERATED_BODY()

public:
	AHexGridManager();

protected:
	virtual void BeginPlay() override;
	void GenerateGridData();
	void CreateVisualGrid();

public:
	//-------------------------------------------------
	// Harita Ayarlarý
	//-------------------------------------------------

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid Settings", meta = (ClampMin = "1"))
	int32 GridWidth = 20;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid Settings", meta = (ClampMin = "1"))
	int32 GridHeight = 20;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid Settings", meta = (ClampMin = "10.0"))
	float TileSize = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid Settings|Visuals")
	TMap<ETileType, UStaticMesh*> TileMeshes;

	/** * YENÝ: Seçili karoyu vurgulamak için kullanýlacak mesh.
	 * Bunu Blueprint'te (BP_HexGridManager) atayacaðýz.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid Settings|Visuals")
	UStaticMesh* HighlighterMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grid Settings|Units")
	TSubclassOf<AUnitBase> DefaultTestUnitClass;

	//-------------------------------------------------
	// Harita Veri Deposu ve Bileþenler
	//-------------------------------------------------

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Grid Data")
	TMap<FIntPoint, FTileData> GridData;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Grid Data")
	TMap<FIntPoint, AUnitBase*> UnitData;

	UPROPERTY(VisibleAnywhere, Category = "Grid Visuals")
	TMap<ETileType, UInstancedStaticMeshComponent*> TileISMs;

	/**
	 * YENÝ: Seçili karoyu gösteren tekil mesh bileþeni.
	 * ISM kullanmýyoruz çünkü ayný anda sadece 1 tane olacak.
	 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Grid Visuals")
	UStaticMeshComponent* SelectionHighlighter;

	//-------------------------------------------------
	// Fonksiyonlar
	//-------------------------------------------------

	UFUNCTION(BlueprintCallable, Category = "Grid|Conversion")
	FVector GridToWorld(FIntPoint GridCoord) const;

	UFUNCTION(BlueprintCallable, Category = "Grid|Conversion")
	FIntPoint WorldToGrid(FVector WorldCoord) const;

	/**
	 * YENÝ: Verilen ýzgara koordinatýndaki karo verisini (FTileData) döndürür.
	 * @param GridCoord Bilgisi istenen koordinat.
	 * @param OutData (Çýktý) Bulunan karo verisi.
	 * @return Karo bulunursa true, bulunamazsa false.
	 */
	UFUNCTION(BlueprintCallable, Category = "Grid Data")
	bool GetTileData(FIntPoint GridCoord, UPARAM(DisplayName = "Tile Data") FTileData& OutData);

	UFUNCTION(BlueprintCallable, Category = "Grid Data")
	AUnitBase* GetUnitAt(FIntPoint GridCoord);

	UFUNCTION(BlueprintCallable, Category = "Grid")
	void UpdateHighlighter(FIntPoint GridCoord);

	UFUNCTION(BlueprintCallable, Category = "Grid|Units")
	void SpawnUnit(FIntPoint GridCoord, TSubclassOf<AUnitBase> UnitClass);

	UFUNCTION(BlueprintCallable, Category = "Grid|Units")
	bool MoveUnit(AUnitBase* UnitToMove, FIntPoint TargetCoord);

private:
	float HexWidth;
	float HexHeight;

	void CalculateHexMetrics();
};