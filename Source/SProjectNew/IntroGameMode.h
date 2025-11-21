#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "IntroGameMode.generated.h"

UCLASS()
class SPROJECTNEW_API AIntroGameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    virtual void BeginPlay() override;

    // Intro widget (WBP_Intro)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Intro")
    TSubclassOf<class UUserWidget> IntroWidgetClass;

    // Video Player
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Intro")
    class UMediaPlayer* MediaPlayer;

    // Video Source
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Intro")
    class UMediaSource* VideoSource;

    // Delay fallback (videonun süresi kadar)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Intro")
    float VideoDuration = 8.0f;

private:
    UFUNCTION()
    void OnVideoFinished();
};
