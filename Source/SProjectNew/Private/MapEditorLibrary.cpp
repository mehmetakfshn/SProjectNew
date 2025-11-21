#include "MapEditorLibrary.h"
#include "Misc/Paths.h"
#include "sqlite3.h"

TArray<FString> UMapEditorLibrary::GetSavedMapList()
{
    TArray<FString> Maps;

    FString DBPath = FPaths::ProjectContentDir() / TEXT("Data/GameData.db");
    sqlite3* DB = nullptr;

    if (sqlite3_open(TCHAR_TO_UTF8(*DBPath), &DB) != SQLITE_OK)
        return Maps;

    const char* Query = "SELECT DISTINCT MapName FROM Tiles;";
    sqlite3_stmt* Stmt = nullptr;

    if (sqlite3_prepare_v2(DB, Query, -1, &Stmt, nullptr) != SQLITE_OK)
    {
        sqlite3_close(DB);
        return Maps;
    }

    while (sqlite3_step(Stmt) == SQLITE_ROW)
    {
        const char* NameCStr = (const char*)sqlite3_column_text(Stmt, 0);
        if (NameCStr)
            Maps.Add(UTF8_TO_TCHAR(NameCStr));
    }

    sqlite3_finalize(Stmt);
    sqlite3_close(DB);

    return Maps;
}


