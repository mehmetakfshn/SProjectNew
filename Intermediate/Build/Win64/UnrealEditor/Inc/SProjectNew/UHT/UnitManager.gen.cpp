// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Managers/UnitManager.h"
#include "UnitData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeUnitManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
SPROJECTNEW_API UClass* Z_Construct_UClass_UUnitManager();
SPROJECTNEW_API UClass* Z_Construct_UClass_UUnitManager_NoRegister();
SPROJECTNEW_API UScriptStruct* Z_Construct_UScriptStruct_FUnitData();
UPackage* Z_Construct_UPackage__Script_SProjectNew();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UUnitManager *************************************************************
void UUnitManager::StaticRegisterNativesUUnitManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UUnitManager;
UClass* UUnitManager::GetPrivateStaticClass()
{
	using TClass = UUnitManager;
	if (!Z_Registration_Info_UClass_UUnitManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("UnitManager"),
			Z_Registration_Info_UClass_UUnitManager.InnerSingleton,
			StaticRegisterNativesUUnitManager,
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
	return Z_Registration_Info_UClass_UUnitManager.InnerSingleton;
}
UClass* Z_Construct_UClass_UUnitManager_NoRegister()
{
	return UUnitManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UUnitManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Managers/UnitManager.h" },
		{ "ModuleRelativePath", "Public/Managers/UnitManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllUnits_MetaData[] = {
		{ "Category", "UnitManager" },
		{ "ModuleRelativePath", "Public/Managers/UnitManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AllUnits_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AllUnits_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_AllUnits;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnitManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUnitManager_Statics::NewProp_AllUnits_ValueProp = { "AllUnits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FUnitData, METADATA_PARAMS(0, nullptr) }; // 3709516540
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUnitManager_Statics::NewProp_AllUnits_Key_KeyProp = { "AllUnits_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUnitManager_Statics::NewProp_AllUnits = { "AllUnits", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUnitManager, AllUnits), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllUnits_MetaData), NewProp_AllUnits_MetaData) }; // 3709516540
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUnitManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitManager_Statics::NewProp_AllUnits_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitManager_Statics::NewProp_AllUnits_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitManager_Statics::NewProp_AllUnits,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUnitManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUnitManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SProjectNew,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUnitManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUnitManager_Statics::ClassParams = {
	&UUnitManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UUnitManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UUnitManager_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUnitManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UUnitManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUnitManager()
{
	if (!Z_Registration_Info_UClass_UUnitManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUnitManager.OuterSingleton, Z_Construct_UClass_UUnitManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUnitManager.OuterSingleton;
}
UUnitManager::UUnitManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUnitManager);
UUnitManager::~UUnitManager() {}
// ********** End Class UUnitManager ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_Managers_UnitManager_h__Script_SProjectNew_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUnitManager, UUnitManager::StaticClass, TEXT("UUnitManager"), &Z_Registration_Info_UClass_UUnitManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnitManager), 164852364U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_Managers_UnitManager_h__Script_SProjectNew_2128352266(TEXT("/Script/SProjectNew"),
	Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_Managers_UnitManager_h__Script_SProjectNew_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_Managers_UnitManager_h__Script_SProjectNew_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
