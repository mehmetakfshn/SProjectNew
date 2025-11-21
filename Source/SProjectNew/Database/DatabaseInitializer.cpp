#include "DatabaseInitializer.h"
#include "Misc/Paths.h"

void UDatabaseInitializer::InitializeDatabase()
{
    // Proje dizininde "SProjectNew.db" oluþturulacak
    FString DBPath = FPaths::ProjectContentDir() / TEXT("Data/GameData.db");


    sqlite3* DB;
    int Result = sqlite3_open(TCHAR_TO_UTF8(*DBPath), &DB);

    if (Result != SQLITE_OK)
    {
        UE_LOG(LogTemp, Error, TEXT("SQLite ERROR (Initialize): %s"), *FString(sqlite3_errmsg(DB)));
        return;
    }

    UE_LOG(LogTemp, Warning, TEXT("SQLite: Veritabani acildi veya olusturuldu: %s"), *DBPath);

    // --- CIVILIZATIONS TABLOSU ---
    ExecuteSQL(DB, TEXT(R"SQL(
        CREATE TABLE IF NOT EXISTS Civilizations (
            CivID INTEGER PRIMARY KEY AUTOINCREMENT,
            Name TEXT,
            Leader TEXT,
            ColorPrimary TEXT,
            ColorSecondary TEXT,
            StartingTech TEXT
        );
    )SQL"));

    // Civilization tablosu boþ mu?
    bool bEmpty = false;
    sqlite3_stmt* stmt;

    if (sqlite3_prepare_v2(DB, "SELECT COUNT(*) FROM Civilizations;", -1, &stmt, nullptr) == SQLITE_OK)
    {
        if (sqlite3_step(stmt) == SQLITE_ROW)
        {
            bEmpty = (sqlite3_column_int(stmt, 0) == 0);
        }
    }

    sqlite3_finalize(stmt);

    // Eðer boþsa .sql dosyasýný yükle
    if (bEmpty)
    {
        //comment
    }

    // UNIT TYPES
    ExecuteSQL(DB, TEXT(R"SQL(
    CREATE TABLE IF NOT EXISTS UnitTypes (
        Type TEXT PRIMARY KEY,
        DisplayName TEXT,
        Description TEXT,
        CombatStrength INTEGER,
        RangedStrength INTEGER,
        Movement INTEGER,
        Cost INTEGER,
        RequiredTech TEXT,
        RequiredResource TEXT,
        MeshPath TEXT,
        IconPath TEXT
        );
    )SQL"));

    LoadAndExecuteSQLFile(DB, TEXT("Data/Civilizations.sql"));
    LoadAndExecuteSQLFile(DB, TEXT("Data/UnitTypes.sql"));


    // CivUnits tablosunu oluþtur ve yükle
    ExecuteSQL(DB, TEXT(R"SQL(
    CREATE TABLE IF NOT EXISTS CivUnits (
        CivName TEXT NOT NULL,
        UnitType TEXT NOT NULL
            );
        )SQL"));
    LoadAndExecuteSQLFile(DB, TEXT("Data/CivUnits.sql"));



    // --- ÞEHÝRLER TABLOSU ---
    ExecuteSQL(DB, TEXT(R"SQL(
        CREATE TABLE IF NOT EXISTS Cities (
            CityID INTEGER PRIMARY KEY AUTOINCREMENT,
            CivID INTEGER,
            Name TEXT,
            X INTEGER,
            Y INTEGER,
            Population INTEGER,
            Production TEXT,
            BuildTurns INTEGER
        );
    )SQL"));

    // --- TÝLE TABLOSU ---
    ExecuteSQL(DB, TEXT(R"SQL(
        CREATE TABLE IF NOT EXISTS Tiles (
            TileID INTEGER PRIMARY KEY AUTOINCREMENT,
            X INTEGER,
            Y INTEGER,
            TileType TEXT,
            Resource TEXT,
            OwnerCiv INTEGER,
            Improvement TEXT,
            Cost INTEGER
        );
    )SQL"));

    // --- MAPTEKÝ BÝRÝMLER ---
    ExecuteSQL(DB, TEXT(R"SQL(
        CREATE TABLE IF NOT EXISTS Units (
            UnitID INTEGER PRIMARY KEY AUTOINCREMENT,
            CivID INTEGER,
            UnitType TEXT,
            X INTEGER,
            Y INTEGER,
            HP INTEGER,
            MovementLeft INTEGER
        );
    )SQL"));

    sqlite3_close(DB);
}

bool UDatabaseInitializer::ExecuteSQL(sqlite3* DB, const FString& SQL)
{
    char* ErrMsg = nullptr;

    int Result = sqlite3_exec(DB, TCHAR_TO_UTF8(*SQL), nullptr, nullptr, &ErrMsg);

    if (Result != SQLITE_OK)
    {
        UE_LOG(LogTemp, Error, TEXT("SQLite SQL Error: %s"), *FString(ErrMsg));
        sqlite3_free(ErrMsg);
        return false;
    }

    return true;
}

bool UDatabaseInitializer::LoadAndExecuteSQLFile(sqlite3* DB, const FString& RelativePath)
{
    FString FullPath = FPaths::ProjectContentDir() / RelativePath;

    FString SQLText;
    if (!FFileHelper::LoadFileToString(SQLText, *FullPath))
    {
        UE_LOG(LogTemp, Error, TEXT("SQL file not found: %s"), *FullPath);
        return false;
    }

    char* ErrMsg = nullptr;
    int Result = sqlite3_exec(DB, TCHAR_TO_UTF8(*SQLText), nullptr, nullptr, &ErrMsg);

    if (Result != SQLITE_OK)
    {
        UE_LOG(LogTemp, Error, TEXT("SQLite SQL File Error: %s"), *FString(ErrMsg));
        sqlite3_free(ErrMsg);
        return false;
    }

    UE_LOG(LogTemp, Warning, TEXT("Executed SQL file: %s"), *FullPath);
    return true;
}


