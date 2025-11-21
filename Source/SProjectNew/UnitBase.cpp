#include "UnitBase.h"
#include "Components/StaticMeshComponent.h"
#include "PathfindingComponent.h" // Yeni C++ bileþenimiz
#include "DrawDebugHelpers.h" // Yolu çizmek için

AUnitBase::AUnitBase()
{
	// Artýk her karede (Tick) çalýþmasý gerekiyor
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	UnitMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("UnitMesh"));
	UnitMesh->SetupAttachment(RootComponent);

	// Týklanabilir olduðundan emin ol (daha önce BP'de yapmýþtýk)
	UnitMesh->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);

	// Varsayýlan deðerler
	CurrentGridCoords = FIntPoint(0, 0); // Baþlangýç koordinatý (BP'den ezilmeli)
	MovementSpeed = 5.0f; // Akýcý hareket hýzý

	MaxMovementPoints = 2;
	CurrentMovementPoints = MaxMovementPoints;

	bIsMoving = false;
	CurrentPathIndex = 0;
}

void AUnitBase::BeginPlay()
{
	Super::BeginPlay();
	CurrentMovementPoints = MaxMovementPoints;
}

// --- Akýcý Hareket Mantýðý (Tick) ---
void AUnitBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Eðer bIsMoving true ise ve takip edilecek bir yol varsa
	if (bIsMoving && WorldPathToFollow.IsValidIndex(CurrentPathIndex))
	{
		FVector CurrentLocation = GetActorLocation();
		FVector TargetLocation = WorldPathToFollow[CurrentPathIndex];

		if (FVector::DistSquared(CurrentLocation, TargetLocation) < FMath::Square(10.0f)) // 10 birim yakýndaysak
		{
			// Bir sonraki noktaya geç
			CurrentPathIndex++;
			if (!WorldPathToFollow.IsValidIndex(CurrentPathIndex))
			{
				// Yol bitti
				bIsMoving = false;
				SetActorLocation(TargetLocation); // Tam hedefe yerleþ
				// Yolu çizmeyi býrak
				FlushPersistentDebugLines(GetWorld());
			}
		}
		else
		{
			// Hedefe doðru akýcý hareket et (Interp)
			FVector NewLocation = FMath::VInterpTo(
				CurrentLocation,
				TargetLocation,
				DeltaTime,
				MovementSpeed
			);
			SetActorLocation(NewLocation);
		}
	}
}

// --- Yeni Hareket Fonksiyonu ---
void AUnitBase::MoveAlongPath(
	const TArray<FIntPoint>& PathCoordinates,
	UPathfindingComponent* PathfindingComponent,
	float TileSize
)
{
	if (bIsMoving) return; // Zaten hareket ediyorsa yenisini baþlatma

	WorldPathToFollow.Empty();

	// Koordinat yolunu (FIntPoint) Dünya Konumu yoluna (FVector) çevir
	for (const FIntPoint& Coords : PathCoordinates)
	{
		FVector WorldPos = PathfindingComponent->GridToWorld(Coords, TileSize);
		// Birimin havada durmasý için Z ofsetini ekle
		WorldPos.Z += 2.0f;
		WorldPathToFollow.Add(WorldPos);
	}

	// Yolu çizmeyi baþlat
	DrawPath();

	// Hareketi baþlat
	CurrentPathIndex = 1; // 0. indeks zaten olduðumuz yerdir, 1'den baþla
	bIsMoving = true;
}

// --- Yolu Çizme Fonksiyonu ---
void AUnitBase::DrawPath()
{
	// Önceki çizgileri temizle
	FlushPersistentDebugLines(GetWorld());

	if (WorldPathToFollow.Num() < 2) return;

	// Yol boyunca çizgiler çiz
	for (int32 i = 0; i < WorldPathToFollow.Num() - 1; i++)
	{
		DrawDebugLine(
			GetWorld(),
			WorldPathToFollow[i], // Baþlangýç
			WorldPathToFollow[i + 1], // Bitiþ
			FColor::Yellow,
			true, // Kalýcý (hareket bitene kadar)
			-1.0f,
			0,
			5.0f // Çizgi kalýnlýðý
		);
	}
}

// --- Ýstatistik Fonksiyonlarý (Deðiþiklik Yok) ---
bool AUnitBase::CanMove() const
{
	return CurrentMovementPoints > 0;
}
void AUnitBase::SpendMovement(int32 Cost)
{
	CurrentMovementPoints = FMath::Max(0, CurrentMovementPoints - Cost);
}
void AUnitBase::ResetForNewTurn()
{
	CurrentMovementPoints = MaxMovementPoints;
	UE_LOG(LogTemp, Warning, TEXT("%s adli birimin hareket puanlari yenilendi."), *GetName());
}

void AUnitBase::InitUnit(UCivilizationManager* OwnerCiv, const FUnitData& Data, const FIntPoint& GridPos)
{
	OwnerCivilization = OwnerCiv;     // Eðer böyle bir deðiþken yoksa ekleriz
	UnitData = Data;                  // Eðer böyle bir deðiþken yoksa ekleriz
	GridPosition = GridPos;           // Eðer böyle bir deðiþken yoksa ekleriz

	UE_LOG(LogTemp, Warning, TEXT("Unit initialized: %s at %d,%d"),
		*Data.DisplayName, GridPos.X, GridPos.Y);
}
