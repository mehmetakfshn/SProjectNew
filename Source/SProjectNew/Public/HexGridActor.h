#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Public/HexGridComponent.h"
#include "HexGridActor.generated.h"

UCLASS()
class SPROJECTNEW_API AHexGridActor : public AActor
{
    GENERATED_BODY()

public:
    AHexGridActor();

protected:
    virtual void BeginPlay() override;

public:

    // ==========================
    // GRID COMPONENT
    // ==========================
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Hex Grid")
    UHexGridComponent* HexGridComponent;

    // ==========================
    // GRID PARAMETERS
    // ==========================
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex Grid")
    int32 GridWidth = 80;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hex Grid")
    int32 GridHeight = 80;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    float TileScale = 10.0f;

    UFUNCTION(BlueprintCallable, Category = "Hex Grid")
    void RebuildVisual();

    



};
