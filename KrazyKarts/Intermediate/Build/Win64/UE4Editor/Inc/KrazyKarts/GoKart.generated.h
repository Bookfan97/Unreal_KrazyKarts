// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef KRAZYKARTS_GoKart_generated_h
#error "GoKart.generated.h already included, missing '#pragma once' in GoKart.h"
#endif
#define KRAZYKARTS_GoKart_generated_h

#define KrazyKarts_Source_KrazyKarts_GoKart_h_12_SPARSE_DATA
#define KrazyKarts_Source_KrazyKarts_GoKart_h_12_RPC_WRAPPERS \
	virtual bool Server_MoveRight_Validate(float ); \
	virtual void Server_MoveRight_Implementation(float Value); \
	virtual bool Server_MoveForward_Validate(float ); \
	virtual void Server_MoveForward_Implementation(float Value); \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedTranform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ReplicatedTranform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_MoveRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_MoveRight_Validate(Z_Param_Value)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_MoveRight_Validate")); \
			return; \
		} \
		P_THIS->Server_MoveRight_Implementation(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_MoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_MoveForward_Validate(Z_Param_Value)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_MoveForward_Validate")); \
			return; \
		} \
		P_THIS->Server_MoveForward_Implementation(Z_Param_Value); \
		P_NATIVE_END; \
	}


#define KrazyKarts_Source_KrazyKarts_GoKart_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_MoveRight_Validate(float ); \
	virtual void Server_MoveRight_Implementation(float Value); \
	virtual bool Server_MoveForward_Validate(float ); \
	virtual void Server_MoveForward_Implementation(float Value); \
 \
	DECLARE_FUNCTION(execOnRep_ReplicatedTranform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ReplicatedTranform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_MoveRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_MoveRight_Validate(Z_Param_Value)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_MoveRight_Validate")); \
			return; \
		} \
		P_THIS->Server_MoveRight_Implementation(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_MoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_MoveForward_Validate(Z_Param_Value)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_MoveForward_Validate")); \
			return; \
		} \
		P_THIS->Server_MoveForward_Implementation(Z_Param_Value); \
		P_NATIVE_END; \
	}


#define KrazyKarts_Source_KrazyKarts_GoKart_h_12_EVENT_PARMS \
	struct GoKart_eventServer_MoveForward_Parms \
	{ \
		float Value; \
	}; \
	struct GoKart_eventServer_MoveRight_Parms \
	{ \
		float Value; \
	};


#define KrazyKarts_Source_KrazyKarts_GoKart_h_12_CALLBACK_WRAPPERS
#define KrazyKarts_Source_KrazyKarts_GoKart_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGoKart(); \
	friend struct Z_Construct_UClass_AGoKart_Statics; \
public: \
	DECLARE_CLASS(AGoKart, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KrazyKarts"), NO_API) \
	DECLARE_SERIALIZER(AGoKart) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define KrazyKarts_Source_KrazyKarts_GoKart_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGoKart(); \
	friend struct Z_Construct_UClass_AGoKart_Statics; \
public: \
	DECLARE_CLASS(AGoKart, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KrazyKarts"), NO_API) \
	DECLARE_SERIALIZER(AGoKart) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define KrazyKarts_Source_KrazyKarts_GoKart_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGoKart(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGoKart) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGoKart); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGoKart); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGoKart(AGoKart&&); \
	NO_API AGoKart(const AGoKart&); \
public:


#define KrazyKarts_Source_KrazyKarts_GoKart_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGoKart(AGoKart&&); \
	NO_API AGoKart(const AGoKart&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGoKart); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGoKart); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGoKart)


#define KrazyKarts_Source_KrazyKarts_GoKart_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mass() { return STRUCT_OFFSET(AGoKart, Mass); } \
	FORCEINLINE static uint32 __PPO__MaxDrivingForce() { return STRUCT_OFFSET(AGoKart, MaxDrivingForce); } \
	FORCEINLINE static uint32 __PPO__MinTurningRadius() { return STRUCT_OFFSET(AGoKart, MinTurningRadius); } \
	FORCEINLINE static uint32 __PPO__DragCoefficient() { return STRUCT_OFFSET(AGoKart, DragCoefficient); } \
	FORCEINLINE static uint32 __PPO__RollingResistanceCoefficient() { return STRUCT_OFFSET(AGoKart, RollingResistanceCoefficient); } \
	FORCEINLINE static uint32 __PPO__Velocity() { return STRUCT_OFFSET(AGoKart, Velocity); } \
	FORCEINLINE static uint32 __PPO__ReplicatedTranform() { return STRUCT_OFFSET(AGoKart, ReplicatedTranform); } \
	FORCEINLINE static uint32 __PPO__Throttle() { return STRUCT_OFFSET(AGoKart, Throttle); } \
	FORCEINLINE static uint32 __PPO__SteeringThrow() { return STRUCT_OFFSET(AGoKart, SteeringThrow); }


#define KrazyKarts_Source_KrazyKarts_GoKart_h_9_PROLOG \
	KrazyKarts_Source_KrazyKarts_GoKart_h_12_EVENT_PARMS


#define KrazyKarts_Source_KrazyKarts_GoKart_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KrazyKarts_Source_KrazyKarts_GoKart_h_12_PRIVATE_PROPERTY_OFFSET \
	KrazyKarts_Source_KrazyKarts_GoKart_h_12_SPARSE_DATA \
	KrazyKarts_Source_KrazyKarts_GoKart_h_12_RPC_WRAPPERS \
	KrazyKarts_Source_KrazyKarts_GoKart_h_12_CALLBACK_WRAPPERS \
	KrazyKarts_Source_KrazyKarts_GoKart_h_12_INCLASS \
	KrazyKarts_Source_KrazyKarts_GoKart_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define KrazyKarts_Source_KrazyKarts_GoKart_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KrazyKarts_Source_KrazyKarts_GoKart_h_12_PRIVATE_PROPERTY_OFFSET \
	KrazyKarts_Source_KrazyKarts_GoKart_h_12_SPARSE_DATA \
	KrazyKarts_Source_KrazyKarts_GoKart_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	KrazyKarts_Source_KrazyKarts_GoKart_h_12_CALLBACK_WRAPPERS \
	KrazyKarts_Source_KrazyKarts_GoKart_h_12_INCLASS_NO_PURE_DECLS \
	KrazyKarts_Source_KrazyKarts_GoKart_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KRAZYKARTS_API UClass* StaticClass<class AGoKart>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID KrazyKarts_Source_KrazyKarts_GoKart_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
