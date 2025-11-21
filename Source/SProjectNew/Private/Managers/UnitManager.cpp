#include "Public/Managers/UnitManager.h"
#include "Misc/Paths.h"
#include "Misc/FileHelper.h"
#include "Database/DatabaseReader.h"

void UUnitManager::Init(UDatabaseReader* DBReader)
{
    if (!DBReader)
    {
        UE_LOG(LogTemp, Error, TEXT("UnitManager::Init - DBReader is NULL"));
        return;
    }

    // ===========================
    // 1) UnitTypes tablosu var mý?
    // ===========================

    bool bUnitTypesExists = false;

    DBReader->ExecuteSQL(
        TEXT("SELECT name FROM sqlite_master WHERE type='table' AND name='UnitTypes';"),
        [&](const TMap<FString, FString>& Row)
        {
            bUnitTypesExists = true;
        }
    );

    if (!bUnitTypesExists)
    {
        // Bu durumda UnitTypes.sql yeniden yüklenmeli
        FString FilePath = FPaths::ProjectContentDir() / TEXT("Data/UnitTypes.sql");
        FString SQLText;

        if (!FFileHelper::LoadFileToString(SQLText, *FilePath))
        {
            UE_LOG(LogTemp, Error, TEXT("UnitManager: Failed to load UnitTypes.sql from %s"), *FilePath);
            return;
        }

        UE_LOG(LogTemp, Warning, TEXT("UnitManager: UnitTypes table NOT FOUND. Executing UnitTypes.sql..."));

        DBReader->ExecuteSQL(SQLText,
            [&](const TMap<FString, FString>& /*Row*/)
            {
                // CREATE/INSERT için Row dönmez
            }
        );
    }

    // ===========================
    // 2) UnitTypes tablosunu oku
    // ===========================

    AllUnits.Empty();

    DBReader->ExecuteSQL(
        TEXT("SELECT Type, DisplayName, Description, CombatStrength, RangedStrength, Movement, Cost, "
            "RequiredTech, RequiredResource, MeshPath, IconPath FROM UnitTypes;"),
        [&](const TMap<FString, FString>& Row)
        {
            FUnitData D;

            D.Type = Row.Contains("Type") ? Row["Type"] : TEXT("");
            D.DisplayName = Row.Contains("DisplayName") ? Row["DisplayName"] : TEXT("");
            D.Description = Row.Contains("Description") ? Row["Description"] : TEXT("");
            D.CombatStrength = Row.Contains("CombatStrength") ? FCString::Atoi(*Row["CombatStrength"]) : 0;
            D.RangedStrength = Row.Contains("RangedStrength") ? FCString::Atoi(*Row["RangedStrength"]) : 0;
            D.Movement = Row.Contains("Movement") ? FCString::Atoi(*Row["Movement"]) : 0;
            D.Cost = Row.Contains("Cost") ? FCString::Atoi(*Row["Cost"]) : 0;
            D.RequiredTech = Row.Contains("RequiredTech") ? Row["RequiredTech"] : TEXT("");
            D.RequiredResource = Row.Contains("RequiredResource") ? Row["RequiredResource"] : TEXT("");
            D.MeshPath = Row.Contains("MeshPath") ? Row["MeshPath"] : TEXT("");
            D.IconPath = Row.Contains("IconPath") ? Row["IconPath"] : TEXT("");

            if (!D.Type.IsEmpty())
            {
                AllUnits.Add(D.Type, D);
            }
        }
    );

    UE_LOG(LogTemp, Warning, TEXT("UnitManager: Loaded %d units from DB."), AllUnits.Num());
}

bool UUnitManager::GetUnitData(const FString& UnitType, FUnitData& OutData) const
{
    if (const FUnitData* Found = AllUnits.Find(UnitType))
    {
        OutData = *Found;
        return true;
    }
    return false;
}
