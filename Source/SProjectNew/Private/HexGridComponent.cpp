#include "Public/HexGridComponent.h"
#include "Public/HexGridActor.h"
#include "Public/HexGridVisualActor.h"
#include "Kismet/KismetMathLibrary.h"
#include "Public/CivGameInstance.h" 
#include "Kismet/GameplayStatics.h"
#include "Engine/Texture2D.h"
#include "Misc/Paths.h"
#include "sqlite3.h"

static const int NeighborToRiverEdge[6] =
{
    4, // 0 -> W
    1, // 1 -> E
    5, // 2 -> NW
    0, // 3 -> NE
    3, // 4 -> SW
    2  // 5 -> SE
};

static constexpr int32 EDITOR_GRID_WIDTH = 120;
static constexpr int32 EDITOR_GRID_HEIGHT = 96;
static constexpr int32 EDITOR_MAX_HEIGHT_LEVELS = 8;

static int32 ComputeTileCost(const FHexTileData& Tile)
{
    switch (Tile.TileType)
    {
    case ETileType::TT_Water:    return 9999;
    case ETileType::TT_Mountain: return 5;
    case ETileType::TT_Desert:   return Tile.bIsHill ? 4 : 2;
    case ETileType::TT_Tundra:   return Tile.bIsHill ? 3 : 2;
    case ETileType::TT_Snow:     return Tile.bIsHill ? 4 : 3;
    case ETileType::TT_Plains:   return Tile.bIsHill ? 3 : 1;
    case ETileType::TT_Grass:
    default:                     return Tile.bIsHill ? 2 : 1;
    }
}

static FLinearColor ComputeBiomeColor(ETileType Type)
{
    switch (Type)
    {
    case ETileType::TT_Grass:    return FLinearColor(0.32f, 0.55f, 0.22f);
    case ETileType::TT_Plains:   return FLinearColor(0.65f, 0.60f, 0.35f);
    case ETileType::TT_Desert:   return FLinearColor(0.85f, 0.75f, 0.50f);
    case ETileType::TT_Tundra:   return FLinearColor(0.55f, 0.55f, 0.50f);
    case ETileType::TT_Snow:     return FLinearColor(0.95f, 0.95f, 0.98f);
    case ETileType::TT_Water:    return FLinearColor(0.10f, 0.25f, 0.65f);
    case ETileType::TT_Mountain: return FLinearColor(0.45f, 0.45f, 0.45f);
    default:                     return FLinearColor::White;
    }
}

UHexGridComponent::UHexGridComponent()
{
    PrimaryComponentTick.bCanEverTick = false;
}

void UHexGridComponent::BeginPlay()
{
    Super::BeginPlay();
}

// ====================================================================
//  GRID GENERATION
// ====================================================================

void UHexGridComponent::GenerateGrid()
{
    TileWidth = BaseTileWidth * TileScale;
    TileHeight = BaseTileHeight * TileScale;

    GridData.Empty();
    GridData.Reserve(GridWidth * GridHeight);

    UE_LOG(LogTemp, Warning, TEXT("GenerateGrid(): TileWidth=%f TileHeight=%f"), TileWidth, TileHeight);
    UE_LOG(LogTemp, Warning, TEXT("GenerateGrid() CALLED"));
    UE_LOG(LogTemp, Warning, TEXT("GenerateGrid STARTED: %d x %d"), GridWidth, GridHeight);

    UCivGameInstance* GameInst = Cast<UCivGameInstance>(UGameplayStatics::GetGameInstance(this));
    FString TargetMapName = TEXT("");

    if (GameInst && !GameInst->MapToLoad.IsEmpty())
    {
        TargetMapName = GameInst->MapToLoad;
        UE_LOG(LogTemp, Warning, TEXT("GenerateGrid: GameInstance requested map '%s'"), *TargetMapName);
    }

    // Eðer özel bir map seçilmiþse onu yükle
    if (!TargetMapName.IsEmpty())
    {
        if (LoadGridFromDatabaseWithName(TargetMapName))
        {
            UE_LOG(LogTemp, Warning, TEXT("GenerateGrid: Map loaded successfully via Name!"));
            return;
        }
    }

    // 1) ÖNCE DATABASE CACHE'TEN YÜKLEMEYÝ DENE
    if (bUseDatabaseCache)
    {
        if (LoadGridFromDatabase())
        {
            UE_LOG(LogTemp, Warning, TEXT("GenerateGrid(): Loaded %d tiles from SQL cache"), GridData.Num());
            return;
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("GenerateGrid(): No valid SQL cache found -> Will generate and then save to DB"));
        }
    }

    // 2) EARTH HEIGHTMAP MODU
    if (bUseEarthHeightmap && EarthHeightmapTexture)
    {
        UE_LOG(LogTemp, Warning, TEXT("GenerateGrid(): Earth heightmap modunda çalýþýyor"));

        GenerateGridFromEarthHeightmap();

        UE_LOG(LogTemp, Warning, TEXT("GenerateGrid(): Earth heightmap tamamlandý (%d tiles)"), GridData.Num());

        if (bUseDatabaseCache)
        {
            SaveGridToDatabase();
        }
        return;
    }

    // 3) FALLBACK — NORMAL MODE (TÜM GRASS)
    for (int32 X = 0; X < GridWidth; X++)
    {
        for (int32 Y = 0; Y < GridHeight; Y++)
        {
            FVector WorldPos = GridToWorld(X, Y);

            FHexTileData Tile;
            Tile.Coordinates = FIntPoint(X, Y);
            Tile.TileType = ETileType::TT_Grass;
            Tile.WorldPosition = WorldPos;
            Tile.Cost = 1;

            GridData.Add(Tile);
        }
    }

    UE_LOG(LogTemp, Warning, TEXT("GenerateGrid DONE: %d tiles created (fallback flat grasses)"), GridData.Num());
}

// ====================================================================
//  GRID TO WORLD 
// ====================================================================

FVector UHexGridComponent::GridToWorld(int32 X, int32 Y) const
{
    float W = TileWidth;
    float H = TileHeight;

    float worldX = X * W;
    float worldY = Y * (H * 0.75f);

    if (Y % 2 != 0)
        worldX += W * 0.5f;

    return FVector(worldX, worldY, 0.f);
}

// ====================================================================
//  WORLD TO GRID
// ====================================================================

FIntPoint UHexGridComponent::WorldToGrid(const FVector& WorldLocation) const
{
    float W = TileWidth;
    float H = TileHeight;

    int approxY = FMath::RoundToInt(WorldLocation.Y / (H * 0.75f));

    float offsetX = (approxY % 2 != 0) ? W * 0.5f : 0.f;
    int approxX = FMath::RoundToInt((WorldLocation.X - offsetX) / W);

    return FIntPoint(approxX, approxY);
}

void UHexGridComponent::GenerateGridFromEarthHeightmap()
{
    if (!EarthHeightmapTexture)
    {
        UE_LOG(LogTemp, Error, TEXT("GenerateGridFromEarthHeightmap: EarthHeightmapTexture ayarlanmamis!"));
        return;
    }

    if (!EarthHeightmapTexture->GetPlatformData() ||
        EarthHeightmapTexture->GetPlatformData()->Mips.Num() == 0)
    {
        UE_LOG(LogTemp, Error, TEXT("GenerateGridFromEarthHeightmap: Gecersiz texture (PlatformData veya Mips yok)"));
        return;
    }

    FTexture2DMipMap& Mip = EarthHeightmapTexture->GetPlatformData()->Mips[0];
    const int32 TexWidth = Mip.SizeX;
    const int32 TexHeight = Mip.SizeY;

    FByteBulkData* RawImageData = &Mip.BulkData;
    FColor* Pixels = static_cast<FColor*>(RawImageData->Lock(LOCK_READ_ONLY));
    if (!Pixels)
    {
        UE_LOG(LogTemp, Error, TEXT("GenerateGridFromEarthHeightmap: Piksel datasi okunamadi"));
        return;
    }

    constexpr int32 MaxHeightLevels = 8;
    constexpr float HeightStep = 100.0f;

    GridData.Empty();
    GridData.Reserve(GridWidth * GridHeight);

    for (int32 Y = 0; Y < GridHeight; ++Y)
    {
        for (int32 X = 0; X < GridWidth; ++X)
        {
            const float U = (GridWidth > 1) ? (float)X / (float)(GridWidth - 1) : 0.f;
            const float V = (GridHeight > 1) ? (float)Y / (float)(GridHeight - 1) : 0.f;

            const int32 PixelX = FMath::Clamp(FMath::RoundToInt(U * (TexWidth - 1)), 0, TexWidth - 1);
            const int32 PixelY = FMath::Clamp(FMath::RoundToInt(V * (TexHeight - 1)), 0, TexHeight - 1);

            const FColor Pixel = Pixels[PixelY * TexWidth + PixelX];
            const float Height01 = static_cast<float>(Pixel.R) / 255.0f;

            const ETileType TileType = ChooseTileTypeFromHeightAndLat(Height01, Y);

            int32 HeightLevel = 0;
            float WorldZ = 0.f;

            if (TileType != ETileType::TT_Water)
            {
                HeightLevel = FMath::Clamp(
                    FMath::RoundToInt(Height01 * MaxHeightLevels),
                    0,
                    MaxHeightLevels
                );
                WorldZ = HeightLevel * HeightStep;
            }

            bool bIsHill = false;
            if (TileType != ETileType::TT_Water &&
                TileType != ETileType::TT_Mountain &&
                HeightLevel >= 1 && HeightLevel <= 3)
            {
                bIsHill = true;
            }

            auto GetBiomeColor = [&](ETileType Type) -> FLinearColor
                {
                    switch (Type)
                    {
                    case ETileType::TT_Grass:     return FLinearColor(0.32f, 0.55f, 0.22f);
                    case ETileType::TT_Plains:    return FLinearColor(0.65f, 0.60f, 0.35f);
                    case ETileType::TT_Desert:    return FLinearColor(0.85f, 0.75f, 0.50f);
                    case ETileType::TT_Tundra:    return FLinearColor(0.55f, 0.55f, 0.50f);
                    case ETileType::TT_Snow:      return FLinearColor(0.95f, 0.95f, 0.98f);
                    case ETileType::TT_Mountain:  return FLinearColor(0.40f, 0.40f, 0.40f);
                    case ETileType::TT_Water:     return FLinearColor(0.0f, 0.25f, 0.45f);
                    default:                      return FLinearColor::White;
                    }
                };

            FHexTileData Tile;
            Tile.Coordinates = FIntPoint(X, Y);
            Tile.TileType = TileType;
            Tile.Height01 = Height01;
            Tile.HeightLevel = HeightLevel;
            Tile.RiverEdges.Init(false, 6);
            Tile.bIsHill = bIsHill;
            Tile.BiomeColor = GetBiomeColor(TileType);

            FVector WorldPos = GridToWorld(X, Y);
            WorldPos.Z += WorldZ;
            Tile.WorldPosition = WorldPos;

            switch (TileType)
            {
            case ETileType::TT_Water:
                Tile.Cost = 9999;
                break;
            case ETileType::TT_Mountain:
                Tile.Cost = 5;
                break;
            case ETileType::TT_Desert:
                Tile.Cost = Tile.bIsHill ? 4 : 2;
                break;
            default:
                Tile.Cost = Tile.bIsHill ? 3 : 1;
                break;
            }
            GridData.Add(Tile);
        }
    }

    RawImageData->Unlock();

    // COAST DETECTION
    for (FHexTileData& Tile : GridData)
    {
        if (Tile.TileType == ETileType::TT_Water)
            continue;

        const int32 X = Tile.Coordinates.X;
        const int32 Y = Tile.Coordinates.Y;

        Tile.CoastEdges.Init(false, 6);

        TArray<FIntPoint> Neighbors = GetNeighbors(X, Y);

        for (int32 n = 0; n < Neighbors.Num(); n++)
        {
            const FIntPoint& P = Neighbors[n];
            const int32 NIndex = P.Y * GridWidth + P.X;

            if (GridData[NIndex].TileType == ETileType::TT_Water)
            {
                Tile.bIsCoast = true;
                Tile.CoastEdges[n] = true;
            }
        }
    }

    GenerateAllRivers();
    DetectLakesAndOceans();

    UE_LOG(LogTemp, Warning, TEXT("GenerateGridFromEarthHeightmap: %d x %d heightmap'ten %d tile üretildi"),
        TexWidth, TexHeight, GridData.Num());

    // CLIFF DETECTION
    for (int32 i = 0; i < GridData.Num(); i++)
    {
        FHexTileData& Tile = GridData[i];
        Tile.CliffEdges.Init(false, 6);
        Tile.bHasCliff = false;

        const int32 X = Tile.Coordinates.X;
        const int32 Y = Tile.Coordinates.Y;

        TArray<FIntPoint> Neighbors = GetNeighbors(X, Y);

        for (int32 n = 0; n < Neighbors.Num(); n++)
        {
            const FIntPoint& P = Neighbors[n];
            int32 nIndex = P.Y * GridWidth + P.X;

            if (!GridData.IsValidIndex(nIndex))
                continue;

            const FHexTileData& NTile = GridData[nIndex];

            int HeightDiff = FMath::Abs(Tile.HeightLevel - NTile.HeightLevel);

            bool bInvalidPair =
                (Tile.TileType == ETileType::TT_Water && NTile.TileType != ETileType::TT_Water) ||
                (Tile.TileType != ETileType::TT_Water && NTile.TileType == ETileType::TT_Water);

            if (!bInvalidPair && HeightDiff >= 2)
            {
                Tile.CliffEdges[n] = true;
                Tile.bHasCliff = true;
            }
        }
    }
    RecalculateAllTileYields();
}

bool UHexGridComponent::SaveGridToDatabase() const
{
    FString DBPath = FPaths::ProjectContentDir() / TEXT("Data/GameData.db");
    sqlite3* DB = nullptr;

    int Result = sqlite3_open(TCHAR_TO_UTF8(*DBPath), &DB);
    if (Result != SQLITE_OK)
    {
        UE_LOG(LogTemp, Error, TEXT("[Tiles] SQLite open FAILED: %s"), *FString(sqlite3_errmsg(DB)));
        return false;
    }

    char* ErrMsg = nullptr;

    const char* CreateSQL =
        "CREATE TABLE IF NOT EXISTS Tiles ("
        " TileID INTEGER PRIMARY KEY AUTOINCREMENT,"
        " X INTEGER,"
        " Y INTEGER,"
        " TileType TEXT,"
        " Resource TEXT,"
        " OwnerCiv INTEGER,"
        " Improvement TEXT,"
        " Cost INTEGER,"
        " Height01 REAL,"
        " HeightLevel INTEGER,"
        " WorldZ REAL,"
        " River_NE INTEGER DEFAULT 0,"
        " River_E  INTEGER DEFAULT 0,"
        " River_SE INTEGER DEFAULT 0,"
        " River_SW INTEGER DEFAULT 0,"
        " River_W  INTEGER DEFAULT 0,"
        " River_NW INTEGER DEFAULT 0"
        ");";

    Result = sqlite3_exec(DB, CreateSQL, nullptr, nullptr, &ErrMsg);
    if (Result != SQLITE_OK)
    {
        UE_LOG(LogTemp, Error, TEXT("[Tiles] CREATE TABLE FAILED: %s"), *FString(ErrMsg));
        sqlite3_free(ErrMsg);
        sqlite3_close(DB);
        return false;
    }

    Result = sqlite3_exec(DB, "DELETE FROM Tiles;", nullptr, nullptr, &ErrMsg);
    if (Result != SQLITE_OK)
    {
        UE_LOG(LogTemp, Error, TEXT("[Tiles] DELETE FAILED: %s"), *FString(ErrMsg));
        sqlite3_free(ErrMsg);
        sqlite3_close(DB);
        return false;
    }

    sqlite3_exec(DB, "BEGIN TRANSACTION;", nullptr, nullptr, nullptr);

    const char* InsertSQL =
        "INSERT INTO Tiles (X, Y, TileType, Resource, OwnerCiv, Improvement, Cost, "
        " Height01, HeightLevel, WorldZ, "
        " River_NE, River_E, River_SE, River_SW, River_W, River_NW) "
        "VALUES (?, ?, ?, '', 0, '', ?, ?, ?, ?, ?, ?, ?, ?, ?, ?);";

    sqlite3_stmt* Stmt = nullptr;
    Result = sqlite3_prepare_v2(DB, InsertSQL, -1, &Stmt, nullptr);
    if (Result != SQLITE_OK)
    {
        UE_LOG(LogTemp, Error, TEXT("[Tiles] prepare_v2 FAILED: %s"), *FString(sqlite3_errmsg(DB)));
        sqlite3_close(DB);
        return false;
    }

    auto TileTypeToString = [](ETileType Type) -> FString
        {
            switch (Type)
            {
            case ETileType::TT_Grass:    return TEXT("Grass");
            case ETileType::TT_Desert:   return TEXT("Desert");
            case ETileType::TT_Mountain: return TEXT("Mountain");
            case ETileType::TT_Water:    return TEXT("Water");
            case ETileType::TT_Plains:   return TEXT("Plains");
            case ETileType::TT_Tundra:   return TEXT("Tundra");
            case ETileType::TT_Snow:     return TEXT("Snow");
            default:                     return TEXT("Grass");
            }
        };

    for (const FHexTileData& Tile : GridData)
    {
        sqlite3_reset(Stmt);
        sqlite3_clear_bindings(Stmt);

        FString TypeStr = TileTypeToString(Tile.TileType);

        sqlite3_bind_int(Stmt, 1, Tile.Coordinates.X);
        sqlite3_bind_int(Stmt, 2, Tile.Coordinates.Y);
        sqlite3_bind_text(Stmt, 3, TCHAR_TO_UTF8(*TypeStr), -1, SQLITE_TRANSIENT);
        sqlite3_bind_int(Stmt, 4, Tile.Cost);
        sqlite3_bind_double(Stmt, 5, Tile.Height01);
        sqlite3_bind_int(Stmt, 6, Tile.HeightLevel);
        sqlite3_bind_double(Stmt, 7, Tile.WorldPosition.Z);

        sqlite3_bind_int(Stmt, 8, Tile.RiverEdges.IsValidIndex(0) ? (Tile.RiverEdges[0] ? 1 : 0) : 0);
        sqlite3_bind_int(Stmt, 9, Tile.RiverEdges.IsValidIndex(1) ? (Tile.RiverEdges[1] ? 1 : 0) : 0);
        sqlite3_bind_int(Stmt, 10, Tile.RiverEdges.IsValidIndex(2) ? (Tile.RiverEdges[2] ? 1 : 0) : 0);
        sqlite3_bind_int(Stmt, 11, Tile.RiverEdges.IsValidIndex(3) ? (Tile.RiverEdges[3] ? 1 : 0) : 0);
        sqlite3_bind_int(Stmt, 12, Tile.RiverEdges.IsValidIndex(4) ? (Tile.RiverEdges[4] ? 1 : 0) : 0);
        sqlite3_bind_int(Stmt, 13, Tile.RiverEdges.IsValidIndex(5) ? (Tile.RiverEdges[5] ? 1 : 0) : 0);

        Result = sqlite3_step(Stmt);
        if (Result != SQLITE_DONE)
        {
            UE_LOG(LogTemp, Error, TEXT("[Tiles] INSERT FAILED: %s"), *FString(sqlite3_errmsg(DB)));
        }
    }

    sqlite3_finalize(Stmt);
    sqlite3_exec(DB, "COMMIT;", nullptr, nullptr, nullptr);
    sqlite3_close(DB);

    UE_LOG(LogTemp, Warning, TEXT("[Tiles] Saved %d tiles to DB (%s)"), GridData.Num(), *DBPath);
    return true;
}

bool UHexGridComponent::LoadGridFromDatabase()
{
    FString DBPath = FPaths::ProjectContentDir() / TEXT("Data/GameData.db");
    sqlite3* DB = nullptr;

    int Result = sqlite3_open(TCHAR_TO_UTF8(*DBPath), &DB);
    if (Result != SQLITE_OK)
    {
        UE_LOG(LogTemp, Error, TEXT("[Tiles] SQLite open FAILED (Load): %s"), *FString(sqlite3_errmsg(DB)));
        return false;
    }

    char* ErrMsg = nullptr;
    int TileCount = 0;

    auto CountCallback = [](void* Data, int ColCount, char** ColValues, char** ColNames) -> int
        {
            if (ColCount > 0 && ColValues[0])
            {
                int* OutCount = (int*)Data;
                *OutCount = FCString::Atoi(UTF8_TO_TCHAR(ColValues[0]));
            }
            return 0;
        };

    Result = sqlite3_exec(DB, "SELECT COUNT(*) FROM Tiles;", CountCallback, &TileCount, &ErrMsg);

    if (Result != SQLITE_OK)
    {
        UE_LOG(LogTemp, Error, TEXT("[Tiles] COUNT FAILED: %s"), *FString(ErrMsg));
        sqlite3_free(ErrMsg);
        sqlite3_close(DB);
        return false;
    }

    if (TileCount <= 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("[Tiles] No rows in Tiles table, skipping load."));
        sqlite3_close(DB);
        return false;
    }

    const char* SelectSQL =
        "SELECT X, Y, TileType, Cost, Height01, HeightLevel, WorldZ, "
        " River_NE, River_E, River_SE, River_SW, River_W, River_NW "
        "FROM Tiles;";

    sqlite3_stmt* Stmt = nullptr;
    Result = sqlite3_prepare_v2(DB, SelectSQL, -1, &Stmt, nullptr);
    if (Result != SQLITE_OK)
    {
        UE_LOG(LogTemp, Error, TEXT("[Tiles] SELECT prepare_v2 FAILED: %s"), *FString(sqlite3_errmsg(DB)));
        sqlite3_close(DB);
        return false;
    }

    GridData.Empty();

    auto StringToTileType = [](const FString& Str) -> ETileType
        {
            if (Str.Equals(TEXT("Water"), ESearchCase::IgnoreCase)) return ETileType::TT_Water;
            if (Str.Equals(TEXT("Desert"), ESearchCase::IgnoreCase)) return ETileType::TT_Desert;
            if (Str.Equals(TEXT("Mountain"), ESearchCase::IgnoreCase)) return ETileType::TT_Mountain;
            if (Str.Equals(TEXT("Plains"), ESearchCase::IgnoreCase)) return ETileType::TT_Plains;
            if (Str.Equals(TEXT("Tundra"), ESearchCase::IgnoreCase)) return ETileType::TT_Tundra;
            if (Str.Equals(TEXT("Snow"), ESearchCase::IgnoreCase)) return ETileType::TT_Snow;
            return ETileType::TT_Grass;
        };

    while (sqlite3_step(Stmt) == SQLITE_ROW)
    {
        int X = sqlite3_column_int(Stmt, 0);
        int Y = sqlite3_column_int(Stmt, 1);
        const char* TypeText = (const char*)sqlite3_column_text(Stmt, 2);
        int Cost = sqlite3_column_int(Stmt, 3);
        float Height01 = static_cast<float>(sqlite3_column_double(Stmt, 4));
        int32 HeightLevel = sqlite3_column_int(Stmt, 5);
        float WorldZ = static_cast<float>(sqlite3_column_double(Stmt, 6));

        int River_NE = sqlite3_column_int(Stmt, 7);
        int River_E = sqlite3_column_int(Stmt, 8);
        int River_SE = sqlite3_column_int(Stmt, 9);
        int River_SW = sqlite3_column_int(Stmt, 10);
        int River_W = sqlite3_column_int(Stmt, 11);
        int River_NW = sqlite3_column_int(Stmt, 12);

        FString TypeStr = TypeText ? UTF8_TO_TCHAR(TypeText) : TEXT("Grass");
        ETileType TileType = StringToTileType(TypeStr);

        FHexTileData Tile;
        Tile.Coordinates = FIntPoint(X, Y);
        Tile.TileType = TileType;
        Tile.Height01 = Height01;
        Tile.HeightLevel = HeightLevel;

        FVector WorldPos = GridToWorld(X, Y);
        WorldPos.Z = WorldZ;
        Tile.WorldPosition = WorldPos;
        Tile.Cost = (Cost > 0) ? Cost : 1;

        Tile.RiverEdges.SetNum(6);
        Tile.RiverEdges[0] = (River_NE != 0);
        Tile.RiverEdges[1] = (River_E != 0);
        Tile.RiverEdges[2] = (River_SE != 0);
        Tile.RiverEdges[3] = (River_SW != 0);
        Tile.RiverEdges[4] = (River_W != 0);
        Tile.RiverEdges[5] = (River_NW != 0);

        GridData.Add(Tile);
    }

    sqlite3_finalize(Stmt);
    sqlite3_close(DB);

    UE_LOG(LogTemp, Warning, TEXT("[Tiles] Loaded %d tiles from DB."), GridData.Num());

    for (FHexTileData& Tile : GridData)
    {
        Tile.CliffEdges.Init(false, 6);
        Tile.bHasCliff = false;
        int32 X = Tile.Coordinates.X;
        int32 Y = Tile.Coordinates.Y;
        TArray<FIntPoint> Neighbors = GetNeighbors(X, Y);

        for (int32 n = 0; n < Neighbors.Num(); n++)
        {
            const FIntPoint& P = Neighbors[n];
            int32 nIndex = P.Y * GridWidth + P.X;
            if (!GridData.IsValidIndex(nIndex)) continue;

            const FHexTileData& NTile = GridData[nIndex];
            int HeightDiff = FMath::Abs(Tile.HeightLevel - NTile.HeightLevel);
            bool bInvalidPair = (Tile.TileType == ETileType::TT_Water && NTile.TileType != ETileType::TT_Water) || (Tile.TileType != ETileType::TT_Water && NTile.TileType == ETileType::TT_Water);

            if (!bInvalidPair && HeightDiff >= 2)
            {
                Tile.CliffEdges[n] = true;
                Tile.bHasCliff = true;
            }
        }
    }

    for (FHexTileData& Tile : GridData)
    {
        Tile.bIsHill = false;
        if (Tile.TileType != ETileType::TT_Water && Tile.TileType != ETileType::TT_Mountain && Tile.HeightLevel >= 1 && Tile.HeightLevel <= 3)
        {
            Tile.bIsHill = true;
        }

        switch (Tile.TileType)
        {
        case ETileType::TT_Water:    Tile.Cost = 9999; break;
        case ETileType::TT_Mountain: Tile.Cost = 5; break;
        case ETileType::TT_Desert:   Tile.Cost = Tile.bIsHill ? 4 : 2; break;
        default:                     Tile.Cost = Tile.bIsHill ? 3 : 1; break;
        }
    }

    RecalculateAllTileYields();
    return GridData.Num() > 0;
}

ETileType UHexGridComponent::ChooseTileTypeFromHeightAndLat(float Height01, int32 GridY) const
{
    const float Lat01 = (GridHeight > 1) ? static_cast<float>(GridY) / static_cast<float>(GridHeight - 1) : 0.5f;
    const float LatAbs = FMath::Abs(Lat01 - 0.5f) * 2.0f;
    float Temperature = 1.0f - LatAbs;
    Temperature -= Height01 * 0.35f;
    Temperature = FMath::Clamp(Temperature, 0.0f, 1.0f);

    if (Height01 < SeaLevelThreshold) return ETileType::TT_Water;
    if (Height01 >= MountainThreshold)
    {
        if (Temperature < 0.25f) return ETileType::TT_Snow;
        return ETileType::TT_Mountain;
    }

    const float DesertBand = DesertLatitude / 90.0f;
    if (Temperature > 0.60f && LatAbs < DesertBand) return ETileType::TT_Desert;
    if (Temperature < 0.18f) return ETileType::TT_Snow;
    if (Temperature < 0.32f) return ETileType::TT_Tundra;
    if (Height01 > 0.55f) return ETileType::TT_Grass;

    return ETileType::TT_Plains;
}

TArray<FIntPoint> UHexGridComponent::GetNeighbors(int32 X, int32 Y) const
{
    TArray<FIntPoint> Result;
    const bool bIsOdd = (Y % 2 != 0);

    if (bIsOdd)
    {
        Result.Add(FIntPoint(X - 1, Y));
        Result.Add(FIntPoint(X + 1, Y));
        Result.Add(FIntPoint(X, Y - 1));
        Result.Add(FIntPoint(X + 1, Y - 1));
        Result.Add(FIntPoint(X, Y + 1));
        Result.Add(FIntPoint(X + 1, Y + 1));
    }
    else
    {
        Result.Add(FIntPoint(X - 1, Y));
        Result.Add(FIntPoint(X + 1, Y));
        Result.Add(FIntPoint(X - 1, Y - 1));
        Result.Add(FIntPoint(X, Y - 1));
        Result.Add(FIntPoint(X - 1, Y + 1));
        Result.Add(FIntPoint(X, Y + 1));
    }

    Result.RemoveAll([this](const FIntPoint& P)
        {
            return P.X < 0 || P.Y < 0 || P.X >= GridWidth || P.Y >= GridHeight;
        });

    return Result;
}

void UHexGridComponent::InitializeEditorGrid()
{
    GridWidth = EDITOR_GRID_WIDTH;
    GridHeight = EDITOR_GRID_HEIGHT;

    GridData.Empty();
    GridData.SetNum(GridWidth * GridHeight);

    for (int32 Y = 0; Y < GridHeight; ++Y)
    {
        for (int32 X = 0; X < GridWidth; ++X)
        {
            const int32 Index = Y * GridWidth + X;
            FHexTileData& Tile = GridData[Index];
            Tile.Coordinates = FIntPoint(X, Y);
            Tile.TileType = ETileType::TT_Grass;
            Tile.HeightLevel = 0;
            Tile.Height01 = 0.f;
            Tile.WorldPosition = GridToWorld(X, Y);
            Tile.WorldPosition.Z = 0.f;
            Tile.bIsHill = false;
            Tile.bIsCoast = false;
            Tile.bIsLake = false;
            Tile.bIsOcean = false;
            Tile.RiverEdges.Init(false, 6);
            Tile.CoastEdges.Init(false, 6);
            Tile.BiomeColor = ComputeBiomeColor(Tile.TileType);
            Tile.Cost = ComputeTileCost(Tile);
        }
    }
    UE_LOG(LogTemp, Log, TEXT("InitializeEditorGrid: %dx%d grid olusturuldu."), GridWidth, GridHeight);
    RecalculateAllTileYields();
}

bool UHexGridComponent::IsValidCoords(int32 X, int32 Y) const
{
    return (X >= 0 && Y >= 0 && X < GridWidth && Y < GridHeight);
}

FHexTileData UHexGridComponent::GetTileData(int32 X, int32 Y) const
{
    if (!IsValidCoords(X, Y)) return FHexTileData();
    const int32 Index = Y * GridWidth + X;
    if (!GridData.IsValidIndex(Index)) return FHexTileData();
    return GridData[Index];
}

// =================================================================================
// [GÜNCELLEME - OPTÝMÝZASYON]
// Zemin boyama iþlemi artýk anlýk çalýþacak (Tüm map'i rebuild etmeden)
// =================================================================================
void UHexGridComponent::SetTileTypeAt(int32 X, int32 Y, ETileType NewType)
{
    if (!IsValidCoords(X, Y)) return;
    const int32 Index = Y * GridWidth + X;
    if (!GridData.IsValidIndex(Index)) return;

    FHexTileData& Tile = GridData[Index];
    Tile.TileType = NewType;
    Tile.bIsHill = (NewType != ETileType::TT_Water && NewType != ETileType::TT_Mountain && Tile.HeightLevel > 0);
    Tile.BiomeColor = ComputeBiomeColor(NewType);
    Tile.Cost = ComputeTileCost(Tile);

    // --- HIZLI GÖRSEL GÜNCELLEME ---
    AHexGridActor* GridActor = Cast<AHexGridActor>(GetOwner());
    if (GridActor)
    {
        AActor* VisualActor = UGameplayStatics::GetActorOfClass(GetWorld(), AHexGridVisualActor::StaticClass());
        AHexGridVisualActor* HexVisual = Cast<AHexGridVisualActor>(VisualActor);

        if (HexVisual)
        {
            // Tek kareyi anýnda güncelle
            HexVisual->UpdateSingleTileVisual(Index, Tile);
        }
        else
        {
            // Visual bulunamazsa fallback
            GridActor->RebuildVisual();
        }
    }
}

// =================================================================================
// [GÜNCELLEME - OPTÝMÝZASYON]
// Yükseklik ayarý (Sað Týk) da artýk anlýk çalýþacak!
// =================================================================================
void UHexGridComponent::SetTileHeightLevel(int32 X, int32 Y, int32 NewHeightLevel)
{
    if (!IsValidCoords(X, Y)) return;
    const int32 Index = Y * GridWidth + X;
    if (!GridData.IsValidIndex(Index)) return;

    FHexTileData& Tile = GridData[Index];
    const int32 Clamped = FMath::Clamp(NewHeightLevel, 0, EDITOR_MAX_HEIGHT_LEVELS);
    Tile.HeightLevel = Clamped;
    Tile.Height01 = static_cast<float>(Clamped) / static_cast<float>(EDITOR_MAX_HEIGHT_LEVELS);
    Tile.WorldPosition.Z = TileHeight * Tile.HeightLevel;

    Tile.bIsHill = (Tile.TileType != ETileType::TT_Water && Tile.TileType != ETileType::TT_Mountain && Tile.HeightLevel > 0);
    Tile.Cost = ComputeTileCost(Tile);

    // --- HIZLI GÖRSEL GÜNCELLEME ---
    AHexGridActor* GridActor = Cast<AHexGridActor>(GetOwner());
    if (GridActor)
    {
        AActor* VisualActor = UGameplayStatics::GetActorOfClass(GetWorld(), AHexGridVisualActor::StaticClass());
        AHexGridVisualActor* HexVisual = Cast<AHexGridVisualActor>(VisualActor);

        if (HexVisual)
        {
            HexVisual->UpdateSingleTileVisual(Index, Tile);
        }
        else
        {
            GridActor->RebuildVisual();
        }
    }
}

void UHexGridComponent::AddTileHeightLevel(int32 X, int32 Y, int32 DeltaLevels)
{
    if (!IsValidCoords(X, Y)) return;
    const int32 Index = Y * GridWidth + X;
    if (!GridData.IsValidIndex(Index)) return;

    const int32 NewLevel = GridData[Index].HeightLevel + DeltaLevels;
    SetTileHeightLevel(X, Y, NewLevel);
}

void UHexGridComponent::SetRiverAtEdge(int32 X, int32 Y, ERiverEdge Edge, bool bHasRiver)
{
    if (!IsValidCoords(X, Y)) return;
    const int32 Index = Y * GridWidth + X;
    if (!GridData.IsValidIndex(Index)) return;

    FHexTileData& Tile = GridData[Index];
    if (Tile.RiverEdges.Num() != 6) Tile.RiverEdges.Init(false, 6);

    const int32 EdgeIndex = static_cast<int32>(Edge);
    if (Tile.RiverEdges.IsValidIndex(EdgeIndex))
    {
        Tile.RiverEdges[EdgeIndex] = bHasRiver;
    }
}

void UHexGridComponent::RequestRebuildVisual()
{
    AHexGridActor* GridActor = Cast<AHexGridActor>(GetOwner());
    if (!GridActor)
    {
        UE_LOG(LogTemp, Warning, TEXT("RequestRebuildVisual: Owner AHexGridActor degil."));
        return;
    }
    GridActor->RebuildVisual();
}

// ============================================================
//  LAKE & OCEAN DETECTION
// ============================================================
void UHexGridComponent::DetectLakesAndOceans()
{
    auto GetIndex = [&](int32 X, int32 Y) {
        return Y * GridWidth + X;
        };

    TSet<int32> Visited;

    for (int32 Y = 0; Y < GridHeight; ++Y)
    {
        for (int32 X = 0; X < GridWidth; ++X)
        {
            const int32 StartIndex = GetIndex(X, Y);

            // Su deðilse veya zaten iþlendiyse geç
            if (GridData[StartIndex].TileType != ETileType::TT_Water) continue;
            if (Visited.Contains(StartIndex)) continue;

            TArray<int32> Stack;
            TArray<int32> RegionTiles;
            Stack.Add(StartIndex);

            bool bTouchesBorder = false;

            // Flood Fill Algoritmasý
            while (Stack.Num() > 0)
            {
                int32 Current = Stack.Pop();

                if (Visited.Contains(Current)) continue;

                Visited.Add(Current);
                RegionTiles.Add(Current);

                const int32 CX = Current % GridWidth;
                const int32 CY = Current / GridWidth;

                // Harita sýnýrýna deðiyorsa bu bir Okyanustur
                if (CX == 0 || CY == 0 || CX == GridWidth - 1 || CY == GridHeight - 1)
                {
                    bTouchesBorder = true;
                }

                TArray<FIntPoint> Neighbors = GetNeighbors(CX, CY);
                for (const FIntPoint& P : Neighbors)
                {
                    const int32 NI = GetIndex(P.X, P.Y);
                    if (!Visited.Contains(NI) && GridData[NI].TileType == ETileType::TT_Water)
                    {
                        Stack.Add(NI);
                    }
                }
            }

            // Bölgedeki tüm karolarý iþaretle
            for (int32 Index : RegionTiles)
            {
                if (bTouchesBorder)
                {
                    GridData[Index].bIsOcean = true;
                    GridData[Index].bIsLake = false;
                }
                else
                {
                    GridData[Index].bIsLake = true;
                    GridData[Index].bIsOcean = false;
                }
            }
        }
    }
    UE_LOG(LogTemp, Warning, TEXT("DetectLakesAndOceans(): Tamamlandý."));
}

// ============================================================
//  RIVER SYSTEM
// ============================================================

// Statik yardýmcý fonksiyon
static int32 OppositeRiverEdge(int32 EdgeIndex)
{
    switch (EdgeIndex)
    {
    case 0: return 3; // NE -> SW
    case 1: return 4; // E  -> W
    case 2: return 5; // SE -> NW
    case 3: return 0; // SW -> NE
    case 4: return 1; // W  -> E
    case 5: return 2; // NW -> SE
    }
    return -1;
}

TArray<int32> UHexGridComponent::FindRiverSources() const
{
    TArray<int32> Sources;

    for (int32 Index = 0; Index < GridData.Num(); ++Index)
    {
        const FHexTileData& Tile = GridData[Index];

        // Nehirler yüksek yerlerden baþlar (Hill veya Mountain)
        if (Tile.HeightLevel < 3) continue;
        if (Tile.TileType == ETileType::TT_Water) continue;

        int32 X = Tile.Coordinates.X;
        int32 Y = Tile.Coordinates.Y;

        TArray<FIntPoint> Neighbors = GetNeighbors(X, Y);
        bool bHasLowerNeighbor = false;

        // Kendisinden daha alçak bir komþusu var mý?
        for (int32 n = 0; n < Neighbors.Num(); ++n)
        {
            const FIntPoint& P = Neighbors[n];
            int32 nIndex = P.Y * GridWidth + P.X;

            if (nIndex >= 0 && nIndex < GridData.Num())
            {
                if (GridData[nIndex].HeightLevel < Tile.HeightLevel)
                {
                    bHasLowerNeighbor = true;
                    break;
                }
            }
        }

        if (bHasLowerNeighbor)
        {
            Sources.Add(Index);
        }
    }
    return Sources;
}

void UHexGridComponent::GenerateRiverFromSource(int32 StartIndex)
{
    TSet<int32> Visited;
    int32 Current = StartIndex;

    while (true)
    {
        if (Visited.Contains(Current)) return; // Döngü engelleme
        Visited.Add(Current);

        const FHexTileData& Tile = GridData[Current];

        // Suya ulaþtýysa nehir biter
        if (Tile.TileType == ETileType::TT_Water) return;

        int32 X = Tile.Coordinates.X;
        int32 Y = Tile.Coordinates.Y;
        TArray<FIntPoint> Neighbors = GetNeighbors(X, Y);

        int32 BestIndex = -1;
        int32 LowestHeight = Tile.HeightLevel;

        // En uygun (en alçak) komþuyu bul
        for (int32 n = 0; n < Neighbors.Num(); ++n)
        {
            const FIntPoint& P = Neighbors[n];
            int32 nIndex = P.Y * GridWidth + P.X;

            if (!GridData.IsValidIndex(nIndex)) continue;

            const FHexTileData& NTile = GridData[nIndex];
            if (NTile.HeightLevel < LowestHeight)
            {
                LowestHeight = NTile.HeightLevel;
                BestIndex = nIndex;
            }
        }

        // Akacak yer yoksa bitir
        if (BestIndex == -1) return;

        // Hangi kenardan akacaðýný bul
        int32 NeighborSlot = -1;
        for (int32 n = 0; n < Neighbors.Num(); ++n)
        {
            const FIntPoint& P = Neighbors[n];
            if (P.Y * GridWidth + P.X == BestIndex)
            {
                NeighborSlot = n;
                break;
            }
        }

        if (NeighborSlot < 0) return;

        // Nehir verisini iþle (Hem bu tile'a hem komþuya)
        int32 Edge = NeighborToRiverEdge[NeighborSlot];
        int32 OppEdge = OppositeRiverEdge(Edge);

        GridData[Current].RiverEdges[Edge] = true;
        GridData[BestIndex].RiverEdges[OppEdge] = true;

        // Akýþa devam et
        Current = BestIndex;
    }
}

void UHexGridComponent::GenerateAllRivers()
{
    // Önce temizle
    for (FHexTileData& T : GridData)
    {
        T.RiverEdges.Init(false, 6);
    }

    TArray<int32> Sources = FindRiverSources();
    UE_LOG(LogTemp, Warning, TEXT("RIVER: Found %d sources"), Sources.Num());

    for (int32 Src : Sources)
    {
        GenerateRiverFromSource(Src);
    }
}

// ============================================================
//  DATABASE SAVE / LOAD
// ============================================================

bool UHexGridComponent::SaveGridToDatabaseWithName(const FString& InMapName) const
{
    FString DBPath = FPaths::ProjectContentDir() / TEXT("Data/GameData.db");
    sqlite3* DB = nullptr;

    int Result = sqlite3_open(TCHAR_TO_UTF8(*DBPath), &DB);
    if (Result != SQLITE_OK)
    {
        UE_LOG(LogTemp, Error, TEXT("[Tiles] SQLite open FAILED: %s"), *FString(sqlite3_errmsg(DB)));
        return false;
    }

    char* ErrMsg = nullptr;

    // Tabloyu oluþtur (Yoksa)
    const char* CreateSQL =
        "CREATE TABLE IF NOT EXISTS Tiles ("
        " TileID INTEGER PRIMARY KEY AUTOINCREMENT,"
        " MapName TEXT,"
        " X INTEGER,"
        " Y INTEGER,"
        " TileType TEXT,"
        " Height01 REAL,"
        " HeightLevel INTEGER,"
        " WorldZ REAL,"
        " Cost INTEGER,"
        " IsCoast INTEGER,"
        " IsLake INTEGER,"
        " IsOcean INTEGER,"
        " IsHill INTEGER,"
        " HasCliff INTEGER,"
        " River0 INTEGER DEFAULT 0,"
        " River1 INTEGER DEFAULT 0,"
        " River2 INTEGER DEFAULT 0,"
        " River3 INTEGER DEFAULT 0,"
        " River4 INTEGER DEFAULT 0,"
        " River5 INTEGER DEFAULT 0"
        ");";

    sqlite3_exec(DB, CreateSQL, nullptr, nullptr, nullptr);

    // Bu harita ismine ait eski kayýtlarý sil
    FString DeleteSQL = FString::Printf(TEXT("DELETE FROM Tiles WHERE MapName='%s';"), *InMapName);
    sqlite3_exec(DB, TCHAR_TO_UTF8(*DeleteSQL), nullptr, nullptr, nullptr);

    // Ýþlemleri hýzlandýrmak için Transaction baþlat
    sqlite3_exec(DB, "BEGIN TRANSACTION;", nullptr, nullptr, nullptr);

    const char* InsertSQL =
        "INSERT INTO Tiles (MapName, X, Y, TileType, Height01, HeightLevel, WorldZ, Cost, "
        " IsCoast, IsLake, IsOcean, IsHill, HasCliff, "
        " River0, River1, River2, River3, River4, River5) "
        "VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?);";

    sqlite3_stmt* Stmt = nullptr;
    sqlite3_prepare_v2(DB, InsertSQL, -1, &Stmt, nullptr);

    // TileType -> String dönüþüm lambdasý
    auto TileTypeToString = [](ETileType Type) -> FString {
        switch (Type) {
        case ETileType::TT_Grass:    return TEXT("Grass");
        case ETileType::TT_Desert:   return TEXT("Desert");
        case ETileType::TT_Mountain: return TEXT("Mountain");
        case ETileType::TT_Water:    return TEXT("Water");
        case ETileType::TT_Plains:   return TEXT("Plains");
        case ETileType::TT_Tundra:   return TEXT("Tundra");
        case ETileType::TT_Snow:     return TEXT("Snow");
        default:                     return TEXT("Grass");
        }
        };

    // Verileri döngüyle ekle
    for (const FHexTileData& Tile : GridData)
    {
        sqlite3_reset(Stmt);
        sqlite3_clear_bindings(Stmt);

        FString TypeStr = TileTypeToString(Tile.TileType);

        sqlite3_bind_text(Stmt, 1, TCHAR_TO_UTF8(*InMapName), -1, SQLITE_TRANSIENT);
        sqlite3_bind_int(Stmt, 2, Tile.Coordinates.X);
        sqlite3_bind_int(Stmt, 3, Tile.Coordinates.Y);
        sqlite3_bind_text(Stmt, 4, TCHAR_TO_UTF8(*TypeStr), -1, SQLITE_TRANSIENT);

        sqlite3_bind_double(Stmt, 5, Tile.Height01);
        sqlite3_bind_int(Stmt, 6, Tile.HeightLevel);
        sqlite3_bind_double(Stmt, 7, Tile.WorldPosition.Z);
        sqlite3_bind_int(Stmt, 8, Tile.Cost);

        sqlite3_bind_int(Stmt, 9, Tile.bIsCoast ? 1 : 0);
        sqlite3_bind_int(Stmt, 10, Tile.bIsLake ? 1 : 0);
        sqlite3_bind_int(Stmt, 11, Tile.bIsOcean ? 1 : 0);
        sqlite3_bind_int(Stmt, 12, Tile.bIsHill ? 1 : 0);
        sqlite3_bind_int(Stmt, 13, Tile.bHasCliff ? 1 : 0);

        // Nehir kenarlarý
        for (int i = 0; i < 6; i++)
        {
            int val = (Tile.RiverEdges.IsValidIndex(i) && Tile.RiverEdges[i]) ? 1 : 0;
            sqlite3_bind_int(Stmt, 14 + i, val);
        }

        sqlite3_step(Stmt);
    }

    sqlite3_finalize(Stmt);
    sqlite3_exec(DB, "COMMIT;", nullptr, nullptr, nullptr);
    sqlite3_close(DB);

    UE_LOG(LogTemp, Warning, TEXT("[Tiles] Saved %d tiles to DB as map '%s'"), GridData.Num(), *InMapName);
    return true;
}

bool UHexGridComponent::LoadGridFromDatabaseWithName(const FString& InMapName)
{
    FString DBPath = FPaths::ProjectContentDir() / TEXT("Data/GameData.db");
    sqlite3* DB = nullptr;

    if (sqlite3_open(TCHAR_TO_UTF8(*DBPath), &DB) != SQLITE_OK)
    {
        UE_LOG(LogTemp, Error, TEXT("[Tiles-Load] SQLite open FAILED"));
        return false;
    }

    FString Query = FString::Printf(
        TEXT("SELECT X, Y, TileType, Height01, HeightLevel, WorldZ, Cost, "
            "IsCoast, IsLake, IsOcean, IsHill, HasCliff, "
            "River0, River1, River2, River3, River4, River5 "
            "FROM Tiles WHERE MapName='%s';"),
        *InMapName
    );

    sqlite3_stmt* Stmt = nullptr;
    if (sqlite3_prepare_v2(DB, TCHAR_TO_UTF8(*Query), -1, &Stmt, nullptr) != SQLITE_OK)
    {
        sqlite3_close(DB);
        return false;
    }

    GridData.Empty();
    GridData.SetNum(GridWidth * GridHeight);

    auto StringToTileType = [](const FString& S) -> ETileType {
        if (S == "Grass") return ETileType::TT_Grass;
        if (S == "Desert") return ETileType::TT_Desert;
        if (S == "Mountain") return ETileType::TT_Mountain;
        if (S == "Water") return ETileType::TT_Water;
        if (S == "Plains") return ETileType::TT_Plains;
        if (S == "Tundra") return ETileType::TT_Tundra;
        if (S == "Snow") return ETileType::TT_Snow;
        return ETileType::TT_Grass;
        };

    while (sqlite3_step(Stmt) == SQLITE_ROW)
    {
        int X = sqlite3_column_int(Stmt, 0);
        int Y = sqlite3_column_int(Stmt, 1);

        const char* TypeText = (const char*)sqlite3_column_text(Stmt, 2);
        FString TileStr = TypeText ? UTF8_TO_TCHAR(TypeText) : TEXT("Grass");

        double Height01 = sqlite3_column_double(Stmt, 3);
        int HeightLevel = sqlite3_column_int(Stmt, 4);
        double WorldZ = sqlite3_column_double(Stmt, 5);
        int Cost = sqlite3_column_int(Stmt, 6);

        int IsCoast = sqlite3_column_int(Stmt, 7);
        int IsLake = sqlite3_column_int(Stmt, 8);
        int IsOcean = sqlite3_column_int(Stmt, 9);
        int IsHill = sqlite3_column_int(Stmt, 10);
        int HasCliff = sqlite3_column_int(Stmt, 11);

        // Nehirleri oku
        bool Rivers[6];
        for (int i = 0; i < 6; i++)
        {
            Rivers[i] = (sqlite3_column_int(Stmt, 12 + i) == 1);
        }

        // Ýndeks kontrolü
        int Index = Y * GridWidth + X;
        if (!GridData.IsValidIndex(Index)) continue;

        FHexTileData& Tile = GridData[Index];
        Tile.Coordinates = FIntPoint(X, Y);
        Tile.TileType = StringToTileType(TileStr);
        Tile.Height01 = Height01;
        Tile.HeightLevel = HeightLevel;
        Tile.WorldPosition.Z = WorldZ;
        Tile.Cost = Cost;

        Tile.bIsCoast = (IsCoast == 1);
        Tile.bIsLake = (IsLake == 1);
        Tile.bIsOcean = (IsOcean == 1);
        Tile.bIsHill = (IsHill == 1);
        Tile.bHasCliff = (HasCliff == 1);

        Tile.RiverEdges.SetNum(6);
        for (int i = 0; i < 6; i++)
        {
            Tile.RiverEdges[i] = Rivers[i];
        }

        // Yüklenen tile için Biyom rengini de ayarla
        Tile.BiomeColor = ComputeBiomeColor(Tile.TileType);
    }

    sqlite3_finalize(Stmt);
    sqlite3_close(DB);

    UE_LOG(LogTemp, Warning, TEXT("[Tiles-Load] Loaded map '%s'."), *InMapName);

    RequestRebuildVisual();
    RecalculateAllTileYields();
    return true;
}

// ============================================================
//  YIELD SYSTEM
// ============================================================

void UHexGridComponent::GetTileYieldAt(int32 X, int32 Y, int32& OutFood, int32& OutProduction, int32& OutGold) const
{
    OutFood = 0;
    OutProduction = 0;
    OutGold = 0;

    const int32 Index = Y * GridWidth + X;
    if (GridData.IsValidIndex(Index))
    {
        const FHexTileData& Tile = GridData[Index];
        OutFood = Tile.BaseFood;
        OutProduction = Tile.BaseProduction;
        OutGold = Tile.BaseGold;
    }
}

void UHexGridComponent::RecalculateAllTileYields()
{
    for (FHexTileData& Tile : GridData)
    {
        CalculateBaseYieldForTile(Tile);
    }
}

void UHexGridComponent::CalculateBaseYieldForTile(FHexTileData& Tile) const
{
    int32 Food = 0;
    int32 Prod = 0;
    int32 Gold = 0;

    switch (Tile.TileType)
    {
    case ETileType::TT_Grass:    Food = 2; break;
    case ETileType::TT_Plains:   Food = 1; Prod = 1; break;
    case ETileType::TT_Desert:   Gold = 1; break;
    case ETileType::TT_Tundra:   Food = 1; break;
    case ETileType::TT_Water:    Food = 1; Gold = 1; break;
    default:                     break;
    }

    // Tepe bonusu
    if (Tile.bIsHill && Tile.TileType != ETileType::TT_Mountain && Tile.TileType != ETileType::TT_Water)
    {
        Prod += 1;
    }

    // Su türü bonusu
    if (Tile.TileType == ETileType::TT_Water)
    {
        if (Tile.bIsLake) { Food = 2; Prod = 0; Gold = 0; }
        else if (Tile.bIsOcean) { Food = 1; Prod = 0; Gold = 2; }
        else if (Tile.bIsCoast) { Food = 1; Prod = 0; Gold = 1; }
    }

    Tile.BaseFood = Food;
    Tile.BaseProduction = Prod;
    Tile.BaseGold = Gold;
}

#if WITH_EDITOR
void UHexGridComponent::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
    Super::PostEditChangeProperty(PropertyChangedEvent);

    // Editörde deðiþken deðiþirse grid ölçülerini güncelle
    TileWidth = BaseTileWidth * TileScale;
    TileHeight = BaseTileHeight * TileScale;
}
#endif