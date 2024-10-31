// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGP/Fabians AI Component/NoGunCondition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNoGunCondition() {}
// Cross Module References
	AGP_API UClass* Z_Construct_UClass_UFabiansBehaviourTree();
	AGP_API UClass* Z_Construct_UClass_UNoGunCondition();
	AGP_API UClass* Z_Construct_UClass_UNoGunCondition_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AGP();
// End Cross Module References
	void UNoGunCondition::StaticRegisterNativesUNoGunCondition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNoGunCondition);
	UClass* Z_Construct_UClass_UNoGunCondition_NoRegister()
	{
		return UNoGunCondition::StaticClass();
	}
	struct Z_Construct_UClass_UNoGunCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNoGunCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFabiansBehaviourTree,
		(UObject* (*)())Z_Construct_UPackage__Script_AGP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNoGunCondition_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Fabians AI Component/NoGunCondition.h" },
		{ "ModuleRelativePath", "Fabians AI Component/NoGunCondition.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNoGunCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNoGunCondition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNoGunCondition_Statics::ClassParams = {
		&UNoGunCondition::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNoGunCondition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNoGunCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNoGunCondition()
	{
		if (!Z_Registration_Info_UClass_UNoGunCondition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNoGunCondition.OuterSingleton, Z_Construct_UClass_UNoGunCondition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNoGunCondition.OuterSingleton;
	}
	template<> AGP_API UClass* StaticClass<UNoGunCondition>()
	{
		return UNoGunCondition::StaticClass();
	}
	UNoGunCondition::UNoGunCondition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNoGunCondition);
	UNoGunCondition::~UNoGunCondition() {}
	struct Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Fabians_AI_Component_NoGunCondition_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Fabians_AI_Component_NoGunCondition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNoGunCondition, UNoGunCondition::StaticClass, TEXT("UNoGunCondition"), &Z_Registration_Info_UClass_UNoGunCondition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNoGunCondition), 1945274186U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Fabians_AI_Component_NoGunCondition_h_4175219470(TEXT("/Script/AGP"),
		Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Fabians_AI_Component_NoGunCondition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Fabians_AI_Component_NoGunCondition_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
