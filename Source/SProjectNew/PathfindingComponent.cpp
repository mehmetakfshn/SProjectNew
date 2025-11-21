#include "PathfindingComponent.h"

UPathfindingComponent::UPathfindingComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

// YENÝ FONKSÝYON: BP'den gelen Dizi'yi C++'ýn A* için ihtiyaç duyduðu TMap'e dönüþtürür
TMap<FIntPoint, FHexTileData> UPathfindingComponent::ConvertArrayToMap(const TArray<FHexTileData>& GridDataArray)
{
	TMap<FIntPoint, FHexTileData> GridMap;
	for (const FHexTileData& TileData : GridDataArray)
	{
		GridMap.Add(TileData.Coordinates, TileData);
	}
	return GridMap;
}

// 1. A* Fonksiyonunun kendisi
bool UPathfindingComponent::FindPath(
	const TArray<FHexTileData>& GridDataArray,
	FIntPoint Start,
	FIntPoint End,
	TArray<FIntPoint>& OutPath
)
{
	// 1. ADIM: BP'den gelen Dizi'yi hýzlý arama için TMap'e dönüþtür
	TMap<FIntPoint, FHexTileData> GridData = ConvertArrayToMap(GridDataArray);

	// 2. ADIM: A* algoritmasýnýn geri kalaný
	TArray<FPathNode*> OpenList;
	TArray<FPathNode*> ClosedList;

	FPathNode* StartNode = new FPathNode(Start, nullptr, 0, CalculateHeuristic(Start, End));
	OpenList.Add(StartNode);

	bool bPathFound = false;

	while (OpenList.Num() > 0)
	{
		// En düþük F-Cost'a sahip düðümü bul
		FPathNode* CurrentNode = OpenList[0];
		int32 CurrentIndex = 0;
		for (int32 i = 1; i < OpenList.Num(); i++)
		{
			if (OpenList[i]->FCost() < CurrentNode->FCost())
			{
				CurrentNode = OpenList[i];
				CurrentIndex = i;
			}
		}

		OpenList.RemoveAt(CurrentIndex);
		ClosedList.Add(CurrentNode);

		// Hedefe ulaþtýk mý?
		if (CurrentNode->Coordinates == End)
		{
			OutPath = ReconstructPath(CurrentNode);
			bPathFound = true;
			break;
		}

		// Komþularý iþle
		for (FIntPoint NeighborCoords : GetNeighbors(CurrentNode->Coordinates))
		{
			const FHexTileData* NeighborTileData = GridData.Find(NeighborCoords);

			// Geçerli bir karo mu? (Harita dýþýnda deðil VE yürünebilir)
			if (NeighborTileData == nullptr || NeighborTileData->Cost >= 9999)
			{
				continue; // Geçilemez (Dað/Su) veya harita dýþý
			}

			FPathNode TempNeighborNode(NeighborCoords);
			if (ClosedList.ContainsByPredicate([&](FPathNode* Node) { return *Node == TempNeighborNode; }))
			{
				continue; // Zaten iþlendi
			}

			int32 NewGCost = CurrentNode->GCost + NeighborTileData->Cost;

			FPathNode* NeighborNode = nullptr;
			for (FPathNode* Node : OpenList)
			{
				if (Node->Coordinates == NeighborCoords)
				{
					NeighborNode = Node;
					break;
				}
			}

			if (NeighborNode == nullptr)
			{
				NeighborNode = new FPathNode(NeighborCoords, CurrentNode, NewGCost, CalculateHeuristic(NeighborCoords, End));
				OpenList.Add(NeighborNode);
			}
			else if (NewGCost < NeighborNode->GCost)
			{
				NeighborNode->GCost = NewGCost;
				NeighborNode->Parent = CurrentNode;
			}
		}
	}

	// Belleði temizle
	for (FPathNode* Node : OpenList) { delete Node; }
	for (FPathNode* Node : ClosedList) { delete Node; }

	return bPathFound;
}

// 3. Yolu Yeniden Oluþturma
TArray<FIntPoint> UPathfindingComponent::ReconstructPath(FPathNode* EndNode)
{
	TArray<FIntPoint> Path;
	FPathNode* Current = EndNode;
	while (Current != nullptr)
	{
		Path.Add(Current->Coordinates);
		Current = Current->Parent;
	}
	Algo::Reverse(Path);
	return Path;
}

// 4. Heuristic (Tahmini Maliyet) Hesaplama
int32 UPathfindingComponent::CalculateHeuristic(FIntPoint A, FIntPoint B)
{
	// "Odd-Q" (pointy-top) için Eksenel Mesafe
	FVector2D ACube((float)A.X, (float)A.Y - ((float)A.X + (A.X & 1)) / 2.0f);
	FVector2D BCube((float)B.X, (float)B.Y - ((float)B.X + (B.X & 1)) / 2.0f);
	float dx = FMath::Abs(ACube.X - BCube.X);
	float dy = FMath::Abs(ACube.Y - BCube.Y);
	float dz = FMath::Abs((-ACube.X - ACube.Y) - (-BCube.X - BCube.Y));
	return (int32)((dx + dy + dz) / 2.0f);
}

// 5. Komþularý Bulma
TArray<FIntPoint> UPathfindingComponent::GetNeighbors(FIntPoint Coords)
{
	// "Odd-Q" (dikey, sivri uçlu) düzendeki 6 komþunun yön ofsetleri
	const bool bIsOddColumn = (Coords.X % 2 != 0);

	TArray<FIntPoint> Offsets;
	if (bIsOddColumn)
	{
		Offsets = {
			FIntPoint(0, -1), // N
			FIntPoint(1,  0), // NE
			FIntPoint(1,  1), // SE
			FIntPoint(0,  1), // S
			FIntPoint(-1,  1), // SW
			FIntPoint(-1,  0)  // NW
		};
	}
	else // Çift (Even) Sütun
	{
		Offsets = {
			FIntPoint(0, -1), // N
			FIntPoint(1, -1), // NE
			FIntPoint(1,  0), // SE
			FIntPoint(0,  1), // S
			FIntPoint(-1,  0), // SW
			FIntPoint(-1, -1)  // NW
		};
	}

	TArray<FIntPoint> Neighbors;
	for (const FIntPoint& Offset : Offsets)
	{
		Neighbors.Add(Coords + Offset);
	}
	return Neighbors;
}

// --- 6. YENÝ HARÝTA MATEMATÝK ARAÇLARI ---

FVector UPathfindingComponent::GridToWorld(FIntPoint GridCoord, float TileSize) const
{
	// NÝHAÝ DOÐRU "POINTY-TOP" (Sivri Uçlu) KONUMLANDIRMA
	// Kaynak: Red Blob Games (Offset Coordinates, Odd-Q Vertical Layout)

	const float q = (float)GridCoord.X; // col
	const float r = (float)GridCoord.Y; // row
	const bool bIsOddColumn = (GridCoord.X % 2 != 0);

	// HexWidth = sqrt(3) * TileSize
	// HexHeight = 2.0 * TileSize
	const float HexWidth = FMath::Sqrt(3.0f) * TileSize;
	const float HexHeight = 2.0f * TileSize;

	// X Konumu: Her sütun, geniþliðin 3/4'ü kadar aralýklýdýr.
	const float X = q * (HexWidth * 0.75f);

	// Y Konumu: Her satýr, tam yükseklik kadar aralýklýdýr.
	float Y = r * HexHeight;
	if (bIsOddColumn)
	{
		// Tek sütunlar yarým yükseklik kadar aþaðý kayar
		Y += HexHeight * 0.5f;
	}

	const float Z = 0.0f;
	return FVector(X, Y, Z);
}


FIntPoint UPathfindingComponent::WorldToGrid(const FVector& WorldLocation, float TileSize) const
{
	// NÝHAÝ DOÐRU "POINTY-TOP" (Sivri Uçlu) TIKLAMA
	// Kaynak: Red Blob Games (Pixel to Hex, Axial Coordinates)

	const float q_axial_frac = ((FMath::Sqrt(3.0f) / 3.0f) * WorldLocation.X - (1.0f / 3.0f) * WorldLocation.Y) / TileSize;
	const float r_axial_frac = ((2.0f / 3.0f) * WorldLocation.Y) / TileSize;

	// Eksenel -> Küp
	FVector3f CubeFrac = FVector3f(q_axial_frac, -q_axial_frac - r_axial_frac, r_axial_frac);

	// Yuvarla
	int32 RoundX = FMath::RoundToInt(CubeFrac.X);
	int32 RoundY = FMath::RoundToInt(CubeFrac.Y);
	int32 RoundZ = FMath::RoundToInt(CubeFrac.Z);

	// Düzelt
	FVector3f CubeDiff = FVector3f(FMath::Abs((float)RoundX - CubeFrac.X), FMath::Abs((float)RoundY - CubeFrac.Y), FMath::Abs((float)RoundZ - CubeFrac.Z));

	if (CubeDiff.X > CubeDiff.Y && CubeDiff.X > CubeDiff.Z)
	{
		RoundX = -RoundY - RoundZ;
	}
	else if (CubeDiff.Y > CubeDiff.Z)
	{
		RoundY = -RoundX - RoundZ;
	}
	else
	{
		RoundZ = -RoundX - RoundY;
	}

	// Küp -> "odd-q" (pointy-top)
	const int32 FinalCol = RoundX;
	const int32 FinalRow = RoundZ + (RoundX + (RoundX & 1)) / 2;

	return FIntPoint(FinalCol, FinalRow);
}

FIntPoint UPathfindingComponent::WorldToGrid_Custom(const FVector& LocalPos, float TileSize) const
{
	// Senin Blueprint deðerlerine göre:
	const float HexWidth = TileSize * FMath::Sqrt(3.0f);   // ? 173.205
	const float HexHeight = TileSize * 1.5f;                // = 150.0

	// Column = X hizasý
	int32 Col = FMath::RoundToInt(LocalPos.X / HexWidth);

	// Even / Odd column offset
	bool bOdd = (Col % 2 != 0);

	// Row = Y hizasý (Z tamamen önemsiz)
	float AdjustedY = LocalPos.Y;
	const float OddOffset = HexHeight * 0.5f;  // = 75 -> Blueprint ile birebir uyumlu

	if (bOdd)
	{
		AdjustedY -= OddOffset;
	}

	int32 Row = FMath::RoundToInt(AdjustedY / HexHeight);

	return FIntPoint(Col, Row);
}

