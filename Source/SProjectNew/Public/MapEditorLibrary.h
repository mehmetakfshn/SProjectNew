#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "MapEditorLibrary.generated.h"

UCLASS()
class SPROJECTNEW_API UMapEditorLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:

    UFUNCTION(BlueprintCallable, Category = "Map Editor")
    static TArray<FString> GetSavedMapList();
};
