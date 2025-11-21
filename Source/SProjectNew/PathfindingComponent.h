#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Public/HexTileData.h" 
#include "PathfindingComponent.generated.h"

// A* algoritmasý için kullanýlan geçici bir düðüm yapýsý
struct FPathNode
{
	FIntPoint Coordinates; // Bu düðümün koordinatý
	int32 GCost; // Baþlangýçtan buraya gelmenin maliyeti
	int32 HCost; // Buradan hedefe tahmini maliyet (Heuristic)
	FPathNode* Parent; // Yolu yeniden oluþturmak için

	int32 FCost() const { return GCost + HCost; }

	FPathNode(FIntPoint Coords = FIntPoint(-1, -1), FPathNode* InParent = nullptr, int32 InGCost = 0, int32 InHCost = 0)
		: Coordinates(Coords), GCost(InGCost), HCost(InHCost), Parent(InParent) {
	}

	// Eþitlik operatörü (TArray::Contains için gerekli)
	bool operator==(const FPathNode& Other) const
	{
		return Coordinates == Other.Coordinates;
	}
};

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class SPROJECTNEW_API UPathfindingComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPathfindingComponent();

	/**
	 * A* algoritmasýný çalýþtýran ana fonksiyon.
	 * Blueprint'ten gelen Dizi'yi (TArray) alýr.
	 */
	UFUNCTION(BlueprintCallable, Category = "Pathfinding")
	bool FindPath(
		const TArray<FHexTileData>& GridDataArray,
		FIntPoint Start,
		FIntPoint End,
		TArray<FIntPoint>& OutPath
	);

	// --- HARÝTA MATEMATÝK ARAÇLARI (Blueprint'te Kullanýlacak) ---
	// Bu fonksiyonlar, o sinir bozucu boþluk sorununu çözer.

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Pathfinding|Conversion")
	FIntPoint WorldToGrid(const FVector& WorldLocation, float TileSize) const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Pathfinding|Conversion")
	FVector GridToWorld(FIntPoint GridCoord, float TileSize) const;


	FIntPoint WorldToGrid_Custom(const FVector& LocalPos, float TileSize) const;


private:
	/** Ýki koordinat arasýndaki tahmini mesafeyi (H Cost) hesaplar (Hex mesafesi) */
	int32 CalculateHeuristic(FIntPoint A, FIntPoint B);

	/** Bir karonun komþularýný (6 yön) döndürür */
	TArray<FIntPoint> GetNeighbors(FIntPoint Coords);

	/** Bulunan yolu (Parent'lardan geriye doðru) yeniden oluþturur */
	TArray<FIntPoint> ReconstructPath(FPathNode* EndNode);

	/** A* çalýþmadan önce Dizi'yi hýzlý arama için TMap'e dönüþtürür */
	TMap<FIntPoint, FHexTileData> ConvertArrayToMap(const TArray<FHexTileData>& GridDataArray);
};