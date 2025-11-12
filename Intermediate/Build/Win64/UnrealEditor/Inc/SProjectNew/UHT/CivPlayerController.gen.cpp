// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CivPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCivPlayerController() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
SPROJECTNEW_API UClass* Z_Construct_UClass_ACivPlayerController();
SPROJECTNEW_API UClass* Z_Construct_UClass_ACivPlayerController_NoRegister();
SPROJECTNEW_API UClass* Z_Construct_UClass_AHexGridManager_NoRegister();
SPROJECTNEW_API UClass* Z_Construct_UClass_AUnitBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_SProjectNew();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACivPlayerController *****************************************************
void ACivPlayerController::StaticRegisterNativesACivPlayerController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACivPlayerController;
UClass* ACivPlayerController::GetPrivateStaticClass()
{
	using TClass = ACivPlayerController;
	if (!Z_Registration_Info_UClass_ACivPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CivPlayerController"),
			Z_Registration_Info_UClass_ACivPlayerController.InnerSingleton,
			StaticRegisterNativesACivPlayerController,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ACivPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_ACivPlayerController_NoRegister()
{
	return ACivPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACivPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "CivPlayerController.h" },
		{ "ModuleRelativePath", "CivPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridManagerRef_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sahnemizdeki HexGridManager'\xef\xbf\xbd bulup bu de\xef\xbf\xbdi\xef\xbf\xbdkende saklayaca\xef\xbf\xbd\xef\xbf\xbdz. */" },
#endif
		{ "ModuleRelativePath", "CivPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sahnemizdeki HexGridManager'\xef\xbf\xbd bulup bu de\xef\xbf\xbdi\xef\xbf\xbdkende saklayaca\xef\xbf\xbd\xef\xbf\xbdz." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedUnit_MetaData[] = {
		{ "Category", "Selection" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * YEN\xef\xbf\xbd: Oyuncunun o an se\xef\xbf\xbdmi\xef\xbf\xbd oldu\xef\xbf\xbdu birim.\n\x09 * E\xef\xbf\xbd""er nullptr (bo\xef\xbf\xbd) ise, hi\xef\xbf\xbd""bir birim se\xef\xbf\xbdilmemi\xef\xbf\xbd demektir.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "CivPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "YEN\xef\xbf\xbd: Oyuncunun o an se\xef\xbf\xbdmi\xef\xbf\xbd oldu\xef\xbf\xbdu birim.\nE\xef\xbf\xbd""er nullptr (bo\xef\xbf\xbd) ise, hi\xef\xbf\xbd""bir birim se\xef\xbf\xbdilmemi\xef\xbf\xbd demektir." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GridManagerRef;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedUnit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACivPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACivPlayerController_Statics::NewProp_GridManagerRef = { "GridManagerRef", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACivPlayerController, GridManagerRef), Z_Construct_UClass_AHexGridManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridManagerRef_MetaData), NewProp_GridManagerRef_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACivPlayerController_Statics::NewProp_SelectedUnit = { "SelectedUnit", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACivPlayerController, SelectedUnit), Z_Construct_UClass_AUnitBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedUnit_MetaData), NewProp_SelectedUnit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACivPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACivPlayerController_Statics::NewProp_GridManagerRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACivPlayerController_Statics::NewProp_SelectedUnit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACivPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACivPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_SProjectNew,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACivPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACivPlayerController_Statics::ClassParams = {
	&ACivPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACivPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACivPlayerController_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACivPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ACivPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACivPlayerController()
{
	if (!Z_Registration_Info_UClass_ACivPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACivPlayerController.OuterSingleton, Z_Construct_UClass_ACivPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACivPlayerController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACivPlayerController);
ACivPlayerController::~ACivPlayerController() {}
// ********** End Class ACivPlayerController *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivPlayerController_h__Script_SProjectNew_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACivPlayerController, ACivPlayerController::StaticClass, TEXT("ACivPlayerController"), &Z_Registration_Info_UClass_ACivPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACivPlayerController), 696747780U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivPlayerController_h__Script_SProjectNew_1440106430(TEXT("/Script/SProjectNew"),
	Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivPlayerController_h__Script_SProjectNew_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivPlayerController_h__Script_SProjectNew_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
