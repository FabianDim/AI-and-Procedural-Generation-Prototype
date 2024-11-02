// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CoverNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AGP_CoverNode_generated_h
#error "CoverNode.generated.h already included, missing '#pragma once' in CoverNode.h"
#endif
#define AGP_CoverNode_generated_h

#define FID_AGP_Source_AGP_CoverNode_h_11_SPARSE_DATA
#define FID_AGP_Source_AGP_CoverNode_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetOccupied); \
	DECLARE_FUNCTION(execIsAvailableForCover);


#define FID_AGP_Source_AGP_CoverNode_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetOccupied); \
	DECLARE_FUNCTION(execIsAvailableForCover);


#define FID_AGP_Source_AGP_CoverNode_h_11_ACCESSORS
#define FID_AGP_Source_AGP_CoverNode_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACoverNode(); \
	friend struct Z_Construct_UClass_ACoverNode_Statics; \
public: \
	DECLARE_CLASS(ACoverNode, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AGP"), NO_API) \
	DECLARE_SERIALIZER(ACoverNode)


#define FID_AGP_Source_AGP_CoverNode_h_11_INCLASS \
private: \
	static void StaticRegisterNativesACoverNode(); \
	friend struct Z_Construct_UClass_ACoverNode_Statics; \
public: \
	DECLARE_CLASS(ACoverNode, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AGP"), NO_API) \
	DECLARE_SERIALIZER(ACoverNode)


#define FID_AGP_Source_AGP_CoverNode_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACoverNode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACoverNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACoverNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACoverNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACoverNode(ACoverNode&&); \
	NO_API ACoverNode(const ACoverNode&); \
public: \
	NO_API virtual ~ACoverNode();


#define FID_AGP_Source_AGP_CoverNode_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACoverNode(ACoverNode&&); \
	NO_API ACoverNode(const ACoverNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACoverNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACoverNode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACoverNode) \
	NO_API virtual ~ACoverNode();


#define FID_AGP_Source_AGP_CoverNode_h_8_PROLOG
#define FID_AGP_Source_AGP_CoverNode_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AGP_Source_AGP_CoverNode_h_11_SPARSE_DATA \
	FID_AGP_Source_AGP_CoverNode_h_11_RPC_WRAPPERS \
	FID_AGP_Source_AGP_CoverNode_h_11_ACCESSORS \
	FID_AGP_Source_AGP_CoverNode_h_11_INCLASS \
	FID_AGP_Source_AGP_CoverNode_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AGP_Source_AGP_CoverNode_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AGP_Source_AGP_CoverNode_h_11_SPARSE_DATA \
	FID_AGP_Source_AGP_CoverNode_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AGP_Source_AGP_CoverNode_h_11_ACCESSORS \
	FID_AGP_Source_AGP_CoverNode_h_11_INCLASS_NO_PURE_DECLS \
	FID_AGP_Source_AGP_CoverNode_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGP_API UClass* StaticClass<class ACoverNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AGP_Source_AGP_CoverNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
