// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CivTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCivTypes() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
SPROJECTNEW_API UClass* Z_Construct_UClass_UCivTypes();
SPROJECTNEW_API UClass* Z_Construct_UClass_UCivTypes_NoRegister();
UPackage* Z_Construct_UPackage__Script_SProjectNew();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCivTypes ****************************************************************
void UCivTypes::StaticRegisterNativesUCivTypes()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCivTypes;
UClass* UCivTypes::GetPrivateStaticClass()
{
	using TClass = UCivTypes;
	if (!Z_Registration_Info_UClass_UCivTypes.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CivTypes"),
			Z_Registration_Info_UClass_UCivTypes.InnerSingleton,
			StaticRegisterNativesUCivTypes,
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
	return Z_Registration_Info_UClass_UCivTypes.InnerSingleton;
}
UClass* Z_Construct_UClass_UCivTypes_NoRegister()
{
	return UCivTypes::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCivTypes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Bu s\xef\xbf\xbdn\xef\xbf\xbd""f sadece o Struct'\xef\xbf\xbd bar\xef\xbf\xbdnd\xef\xbf\xbdrmak i\xef\xbf\xbdin var, .cpp dosyas\xef\xbf\xbdna ihtiyac\xef\xbf\xbdm\xef\xbf\xbdz yok.\n */" },
#endif
		{ "IncludePath", "CivTypes.h" },
		{ "ModuleRelativePath", "CivTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bu s\xef\xbf\xbdn\xef\xbf\xbd""f sadece o Struct'\xef\xbf\xbd bar\xef\xbf\xbdnd\xef\xbf\xbdrmak i\xef\xbf\xbdin var, .cpp dosyas\xef\xbf\xbdna ihtiyac\xef\xbf\xbdm\xef\xbf\xbdz yok." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCivTypes>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCivTypes_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SProjectNew,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCivTypes_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCivTypes_Statics::ClassParams = {
	&UCivTypes::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCivTypes_Statics::Class_MetaDataParams), Z_Construct_UClass_UCivTypes_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCivTypes()
{
	if (!Z_Registration_Info_UClass_UCivTypes.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCivTypes.OuterSingleton, Z_Construct_UClass_UCivTypes_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCivTypes.OuterSingleton;
}
UCivTypes::UCivTypes(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCivTypes);
UCivTypes::~UCivTypes() {}
// ********** End Class UCivTypes ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivTypes_h__Script_SProjectNew_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCivTypes, UCivTypes::StaticClass, TEXT("UCivTypes"), &Z_Registration_Info_UClass_UCivTypes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCivTypes), 2151828974U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivTypes_h__Script_SProjectNew_3995116664(TEXT("/Script/SProjectNew"),
	Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivTypes_h__Script_SProjectNew_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_CivTypes_h__Script_SProjectNew_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
