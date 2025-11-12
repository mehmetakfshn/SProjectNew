#include "UnitBase.h"
#include "Components/StaticMeshComponent.h"

AUnitBase::AUnitBase()
{
	PrimaryActorTick.bCanEverTick = false;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root")); // Kökü bir SceneComponent yapalým
	UnitMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("UnitMesh"));
	UnitMesh->SetupAttachment(RootComponent); // Mesh'i köke baðla

	CurrentGridCoord = FIntPoint(-1, -1);

	// YENÝ: Varsayýlan deðerleri ata
	MaxMovementPoints = 2; // Varsayýlan olarak 2 hareket puaný
	CurrentMovementPoints = MaxMovementPoints; // Oyun baþýnda tam puanla baþla
}

void AUnitBase::BeginPlay()
{
	Super::BeginPlay();
	// Baþlangýçta puaný tam olsun
	CurrentMovementPoints = MaxMovementPoints;
}

void AUnitBase::SetGridCoord(FIntPoint NewCoord)
{
	CurrentGridCoord = NewCoord;
}

// --- YENÝ FONKSÝYONLAR ---

bool AUnitBase::CanMove() const
{
	// Hareket puaný 0'dan büyükse hareket edebilir
	return CurrentMovementPoints > 0;
}

void AUnitBase::SpendMovement(int32 Cost)
{
	// Puaný düþür, 0'ýn altýna inmemesini saðla
	CurrentMovementPoints = FMath::Max(0, CurrentMovementPoints - Cost);
}

void AUnitBase::ResetForNewTurn()
{
	// Yeni turda puanlarý yenile
	CurrentMovementPoints = MaxMovementPoints;
	UE_LOG(LogTemp, Warning, TEXT("%s adli birimin hareket puanlari yenilendi."), *GetName());
}