// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGP/Characters/PlayerCharacterHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCharacterHUD() {}
// Cross Module References
	AGP_API UClass* Z_Construct_UClass_UPlayerCharacterHUD();
	AGP_API UClass* Z_Construct_UClass_UPlayerCharacterHUD_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_AGP();
// End Cross Module References
	void UPlayerCharacterHUD::StaticRegisterNativesUPlayerCharacterHUD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerCharacterHUD);
	UClass* Z_Construct_UClass_UPlayerCharacterHUD_NoRegister()
	{
		return UPlayerCharacterHUD::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerCharacterHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthBar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmmoText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AmmoText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerCharacterHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_AGP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacterHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Characters/PlayerCharacterHUD.h" },
		{ "ModuleRelativePath", "Characters/PlayerCharacterHUD.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacterHUD_Statics::NewProp_HealthBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerCharacterHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/PlayerCharacterHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerCharacterHUD_Statics::NewProp_HealthBar = { "HealthBar", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerCharacterHUD, HealthBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacterHUD_Statics::NewProp_HealthBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterHUD_Statics::NewProp_HealthBar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCharacterHUD_Statics::NewProp_AmmoText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "PlayerCharacterHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/PlayerCharacterHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerCharacterHUD_Statics::NewProp_AmmoText = { "AmmoText", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerCharacterHUD, AmmoText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacterHUD_Statics::NewProp_AmmoText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterHUD_Statics::NewProp_AmmoText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerCharacterHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterHUD_Statics::NewProp_HealthBar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCharacterHUD_Statics::NewProp_AmmoText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerCharacterHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerCharacterHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerCharacterHUD_Statics::ClassParams = {
		&UPlayerCharacterHUD::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerCharacterHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterHUD_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerCharacterHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCharacterHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerCharacterHUD()
	{
		if (!Z_Registration_Info_UClass_UPlayerCharacterHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerCharacterHUD.OuterSingleton, Z_Construct_UClass_UPlayerCharacterHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerCharacterHUD.OuterSingleton;
	}
	template<> AGP_API UClass* StaticClass<UPlayerCharacterHUD>()
	{
		return UPlayerCharacterHUD::StaticClass();
	}
	UPlayerCharacterHUD::UPlayerCharacterHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerCharacterHUD);
	UPlayerCharacterHUD::~UPlayerCharacterHUD() {}
	struct Z_CompiledInDeferFile_FID_AGP_Source_AGP_Characters_PlayerCharacterHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AGP_Source_AGP_Characters_PlayerCharacterHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerCharacterHUD, UPlayerCharacterHUD::StaticClass, TEXT("UPlayerCharacterHUD"), &Z_Registration_Info_UClass_UPlayerCharacterHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerCharacterHUD), 841028180U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AGP_Source_AGP_Characters_PlayerCharacterHUD_h_3481778045(TEXT("/Script/AGP"),
		Z_CompiledInDeferFile_FID_AGP_Source_AGP_Characters_PlayerCharacterHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AGP_Source_AGP_Characters_PlayerCharacterHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
