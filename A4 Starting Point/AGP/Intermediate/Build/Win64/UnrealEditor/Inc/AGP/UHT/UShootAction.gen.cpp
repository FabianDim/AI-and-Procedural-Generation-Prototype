// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGP/Fabians AI Component/UShootAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUShootAction() {}
// Cross Module References
	AGP_API UClass* Z_Construct_UClass_AEnemyCharacter_NoRegister();
	AGP_API UClass* Z_Construct_UClass_UFabiansFilter();
	AGP_API UClass* Z_Construct_UClass_UShootAction();
	AGP_API UClass* Z_Construct_UClass_UShootAction_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AGP();
// End Cross Module References
	void UShootAction::StaticRegisterNativesUShootAction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UShootAction);
	UClass* Z_Construct_UClass_UShootAction_NoRegister()
	{
		return UShootAction::StaticClass();
	}
	struct Z_Construct_UClass_UShootAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShootAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFabiansFilter,
		(UObject* (*)())Z_Construct_UPackage__Script_AGP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShootAction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Fabians AI Component/UShootAction.h" },
		{ "ModuleRelativePath", "Fabians AI Component/UShootAction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShootAction_Statics::NewProp_EnemyCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Fabians AI Component/UShootAction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UShootAction_Statics::NewProp_EnemyCharacter = { "EnemyCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShootAction, EnemyCharacter), Z_Construct_UClass_AEnemyCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UShootAction_Statics::NewProp_EnemyCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShootAction_Statics::NewProp_EnemyCharacter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShootAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShootAction_Statics::NewProp_EnemyCharacter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShootAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShootAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UShootAction_Statics::ClassParams = {
		&UShootAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UShootAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UShootAction_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UShootAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShootAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShootAction()
	{
		if (!Z_Registration_Info_UClass_UShootAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UShootAction.OuterSingleton, Z_Construct_UClass_UShootAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UShootAction.OuterSingleton;
	}
	template<> AGP_API UClass* StaticClass<UShootAction>()
	{
		return UShootAction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShootAction);
	UShootAction::~UShootAction() {}
	struct Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Fabians_AI_Component_UShootAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Fabians_AI_Component_UShootAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UShootAction, UShootAction::StaticClass, TEXT("UShootAction"), &Z_Registration_Info_UClass_UShootAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShootAction), 698943352U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Fabians_AI_Component_UShootAction_h_2422248621(TEXT("/Script/AGP"),
		Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Fabians_AI_Component_UShootAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Fabians_AI_Component_UShootAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
