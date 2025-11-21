// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IntroGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeIntroGameMode() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayer_NoRegister();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource_NoRegister();
SPROJECTNEW_API UClass* Z_Construct_UClass_AIntroGameMode();
SPROJECTNEW_API UClass* Z_Construct_UClass_AIntroGameMode_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_SProjectNew();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AIntroGameMode Function OnVideoFinished **********************************
struct Z_Construct_UFunction_AIntroGameMode_OnVideoFinished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "IntroGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIntroGameMode_OnVideoFinished_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AIntroGameMode, nullptr, "OnVideoFinished", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIntroGameMode_OnVideoFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIntroGameMode_OnVideoFinished_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AIntroGameMode_OnVideoFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIntroGameMode_OnVideoFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIntroGameMode::execOnVideoFinished)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnVideoFinished();
	P_NATIVE_END;
}
// ********** End Class AIntroGameMode Function OnVideoFinished ************************************

// ********** Begin Class AIntroGameMode ***********************************************************
void AIntroGameMode::StaticRegisterNativesAIntroGameMode()
{
	UClass* Class = AIntroGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnVideoFinished", &AIntroGameMode::execOnVideoFinished },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AIntroGameMode;
UClass* AIntroGameMode::GetPrivateStaticClass()
{
	using TClass = AIntroGameMode;
	if (!Z_Registration_Info_UClass_AIntroGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("IntroGameMode"),
			Z_Registration_Info_UClass_AIntroGameMode.InnerSingleton,
			StaticRegisterNativesAIntroGameMode,
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
	return Z_Registration_Info_UClass_AIntroGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AIntroGameMode_NoRegister()
{
	return AIntroGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AIntroGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "IntroGameMode.h" },
		{ "ModuleRelativePath", "IntroGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntroWidgetClass_MetaData[] = {
		{ "Category", "Intro" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Intro widget (WBP_Intro)\n" },
#endif
		{ "ModuleRelativePath", "IntroGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Intro widget (WBP_Intro)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaPlayer_MetaData[] = {
		{ "Category", "Intro" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Video Player\n" },
#endif
		{ "ModuleRelativePath", "IntroGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Video Player" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VideoSource_MetaData[] = {
		{ "Category", "Intro" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Video Source\n" },
#endif
		{ "ModuleRelativePath", "IntroGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Video Source" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VideoDuration_MetaData[] = {
		{ "Category", "Intro" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delay fallback (videonun s\xef\xbf\xbdresi kadar)\n" },
#endif
		{ "ModuleRelativePath", "IntroGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delay fallback (videonun s\xef\xbf\xbdresi kadar)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_IntroWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaPlayer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VideoSource;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VideoDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AIntroGameMode_OnVideoFinished, "OnVideoFinished" }, // 1671158243
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIntroGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AIntroGameMode_Statics::NewProp_IntroWidgetClass = { "IntroWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIntroGameMode, IntroWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntroWidgetClass_MetaData), NewProp_IntroWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIntroGameMode_Statics::NewProp_MediaPlayer = { "MediaPlayer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIntroGameMode, MediaPlayer), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaPlayer_MetaData), NewProp_MediaPlayer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIntroGameMode_Statics::NewProp_VideoSource = { "VideoSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIntroGameMode, VideoSource), Z_Construct_UClass_UMediaSource_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VideoSource_MetaData), NewProp_VideoSource_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIntroGameMode_Statics::NewProp_VideoDuration = { "VideoDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIntroGameMode, VideoDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VideoDuration_MetaData), NewProp_VideoDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIntroGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIntroGameMode_Statics::NewProp_IntroWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIntroGameMode_Statics::NewProp_MediaPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIntroGameMode_Statics::NewProp_VideoSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIntroGameMode_Statics::NewProp_VideoDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIntroGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AIntroGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SProjectNew,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIntroGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AIntroGameMode_Statics::ClassParams = {
	&AIntroGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AIntroGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AIntroGameMode_Statics::PropPointers),
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIntroGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AIntroGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AIntroGameMode()
{
	if (!Z_Registration_Info_UClass_AIntroGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIntroGameMode.OuterSingleton, Z_Construct_UClass_AIntroGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AIntroGameMode.OuterSingleton;
}
AIntroGameMode::AIntroGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AIntroGameMode);
AIntroGameMode::~AIntroGameMode() {}
// ********** End Class AIntroGameMode *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_IntroGameMode_h__Script_SProjectNew_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AIntroGameMode, AIntroGameMode::StaticClass, TEXT("AIntroGameMode"), &Z_Registration_Info_UClass_AIntroGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIntroGameMode), 1495938921U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_IntroGameMode_h__Script_SProjectNew_4042737501(TEXT("/Script/SProjectNew"),
	Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_IntroGameMode_h__Script_SProjectNew_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_akifs_Desktop_SProject_SProjectNew_Source_SProjectNew_IntroGameMode_h__Script_SProjectNew_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
