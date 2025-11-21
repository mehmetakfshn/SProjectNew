#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HexTileData.h"
#include "HexGridVisualActor.generated.h"

class USplineMeshComponent;


UCLASS()
class SPROJECTNEW_API AHexGridVisualActor : public AActor
{
    GENERATED_BODY()

public:
    AHexGridVisualActor();

protected:
    virtual void BeginPlay() override;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Hex Grid", meta = (AllowPrivateAccess = "true"))
    USceneComponent* Root;

    UPROPERTY()
    TArray<USplineMeshComponent*> RiverSplineMeshes;


public:

    // ============================================================
    //  MESH COMPONENTS (RENK / TERRAIN KATMANLARI)
    // ============================================================

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Hex Grid")
    UInstancedStaticMeshComponent* GrassISM;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Hex Grid")
    UInstancedStaticMeshComponent* DesertISM;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Hex Grid")
    UInstancedStaticMeshComponent* MountainISM;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Hex Grid")
    UInstancedStaticMeshComponent* WaterISM;
    
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "HexGrid|Visual", meta = (AllowPrivateAccess = "true"))
    UInstancedStaticMeshComponent* PlainsISM;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "HexGrid|Visual", meta = (AllowPrivateAccess = "true"))
    UInstancedStaticMeshComponent* TundraISM;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "HexGrid|Visual", meta = (AllowPrivateAccess = "true"))
    UInstancedStaticMeshComponent* SnowISM;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "HexGrid|Visual", meta = (AllowPrivateAccess = "true"))
    UInstancedStaticMeshComponent* CoastISM;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "HexGrid|Visual", meta = (AllowPrivateAccess = "true"))
    UInstancedStaticMeshComponent* LakeISM;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "HexGrid|Visual", meta = (AllowPrivateAccess = "true"))
    UInstancedStaticMeshComponent* OceanISM;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "HexGrid|Visual", meta = (AllowPrivateAccess = "true"))
    UInstancedStaticMeshComponent* HillISM;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "HexGrid|Visual", meta = (AllowPrivateAccess = "true"))
    UInstancedStaticMeshComponent* CliffISM;



    // RIVER VISUAL
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HexGrid|Visual|River")
    UStaticMesh* RiverMesh;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HexGrid|Visual|River")
    UMaterialInterface* RiverMaterial;

    // Grid boyutlarý (HexGridActor'dan alýnýr)
    UPROPERTY()
    int32 GridWidth;

    UPROPERTY()
    int32 GridHeight;

    // (Y * GridWidth + X) GridData Index
    UPROPERTY()
    TArray<int32> CoordToIndex;





    UFUNCTION(BlueprintCallable, Category = "Hex Grid")
    void BuildFromGridData(const TArray<FHexTileData>& GridData);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex Grid")
    float TileScale = 5.0f;

    void SetTileScale(float InScale)
    {
        TileScale = InScale;
    }

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bEnablePerInstanceBiome = true;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
    UInstancedStaticMeshComponent* BorderISM;



private:

    /** TileType'a göre doðru ISM bileþenini döner */
    UInstancedStaticMeshComponent* GetISMForType(ETileType TileType) const;

    void BuildRiversFromGridData(
        const TArray<FHexTileData>& InGridData,
        int32 InGridWidth,
        int32 InGridHeight,
        const TArray<int32>& InCoordToIndex );

    FVector GetEdgeMidpoint(const FVector& Center, int32 EdgeIndex, float TileWidth, float TileHeight) const;

};
