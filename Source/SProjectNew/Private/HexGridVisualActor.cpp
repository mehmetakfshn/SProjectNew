#include "Public/HexGridVisualActor.h"
#include "Components/SplineMeshComponent.h"
#include "Components/SplineComponent.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Engine/World.h"
#include "Public/HexGridComponent.h"
#include "CivGameMode.h"
#include "Kismet/GameplayStatics.h" 
#include "Public/HexGridActor.h"

// ============================================================
//  CONSTRUCTOR
// ============================================================

AHexGridVisualActor::AHexGridVisualActor()
{
    PrimaryActorTick.bCanEverTick = false;

    Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    RootComponent = Root;

    GrassISM = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("GrassISM"));
    DesertISM = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("DesertISM"));
    MountainISM = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("MountainISM"));
    WaterISM = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("WaterISM"));
    OceanISM = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("OceanISM"));
    LakeISM = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("LakeISM"));
    CoastISM = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("CoastISM"));
    PlainsISM = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("PlainsISM"));
    TundraISM = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("TundraISM"));
    SnowISM = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("SnowISM"));
    HillISM = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("HillISM"));
    CliffISM = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("CliffISM"));
    BorderISM = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("BorderISM"));

    // Attachments
    GrassISM->SetupAttachment(Root);
    DesertISM->SetupAttachment(Root);
    MountainISM->SetupAttachment(Root);
    WaterISM->SetupAttachment(Root);
    OceanISM->SetupAttachment(Root);
    LakeISM->SetupAttachment(Root);
    CoastISM->SetupAttachment(Root);
    PlainsISM->SetupAttachment(Root);
    TundraISM->SetupAttachment(Root);
    SnowISM->SetupAttachment(Root);
    HillISM->SetupAttachment(Root);
    CliffISM->SetupAttachment(Root);
    BorderISM->SetupAttachment(RootComponent);

    // ============================================================
    // PER-INSTANCE CUSTOM DATA (BiomeColor için 4 float)
    // ============================================================
    TArray<UInstancedStaticMeshComponent*> AllISMs = {
        GrassISM, DesertISM, MountainISM, WaterISM,
        OceanISM, LakeISM, CoastISM, PlainsISM,
        TundraISM, SnowISM, HillISM, CliffISM, BorderISM
    };

    for (UInstancedStaticMeshComponent* ISM : AllISMs)
    {
        if (!ISM) continue;
        // RGBA için 4 float per instance
        ISM->NumCustomDataFloats = 4;
    }
}

void AHexGridVisualActor::BeginPlay()
{
    Super::BeginPlay();

    // ============================================================
    // ISMler için MaterialInstanceDynamic oluþturma
    // ============================================================
    TArray<UInstancedStaticMeshComponent*> AllISMs = {
        GrassISM, DesertISM, MountainISM, WaterISM,
        OceanISM, LakeISM, CoastISM, PlainsISM,
        TundraISM, SnowISM, HillISM, CliffISM, BorderISM
    };

    for (UInstancedStaticMeshComponent* ISM : AllISMs)
    {
        if (!ISM) continue;

        int32 MatCount = ISM->GetNumMaterials();
        for (int32 i = 0; i < MatCount; i++)
        {
            UMaterialInstanceDynamic* MID = ISM->CreateDynamicMaterialInstance(i);
        }
    }
}

UInstancedStaticMeshComponent* AHexGridVisualActor::GetISMForType(ETileType TileType) const
{
    switch (TileType)
    {
    case ETileType::TT_Grass:    return GrassISM;
    case ETileType::TT_Desert:   return DesertISM;
    case ETileType::TT_Plains:   return PlainsISM;
    case ETileType::TT_Tundra:   return TundraISM;
    case ETileType::TT_Snow:     return SnowISM;
    case ETileType::TT_Mountain: return MountainISM;
    case ETileType::TT_Water:    return WaterISM;
    default:                     return GrassISM;
    }
}

// ============================================================
//  YENÝ YARDIMCI FONKSÝYON: AddTintedInstance
//  (Hem Build hem Update fonksiyonlarý bunu kullanacak)
// ============================================================
void AHexGridVisualActor::AddTintedInstance(UInstancedStaticMeshComponent* ISM, const FTransform& T, const FLinearColor& Color, int32 GridIndex)
{
    if (!ISM) return;

    // Instance ekle
    int32 NewIndex = ISM->AddInstance(T);

    // Renk verisi (Custom Data)
    ISM->SetCustomDataValue(NewIndex, 0, Color.R, false);
    ISM->SetCustomDataValue(NewIndex, 1, Color.G, false);
    ISM->SetCustomDataValue(NewIndex, 2, Color.B, true);

    // Haritaya kaydet: "Bu GridIndex (örn: 5. kare), þu ISM'in þu sýrasýnda (Index)"
    if (GridIndex >= 0)
    {
        VisualMap.Add(GridIndex, { ISM, NewIndex });
    }
}

// ============================================================
//  BuildFromGridData (Tüm haritayý sýfýrdan kurar)
// ============================================================
void AHexGridVisualActor::BuildFromGridData(const TArray<FHexTileData>& GridData)
{
    // 1) Eski verileri temizle
    VisualMap.Empty();

    if (GrassISM)    GrassISM->ClearInstances();
    if (DesertISM)   DesertISM->ClearInstances();
    if (MountainISM) MountainISM->ClearInstances();
    if (WaterISM)    WaterISM->ClearInstances();
    if (OceanISM)    OceanISM->ClearInstances();
    if (LakeISM)     LakeISM->ClearInstances();
    if (CoastISM)    CoastISM->ClearInstances();
    if (PlainsISM)   PlainsISM->ClearInstances();
    if (TundraISM)   TundraISM->ClearInstances();
    if (SnowISM)     SnowISM->ClearInstances();
    if (HillISM)     HillISM->ClearInstances();
    if (CliffISM)    CliffISM->ClearInstances();
    if (BorderISM)   BorderISM->ClearInstances();

    // -------------------------------------------------------
    // Grid boyutu ve mapping tablosu (Nehirler için gerekli)
    // -------------------------------------------------------
    GridWidth = 0;
    GridHeight = 0;

    if (GridData.Num() > 0)
    {
        GridWidth = GridData.Last().Coordinates.X + 1;
        GridHeight = GridData.Last().Coordinates.Y + 1;
    }

    CoordToIndex.SetNum(GridWidth * GridHeight);
    for (int32 i = 0; i < GridData.Num(); ++i)
    {
        const FIntPoint C = GridData[i].Coordinates;
        const int32 Linear = C.Y * GridWidth + C.X;
        if (CoordToIndex.IsValidIndex(Linear))
        {
            CoordToIndex[Linear] = i;
        }
    }

    UE_LOG(LogTemp, Warning, TEXT("Visual: Building %d tiles (Optimized)"), GridData.Num());

    // -------------------------------------------------------
    // 2) TILE LOOP
    // -------------------------------------------------------
    for (int32 i = 0; i < GridData.Num(); ++i)
    {
        const FHexTileData& Tile = GridData[i];

        // Transform
        FTransform T;
        T.SetLocation(Tile.WorldPosition);
        T.SetRotation(FQuat(FRotator(0.f, 0.f, 0.f)));
        T.SetScale3D(FVector(TileScale));

        if (Tile.WorldPosition.ContainsNaN()) continue;

        // Rengi Belirle (Civ veya Biome)
        FLinearColor RenderColor = Tile.BiomeColor;
        // Eðer oyun modunda Civ rengi istiyorsan buraya o mantýðý geri ekleyebilirsin.
        // Þimdilik MapEditor için BiomeColor kullanýyoruz.

        // Hangi ISM kullanýlacak?
        UInstancedStaticMeshComponent* TargetISM = nullptr;

        // -- WATER --
        if (Tile.TileType == ETileType::TT_Water)
        {
            if (Tile.bIsOcean) TargetISM = OceanISM;
            else if (Tile.bIsLake) TargetISM = LakeISM;
            else TargetISM = WaterISM;
        }
        // -- HILL --
        else if (Tile.bIsHill)
        {
            TargetISM = HillISM ? HillISM : GrassISM;
        }
        // -- NORMAL LAND --
        else
        {
            TargetISM = GetISMForType(Tile.TileType);
        }

        // Instance Ekle ve Kaydet
        if (TargetISM)
        {
            AddTintedInstance(TargetISM, T, RenderColor, i);
        }

        // -- COAST (Ekstra Mesh) --
        if (Tile.bIsCoast && CoastISM)
        {
            float TW = TileScale * 173.f;
            float TH = TileScale * 200.f;
            for (int32 e = 0; e < 6; e++)
            {
                if (Tile.CoastEdges.IsValidIndex(e) && Tile.CoastEdges[e])
                {
                    FVector Loc = GetEdgeMidpoint(Tile.WorldPosition, e, TW, TH);
                    FTransform FT;
                    FT.SetLocation(Loc);
                    FRotator Rot(0.f, e * 60.f, 0.f);
                    FT.SetRotation(FQuat(Rot));
                    FT.SetScale3D(FVector(TileScale));

                    // Coast þimdilik VisualMap'e dahil deðil (Update'de silinmez, üst üste binerse sorun olabilir)
                    // Ama zemin türü deðiþince coast zaten ya gider ya gelir.
                    // Basitlik için coast'u AddTintedInstance ile deðil direkt ekliyoruz:
                    int32 idx = CoastISM->AddInstance(FT);
                    CoastISM->SetCustomDataValue(idx, 0, RenderColor.R, false);
                    CoastISM->SetCustomDataValue(idx, 1, RenderColor.G, false);
                    CoastISM->SetCustomDataValue(idx, 2, RenderColor.B, true);
                }
            }
        }

        // -- CLIFF (Ekstra Mesh) --
        if (Tile.bHasCliff && CliffISM)
        {
            float TW = TileScale * 173.f;
            float TH = TileScale * 200.f;
            for (int32 e = 0; e < 6; e++)
            {
                if (Tile.CliffEdges.IsValidIndex(e) && Tile.CliffEdges[e])
                {
                    FVector Loc = GetEdgeMidpoint(Tile.WorldPosition, e, TW, TH);
                    FTransform FT;
                    FT.SetLocation(Loc);
                    FRotator Rot(0.f, e * 60.f, 0.f);
                    FT.SetRotation(FQuat(Rot));
                    FT.SetScale3D(FVector(TileScale));

                    int32 idx = CliffISM->AddInstance(FT);
                    CliffISM->SetCustomDataValue(idx, 0, RenderColor.R, false);
                    CliffISM->SetCustomDataValue(idx, 1, RenderColor.G, false);
                    CliffISM->SetCustomDataValue(idx, 2, RenderColor.B, true);
                }
            }
        }

        // -- BORDER (Ekstra Mesh) --
        if (BorderISM && Tile.OwnerCivIndex >= 0)
        {
            // (Border mantýðý buraya eklenebilir, þimdilik hýzlandýrma odaklý olduðumuz için atlýyorum)
        }
    }

    UE_LOG(LogTemp, Warning, TEXT("Visual: Tile generation COMPLETE. VisualMap Size: %d"), VisualMap.Num());

    BuildRiversFromGridData(GridData, GridWidth, GridHeight, CoordToIndex);
}

// ============================================================
//  [YENÝ] UpdateSingleTileVisual
//  Sadece tek bir kareyi günceller (Hýzlandýrma)
// ============================================================
void AHexGridVisualActor::UpdateSingleTileVisual(int32 GridIndex, const FHexTileData& NewData)
{
    // 1) Eski Görseli Bul ve Gizle
    if (VisualMap.Contains(GridIndex))
    {
        FVisualInstanceHandle OldHandle = VisualMap[GridIndex];
        UInstancedStaticMeshComponent* OldISM = OldHandle.ISMComp;
        int32 OldIdx = OldHandle.InstanceIndex;

        if (OldISM && OldISM->IsValidLowLevel())
        {
            // Silmek yerine Scale 0 yapýp gizliyoruz (Performans + Index Kaymasý önlemi)
            FTransform ZeroT;
            ZeroT.SetScale3D(FVector::ZeroVector);
            OldISM->UpdateInstanceTransform(OldIdx, ZeroT, true, true);
        }

        VisualMap.Remove(GridIndex);
    }

    // 2) Yeni Görseli Ekle
    FTransform NewT;
    NewT.SetLocation(NewData.WorldPosition);
    NewT.SetScale3D(FVector(TileScale)); // Önemli: TileScale'i doðru almalýyýz

    UInstancedStaticMeshComponent* NewISM = nullptr;

    // (Ayný ISM seçim mantýðý)
    if (NewData.TileType == ETileType::TT_Water)
    {
        if (NewData.bIsOcean) NewISM = OceanISM;
        else if (NewData.bIsLake) NewISM = LakeISM;
        else NewISM = WaterISM;
    }
    else if (NewData.bIsHill)
    {
        NewISM = HillISM ? HillISM : GrassISM;
    }
    else
    {
        NewISM = GetISMForType(NewData.TileType);
    }

    if (NewISM)
    {
        // Rengi ve yeni görseli ekle, VisualMap'e kaydet
        AddTintedInstance(NewISM, NewT, NewData.BiomeColor, GridIndex);
    }

    // Not: Coast ve Cliff güncellemeleri için þimdilik tam rebuild gerekebilir veya
    // onlar için de ayrý bir VisualMap tutulabilir. Ancak zemin deðiþimi anlýk olacaktýr.
}

void AHexGridVisualActor::BuildRiversFromGridData(
    const TArray<FHexTileData>& InGridData,
    int32 InGridWidth,
    int32 InGridHeight,
    const TArray<int32>& InCoordToIndex)
{
    if (!RiverMesh) return;

    UWorld* World = GetWorld();
    if (!World) return;

    // Eski river spline'larýný temizle
    for (USplineMeshComponent* Comp : RiverSplineMeshes)
    {
        if (Comp) Comp->DestroyComponent();
    }
    RiverSplineMeshes.Empty();

    const float ZOffset = 5.f;

    // Tüm tile'larý tara
    for (int32 Index = 0; Index < InGridData.Num(); ++Index)
    {
        const FHexTileData& Tile = InGridData[Index];

        // Nehir logic (Eski kodun aynýsý)
        if (Tile.RiverEdges.Num() < 6) continue;

        const int32 X = Tile.Coordinates.X;
        const int32 Y = Tile.Coordinates.Y;
        const bool bIsOdd = (Y % 2 != 0);

        for (int32 Edge = 0; Edge < 6; ++Edge)
        {
            if (!Tile.RiverEdges[Edge]) continue;

            int32 NX = X;
            int32 NY = Y;

            if (bIsOdd) {
                switch (Edge) {
                case 0: NX = X + 1; NY = Y - 1; break;
                case 1: NX = X + 1; NY = Y;     break;
                case 2: NX = X + 1; NY = Y + 1; break;
                case 3: NX = X;     NY = Y + 1; break;
                case 4: NX = X - 1; NY = Y;     break;
                case 5: NX = X;     NY = Y - 1; break;
                }
            }
            else {
                switch (Edge) {
                case 0: NX = X;     NY = Y - 1; break;
                case 1: NX = X + 1; NY = Y;     break;
                case 2: NX = X;     NY = Y + 1; break;
                case 3: NX = X - 1; NY = Y + 1; break;
                case 4: NX = X - 1; NY = Y;     break;
                case 5: NX = X - 1; NY = Y - 1; break;
                }
            }

            if (NX < 0 || NY < 0 || NX >= InGridWidth || NY >= InGridHeight) continue;

            const int32 NLinear = NY * InGridWidth + NX;
            if (!InCoordToIndex.IsValidIndex(NLinear)) continue;

            const int32 NeighborIndex = InCoordToIndex[NLinear];
            if (!InGridData.IsValidIndex(NeighborIndex)) continue;

            if (Index >= NeighborIndex) continue;

            const FHexTileData& NTile = InGridData[NeighborIndex];

            FVector A = Tile.WorldPosition;
            FVector B = NTile.WorldPosition;
            FVector Dir = B - A;
            Dir.Z = 0.f;
            Dir.Normalize();
            const float FullDist = FVector::Dist2D(A, B);
            const FVector Mid = (A + B) * 0.5f;
            const float SegmentHalf = FullDist * 0.25f;

            FVector Start = Mid - Dir * SegmentHalf;
            FVector End = Mid + Dir * SegmentHalf;
            Start.Z = (A.Z + B.Z) * 0.5f + ZOffset;
            End.Z = Start.Z;

            USplineMeshComponent* SplineComp = NewObject<USplineMeshComponent>(this, USplineMeshComponent::StaticClass());
            if (!SplineComp) continue;

            SplineComp->SetStaticMesh(RiverMesh);
            if (RiverMaterial) SplineComp->SetMaterial(0, RiverMaterial);
            SplineComp->SetMobility(EComponentMobility::Static);
            SplineComp->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepWorldTransform);
            SplineComp->RegisterComponent();

            FVector Tangent = (End - Start) * 0.5f;
            SplineComp->SetStartAndEnd(Start, Tangent, End, Tangent);
            RiverSplineMeshes.Add(SplineComp);
        }
    }
}

FVector AHexGridVisualActor::GetEdgeMidpoint(const FVector& Center, int32 EdgeIndex, float TileWidth, float TileHeight) const
{
    const float XOffset = TileWidth * 0.5f;
    const float YOffset = TileHeight * 0.25f;

    switch (EdgeIndex)
    {
    case 0: return Center + FVector(0, -YOffset, 0);
    case 1: return Center + FVector(XOffset, 0, 0);
    case 2: return Center + FVector(0, YOffset, 0);
    case 3: return Center + FVector(-XOffset, YOffset, 0);
    case 4: return Center + FVector(-XOffset, 0, 0);
    case 5: return Center + FVector(0, -YOffset, 0);
    }
    return Center;
}