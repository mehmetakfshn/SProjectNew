// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/CivHUDWidget.h"

#ifdef SPROJECTNEW_CivHUDWidget_generated_h
#error "CivHUDWidget.generated.h already included, missing '#pragma once' in CivHUDWidget.h"
#endif
#define SPROJECTNEW_CivHUDWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class ACity;

// ********** Begin Class UCivHUDWidget ************************************************************
#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_UI_CivHUDWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnNextTurnClicked); \
	DECLARE_FUNCTION(execCloseCityDetails); \
	DECLARE_FUNCTION(execOpenCityDetails); \
	DECLARE_FUNCTION(execGetTurnText);


SPROJECTNEW_API UClass* Z_Construct_UClass_UCivHUDWidget_NoRegister();

#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_UI_CivHUDWidget_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCivHUDWidget(); \
	friend struct Z_Construct_UClass_UCivHUDWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SPROJECTNEW_API UClass* Z_Construct_UClass_UCivHUDWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(UCivHUDWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SProjectNew"), Z_Construct_UClass_UCivHUDWidget_NoRegister) \
	DECLARE_SERIALIZER(UCivHUDWidget)


#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_UI_CivHUDWidget_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCivHUDWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCivHUDWidget(UCivHUDWidget&&) = delete; \
	UCivHUDWidget(const UCivHUDWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCivHUDWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCivHUDWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCivHUDWidget) \
	NO_API virtual ~UCivHUDWidget();


#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_UI_CivHUDWidget_h_15_PROLOG
#define FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_UI_CivHUDWidget_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_UI_CivHUDWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_UI_CivHUDWidget_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_UI_CivHUDWidget_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCivHUDWidget;

// ********** End Class UCivHUDWidget **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_UI_CivHUDWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
