// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HexGridActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHexGridActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
SPROJECTNEW_API UClass* Z_Construct_UClass_AHexGridActor();
SPROJECTNEW_API UClass* Z_Construct_UClass_AHexGridActor_NoRegister();
SPROJECTNEW_API UClass* Z_Construct_UClass_UHexGridComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_SProjectNew();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AHexGridActor Function RebuildVisual *************************************
struct Z_Construct_UFunction_AHexGridActor_RebuildVisual_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Hex Grid" },
		{ "ModuleRelativePath", "Public/HexGridActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHexGridActor_RebuildVisual_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHexGridActor, nullptr, "RebuildVisual", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHexGridActor_RebuildVisual_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHexGridActor_RebuildVisual_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AHexGridActor_RebuildVisual()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHexGridActor_RebuildVisual_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHexGridActor::execRebuildVisual)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RebuildVisual();
	P_NATIVE_END;
}
// ********** End Class AHexGridActor Function RebuildVisual ***************************************

// ********** Begin Class AHexGridActor ************************************************************
void AHexGridActor::StaticRegisterNativesAHexGridActor()
{
	UClass* Class = AHexGridActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RebuildVisual", &AHexGridActor::execRebuildVisual },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AHexGridActor;
UClass* AHexGridActor::GetPrivateStaticClass()
{
	using TClass = AHexGridActor;
	if (!Z_Registration_Info_UClass_AHexGridActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HexGridActor"),
			Z_Registration_Info_UClass_AHexGridActor.InnerSingleton,
			StaticRegisterNativesAHexGridActor,
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
	return Z_Registration_Info_UClass_AHexGridActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AHexGridActor_NoRegister()
{
	return AHexGridActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AHexGridActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HexGridActor.h" },
		{ "ModuleRelativePath", "Public/HexGridActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HexGridComponent_MetaData[] = {
		{ "Category", "Hex Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ==========================\n// GRID COMPONENT\n// ==========================\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HexGridActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GRID COMPONENT" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridWidth_MetaData[] = {
		{ "Category", "Hex Grid" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ==========================\n// GRID PARAMETERS\n// ==========================\n" },
#endif
		{ "ModuleRelativePath", "Public/HexGridActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GRID PARAMETERS" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridHeight_MetaData[] = {
		{ "Category", "Hex Grid" },
		{ "ModuleRelativePath", "Public/HexGridActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileScale_MetaData[] = {
		{ "Category", "HexGridActor" },
		{ "ModuleRelativePath", "Public/HexGridActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HexGridComponent;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GridHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TileScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AHexGridActor_RebuildVisual, "RebuildVisual" }, // 2973256718
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHexGridActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHexGridActor_Statics::NewProp_HexGridComponent = { "HexGridComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHexGridActor, HexGridComponent), Z_Construct_UClass_UHexGridComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HexGridComponent_MetaData), NewProp_HexGridComponent_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHexGridActor_Statics::NewProp_GridWidth = { "GridWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHexGridActor, GridWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridWidth_MetaData), NewProp_GridWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHexGridActor_Statics::NewProp_GridHeight = { "GridHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHexGridActor, GridHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridHeight_MetaData), NewProp_GridHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHexGridActor_Statics::NewProp_TileScale = { "TileScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHexGridActor, TileScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileScale_MetaData), NewProp_TileScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHexGridActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexGridActor_Statics::NewProp_HexGridComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexGridActor_Statics::NewProp_GridWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexGridActor_Statics::NewProp_GridHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHexGridActor_Statics::NewProp_TileScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHexGridActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHexGridActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_SProjectNew,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHexGridActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHexGridActor_Statics::ClassParams = {
	&AHexGridActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AHexGridActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AHexGridActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHexGridActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AHexGridActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHexGridActor()
{
	if (!Z_Registration_Info_UClass_AHexGridActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHexGridActor.OuterSingleton, Z_Construct_UClass_AHexGridActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHexGridActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHexGridActor);
AHexGridActor::~AHexGridActor() {}
// ********** End Class AHexGridActor **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_HexGridActor_h__Script_SProjectNew_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHexGridActor, AHexGridActor::StaticClass, TEXT("AHexGridActor"), &Z_Registration_Info_UClass_AHexGridActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHexGridActor), 2662321533U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_HexGridActor_h__Script_SProjectNew_1310223637(TEXT("/Script/SProjectNew"),
	Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_HexGridActor_h__Script_SProjectNew_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_Public_HexGridActor_h__Script_SProjectNew_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
