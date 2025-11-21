// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PathfindingComponent.h"

#ifdef SPROJECTNEW_PathfindingComponent_generated_h
#error "PathfindingComponent.generated.h already included, missing '#pragma once' in PathfindingComponent.h"
#endif
#define SPROJECTNEW_PathfindingComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FHexTileData;

// ********** Begin Class UPathfindingComponent ****************************************************
#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_PathfindingComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGridToWorld); \
	DECLARE_FUNCTION(execWorldToGrid); \
	DECLARE_FUNCTION(execFindPath);


SPROJECTNEW_API UClass* Z_Construct_UClass_UPathfindingComponent_NoRegister();

#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_PathfindingComponent_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPathfindingComponent(); \
	friend struct Z_Construct_UClass_UPathfindingComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SPROJECTNEW_API UClass* Z_Construct_UClass_UPathfindingComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UPathfindingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SProjectNew"), Z_Construct_UClass_UPathfindingComponent_NoRegister) \
	DECLARE_SERIALIZER(UPathfindingComponent)


#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_PathfindingComponent_h_32_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPathfindingComponent(UPathfindingComponent&&) = delete; \
	UPathfindingComponent(const UPathfindingComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPathfindingComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPathfindingComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPathfindingComponent) \
	NO_API virtual ~UPathfindingComponent();


#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_PathfindingComponent_h_29_PROLOG
#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_PathfindingComponent_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_PathfindingComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_PathfindingComponent_h_32_INCLASS_NO_PURE_DECLS \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_PathfindingComponent_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPathfindingComponent;

// ********** End Class UPathfindingComponent ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_PathfindingComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
