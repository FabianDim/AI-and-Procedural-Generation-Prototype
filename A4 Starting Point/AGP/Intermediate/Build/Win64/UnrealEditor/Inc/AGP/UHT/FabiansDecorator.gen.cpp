// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGP/Fabians AI Component/Unused Classes/FabiansDecorator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabiansDecorator() {}
// Cross Module References
	AGP_API UClass* Z_Construct_UClass_UFabiansBehaviourTree();
	AGP_API UClass* Z_Construct_UClass_UFabiansBehaviourTree_NoRegister();
	AGP_API UClass* Z_Construct_UClass_UFabiansDecorator();
	AGP_API UClass* Z_Construct_UClass_UFabiansDecorator_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AGP();
// End Cross Module References
	void UFabiansDecorator::StaticRegisterNativesUFabiansDecorator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFabiansDecorator);
	UClass* Z_Construct_UClass_UFabiansDecorator_NoRegister()
	{
		return UFabiansDecorator::StaticClass();
	}
	struct Z_Construct_UClass_UFabiansDecorator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BehaviourTreeChild_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviourTreeChild;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFabiansDecorator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFabiansBehaviourTree,
		(UObject* (*)())Z_Construct_UPackage__Script_AGP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFabiansDecorator_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Fabians AI Component/Unused Classes/FabiansDecorator.h" },
		{ "ModuleRelativePath", "Fabians AI Component/Unused Classes/FabiansDecorator.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFabiansDecorator_Statics::NewProp_BehaviourTreeChild_MetaData[] = {
		{ "ModuleRelativePath", "Fabians AI Component/Unused Classes/FabiansDecorator.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFabiansDecorator_Statics::NewProp_BehaviourTreeChild = { "BehaviourTreeChild", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFabiansDecorator, BehaviourTreeChild), Z_Construct_UClass_UFabiansBehaviourTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFabiansDecorator_Statics::NewProp_BehaviourTreeChild_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFabiansDecorator_Statics::NewProp_BehaviourTreeChild_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFabiansDecorator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFabiansDecorator_Statics::NewProp_BehaviourTreeChild,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFabiansDecorator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFabiansDecorator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFabiansDecorator_Statics::ClassParams = {
		&UFabiansDecorator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFabiansDecorator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFabiansDecorator_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFabiansDecorator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFabiansDecorator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFabiansDecorator()
	{
		if (!Z_Registration_Info_UClass_UFabiansDecorator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFabiansDecorator.OuterSingleton, Z_Construct_UClass_UFabiansDecorator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFabiansDecorator.OuterSingleton;
	}
	template<> AGP_API UClass* StaticClass<UFabiansDecorator>()
	{
		return UFabiansDecorator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFabiansDecorator);
	UFabiansDecorator::~UFabiansDecorator() {}
	struct Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Fabians_AI_Component_Unused_Classes_FabiansDecorator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Fabians_AI_Component_Unused_Classes_FabiansDecorator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFabiansDecorator, UFabiansDecorator::StaticClass, TEXT("UFabiansDecorator"), &Z_Registration_Info_UClass_UFabiansDecorator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFabiansDecorator), 2527554872U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Fabians_AI_Component_Unused_Classes_FabiansDecorator_h_868758959(TEXT("/Script/AGP"),
		Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Fabians_AI_Component_Unused_Classes_FabiansDecorator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Fabians_AI_Component_Unused_Classes_FabiansDecorator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
