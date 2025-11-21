#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "sqlite3.h"
#include "DatabaseReader.generated.h"

USTRUCT(BlueprintType)
struct FCivInfo
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly) FString Name;

    UPROPERTY(BlueprintReadOnly) FString Leader;
    UPROPERTY(BlueprintReadOnly) FString ColorPrimary;
    UPROPERTY(BlueprintReadOnly) FString ColorSecondary;
    UPROPERTY(BlueprintReadOnly) FString StartingTech;
};

UCLASS()
class SPROJECTNEW_API UDatabaseReader : public UObject
{
    GENERATED_BODY()

public:

    sqlite3* DB = nullptr;

    // 1) Veritabaný aç
    bool OpenDatabase(const FString& DBPath);

    // 2) Veritabaný kapat
    void CloseDatabase();

    // 3) SQL çalýþtýr ve sonuç döndür
    bool ExecuteSQL(const FString& SQL, TFunction<void(const TMap<FString, FString>&)> Callback);

    UFUNCTION(BlueprintCallable, Category = "Database")
    static TArray<FCivInfo> BP_GetAllCivilizations();

    // Mevcut fonksiyon
    static TArray<FCivInfo> GetAllCivilizations();

    UFUNCTION(BlueprintCallable, Category = "Database|Civilizations")
    bool GetUnitsForCiv(const FString& CivName, TArray<FString>& OutUnitTypes);

};
