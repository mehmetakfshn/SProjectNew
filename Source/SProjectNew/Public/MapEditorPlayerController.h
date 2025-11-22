#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "HexTileData.h"
#include "HexEnums.h"
#include "MapEditorPlayerController.generated.h"

UCLASS()
class SPROJECTNEW_API AMapEditorPlayerController : public APlayerController
{
    GENERATED_BODY()

public:
    AMapEditorPlayerController();

    virtual void SetupInputComponent() override;

    // UMG'den çaðrýlacak: aktif tile tipi
    UFUNCTION(BlueprintCallable, Category = "Map Editor")
    void SetCurrentTileType(ETileType NewType);

    // UMG'den çaðrýlacak: yükseklik delta (+1 / -1)
    UFUNCTION(BlueprintCallable, Category = "Map Editor")
    void SetCurrentHeightDelta(int32 NewDelta);

    // UMG'den çaðrýlacak: nehir çizme modu
    UFUNCTION(BlueprintCallable, Category = "Map Editor")
    void SetRiverDrawMode(bool bEnable);


    UFUNCTION(BlueprintCallable)
    void SaveMapWithName(const FString& MapName);

    UFUNCTION(BlueprintCallable, Category = "Map Editor")
    TArray<FString> GetSavedMapList() const;

    UFUNCTION(BlueprintCallable, Category = "Map Editor")
    void LoadMap(const FString& MapName);

    // Fýrça Boyutu (1 = Tek, 2 = Komþular, 3 = Geniþ...)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Map Editor")
    int32 BrushSize = 1;

    UFUNCTION(BlueprintCallable, Category = "Map Editor")
    void SetBrushSize(int32 NewSize);


protected:
    void OnLeftMouseClick();   // Tile tipi boyama / nehir
    void OnRightMouseClick();  // Yükseklik deðiþtirme

private:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Map Editor", meta = (AllowPrivateAccess = "true"))
    ETileType CurrentPaintTileType;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Map Editor", meta = (AllowPrivateAccess = "true"))
    int32 CurrentHeightDelta;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Map Editor", meta = (AllowPrivateAccess = "true"))
    bool bRiverMode;
};
