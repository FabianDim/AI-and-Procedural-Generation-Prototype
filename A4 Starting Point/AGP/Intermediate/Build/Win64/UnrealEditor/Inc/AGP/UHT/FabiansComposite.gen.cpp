// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGP/Fabians AI Component/FabiansComposite.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabiansComposite() {}
// Cross Module References
	AGP_API UClass* Z_Construct_UClass_UFabiansBehaviourTree();
	AGP_API UClass* Z_Construct_UClass_UFabiansBehaviourTree_NoRegister();
	AGP_API UClass* Z_Construct_UClass_UFabiansComposite();
	AGP_API UClass* Z_Construct_UClass_UFabiansComposite_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AGP();
// End Cross Module References
	void UFabiansComposite::StaticRegisterNativesUFabiansComposite()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFabiansComposite);
	UClass* Z_Construct_UClass_UFabiansComposite_NoRegister()
	{
		return UFabiansComposite::StaticClass();
	}
	struct Z_Construct_UClass_UFabiansComposite_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Children_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Children;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFabiansComposite_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFabiansBehaviourTree,
		(UObject* (*)())Z_Construct_UPackage__Script_AGP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFabiansComposite_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Fabians AI Component/FabiansComposite.h" },
		{ "ModuleRelativePath", "Fabians AI Component/FabiansComposite.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFabiansComposite_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UFabiansBehaviourTree_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFabiansComposite_Statics::NewProp_Children_MetaData[] = {
		{ "ModuleRelativePath", "Fabians AI Component/FabiansComposite.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFabiansComposite_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFabiansComposite, Children), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFabiansComposite_Statics::NewProp_Children_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFabiansComposite_Statics::NewProp_Children_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFabiansComposite_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFabiansComposite_Statics::NewProp_Children_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFabiansComposite_Statics::NewProp_Children,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFabiansComposite_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFabiansComposite>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFabiansComposite_Statics::ClassParams = {
		&UFabiansComposite::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFabiansComposite_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFabiansComposite_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFabiansComposite_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFabiansComposite_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFabiansComposite()
	{
		if (!Z_Registration_Info_UClass_UFabiansComposite.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFabiansComposite.OuterSingleton, Z_Construct_UClass_UFabiansComposite_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFabiansComposite.OuterSingleton;
	}
	template<> AGP_API UClass* StaticClass<UFabiansComposite>()
	{
		return UFabiansComposite::StaticClass();
	}
	UFabiansComposite::UFabiansComposite(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFabiansComposite);
	UFabiansComposite::~UFabiansComposite() {}
	struct Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Fabians_AI_Component_FabiansComposite_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Fabians_AI_Component_FabiansComposite_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFabiansComposite, UFabiansComposite::StaticClass, TEXT("UFabiansComposite"), &Z_Registration_Info_UClass_UFabiansComposite, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFabiansComposite), 536516294U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Fabians_AI_Component_FabiansComposite_h_2887036938(TEXT("/Script/AGP"),
		Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Fabians_AI_Component_FabiansComposite_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Fabians_AI_Component_FabiansComposite_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
