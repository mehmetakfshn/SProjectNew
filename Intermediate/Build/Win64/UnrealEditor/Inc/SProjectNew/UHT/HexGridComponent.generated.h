// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HexGridComponent.h"

#ifdef SPROJECTNEW_HexGridComponent_generated_h
#error "HexGridComponent.generated.h already included, missing '#pragma once' in HexGridComponent.h"
#endif
#define SPROJECTNEW_HexGridComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class ERiverEdge : uint8;
enum class ETileType : uint8;
struct FHexTileData;

// ********** Begin Class UHexGridComponent ********************************************************
#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_HexGridComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRecalculateAllTileYields); \
	DECLARE_FUNCTION(execGetTileYieldAt); \
	DECLARE_FUNCTION(execRequestRebuildVisual); \
	DECLARE_FUNCTION(execSetRiverAtEdge); \
	DECLARE_FUNCTION(execAddTileHeightLevel); \
	DECLARE_FUNCTION(execSetTileHeightLevel); \
	DECLARE_FUNCTION(execSetTileTypeAt); \
	DECLARE_FUNCTION(execGetTileData); \
	DECLARE_FUNCTION(execIsValidCoords); \
	DECLARE_FUNCTION(execInitializeEditorGrid); \
	DECLARE_FUNCTION(execWorldToGrid); \
	DECLARE_FUNCTION(execGridToWorld); \
	DECLARE_FUNCTION(execGenerateGrid);


SPROJECTNEW_API UClass* Z_Construct_UClass_UHexGridComponent_NoRegister();

#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_HexGridComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHexGridComponent(); \
	friend struct Z_Construct_UClass_UHexGridComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SPROJECTNEW_API UClass* Z_Construct_UClass_UHexGridComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UHexGridComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SProjectNew"), Z_Construct_UClass_UHexGridComponent_NoRegister) \
	DECLARE_SERIALIZER(UHexGridComponent)


#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_HexGridComponent_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UHexGridComponent(UHexGridComponent&&) = delete; \
	UHexGridComponent(const UHexGridComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHexGridComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHexGridComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHexGridComponent) \
	NO_API virtual ~UHexGridComponent();


#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_HexGridComponent_h_13_PROLOG
#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_HexGridComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_HexGridComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_HexGridComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_HexGridComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UHexGridComponent;

// ********** End Class UHexGridComponent **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_HexGridComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
