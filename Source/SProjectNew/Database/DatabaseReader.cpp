#include "Database/DatabaseReader.h"
#include "Misc/Paths.h"

static int CivCallback(void* Data, int ColCount, char** ColText, char** ColName)
{
    TArray<FCivInfo>* Result = (TArray<FCivInfo>*)Data;

    FCivInfo Civ;
    Civ.Name = UTF8_TO_TCHAR(ColText[0]);
    Civ.Leader = UTF8_TO_TCHAR(ColText[1]);
    Civ.ColorPrimary = UTF8_TO_TCHAR(ColText[2]);
    Civ.ColorSecondary = UTF8_TO_TCHAR(ColText[3]);
    Civ.StartingTech = UTF8_TO_TCHAR(ColText[4]);

    Result->Add(Civ);
    return 0;
}

TArray<FCivInfo> UDatabaseReader::GetAllCivilizations()
{
    TArray<FCivInfo> CivList;

    FString DBPath = FPaths::ProjectDir() / TEXT("SProjectNew.db");
    sqlite3* DB;

    if (sqlite3_open(TCHAR_TO_UTF8(*DBPath), &DB) == SQLITE_OK)
    {
        const char* SQL = "SELECT Name, Leader, ColorPrimary, ColorSecondary, StartingTech FROM Civilizations;";
        char* ErrMsg = nullptr;

        sqlite3_exec(DB, SQL, CivCallback, &CivList, &ErrMsg);
        sqlite3_close(DB);
    }

    return CivList;
}

bool UDatabaseReader::OpenDatabase(const FString& DBPath)
{
    if (sqlite3_open(TCHAR_TO_UTF8(*DBPath), &DB) != SQLITE_OK)
    {
        UE_LOG(LogTemp, Error, TEXT("DatabaseReader: Could not open database %s"), *DBPath);
        return false;
    }

    return true;
}

void UDatabaseReader::CloseDatabase()
{
    if (DB)
    {
        sqlite3_close(DB);
        DB = nullptr;
    }
}

bool UDatabaseReader::ExecuteSQL(const FString& SQL, TFunction<void(const TMap<FString, FString>&)> Callback)
{
    if (!DB)
    {
        UE_LOG(LogTemp, Error, TEXT("DatabaseReader::ExecuteSQL called but DB is NULL"));
        return false;
    }

    char* ErrMsg = nullptr;

    sqlite3_exec(
        DB,
        TCHAR_TO_UTF8(*SQL),

        [](void* Param, int ColumnCount, char** ColumnValues, char** ColumnNames) -> int
        {
            auto* UserCallback = (TFunction<void(const TMap<FString, FString>&)>*)Param;

            TMap<FString, FString> Row;

            for (int i = 0; i < ColumnCount; i++)
            {
                FString Key = UTF8_TO_TCHAR(ColumnNames[i]);
                FString Value = ColumnValues[i] ? UTF8_TO_TCHAR(ColumnValues[i]) : TEXT("");
                Row.Add(Key, Value);
            }

            (*UserCallback)(Row);
            return 0;
        },

        &Callback,
        &ErrMsg
    );

    if (ErrMsg)
    {
        UE_LOG(LogTemp, Error, TEXT("SQL Error: %s"), UTF8_TO_TCHAR(ErrMsg));
        sqlite3_free(ErrMsg);
        return false;
    }

    return true;
}

TArray<FCivInfo> UDatabaseReader::BP_GetAllCivilizations()
{
    return GetAllCivilizations();
}

bool UDatabaseReader::GetUnitsForCiv(const FString& CivName, TArray<FString>& OutUnitTypes)
{
    OutUnitTypes.Empty();

    if (!DB)
    {
        UE_LOG(LogTemp, Error, TEXT("GetUnitsForCiv FAILED: Database not open!"));
        return false;
    }

    // SQL SORGU
    const FString SQL = FString::Printf(
        TEXT("SELECT UnitType FROM CivUnits WHERE CivName = '%s';"),
        *CivName
    );

    bool bFoundAny = false;

    // ExecuteSQL zaten sende çalýþan callback sistemine sahip
    ExecuteSQL(SQL,
        [&OutUnitTypes, &bFoundAny](const TMap<FString, FString>& Row)
        {
            const FString* UnitTypePtr = Row.Find(TEXT("UnitType"));
            if (UnitTypePtr)
            {
                OutUnitTypes.Add(*UnitTypePtr);
                bFoundAny = true;
            }
        }
    );

    UE_LOG(LogTemp, Warning,
        TEXT("[DB] Civ '%s' allowed units: %d"),
        *CivName,
        OutUnitTypes.Num()
    );

    return bFoundAny;
}



