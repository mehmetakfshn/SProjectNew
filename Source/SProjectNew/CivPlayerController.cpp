#include "CivPlayerController.h"
#include "HexGridManager.h" // GridManager sýnýfýmýzý dahil ediyoruz
#include "Kismet/GameplayStatics.h" // GetActorOfClass için
#include "UnitBase.h"

ACivPlayerController::ACivPlayerController()
{
	// Fare imlecini ekranda görünür hale getir
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableMouseOverEvents = true;

	GridManagerRef = nullptr;
	SelectedUnit = nullptr; // YENÝ: Baþlangýçta hiçbir birim seçili deðil
}

void ACivPlayerController::BeginPlay()
{
	Super::BeginPlay();

	// Oyun baþlar baþlamaz sahnede AHexGridManager'ý ara ve referansýný sakla.
	// BP_HexGridManager C++'daki AHexGridManager'dan türediði için bu kod onu bulacaktýr.
	GridManagerRef = Cast<AHexGridManager>(UGameplayStatics::GetActorOfClass(GetWorld(), AHexGridManager::StaticClass()));

	if (!GridManagerRef)
	{
		UE_LOG(LogTemp, Error, TEXT("CivPlayerController: Sahnede AHexGridManager (veya BP_HexGridManager) bulunamadi!"));
	}
}


void ACivPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	// "LeftMouseClick" adýnda bir Eylem Haritasý'ný (Action Mapping)
	// OnLeftMouseClick fonksiyonumuza baðlýyoruz.
	// Bu "LeftMouseClick" adýný Editör'de oluþturacaðýz.
	InputComponent->BindAction("LeftMouseClick", IE_Pressed, this, &ACivPlayerController::OnLeftMouseClick);
}

void ACivPlayerController::OnLeftMouseClick()
{
	if (!GridManagerRef)
	{
		UE_LOG(LogTemp, Error, TEXT("OnLeftMouseClick: GridManager referansi yok!"));
		return;
	}

	FHitResult HitResult;
	if (!GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility, false, HitResult))
	{
		return; // Hiçbir þeye týklamadýysak çýk
	}

	AActor* HitActor = HitResult.GetActor();
	if (!HitActor) return;

	AUnitBase* ClickedUnit = Cast<AUnitBase>(HitActor);

	if (ClickedUnit)
	{
		// -------- SENARYO A: DOÐRUDAN BÝR BÝRÝME (KONÝYE) TIKLANDI --------
		SelectedUnit = ClickedUnit;
		GridManagerRef->UpdateHighlighter(SelectedUnit->CurrentGridCoord);
		UE_LOG(LogTemp, Warning, TEXT("Birim secildi: %s"), *SelectedUnit->GetName());
	}
	else
	{
		// -------- SENARYO B: BÝR BÝRÝME DEÐÝL, BAÞKA BÝR ÞEYE (örn. ZEMÝNE) TIKLANDI --------

		FVector ClickLocation = HitResult.Location;
		FIntPoint ClickedGridCoord = GridManagerRef->WorldToGrid(ClickLocation);

		if (SelectedUnit)
		{
			// --- Senaryo B1: Zaten seçili bir birimimiz var (Hareket Etme Komutu) ---

			// HATA 1 ÝÇÝN DÜZELTME: 'bMoved' deðiþkenini 'if' bloðunun dýþýnda tanýmla
			bool bMoved = false;

			if (!SelectedUnit->CanMove())
			{
				UE_LOG(LogTemp, Warning, TEXT("Bu birimin (%s) hareket puani kalmamis!"), *SelectedUnit->GetName());
			}
			else
			{
				// 'bool' anahtar kelimesini buradan kaldýrýyoruz, çünkü yukarýda tanýmladýk
				bMoved = GridManagerRef->MoveUnit(SelectedUnit, ClickedGridCoord);
			}


			if (bMoved) // Artýk 'bMoved' bu kapsamda tanýnýyor
			{
				// Hareket BAÞARILI
				GridManagerRef->UpdateHighlighter(ClickedGridCoord);

				// HATA 2 ÝÇÝN DÜZELTME: -> yerine . (nokta) kullan
				UE_LOG(LogTemp, Warning, TEXT("Birim, %s koordinatina hareket etti."), *ClickedGridCoord.ToString());

				if (!SelectedUnit->CanMove())
				{
					UE_LOG(LogTemp, Warning, TEXT("Birimin (%s) puani bitti, secim kaldirildi."), *SelectedUnit->GetName());
					SelectedUnit = nullptr;
				}
			}
			// (Hareket baþarýsýz olduysa (bMoved == false), birim seçili kalýr)
		}
		else
		{
			// --- Senaryo B2: Seçili bir birimimiz yok (Sadece Vurgulama) ---
			GridManagerRef->UpdateHighlighter(ClickedGridCoord);
		}
	}
}
