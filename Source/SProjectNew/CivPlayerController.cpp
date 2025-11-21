#include "CivPlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "UnitBase.h"
#include "CivGameMode.h"
#include "Blueprint/UserWidget.h"
#include "CivHUDWidget.h"
#include "PathfindingComponent.h"
#include "Engine/Engine.h"
#include "HexGridComponent.h"

ACivPlayerController::ACivPlayerController()
{
    bShowMouseCursor = true;
    bEnableClickEvents = true;
    bEnableMouseOverEvents = true;

    SelectedUnit = nullptr;

    PrimaryActorTick.bCanEverTick = true;
    PrimaryActorTick.bStartWithTickEnabled = true;
}

void ACivPlayerController::BeginPlay()
{
    Super::BeginPlay();

    if (IsLocalController() && HUDWidgetClass)
    {
        HUDWidgetInstance = CreateWidget<UCivHUDWidget>(this, HUDWidgetClass);
        if (HUDWidgetInstance)
        {
            HUDWidgetInstance->AddToViewport();

            FInputModeGameAndUI InputMode;
            InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
            InputMode.SetHideCursorDuringCapture(false);
            SetInputMode(InputMode);
        }
    }
}

void ACivPlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();

    InputComponent->BindAction("LeftMouseClick", IE_Pressed, this, &ACivPlayerController::OnLeftMouseClick);
    InputComponent->BindAction("PauseMenu", IE_Pressed, this, &ACivPlayerController::HandlePauseMenu);
    InputComponent->BindAction("RightMouseClick", IE_Pressed, this, &ACivPlayerController::OnRightMouseClick);
}

AUnitBase* ACivPlayerController::GetSelectedUnit() const
{
    return SelectedUnit;
}

void ACivPlayerController::HandleTileClick(AActor* ActorOnTile, const FVector& TileWorldLocation)
{
    AUnitBase* ClickedUnit = Cast<AUnitBase>(ActorOnTile);

    if (ClickedUnit)
    {
        SelectUnit(ClickedUnit);
    }
    else
    {
        if (SelectedUnit)
        {
            AttemptMoveSelectedUnit(TileWorldLocation);
        }
    }
}

void ACivPlayerController::SelectUnit(AUnitBase* UnitToSelect)
{
    SelectedUnit = UnitToSelect;

    if (SelectedUnit)
    {
        UE_LOG(LogTemp, Warning, TEXT("C++: Birim secildi: %s"), *SelectedUnit->GetName());
    }
}

void ACivPlayerController::AttemptMoveSelectedUnit(const FVector& TargetWorldLocation)
{
    if (!SelectedUnit) return;

    if (!SelectedUnit->CanMove())
    {
        UE_LOG(LogTemp, Warning, TEXT("C++: Birimin (%s) hareket puani kalmamis!"), *SelectedUnit->GetName());
        return;
    }

    UClass* GridClass = LoadClass<AActor>(nullptr, TEXT("/Game/BP_HexGrid.BP_HexGrid_C"));
    AActor* LocalGridActor = UGameplayStatics::GetActorOfClass(GetWorld(), GridClass);


    if (!LocalGridActor)
    {
        UE_LOG(LogTemp, Error, TEXT("C++: Grid bulunamadý!"));
        return;
    }

    UPathfindingComponent* PathComponent = LocalGridActor->FindComponentByClass<UPathfindingComponent>();
    if (!PathComponent)
    {
        UE_LOG(LogTemp, Error, TEXT("C++: PathfindingComponent bulunamadý!"));
        return;
    }

    // GridData property
    FProperty* Property = LocalGridActor->GetClass()->FindPropertyByName(TEXT("GridData"));
    FArrayProperty* ArrayProperty = CastField<FArrayProperty>(Property);

    if (!Property || !ArrayProperty)
    {
        UE_LOG(LogTemp, Error, TEXT("C++: GridData bulunamadý!"));
        return;
    }

    FScriptArrayHelper ArrayHelper(ArrayProperty, ArrayProperty->ContainerPtrToValuePtr<void>(LocalGridActor));

    TArray<FHexTileData> GridDataArray;
    for (int32 i = 0; i < ArrayHelper.Num(); i++)
    {
        FHexTileData* TileData = reinterpret_cast<FHexTileData*>(ArrayHelper.GetRawPtr(i));
        GridDataArray.Add(*TileData);
    }

    float TileSize = 100.f;
    if (FProperty* TileSizeProp = LocalGridActor->GetClass()->FindPropertyByName(TEXT("TileSize")))
    {
        TileSize = *TileSizeProp->ContainerPtrToValuePtr<float>(LocalGridActor);
    }

    FIntPoint StartCoords = SelectedUnit->CurrentGridCoords;
    FIntPoint EndCoords = PathComponent->WorldToGrid(TargetWorldLocation, TileSize);

    TArray<FIntPoint> OutPathCoords;
    bool bPathFound = PathComponent->FindPath(GridDataArray, StartCoords, EndCoords, OutPathCoords);

    if (!bPathFound || OutPathCoords.Num() == 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("C++: Yol bulunamadý!"));
        return;
    }

    int32 PathCost = OutPathCoords.Num() - 1;
    if (PathCost > SelectedUnit->CurrentMovementPoints)
    {
        UE_LOG(LogTemp, Warning, TEXT("C++: Yol var ama çok uzun!"));
        return;
    }

    SelectedUnit->MoveAlongPath(OutPathCoords, PathComponent, TileSize);
    SelectedUnit->SpendMovement(PathCost);
    SelectedUnit->CurrentGridCoords = EndCoords;

    if (!SelectedUnit->CanMove())
    {
        SelectedUnit = nullptr;
    }
}

void ACivPlayerController::Server_RequestEndTurn_Implementation()
{
    if (HasAuthority())
    {
        ACivGameMode* GM = GetWorld()->GetAuthGameMode<ACivGameMode>();
        if (GM)
            GM->EndPlayerTurn();
    }
}

void ACivPlayerController::OnLeftMouseClick()
{
    FHitResult HitResult;
    if (GetHitResultUnderCursor(ECC_Visibility, false, HitResult))
    {
        HandleTileClick(HitResult.GetActor(), HitResult.Location);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("C++: Týklama boþa gitti."));
    }
}

void ACivPlayerController::HandlePauseMenu()
{
    if (IsPaused())
    {
        SetPause(false);
        SetInputMode(FInputModeGameOnly());
        bShowMouseCursor = false;
        return;
    }

    SetPause(true);

    if (PauseMenuClass)
    {
        UUserWidget* PauseWidget = CreateWidget<UUserWidget>(this, PauseMenuClass);
        PauseWidget->AddToViewport();
    }

    SetInputMode(FInputModeUIOnly());
    bShowMouseCursor = true;
}

void ACivPlayerController::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);

    // BP_HexGrid üzerinden hover koordinatý yazdýrma
    UClass* GridClass = LoadClass<AActor>(nullptr, TEXT("/Game/BP_HexGrid.BP_HexGrid_C"));
    AActor* LocalGridActor = UGameplayStatics::GetActorOfClass(GetWorld(), GridClass);

    if (!LocalGridActor)
        return;

    UHexGridComponent* GridComp = LocalGridActor->FindComponentByClass<UHexGridComponent>();
    if (!GridComp)
        return;

    FHitResult Hit;
    if (!GetHitResultUnderCursor(ECC_Visibility, false, Hit))
        return;

    FVector WorldPos = Hit.Location;
    FVector GridOrigin = LocalGridActor->GetActorLocation();
    FVector LocalPos = WorldPos - GridOrigin;

    FIntPoint Coords = GridComp->WorldToGrid(LocalPos);

    if (GEngine)
    {
        FString Msg = FString::Printf(TEXT("Tile: %d, %d"), Coords.X, Coords.Y);
        GEngine->AddOnScreenDebugMessage(1, 0.f, FColor::Cyan, Msg);
    }
}

void ACivPlayerController::OnRightMouseClick()
{
    FHitResult Hit;
    if (!GetHitResultUnderCursor(ECC_Visibility, false, Hit))
        return;

    // Dünya pozisyonu
    FVector WorldLocation = Hit.Location;

    // Grid (BP_HexGrid) blueprint'i bul
    UClass* GridClass = LoadClass<AActor>(nullptr, TEXT("/Game/BP_HexGrid.BP_HexGrid_C"));
    AActor* LocalGridActor = UGameplayStatics::GetActorOfClass(GetWorld(), GridClass);

    if (!LocalGridActor)
    {
        UE_LOG(LogTemp, Error, TEXT("OnRightMouseClick: BP_HexGrid sahnede bulunamadý!"));
        return;
    }

    // HexGridComponent'i al
    UHexGridComponent* HexComp = LocalGridActor->FindComponentByClass<UHexGridComponent>();
    if (!HexComp)
    {
        UE_LOG(LogTemp, Error, TEXT("OnRightMouseClick: HexGridComponent bulunamadý!"));
        return;
    }

    // Dünya pozisyonunu Grid origin'e göre local pozisyona çevir
    FVector LocalPos = WorldLocation - LocalGridActor->GetActorLocation();

    // WorldToGrid dönüþümü (HexGridComponent tarafýndan saðlanýyor)
    FIntPoint GridCoords = HexComp->WorldToGrid(LocalPos);

    // GameMode'dan spawn iste
    ACivGameMode* GM = GetWorld()->GetAuthGameMode<ACivGameMode>();
    if (GM)
    {
        TSubclassOf<AUnitBase> UnitClass =
            LoadClass<AUnitBase>(nullptr, TEXT("/Game/BP_TestUnit.BP_TestUnit_C"));

        GM->SpawnUnitAtTile(UnitClass, GridCoords);
    }
}

