#include "HexGridManager.h"
// #include "Components/InstancedStaticMeshComponent.h" // .h dosyasýnda zaten dahil edildi.

AHexGridManager::AHexGridManager()
{
	PrimaryActorTick.bCanEverTick = false;

	// YENÝ: Bu aktörün C++'da bir root component'i (Kök Bileþeni) yoktu.
	// Diðer bileþenleri baðlayabilmek için bir tane oluþturalým.
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

	// YENÝ: Seçim vurgulayýcý bileþenini oluþtur
	SelectionHighlighter = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SelectionHighlighter"));
	// Vurgulayýcýyý RootComponent'e baðla
	SelectionHighlighter->SetupAttachment(RootComponent);
	// Baþlangýçta görünmez yap
	SelectionHighlighter->SetVisibility(false);
	// Týklamalarý engellemesin (altýndaki karoya týklayabilmeliyiz)
	SelectionHighlighter->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	HexWidth = 0.0f;
	HexHeight = 0.0f;
}

void AHexGridManager::CalculateHexMetrics()
{
	HexWidth = FMath::Sqrt(3.0f) * TileSize;
	HexHeight = 2.0f * TileSize;
}

void AHexGridManager::BeginPlay()
{
	Super::BeginPlay();

	GenerateGridData();
	CreateVisualGrid();

	// YENÝ: Vurgulayýcý ayarlarý
	if (HighlighterMesh)
	{
		SelectionHighlighter->SetStaticMesh(HighlighterMesh);

		// Ölçeðini karolarla ayný yap (veya biraz büyük)
		// (TileSize / 50.0f) -> Eðer TileSize=100 ise mesh'i 2 kat büyütür.
		// Shape_Cylinder'ýn varsayýlan boyutu 100x100 (yarýçap 50) olduðu için bu formülü kullanýyoruz.
		float Scale = TileSize / 50.0f;
		SelectionHighlighter->SetRelativeScale3D(FVector(Scale, Scale, 1.0f));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("HighlighterMesh atanmamis, secim gorsellestirilemeyecek."));
	}

	// YENÝ: Test birimini doður
	if (DefaultTestUnitClass)
	{
		// [5, 5] koordinatýna bir test birimi doður
		FIntPoint SpawnCoord(5, 5);
		SpawnUnit(SpawnCoord, DefaultTestUnitClass);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("DefaultTestUnitClass atanmamis, test birimi dogurulamadi."));
	}
}

void AHexGridManager::GenerateGridData()
{
	GridData.Empty();
	CalculateHexMetrics();

	for (int32 q = 0; q < GridWidth; q++)
	{
		for (int32 r = 0; r < GridHeight; r++)
		{
			FTileData NewTileData;
			NewTileData.GridCoordinates = FIntPoint(q, r);

			// Þimdilik hepsi çimen
			NewTileData.TileType = ETileType::TT_Grass;

			// YENÝ: Basit bir su oluþturma mantýðý
			// Kenarlara yakýn karolarý su yap
			if (q == 0 || r == 0 || q >= GridWidth - 2 || r >= GridHeight - 2)
			{
				NewTileData.TileType = ETileType::TT_Water;
			}
			// YENÝ: Bazý rastgele daðlar ekle (çok basit bir gürültü)
			if (q % 5 == 0 && r % 3 == 0)
			{
				NewTileData.TileType = ETileType::TT_Mountain;
			}


			NewTileData.WorldPosition = GridToWorld(NewTileData.GridCoordinates);
			GridData.Add(NewTileData.GridCoordinates, NewTileData);
		}
	}

	UE_LOG(LogTemp, Warning, TEXT("Hex Grid Data olusturuldu. Toplam %d adet karo (tile) var."), GridData.Num());
}

/**
 * YENÝ FONKSÝYON
 * Harita verisini (GridData) okur ve buna göre
 * Instanced Static Mesh'leri oluþturup haritayý çizer.
 */
void AHexGridManager::CreateVisualGrid() // CreateVisualGrid
{
	// Önceki mesh bileþenlerini temizle (eðer varsa)
	for (TPair<ETileType, UInstancedStaticMeshComponent*> Pair : TileISMs)
	{
		if (Pair.Value)
		{
			Pair.Value->DestroyComponent();
		}
	}
	TileISMs.Empty();

	// 1. ADIM: Blueprint'te tanýmlanan TileMeshes TMap'ine göre ISM bileþenlerini oluþtur
	for (const TPair<ETileType, UStaticMesh*>& Pair : TileMeshes)
	{
		ETileType Type = Pair.Key;
		UStaticMesh* Mesh = Pair.Value;

		if (Mesh)
		{
			// Bu karo türü için yeni bir ISM bileþeni oluþtur
			UInstancedStaticMeshComponent* NewISM = NewObject<UInstancedStaticMeshComponent>(this);
			NewISM->RegisterComponent();        // Bileþeni dünyaya kaydet
			NewISM->SetStaticMesh(Mesh);        // Mesh'ini ata
			NewISM->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform); // Aktöre baðla
			NewISM->SetCollisionResponseToChannel(ECollisionChannel::ECC_Visibility, ECollisionResponse::ECR_Block);

			// Bu bileþeni daha sonra hýzlý eriþim için TMap'imize ekle
			TileISMs.Add(Type, NewISM);
		}
	}

	// 2. ADIM: Tüm harita verisini (GridData) dolaþ ve ilgili ISM'e bir kopya (instance) ekle
	for (const TPair<FIntPoint, FTileData>& Pair : GridData)
	{
		const FTileData& TileData = Pair.Value;

		// Bu karonun türüne (TT_Grass vb.) karþýlýk gelen ISM bileþenini bul
		UInstancedStaticMeshComponent** FoundISM = TileISMs.Find(TileData.TileType);

		if (FoundISM && *FoundISM)
		{
			// Bir ISM bileþeni bulundu!

			// Karonun dünyadaki konumunu (WorldPosition) al
			FVector InstancePosition = TileData.WorldPosition;

			// ÖNEMLÝ: Mesh'lerimizin boyutu genellikle 100x100 (yarýçap 50) olur.
			// Bizim TileSize deðiþkenimiz (örn: 100) altýgenin yarýçapýdýr.
			// Düz bir Plane mesh'i (kare) altýgene sýðdýrmak için doðru ölçeklemeliyiz.
			// (TileSize / 50.0f) -> Eðer TileSize=100 ise mesh'i 2 kat büyütür (200x200).
			// Bu, 100 yarýçaplý altýgeni kabaca kaplar.
			float Scale = TileSize / 50.0f;
			FVector InstanceScale(Scale, Scale, 1.0f);

			// Dönüþüm (Transform) matrisini oluþtur (Konum, Rotasyon, Ölçek)
			FTransform InstanceTransform(FRotator::ZeroRotator, InstancePosition, InstanceScale);

			// Ve ISM bileþenine bu transform ile yeni bir kopya (instance) ekle
			(*FoundISM)->AddInstance(InstanceTransform);
		}
		else
		{
			// Kullanýcý bu karo türü (örn: TT_Desert) için bir mesh atamamýþsa
			// log'a bir uyarý yazdýr (sadece bir kez)
			static TSet<ETileType> LoggedTypes;
			if (!LoggedTypes.Contains(TileData.TileType))
			{
				UE_LOG(LogTemp, Warning, TEXT("'%d' karo turu icin 'TileMeshes' TMap'inde bir mesh tanimlanmamis, gorsellestirilemedi."), (int32)TileData.TileType);
				LoggedTypes.Add(TileData.TileType);
			}
		}
	}
}


FVector AHexGridManager::GridToWorld(FIntPoint GridCoord) const
{
	// ... (Bu fonksiyonun içi ayný, deðiþiklik yok) ...
	const float q = (float)GridCoord.X;
	const float r = (float)GridCoord.Y;
	const bool bIsOddColumn = (GridCoord.X % 2 != 0);
	const float X = q * (HexWidth * 0.75f);
	float Y = r * HexHeight;
	if (bIsOddColumn)
	{
		Y += HexHeight * 0.5f;
	}
	const float Z = 0.0f;
	return FVector(X, Y, Z) + GetActorLocation();
}

// ... dosyanýn üst kýsmý (GenerateGridData, GridToWorld vb.) ayný kalýyor ...


FIntPoint AHexGridManager::WorldToGrid(FVector WorldCoord) const
{
	// Bu fonksiyon, "Odd-q" (Tek-q) dikey düzen için
	// Dünya Koordinatýný -> Izgara Koordinatýna çevirir.
	// Kaynak: https://www.redblobgames.com/grids/hexagons/#pixel-to-hex

	if (HexWidth == 0.f || HexHeight == 0.f)
	{
		UE_LOG(LogTemp, Error, TEXT("HexMetrics hesaplanmamis! WorldToGrid calisamaz."));
		return FIntPoint(-1, -1);
	}

	// 1. Adým: Týklama pozisyonunu aktörün yerel pozisyonuna göre ayarla
	const FVector RelativePos = WorldCoord - GetActorLocation();

	// 2. Adým: Týklama pozisyonunu "Axial" (Eksenel) koordinatlara dönüþtür
	// "Pointy top" (sivri uçlu) hex'ler için
	// Bu, ýzgara koordinatlarýnýn kesirli (ondalýklý) halidir.
	const float q_frac = (RelativePos.X * (2.0f / 3.0f)) / TileSize;
	const float r_frac = ((-RelativePos.X / 3.0f) + (FMath::Sqrt(3.0f) / 3.0f) * RelativePos.Y) / TileSize;

	// Biz "odd-q" (Civilization düzeni) kullanýyoruz, Eksenel (axial) deðil.
	// "odd-q" koordinatýný (col, row) kesirli olarak hesaplamalýyýz.
	const float col_frac = RelativePos.X * 4.0f / (HexWidth * 3.0f);

	const bool bIsOddColumn = (FMath::FloorToInt(col_frac) % 2 != 0);
	float row_offset = bIsOddColumn ? (HexHeight * 0.5f) : 0.0f;
	const float row_frac = (RelativePos.Y - row_offset) / HexHeight;


	// 3. Adým: Kesirli koordinatlarý en yakýn tam sayýya yuvarlama (Rounding)
	// Bu kýsým en karmaþýk olanýdýr.
	// Eksenel koordinatlarý "Cube" (Küp) koordinatlarýna çevirerek yuvarlamak en doðru sonucu verir.

	// Kesirli Eksenel (Axial) koordinatlarý (q, r) kullanarak
	// Kesirli Küp (Cube) koordinatlarýný (x, y, z) hesapla (x + y + z = 0 olmalý)
	const float x_cube_frac = col_frac;
	const float z_cube_frac = row_frac;
	const float y_cube_frac = -x_cube_frac - z_cube_frac;

	// Küp koordinatlarýný en yakýn tam sayýya yuvarla
	int32 rx = FMath::RoundToInt(x_cube_frac);
	int32 ry = FMath::RoundToInt(y_cube_frac);
	int32 rz = FMath::RoundToInt(z_cube_frac);

	// Yuvarlama sonrasý toplam (x+y+z) 0 olmayabilir.
	// Hangi eksende en çok deðiþiklik (hata) olduðuna bakarak düzeltme yap.
	const float x_diff = FMath::Abs((float)rx - x_cube_frac);
	const float y_diff = FMath::Abs((float)ry - y_cube_frac);
	const float z_diff = FMath::Abs((float)rz - z_cube_frac);

	if (x_diff > y_diff && x_diff > z_diff)
	{
		rx = -ry - rz;
	}
	else if (y_diff > z_diff)
	{
		ry = -rx - rz;
	}
	else
	{
		rz = -rx - ry;
	}

	// 4. Adým: Yuvarlanmýþ ve düzeltilmiþ Küp koordinatlarýný (rx, rz)
	// bizim kullandýðýmýz "odd-q" Izgara Koordinatýna (FIntPoint) geri çevir.

	const int32 col = rx; // Küp (x) -> Sütun (q veya col)
	const int32 row = rz + (rx + (rx & 1)) / 2; // Küp (z) -> Satýr (r veya row)

	// "odd-q" dönüþümü:
	// col = x
	// row = z + (x + (x&1)) / 2  (x&1 -> x'in tek olup olmadýðýný kontrol eder (x % 2))

	// Bizim kullandýðýmýz GridToWorld matematiðinin tam tersi:
	const int32 final_col = rx;
	const int32 final_row = FMath::RoundToInt((float)rz + (float)(rx - (rx & 1)) * 0.5f);

	// Yukarýdaki matematik çok karmaþýk. Daha basit bir "offset coordinate" dönüþümü deneyelim
	// (Yeniden yazýyorum, bu daha basit ve bizim GridToWorld ile uyumlu olmalý)

	// Basit Eksenel'den (Axial) -> "odd-q" (Bizim düzenimiz)
	// int col = q
	// int row = r + (q + (q&1)) / 2

	// (Daha basit ve doðru bir "odd-q" pixel-to-hex formülü uyguluyorum)
	// (Kaynak: Red Blob Games, "odd-q vertical layout")

	// 1. Dünya pozisyonunu, hex'in dýþ yarýçapýna (TileSize) göre normalize et
	const FVector RelativePos_RB = WorldCoord - GetActorLocation();
	const float q_calc = (RelativePos_RB.X * 2.0f / 3.0f) / TileSize;
	const float r_calc = (-RelativePos_RB.X / 3.0f + FMath::Sqrt(3.0f) / 3.0f * RelativePos_RB.Y) / TileSize;

	// 2. Eksenel (axial) koordinatlarý Küp (cube) koordinatlarýna çevir
	FVector3f CubeFrac = FVector3f(q_calc, -q_calc - r_calc, r_calc);

	// 3. Küp koordinatlarýný en yakýn tam sayýya yuvarla
	int32 RoundX = FMath::RoundToInt(CubeFrac.X);
	int32 RoundY = FMath::RoundToInt(CubeFrac.Y);
	int32 RoundZ = FMath::RoundToInt(CubeFrac.Z);

	// 4. Yuvarlama sonrasý sapmayý düzelt
	FVector3f CubeDiff = FVector3f(
		FMath::Abs((float)RoundX - CubeFrac.X),
		FMath::Abs((float)RoundY - CubeFrac.Y),
		FMath::Abs((float)RoundZ - CubeFrac.Z)
	);

	if (CubeDiff.X > CubeDiff.Y && CubeDiff.X > CubeDiff.Z)
	{
		RoundX = -RoundY - RoundZ;
	}
	else if (CubeDiff.Y > CubeDiff.Z)
	{
		RoundY = -RoundX - RoundZ;
	}
	else
	{
		RoundZ = -RoundX - RoundY;
	}

	// 5. Tam sayý Küp koordinatlarýný (RoundX, RoundZ) bizim "odd-q" koordinat sistemimize (col, row) çevir.
	// col = RoundX
	// row = RoundZ + (RoundX + (RoundX & 1)) / 2
	const int32 FinalCol = RoundX;
	const int32 FinalRow = RoundZ + (RoundX + (RoundX & 1)) / 2;

	return FIntPoint(FinalCol, FinalRow);
}

/**
 * YENÝ FONKSÝYON
 * TMap'ten güvenli bir þekilde karo verisi alýr.
 */
bool AHexGridManager::GetTileData(FIntPoint GridCoord, FTileData& OutData)
{
	// GridData TMap'inde bu koordinatý (key) ara
	FTileData* FoundTile = GridData.Find(GridCoord);

	if (FoundTile)
	{
		// Bulunduysa, veriyi OutData parametresine kopyala ve true dön
		OutData = *FoundTile;
		return true;
	}

	// Bulunamadýysa (örn. harita dýþýna týklandý), false dön
	return false;
}

/**
 * YENÝ FONKSÝYON
 * Vurgulayýcý mesh'i hareket ettirir ve görünür kýlar.
 */
void AHexGridManager::UpdateHighlighter(FIntPoint GridCoord)
{
	FTileData TileToHighlight;

	// Önce bu koordinatta geçerli bir karo var mý diye kontrol et
	if (GetTileData(GridCoord, TileToHighlight))
	{
		// Karo bulundu. Vurgulayýcýnýn pozisyonunu o karonun
		// dünya pozisyonuna ayarla (Z'de 5 birim yukarýda olsun ki üstünde dursun)
		FVector NewLocation = TileToHighlight.WorldPosition + FVector(0, 0, 5.0f);
		SelectionHighlighter->SetWorldLocation(NewLocation);

		// Vurgulayýcýyý görünür yap
		SelectionHighlighter->SetVisibility(true);
	}
	else
	{
		// Geçersiz bir koordinat (örn. harita dýþý)
		// Vurgulayýcýyý gizle
		SelectionHighlighter->SetVisibility(false);
	}
}

AUnitBase* AHexGridManager::GetUnitAt(FIntPoint GridCoord)
{
	// UnitData TMap'inde bu koordinatý (key) ara
	AUnitBase** FoundUnit = UnitData.Find(GridCoord);

	if (FoundUnit)
	{
		return *FoundUnit; // Bulunduysa pointer'ý döndür
	}

	return nullptr; // Bulunamadýysa nullptr döndür
}

void AHexGridManager::SpawnUnit(FIntPoint GridCoord, TSubclassOf<AUnitBase> UnitClass)
{
	// Bu koordinatta zaten bir birim var mý? Veya geçersiz bir sýnýf mý?
	if (!UnitClass || GetUnitAt(GridCoord))
	{
		UE_LOG(LogTemp, Warning, TEXT("SpawnUnit basarisiz: Koordinat (%s) dolu veya UnitClass gecersiz."), *GridCoord.ToString());
		return;
	}

	// Bu koordinatta geçerli bir karo var mý?
	FTileData TileData;
	if (GetTileData(GridCoord, TileData))
	{
		// 1. Birimi Dünyaya Doður (Spawn)
		UWorld* World = GetWorld();
		if (!World) return;

		// Konumu ayarla (karonun dünya pozisyonu + Z'de biraz yukarý)
		FVector SpawnLocation = TileData.WorldPosition + FVector(0, 0, 50.0f); // 50 birim yukarý
		FActorSpawnParameters SpawnParams;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn; // Çarpýþsa bile doður

		AUnitBase* NewUnit = World->SpawnActor<AUnitBase>(UnitClass, SpawnLocation, FRotator::ZeroRotator, SpawnParams);

		if (NewUnit)
		{
			// 2. Birimin iç koordinatýný ayarla
			NewUnit->SetGridCoord(GridCoord);

			// 3. GridManager'ýn TMap'ine bu birimi kaydet
			UnitData.Add(GridCoord, NewUnit);

			UE_LOG(LogTemp, Warning, TEXT("Birim basariyla doguruldu: %s , Koordinat: %s"),
				*NewUnit->GetName(), *GridCoord.ToString());
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("SpawnUnit basarisiz: Koordinat (%s) haritada bulunamadi."), *GridCoord.ToString());
	}
}

/**
 * YENÝ FONKSÝYON
 * Bir birimi eski koordinatýndan yeni koordinatýna taþýr.
 * Veri haritalarýný (UnitData) günceller ve aktörün pozisyonunu deðiþtirir.
 */
bool AHexGridManager::MoveUnit(AUnitBase* UnitToMove, FIntPoint TargetCoord)
{
	if (!UnitToMove)
	{
		UE_LOG(LogTemp, Error, TEXT("MoveUnit: Taþýnacak birim (UnitToMove) null!"));
		return false;
	}

	if (!UnitToMove->CanMove())
	{
		UE_LOG(LogTemp, Warning, TEXT("MoveUnit: Birimin (%s) hareket puani kalmamis!"), *UnitToMove->GetName());
		return false;
	}

	FIntPoint OldCoord = UnitToMove->CurrentGridCoord;

	// 1. Hedef Geçerli mi? (Harita Dýþý mý?)
	FTileData TargetTile;
	if (!GetTileData(TargetCoord, TargetTile))
	{
		UE_LOG(LogTemp, Warning, TEXT("MoveUnit: Hedef koordinat (%s) harita disinda."), *TargetCoord.ToString());
		return false;
	}

	// 2. Hedef Yürünebilir mi? (Dað veya Su mu?)
	if (TargetTile.TileType == ETileType::TT_Mountain || TargetTile.TileType == ETileType::TT_Water)
	{
		UE_LOG(LogTemp, Warning, TEXT("MoveUnit: Hedef koordinat (%s) yurulebilir degil (Dag/Su)."), *TargetCoord.ToString());
		return false;
	}

	// 3. Hedef Dolu mu? (Baþka bir birim var mý?)
	if (GetUnitAt(TargetCoord) != nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("MoveUnit: Hedef koordinat (%s) baska bir birim tarafindan dolu."), *TargetCoord.ToString());
		return false;
	}

	// 4. Tüm kontroller geçti. Hareketi gerçekleþtir!

	// Veri haritasýný (TMap) güncelle:
	// a. Eski koordinattan birimi kaldýr
	UnitData.Remove(OldCoord);
	// b. Yeni koordinata birimi ekle
	UnitData.Add(TargetCoord, UnitToMove);

	// Birimin kendi içindeki koordinatý güncelle
	UnitToMove->SetGridCoord(TargetCoord);

	// Birim aktörünü (görsel olarak) dünyada yeni konumuna "ýþýnla"
	FVector NewWorldLocation = TargetTile.WorldPosition + FVector(0, 0, 10.0f); // Spawn ile ayný Z-offset
	UnitToMove->SetActorLocation(NewWorldLocation);

	// Hareket puanýný harca
	// (Þimdilik her hareket 1 puan olsun)
	int32 MovementCost = 1;
	UnitToMove->SpendMovement(MovementCost);

	UE_LOG(LogTemp, Warning, TEXT("%s, %d puan harcadi. Kalan puan: %d"),
		*UnitToMove->GetName(), MovementCost, UnitToMove->CurrentMovementPoints);

	return true;
}