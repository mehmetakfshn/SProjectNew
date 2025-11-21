#include "IntroGameMode.h"
#include "Blueprint/UserWidget.h"
#include "MediaPlayer.h"
#include "MediaSource.h"
#include "MediaSoundComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "TimerManager.h"

void AIntroGameMode::BeginPlay()
{
    Super::BeginPlay();

    // 1) Widget ekle
    if (IntroWidgetClass)
    {
        UUserWidget* Widget = CreateWidget<UUserWidget>(GetWorld(), IntroWidgetClass);
        if (Widget)
        {
            Widget->AddToViewport();
        }
    }

    // 2) MediaPlayer yoksa otomatik oluþtur
    if (!MediaPlayer)
    {
        MediaPlayer = NewObject<UMediaPlayer>(this, UMediaPlayer::StaticClass());
    }

    // 3) Ses bileþeni ekle
    UMediaSoundComponent* MediaSound = NewObject<UMediaSoundComponent>(this);
    MediaSound->RegisterComponent();
    MediaSound->SetMediaPlayer(MediaPlayer);

    // 4) Videoyu aç ve oynat
    if (MediaPlayer && VideoSource)
    {
        MediaPlayer->OpenSource(VideoSource);
        MediaPlayer->Play();
    }

    // 5) Video bitince çaðýrýlacak
    MediaPlayer->OnEndReached.AddDynamic(this, &AIntroGameMode::OnVideoFinished);

    // 6) Fallback (videonun süresi)
    FTimerHandle TimerHandle;
    GetWorldTimerManager().SetTimer(
        TimerHandle,
        this,
        &AIntroGameMode::OnVideoFinished,
        VideoDuration,
        false
    );
}

void AIntroGameMode::OnVideoFinished()
{
    UGameplayStatics::OpenLevel(GetWorld(), FName("Level_MainMenu"));
}

