#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Database/DatabaseReader.h"
#include "Public/CivilizationManager.h"
#include "UnitFactory.h"
#include "UnitBase.h"
#include "City.h"
#include "CivGameMode.generated.h"


class AUnitBase;
class UUnitFactory;
class UCivilizationManager;

UCLASS()
class SPROJECTNEW_API ACivGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ACivGameMode();

	UFUNCTION(BlueprintCallable, Category = "Turn System")
	void EndPlayerTurn();

	UFUNCTION(BlueprintCallable, Category = "SaveLoad")
	void SaveGameToSlot();

	UFUNCTION(BlueprintCallable, Category = "SaveLoad")
	void LoadGameFromSlot();

	UFUNCTION(BlueprintCallable, Category = "Units")
	AUnitBase* SpawnUnitAtTile(TSubclassOf<AUnitBase> UnitClass, FIntPoint GridCoords);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Units")
	TSubclassOf<AUnitBase> DefaultUnitClass;

	UPROPERTY()
	class UDatabaseReader* DBReader;

	UPROPERTY()
	class UUnitManager* UnitManager;

	UPROPERTY(BlueprintReadOnly)
	FCivInfo ActiveCiv;

	UPROPERTY()
	UCivilizationManager* CivManager;

	UPROPERTY()
	FCivInfo ActivePlayerCiv;

	UPROPERTY()
	TArray<FCivInfo> AICivs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Units")
	TSubclassOf<AUnitBase> UnitBlueprintClass;

	UFUNCTION(BlueprintCallable, BlueprintPure)
	FLinearColor GetCivColor(int32 CivIndex) const;




protected:
	virtual void BeginPlay() override;

	UPROPERTY()
	UCivilizationManager* PlayerCivManager;

	UPROPERTY()
	TArray<UCivilizationManager*> AICivManagers;

	void CreatePlayerCiv();
	void CreateAICivs();

	UPROPERTY()
	UUnitFactory* UnitFactory;

	void InitUnitFactory();

	UPROPERTY()
	TArray<UCivilizationManager*> AllCivs;

	ACity* SpawnCity(UCivilizationManager* OwnerCiv, const FString& CityName, const FIntPoint& GridPos);

	UFUNCTION(BlueprintCallable, Category = "Civilization|Territory")
	void ClaimTileForCiv(UCivilizationManager* OwnerCiv, const FIntPoint& GridCoords);

	

};