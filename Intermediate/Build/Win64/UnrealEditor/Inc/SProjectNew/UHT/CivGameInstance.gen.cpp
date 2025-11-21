// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CivGameInstance.h"
#include "Database/DatabaseReader.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCivGameInstance() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
SPROJECTNEW_API UClass* Z_Construct_UClass_UCivGameInstance();
SPROJECTNEW_API UClass* Z_Construct_UClass_UCivGameInstance_NoRegister();
SPROJECTNEW_API UScriptStruct* Z_Construct_UScriptStruct_FCivInfo();
UPackage* Z_Construct_UPackage__Script_SProjectNew();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCivGameInstance *********************************************************
void UCivGameInstance::StaticRegisterNativesUCivGameInstance()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCivGameInstance;
UClass* UCivGameInstance::GetPrivateStaticClass()
{
	using TClass = UCivGameInstance;
	if (!Z_Registration_Info_UClass_UCivGameInstance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CivGameInstance"),
			Z_Registration_Info_UClass_UCivGameInstance.InnerSingleton,
			StaticRegisterNativesUCivGameInstance,
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
	return Z_Registration_Info_UClass_UCivGameInstance.InnerSingleton;
}
UClass* Z_Construct_UClass_UCivGameInstance_NoRegister()
{
	return UCivGameInstance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCivGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CivGameInstance.h" },
		{ "ModuleRelativePath", "Public/CivGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedCiv_MetaData[] = {
		{ "Category", "CivGameInstance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Kullan\xef\xbf\xbd""c\xef\xbf\xbdn\xef\xbf\xbdn se\xef\xbf\xbdti\xef\xbf\xbdi Civilization bilgisi\n" },
#endif
		{ "ModuleRelativePath", "Public/CivGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Kullan\xef\xbf\xbd""c\xef\xbf\xbdn\xef\xbf\xbdn se\xef\xbf\xbdti\xef\xbf\xbdi Civilization bilgisi" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedAICivs_MetaData[] = {
		{ "Category", "CivGameInstance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Se\xef\xbf\xbdilen AI Civilization'lar\n" },
#endif
		{ "ModuleRelativePath", "Public/CivGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Se\xef\xbf\xbdilen AI Civilization'lar" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumAICivs_MetaData[] = {
		{ "Category", "CivGameInstance" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Kolayl\xef\xbf\xbdk olsun diye AI say\xef\xbf\xbds\xef\xbf\xbdn\xef\xbf\xbd da tutal\xef\xbf\xbdm (SelectedAICivs.Num() ile uyumlu olacak)\n" },
#endif
		{ "ModuleRelativePath", "Public/CivGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Kolayl\xef\xbf\xbdk olsun diye AI say\xef\xbf\xbds\xef\xbf\xbdn\xef\xbf\xbd da tutal\xef\xbf\xbdm (SelectedAICivs.Num() ile uyumlu olacak)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedCiv;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedAICivs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedAICivs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumAICivs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCivGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCivGameInstance_Statics::NewProp_SelectedCiv = { "SelectedCiv", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCivGameInstance, SelectedCiv), Z_Construct_UScriptStruct_FCivInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedCiv_MetaData), NewProp_SelectedCiv_MetaData) }; // 1142681011
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCivGameInstance_Statics::NewProp_SelectedAICivs_Inner = { "SelectedAICivs", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCivInfo, METADATA_PARAMS(0, nullptr) }; // 1142681011
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCivGameInstance_Statics::NewProp_SelectedAICivs = { "SelectedAICivs", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCivGameInstance, SelectedAICivs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedAICivs_MetaData), NewProp_SelectedAICivs_MetaData) }; // 1142681011
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCivGameInstance_Statics::NewProp_NumAICivs = { "NumAICivs", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCivGameInstance, NumAICivs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumAICivs_MetaData), NewProp_NumAICivs_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCivGameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCivGameInstance_Statics::NewProp_SelectedCiv,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCivGameInstance_Statics::NewProp_SelectedAICivs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCivGameInstance_Statics::NewProp_SelectedAICivs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCivGameInstance_Statics::NewProp_NumAICivs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCivGameInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCivGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_SProjectNew,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCivGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCivGameInstance_Statics::ClassParams = {
	&UCivGameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCivGameInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCivGameInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCivGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UCivGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCivGameInstance()
{
	if (!Z_Registration_Info_UClass_UCivGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCivGameInstance.OuterSingleton, Z_Construct_UClass_UCivGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCivGameInstance.OuterSingleton;
}
UCivGameInstance::UCivGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCivGameInstance);
UCivGameInstance::~UCivGameInstance() {}
// ********** End Class UCivGameInstance ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_CivGameInstance_h__Script_SProjectNew_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCivGameInstance, UCivGameInstance::StaticClass, TEXT("UCivGameInstance"), &Z_Registration_Info_UClass_UCivGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCivGameInstance), 2614079026U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_CivGameInstance_h__Script_SProjectNew_2328375282(TEXT("/Script/SProjectNew"),
	Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_CivGameInstance_h__Script_SProjectNew_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_CivGameInstance_h__Script_SProjectNew_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
