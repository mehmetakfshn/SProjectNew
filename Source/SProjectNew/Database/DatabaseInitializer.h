#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "sqlite3.h"
#include "DatabaseInitializer.generated.h"

UCLASS()
class SPROJECTNEW_API UDatabaseInitializer : public UObject
{
    GENERATED_BODY()

public:
    static void InitializeDatabase();

private:
    static bool ExecuteSQL(sqlite3* DB, const FString& SQL);
    static bool LoadAndExecuteSQLFile(sqlite3* DB, const FString& RelativePath);
};
