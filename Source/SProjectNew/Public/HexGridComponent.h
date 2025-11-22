#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HexTileData.h"
#include "HexEnums.h"


class UTexture2D;

#include "HexGridComponent.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class SPROJECTNEW_API UHexGridComponent : public UActorComponent
{
    GENERATED_BODY()

public:

    UHexGridComponent();

    // ==============================
    // GRID PARAMETERS
    // ==============================

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex Grid")
    int32 GridWidth = 80;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex Grid")
    int32 GridHeight = 80;

    // ==============================
    // EARTH HEIGHTMAP SETTINGS
    // ==============================

    // Bu açýkken GenerateGrid, normal rastgele/flat grid yerine Earth heightmap'inden üretir.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Earth")
    bool bUseEarthHeightmap = false;

    // Equirectangular Earth heightmap (grayscale, R kanalý yükseklik gibi düþünülebilir)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Earth", meta = (EditCondition = "bUseEarthHeightmap"))
    UTexture2D* EarthHeightmapTexture = nullptr;

    // 0–1 arasý: bunun altý deniz
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Earth", meta = (EditCondition = "bUseEarthHeightmap", ClampMin = "0.0", ClampMax = "1.0"))
    float SeaLevelThreshold = 0.40f;

    // 0–1 arasý: bunun üstü dað
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Earth", meta = (EditCondition = "bUseEarthHeightmap", ClampMin = "0.0", ClampMax = "1.0"))
    float MountainThreshold = 0.75f;

    // Ekvatora yakýn enlemler çöl olsun diye kullanýlan eþik (derece)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Earth", meta = (EditCondition = "bUseEarthHeightmap", ClampMin = "0.0", ClampMax = "90.0"))
    float DesertLatitude = 25.0f;


    // ==============================
    // GRID DATA STORAGE
    // ==============================

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Hex Grid")
    TArray<FHexTileData> GridData;


    // ==============================
    // GRID GENERATION
    // ==============================

    /** GridData dizisini doldurur */
    UFUNCTION(BlueprintCallable, Category = "Hex Grid")
    void GenerateGrid();


    // ==============================
    // COORDINATE CONVERSION
    // ==============================

    /** Axial grid koordinatýný dünyadaki noktaya çevirir */
    UFUNCTION(BlueprintCallable, Category = "Hex Grid")
    FVector GridToWorld(int32 X, int32 Y) const;

    /** Dünya koordinatýndan grid koordinatýna çevirir */
    UFUNCTION(BlueprintCallable, Category = "Hex Grid")
    FIntPoint WorldToGrid(const FVector& WorldLocation) const;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float TileScale = 1.0f;

    // Grid'i her seferinde heightmap'ten üretmek yerine
    // bir kez SQL'e kaydedip sonra hep ordan okuyalým.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Earth|Database")
    bool bUseDatabaseCache = true;

    // Ýleride farklý map'ler olursa ayýrmak için kullanabiliriz.
    // Þimdilik tek Earth haritasý olduðundan sadece bilgi amaçlý.
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Earth|Database")
    FString MapName = TEXT("Earth_120x96");

    // Mesh'in gerçek ölçüleri (asla deðiþmez)
    static constexpr float BaseTileWidth = 173.f;
    static constexpr float BaseTileHeight = 200.f;

    // Ölçeklenmiþ deðerler
    float TileWidth;
    float TileHeight;

    void DetectLakesAndOceans();

    TArray<int32> FindRiverSources() const;
    void GenerateRiverFromSource(int32 StartIndex);
    void GenerateAllRivers();
    

    UPROPERTY(EditAnywhere, Category = "Terrain")
    UTexture2D* HeightmapTexture;

    /** 120x96 sabit editör grid'i oluþturur (tümü Grass, height=0). */
    UFUNCTION(BlueprintCallable, Category = "Hex Grid|Editor")
    void InitializeEditorGrid();

    /** Grid sýnýrlarý içinde mi? */
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Hex Grid|Editor")
    bool IsValidCoords(int32 X, int32 Y) const;

    /** Tek bir tile datasýný kopya olarak döner. */
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Hex Grid|Editor")
    FHexTileData GetTileData(int32 X, int32 Y) const;

    /** Sadece tile türünü deðiþtirir (Grass, Desert, Water vs.). */
    UFUNCTION(BlueprintCallable, Category = "Hex Grid|Editor")
    void SetTileTypeAt(int32 X, int32 Y, ETileType NewType);

    /** Yükseklik seviyesini doðrudan ayarlar. */
    UFUNCTION(BlueprintCallable, Category = "Hex Grid|Editor")
    void SetTileHeightLevel(int32 X, int32 Y, int32 NewHeightLevel);

    /** HeightLevel'i delta kadar artýrýr/azaltýr. */
    UFUNCTION(BlueprintCallable, Category = "Hex Grid|Editor")
    void AddTileHeightLevel(int32 X, int32 Y, int32 DeltaLevels);

    /** Belirli bir kenarda nehir var/yok ayarlama. */
    UFUNCTION(BlueprintCallable, Category = "Hex Grid|Editor")
    void SetRiverAtEdge(int32 X, int32 Y, ERiverEdge Edge, bool bHasRiver);

    /** HexGridActor üzerinden görsel rebuild talebi. */
    UFUNCTION(BlueprintCallable, Category = "Hex Grid|Editor")
    void RequestRebuildVisual();

    bool SaveGridToDatabase() const;

    bool SaveGridToDatabaseWithName(const FString& InMapName) const;

    bool LoadGridFromDatabaseWithName(const FString& MapName);

    // Belirli bir tile için BaseFood/BaseProduction/BaseGold hesaplar
    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Hex Grid|Yield")
    void GetTileYieldAt(int32 X, int32 Y, int32& OutFood, int32& OutProduction, int32& OutGold) const;

    // GridData içindeki tüm tile'larýn yield'lerini TileType + flag'lere göre yeniden hesaplar
    UFUNCTION(BlueprintCallable, Category = "Hex Grid|Yield")
    void RecalculateAllTileYields();


    TArray<FIntPoint> GetNeighbors(int32 X, int32 Y) const;

    UFUNCTION(BlueprintCallable, Category = "Hex Grid|Utils")
    TArray<FIntPoint> GetTilesInRadius(int32 CenterX, int32 CenterY, int32 Radius) const;

    #if WITH_EDITOR
        virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
    #endif






protected:

    virtual void BeginPlay() override;


private:

    // Earth heightmap'ten grid üretir
    void GenerateGridFromEarthHeightmap();

    // Yükseklik + enlem bilgisine göre tile tipi seçer
    ETileType ChooseTileTypeFromHeightAndLat(float Height01, int32 GridY) const;

    bool LoadGridFromDatabase();

    /** Bir hex tile merkezinin world offset'ini hesaplar */
    FVector GetHexOffset(int32 X, int32 Y) const;

    private:
        void CalculateBaseYieldForTile(FHexTileData& Tile) const;

    

    


};
