#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MapEditorGameMode.generated.h"

class AHexGridActor;
class UUserWidget;

UCLASS()
class SPROJECTNEW_API AMapEditorGameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    AMapEditorGameMode();

    virtual void BeginPlay() override;

    /** Haritayý veritabanýna kaydet (GameData.db / Tiles tablosu). */
    UFUNCTION(BlueprintCallable, Category = "Map Editor")
    void SaveCurrentMap();

protected:
    /** Editor HUD widget blueprint'i (WBP_MapEditorHUD) */
    UPROPERTY(EditDefaultsOnly, Category = "UI")
    TSubclassOf<UUserWidget> MapEditorWidgetClass;

private:
    UPROPERTY()
    AHexGridActor* GridActor;

    UPROPERTY()
    UUserWidget* MapEditorWidget;
};
