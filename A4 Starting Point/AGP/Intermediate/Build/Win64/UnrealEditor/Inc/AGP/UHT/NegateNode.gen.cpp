// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGP/Fabians AI Component/NegateNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNegateNode() {}
// Cross Module References
	AGP_API UClass* Z_Construct_UClass_UFabiansComposite();
	AGP_API UClass* Z_Construct_UClass_UNegateNode();
	AGP_API UClass* Z_Construct_UClass_UNegateNode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AGP();
// End Cross Module References
	void UNegateNode::StaticRegisterNativesUNegateNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNegateNode);
	UClass* Z_Construct_UClass_UNegateNode_NoRegister()
	{
		return UNegateNode::StaticClass();
	}
	struct Z_Construct_UClass_UNegateNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNegateNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFabiansComposite,
		(UObject* (*)())Z_Construct_UPackage__Script_AGP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNegateNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Fabians AI Component/NegateNode.h" },
		{ "ModuleRelativePath", "Fabians AI Component/NegateNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNegateNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNegateNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNegateNode_Statics::ClassParams = {
		&UNegateNode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNegateNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNegateNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNegateNode()
	{
		if (!Z_Registration_Info_UClass_UNegateNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNegateNode.OuterSingleton, Z_Construct_UClass_UNegateNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNegateNode.OuterSingleton;
	}
	template<> AGP_API UClass* StaticClass<UNegateNode>()
	{
		return UNegateNode::StaticClass();
	}
	UNegateNode::UNegateNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNegateNode);
	UNegateNode::~UNegateNode() {}
	struct Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Fabians_AI_Component_NegateNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Fabians_AI_Component_NegateNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNegateNode, UNegateNode::StaticClass, TEXT("UNegateNode"), &Z_Registration_Info_UClass_UNegateNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNegateNode), 3899800066U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Fabians_AI_Component_NegateNode_h_1314450045(TEXT("/Script/AGP"),
		Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Fabians_AI_Component_NegateNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Repos_A4_Repository_A4_Starting_Point_AGP_Source_AGP_Fabians_AI_Component_NegateNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
