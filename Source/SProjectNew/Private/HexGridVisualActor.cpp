#include "Public/HexGridVisualActor.h"
#include "Components/SplineMeshComponent.h"
#include "Components/SplineComponent.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Engine/World.h"

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

    // ============================================================
    // A5.4 — PER-INSTANCE CUSTOM DATA (BiomeColor için 4 float)
    // ============================================================
    TArray<UInstancedStaticMeshComponent*> AllISMs = {
        GrassISM, DesertISM, MountainISM, WaterISM,
        OceanISM, LakeISM, CoastISM, PlainsISM,
        TundraISM, SnowISM, HillISM, CliffISM
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
        TundraISM, SnowISM, HillISM, CliffISM
    };

    for (UInstancedStaticMeshComponent* ISM : AllISMs)
    {
        if (!ISM) continue;

        // Her materyali Dynamic Instance yap
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
//  FONKSIYON: BuildFromGridData
// ============================================================

void AHexGridVisualActor::BuildFromGridData(const TArray<FHexTileData>& GridData)
{
    // Önce grid boyutlarýný ve mapping tablosunu doldur
    GridWidth = 0;
    GridHeight = 0;

    // Grid boyutunu bul (varsayým: GridData düzgün dolu)
    if (GridData.Num() > 0)
    {
        GridWidth = GridData.Last().Coordinates.X + 1;
        GridHeight = GridData.Last().Coordinates.Y + 1;
    }

    // Mapping tablosu
    CoordToIndex.SetNum(GridWidth * GridHeight);
    for (int32 i = 0; i < GridData.Num(); ++i)
    {
        const FIntPoint C = GridData[i].Coordinates;
        const int32 Linear = C.Y * GridWidth + C.X;
        CoordToIndex[Linear] = i;
    }

    UE_LOG(LogTemp, Warning, TEXT("BuildFromGridData CALLED, Num = %d"), GridData.Num());

    // Clear old instances
    GrassISM->ClearInstances();
    DesertISM->ClearInstances();
    MountainISM->ClearInstances();
    WaterISM->ClearInstances();

    // Yeni eklediklerimiz:
    if (OceanISM) OceanISM->ClearInstances();
    if (LakeISM)  LakeISM->ClearInstances();
    if (CoastISM) CoastISM->ClearInstances();
    if (PlainsISM) PlainsISM->ClearInstances();
    if (TundraISM) TundraISM->ClearInstances();
    if (SnowISM)  SnowISM->ClearInstances();
    if (HillISM) HillISM->ClearInstances();
    if (CliffISM) CliffISM->ClearInstances();




    UE_LOG(LogTemp, Warning, TEXT("Visual: Building %d tiles"), GridData.Num());

    for (const FHexTileData& Tile : GridData)
    {
        // -------------------------------------------------------
        // TILE TRANSFORM
        // -------------------------------------------------------
        FTransform T;
        T.SetLocation(Tile.WorldPosition);
        T.SetRotation(FQuat(FRotator(0.f, 0.f, 0.f)));
        T.SetScale3D(FVector(TileScale));

        // -------------------------------------------------------
        // 1) WATER TYPES (Ocean / Lake / Fallback Water)
        // -------------------------------------------------------
        if (Tile.TileType == ETileType::TT_Water)
        {
            if (Tile.bIsOcean && OceanISM)
            {
                OceanISM->AddInstance(T);
            }
            else if (Tile.bIsLake && LakeISM)
            {
                LakeISM->AddInstance(T);
            }
            else
            {
                WaterISM->AddInstance(T);
            }

            continue; // su tile'larý için aþaðýdaki kara kýsmýný geç
        }

        // -------------------------------------------------------
        // 2) COAST CHECK (Land tile plus water neighbor)
        // -------------------------------------------------------
        if (Tile.bIsCoast && CoastISM)
        {
            FVector Center = Tile.WorldPosition;

            float TW = TileScale * 173.f;
            float TH = TileScale * 200.f;

            for (int32 e = 0; e < 6; e++)
            {
                if (!Tile.CoastEdges.IsValidIndex(e) || !Tile.CoastEdges[e])
                    continue;

                FVector Loc = GetEdgeMidpoint(Center, e, TW, TH);

                FTransform FT;
                FT.SetLocation(Loc);

                // Coast mesh yüzeyi her zaman dýþarý dönük olmalý
                FRotator Rot(0.f, e * 60.f, 0.f);
                FT.SetRotation(FQuat(Rot));

                FT.SetScale3D(FVector(TileScale));

                CoastISM->AddInstance(FT);
            }

            continue;
        }


        // ---- HILL CHECK --------------------------------------------------
        if (Tile.bIsHill)
        {
            if (HillISM)
            {
                HillISM->AddInstance(T);
            }
            else
            {
                GrassISM->AddInstance(T); // fallback
            }
            continue;
        }

        // -------------------------------------------------------
        // 3) LAND TERRAIN (Grass / Desert / Mountain / Plains / Tundra / Snow)
        // -------------------------------------------------------
        switch (Tile.TileType)
        {
        case ETileType::TT_Grass:
            GrassISM->AddInstance(T);
            break;

        case ETileType::TT_Desert:
            DesertISM->AddInstance(T);
            break;

        case ETileType::TT_Mountain:
            MountainISM->AddInstance(T);
            break;

        case ETileType::TT_Plains:
            if (PlainsISM) PlainsISM->AddInstance(T);
            else GrassISM->AddInstance(T); // fallback
            break;

        case ETileType::TT_Tundra:
            if (TundraISM) TundraISM->AddInstance(T);
            else GrassISM->AddInstance(T); // fallback
            break;

        case ETileType::TT_Snow:
            if (SnowISM) SnowISM->AddInstance(T);
            else GrassISM->AddInstance(T); // fallback
            break;

        default:
            GrassISM->AddInstance(T);
            break;
        }

        // CLIFFS CHECK -------------------------------------------------------------------
        if (Tile.bHasCliff && CliffISM)
        {
            for (int32 e = 0; e < 6; e++)
            {
                if (!Tile.CliffEdges.IsValidIndex(e)) continue;
                if (!Tile.CliffEdges[e]) continue;

                // Hex midpoint
                FVector Center = Tile.WorldPosition;
                float TW = TileScale * 173.f;   // BaseTileWidth
                float TH = TileScale * 200.f;   // BaseTileHeight

                FVector Loc = GetEdgeMidpoint(Center, e, TW, TH);


                FTransform FT;
                FT.SetLocation(Loc);

                // Yönlendirme
                FRotator Rot(0.f, e * 60.f, 0.f);
                FT.SetRotation(FQuat(Rot));

                FT.SetScale3D(FVector(TileScale));

                CliffISM->AddInstance(FT);
            }
        }


        UE_LOG(LogTemp, Verbose,
            TEXT("Tile (%d,%d) -> WorldPos: %s"),
            Tile.Coordinates.X, Tile.Coordinates.Y,
            *Tile.WorldPosition.ToString());
    }

    UE_LOG(LogTemp, Warning, TEXT("Visual: Tile generation COMPLETE."));

    BuildRiversFromGridData(GridData, GridWidth, GridHeight, CoordToIndex);

}

void AHexGridVisualActor::BuildRiversFromGridData(
    const TArray<FHexTileData>& InGridData,
    int32 InGridWidth,
    int32 InGridHeight,
    const TArray<int32>& InCoordToIndex)
{
    if (!RiverMesh)
    {
        UE_LOG(LogTemp, Warning, TEXT("BuildRiversFromGridData: RiverMesh not assigned"));
        return;
    }

    UWorld* World = GetWorld();
    if (!World)
    {
        return;
    }

    // 1. Eski river spline'larýný temizle
    for (USplineMeshComponent* Comp : RiverSplineMeshes)
    {
        if (Comp)
        {
            Comp->DestroyComponent();
        }
    }
    RiverSplineMeshes.Empty();

    const float ZOffset = 5.f;

    // 2. Tüm tile'larý tara
    for (int32 Index = 0; Index < InGridData.Num(); ++Index)
    {
        const FHexTileData& Tile = InGridData[Index];
        const int32 X = Tile.Coordinates.X;
        const int32 Y = Tile.Coordinates.Y;

        const bool bIsOdd = (Y % 2 != 0);

        if (Tile.RiverEdges.Num() < 6)
            continue;

        // 3. Her edge'i kontrol et
        for (int32 Edge = 0; Edge < 6; ++Edge)
        {
            if (!Tile.RiverEdges[Edge])
                continue;

            int32 NX = X;
            int32 NY = Y;

            // Neighbor coordinate hesaplama
            if (bIsOdd)
            {
                switch (Edge)
                {
                case 0: NX = X + 1; NY = Y - 1; break;
                case 1: NX = X + 1; NY = Y;     break;
                case 2: NX = X + 1; NY = Y + 1; break;
                case 3: NX = X;     NY = Y + 1; break;
                case 4: NX = X - 1; NY = Y;     break;
                case 5: NX = X;     NY = Y - 1; break;
                }
            }
            else
            {
                switch (Edge)
                {
                case 0: NX = X;     NY = Y - 1; break;
                case 1: NX = X + 1; NY = Y;     break;
                case 2: NX = X;     NY = Y + 1; break;
                case 3: NX = X - 1; NY = Y + 1; break;
                case 4: NX = X - 1; NY = Y;     break;
                case 5: NX = X - 1; NY = Y - 1; break;
                }
            }

            if (NX < 0 || NY < 0 || NX >= InGridWidth || NY >= InGridHeight)
                continue;

            const int32 NLinear = NY * InGridWidth + NX;
            if (!InCoordToIndex.IsValidIndex(NLinear))
                continue;

            const int32 NeighborIndex = InCoordToIndex[NLinear];
            if (!InGridData.IsValidIndex(NeighborIndex))
                continue;

            // Bu segmenti iki kez çizmeyi önle
            if (Index >= NeighborIndex)
                continue;

            const FHexTileData& NTile = InGridData[NeighborIndex];

            //
            // ????????????????????????????????????????????????
            // A3: EDGE-BASED RIVER START–END HESABI
            // ????????????????????????????????????????????????
            //

            // Tile merkezleri
            FVector A = Tile.WorldPosition;
            FVector B = NTile.WorldPosition;

            // 2D yön
            FVector Dir = B - A;
            Dir.Z = 0.f;
            Dir.Normalize();

            // Mesafe
            const float FullDist = FVector::Dist2D(A, B);

            // Orta nokta
            const FVector Mid = (A + B) * 0.5f;

            // Nehir parçasýnýn uzunluðu -> merkeze oturmuþ, tam uzunluðun yarýsý
            const float SegmentHalf = FullDist * 0.25f;

            FVector Start = Mid - Dir * SegmentHalf;
            FVector End = Mid + Dir * SegmentHalf;

            // Hafif yukarý otur
            Start.Z = (A.Z + B.Z) * 0.5f + ZOffset;
            End.Z = Start.Z;

            //
            // ????????????????????????????????????????????????
            // SPLINE OLUÞTURMA
            // ????????????????????????????????????????????????
            //
            USplineMeshComponent* SplineComp =
                NewObject<USplineMeshComponent>(this, USplineMeshComponent::StaticClass());

            if (!SplineComp)
                continue;

            SplineComp->SetStaticMesh(RiverMesh);

            if (RiverMaterial)
            {
                SplineComp->SetMaterial(0, RiverMaterial);
            }

            SplineComp->SetMobility(EComponentMobility::Static);
            SplineComp->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepWorldTransform);
            SplineComp->RegisterComponent();

            FVector Tangent = (End - Start) * 0.5f;
            SplineComp->SetStartAndEnd(Start, Tangent, End, Tangent);

            RiverSplineMeshes.Add(SplineComp);
        }
    }

    UE_LOG(LogTemp, Warning,
        TEXT("BuildRiversFromGridData: Created %d spline river segments"),
        RiverSplineMeshes.Num());
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

