// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KRAZYKARTS_GoKartMovementComponent_generated_h
#error "GoKartMovementComponent.generated.h already included, missing '#pragma once' in GoKartMovementComponent.h"
#endif
#define KRAZYKARTS_GoKartMovementComponent_generated_h

#define KrazyKarts_Source_KrazyKarts_GoKartMovementComponent_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGoKartMove_Statics; \
	KRAZYKARTS_API static class UScriptStruct* StaticStruct();


template<> KRAZYKARTS_API UScriptStruct* StaticStruct<struct FGoKartMove>();

#define KrazyKarts_Source_KrazyKarts_GoKartMovementComponent_h_32_SPARSE_DATA
#define KrazyKarts_Source_KrazyKarts_GoKartMovementComponent_h_32_RPC_WRAPPERS
#define KrazyKarts_Source_KrazyKarts_GoKartMovementComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS
#define KrazyKarts_Source_KrazyKarts_GoKartMovementComponent_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGoKartMovementComponent(); \
	friend struct Z_Construct_UClass_UGoKartMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UGoKartMovementComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KrazyKarts"), NO_API) \
	DECLARE_SERIALIZER(UGoKartMovementComponent)


#define KrazyKarts_Source_KrazyKarts_GoKartMovementComponent_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUGoKartMovementComponent(); \
	friend struct Z_Construct_UClass_UGoKartMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UGoKartMovementComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KrazyKarts"), NO_API) \
	DECLARE_SERIALIZER(UGoKartMovementComponent)


#define KrazyKarts_Source_KrazyKarts_GoKartMovementComponent_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGoKartMovementComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGoKartMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGoKartMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGoKartMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGoKartMovementComponent(UGoKartMovementComponent&&); \
	NO_API UGoKartMovementComponent(const UGoKartMovementComponent&); \
public:


#define KrazyKarts_Source_KrazyKarts_GoKartMovementComponent_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGoKartMovementComponent(UGoKartMovementComponent&&); \
	NO_API UGoKartMovementComponent(const UGoKartMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGoKartMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGoKartMovementComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGoKartMovementComponent)


#define KrazyKarts_Source_KrazyKarts_GoKartMovementComponent_h_32_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mass() { return STRUCT_OFFSET(UGoKartMovementComponent, Mass); } \
	FORCEINLINE static uint32 __PPO__MaxDrivingForce() { return STRUCT_OFFSET(UGoKartMovementComponent, MaxDrivingForce); } \
	FORCEINLINE static uint32 __PPO__MinTurningRadius() { return STRUCT_OFFSET(UGoKartMovementComponent, MinTurningRadius); } \
	FORCEINLINE static uint32 __PPO__DragCoefficient() { return STRUCT_OFFSET(UGoKartMovementComponent, DragCoefficient); } \
	FORCEINLINE static uint32 __PPO__RollingResistanceCoefficient() { return STRUCT_OFFSET(UGoKartMovementComponent, RollingResistanceCoefficient); }


#define KrazyKarts_Source_KrazyKarts_GoKartMovementComponent_h_29_PROLOG
#define KrazyKarts_Source_KrazyKarts_GoKartMovementComponent_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KrazyKarts_Source_KrazyKarts_GoKartMovementComponent_h_32_PRIVATE_PROPERTY_OFFSET \
	KrazyKarts_Source_KrazyKarts_GoKartMovementComponent_h_32_SPARSE_DATA \
	KrazyKarts_Source_KrazyKarts_GoKartMovementComponent_h_32_RPC_WRAPPERS \
	KrazyKarts_Source_KrazyKarts_GoKartMovementComponent_h_32_INCLASS \
	KrazyKarts_Source_KrazyKarts_GoKartMovementComponent_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define KrazyKarts_Source_KrazyKarts_GoKartMovementComponent_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KrazyKarts_Source_KrazyKarts_GoKartMovementComponent_h_32_PRIVATE_PROPERTY_OFFSET \
	KrazyKarts_Source_KrazyKarts_GoKartMovementComponent_h_32_SPARSE_DATA \
	KrazyKarts_Source_KrazyKarts_GoKartMovementComponent_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	KrazyKarts_Source_KrazyKarts_GoKartMovementComponent_h_32_INCLASS_NO_PURE_DECLS \
	KrazyKarts_Source_KrazyKarts_GoKartMovementComponent_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KRAZYKARTS_API UClass* StaticClass<class UGoKartMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID KrazyKarts_Source_KrazyKarts_GoKartMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
