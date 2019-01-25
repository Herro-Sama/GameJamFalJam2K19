// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MAKEIT_MakeItCharacter_generated_h
#error "MakeItCharacter.generated.h already included, missing '#pragma once' in MakeItCharacter.h"
#endif
#define MAKEIT_MakeItCharacter_generated_h

#define MakeIt_Source_MakeIt_MakeItCharacter_h_12_RPC_WRAPPERS
#define MakeIt_Source_MakeIt_MakeItCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define MakeIt_Source_MakeIt_MakeItCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMakeItCharacter(); \
	friend struct Z_Construct_UClass_AMakeItCharacter_Statics; \
public: \
	DECLARE_CLASS(AMakeItCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MakeIt"), NO_API) \
	DECLARE_SERIALIZER(AMakeItCharacter)


#define MakeIt_Source_MakeIt_MakeItCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMakeItCharacter(); \
	friend struct Z_Construct_UClass_AMakeItCharacter_Statics; \
public: \
	DECLARE_CLASS(AMakeItCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MakeIt"), NO_API) \
	DECLARE_SERIALIZER(AMakeItCharacter)


#define MakeIt_Source_MakeIt_MakeItCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMakeItCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMakeItCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMakeItCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMakeItCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMakeItCharacter(AMakeItCharacter&&); \
	NO_API AMakeItCharacter(const AMakeItCharacter&); \
public:


#define MakeIt_Source_MakeIt_MakeItCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMakeItCharacter(AMakeItCharacter&&); \
	NO_API AMakeItCharacter(const AMakeItCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMakeItCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMakeItCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMakeItCharacter)


#define MakeIt_Source_MakeIt_MakeItCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AMakeItCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AMakeItCharacter, FollowCamera); }


#define MakeIt_Source_MakeIt_MakeItCharacter_h_9_PROLOG
#define MakeIt_Source_MakeIt_MakeItCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MakeIt_Source_MakeIt_MakeItCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	MakeIt_Source_MakeIt_MakeItCharacter_h_12_RPC_WRAPPERS \
	MakeIt_Source_MakeIt_MakeItCharacter_h_12_INCLASS \
	MakeIt_Source_MakeIt_MakeItCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MakeIt_Source_MakeIt_MakeItCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MakeIt_Source_MakeIt_MakeItCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	MakeIt_Source_MakeIt_MakeItCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MakeIt_Source_MakeIt_MakeItCharacter_h_12_INCLASS_NO_PURE_DECLS \
	MakeIt_Source_MakeIt_MakeItCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MakeIt_Source_MakeIt_MakeItCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
