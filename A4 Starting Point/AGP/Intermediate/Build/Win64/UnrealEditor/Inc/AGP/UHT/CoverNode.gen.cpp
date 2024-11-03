// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGP/Jays_Cover_Component/CoverNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoverNode() {}
// Cross Module References
	AGP_API UClass* Z_Construct_UClass_ACoverNode();
	AGP_API UClass* Z_Construct_UClass_ACoverNode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AGP();
// End Cross Module References
	DEFINE_FUNCTION(ACoverNode::execSetOccupied)
	{
		P_GET_UBOOL(Z_Param_bOccupied);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOccupied(Z_Param_bOccupied);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACoverNode::execIsAvailableForCover)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAvailableForCover();
		P_NATIVE_END;
	}
	void ACoverNode::StaticRegisterNativesACoverNode()
	{
		UClass* Class = ACoverNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsAvailableForCover", &ACoverNode::execIsAvailableForCover },
			{ "SetOccupied", &ACoverNode::execSetOccupied },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACoverNode_IsAvailableForCover_Statics
	{
		struct CoverNode_eventIsAvailableForCover_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACoverNode_IsAvailableForCover_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CoverNode_eventIsAvailableForCover_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACoverNode_IsAvailableForCover_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CoverNode_eventIsAvailableForCover_Parms), &Z_Construct_UFunction_ACoverNode_IsAvailableForCover_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACoverNode_IsAvailableForCover_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoverNode_IsAvailableForCover_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoverNode_IsAvailableForCover_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cover" },
		{ "Comment", "// Function to check if the node is available for cover\n" },
		{ "ModuleRelativePath", "Jays_Cover_Component/CoverNode.h" },
		{ "ToolTip", "Function to check if the node is available for cover" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoverNode_IsAvailableForCover_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoverNode, nullptr, "IsAvailableForCover", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACoverNode_IsAvailableForCover_Statics::CoverNode_eventIsAvailableForCover_Parms), Z_Construct_UFunction_ACoverNode_IsAvailableForCover_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoverNode_IsAvailableForCover_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACoverNode_IsAvailableForCover_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoverNode_IsAvailableForCover_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACoverNode_IsAvailableForCover()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACoverNode_IsAvailableForCover_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACoverNode_SetOccupied_Statics
	{
		struct CoverNode_eventSetOccupied_Parms
		{
			bool bOccupied;
		};
		static void NewProp_bOccupied_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOccupied;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACoverNode_SetOccupied_Statics::NewProp_bOccupied_SetBit(void* Obj)
	{
		((CoverNode_eventSetOccupied_Parms*)Obj)->bOccupied = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACoverNode_SetOccupied_Statics::NewProp_bOccupied = { "bOccupied", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CoverNode_eventSetOccupied_Parms), &Z_Construct_UFunction_ACoverNode_SetOccupied_Statics::NewProp_bOccupied_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACoverNode_SetOccupied_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACoverNode_SetOccupied_Statics::NewProp_bOccupied,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACoverNode_SetOccupied_Statics::Function_MetaDataParams[] = {
		{ "Category", "Cover" },
		{ "Comment", "// Function to mark the node as occupied or free\n" },
		{ "ModuleRelativePath", "Jays_Cover_Component/CoverNode.h" },
		{ "ToolTip", "Function to mark the node as occupied or free" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACoverNode_SetOccupied_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACoverNode, nullptr, "SetOccupied", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACoverNode_SetOccupied_Statics::CoverNode_eventSetOccupied_Parms), Z_Construct_UFunction_ACoverNode_SetOccupied_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoverNode_SetOccupied_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACoverNode_SetOccupied_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACoverNode_SetOccupied_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACoverNode_SetOccupied()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACoverNode_SetOccupied_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACoverNode);
	UClass* Z_Construct_UClass_ACoverNode_NoRegister()
	{
		return ACoverNode::StaticClass();
	}
	struct Z_Construct_UClass_ACoverNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsOccupied_MetaData[];
#endif
		static void NewProp_bIsOccupied_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOccupied;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACoverNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AGP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACoverNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACoverNode_IsAvailableForCover, "IsAvailableForCover" }, // 3175231978
		{ &Z_Construct_UFunction_ACoverNode_SetOccupied, "SetOccupied" }, // 1406709461
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoverNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Jays_Cover_Component/CoverNode.h" },
		{ "ModuleRelativePath", "Jays_Cover_Component/CoverNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACoverNode_Statics::NewProp_bIsOccupied_MetaData[] = {
		{ "Category", "Cover" },
		{ "Comment", "// Tracks if this cover node is occupied by an AI character\n" },
		{ "ModuleRelativePath", "Jays_Cover_Component/CoverNode.h" },
		{ "ToolTip", "Tracks if this cover node is occupied by an AI character" },
	};
#endif
	void Z_Construct_UClass_ACoverNode_Statics::NewProp_bIsOccupied_SetBit(void* Obj)
	{
		((ACoverNode*)Obj)->bIsOccupied = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACoverNode_Statics::NewProp_bIsOccupied = { "bIsOccupied", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ACoverNode), &Z_Construct_UClass_ACoverNode_Statics::NewProp_bIsOccupied_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACoverNode_Statics::NewProp_bIsOccupied_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACoverNode_Statics::NewProp_bIsOccupied_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACoverNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACoverNode_Statics::NewProp_bIsOccupied,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACoverNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACoverNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACoverNode_Statics::ClassParams = {
		&ACoverNode::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACoverNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACoverNode_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACoverNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACoverNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACoverNode()
	{
		if (!Z_Registration_Info_UClass_ACoverNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACoverNode.OuterSingleton, Z_Construct_UClass_ACoverNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACoverNode.OuterSingleton;
	}
	template<> AGP_API UClass* StaticClass<ACoverNode>()
	{
		return ACoverNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACoverNode);
	ACoverNode::~ACoverNode() {}
	struct Z_CompiledInDeferFile_FID_AGP_Source_AGP_Jays_Cover_Component_CoverNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AGP_Source_AGP_Jays_Cover_Component_CoverNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACoverNode, ACoverNode::StaticClass, TEXT("ACoverNode"), &Z_Registration_Info_UClass_ACoverNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACoverNode), 336239896U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AGP_Source_AGP_Jays_Cover_Component_CoverNode_h_4167413923(TEXT("/Script/AGP"),
		Z_CompiledInDeferFile_FID_AGP_Source_AGP_Jays_Cover_Component_CoverNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AGP_Source_AGP_Jays_Cover_Component_CoverNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
