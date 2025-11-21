// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HexGridVisualActor.h"

#ifdef SPROJECTNEW_HexGridVisualActor_generated_h
#error "HexGridVisualActor.generated.h already included, missing '#pragma once' in HexGridVisualActor.h"
#endif
#define SPROJECTNEW_HexGridVisualActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FHexTileData;

// ********** Begin Class AHexGridVisualActor ******************************************************
#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_HexGridVisualActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBuildFromGridData);


SPROJECTNEW_API UClass* Z_Construct_UClass_AHexGridVisualActor_NoRegister();

#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_HexGridVisualActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHexGridVisualActor(); \
	friend struct Z_Construct_UClass_AHexGridVisualActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SPROJECTNEW_API UClass* Z_Construct_UClass_AHexGridVisualActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AHexGridVisualActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SProjectNew"), Z_Construct_UClass_AHexGridVisualActor_NoRegister) \
	DECLARE_SERIALIZER(AHexGridVisualActor)


#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_HexGridVisualActor_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AHexGridVisualActor(AHexGridVisualActor&&) = delete; \
	AHexGridVisualActor(const AHexGridVisualActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHexGridVisualActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHexGridVisualActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHexGridVisualActor) \
	NO_API virtual ~AHexGridVisualActor();


#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_HexGridVisualActor_h_11_PROLOG
#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_HexGridVisualActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_HexGridVisualActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_HexGridVisualActor_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_HexGridVisualActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AHexGridVisualActor;

// ********** End Class AHexGridVisualActor ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_HexGridVisualActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
