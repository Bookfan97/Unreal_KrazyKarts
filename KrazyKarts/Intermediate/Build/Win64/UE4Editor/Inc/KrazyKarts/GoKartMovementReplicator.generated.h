// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGoKartMove;
#ifdef KRAZYKARTS_GoKartMovementReplicator_generated_h
#error "GoKartMovementReplicator.generated.h already included, missing '#pragma once' in GoKartMovementReplicator.h"
#endif
#define KRAZYKARTS_GoKartMovementReplicator_generated_h

#define KrazyKarts_Source_KrazyKarts_GoKartMovementReplicator_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGoKartState_Statics; \
	KRAZYKARTS_API static class UScriptStruct* StaticStruct();


template<> KRAZYKARTS_API UScriptStruct* StaticStruct<struct FGoKartState>();

#define KrazyKarts_Source_KrazyKarts_GoKartMovementReplicator_h_28_SPARSE_DATA
#define KrazyKarts_Source_KrazyKarts_GoKartMovementReplicator_h_28_RPC_WRAPPERS \
	virtual bool Server_SendMove_Validate(FGoKartMove ); \
	virtual void Server_SendMove_Implementation(FGoKartMove Move); \
 \
	DECLARE_FUNCTION(execOnRep_ServerState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ServerState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_SendMove) \
	{ \
		P_GET_STRUCT(FGoKartMove,Z_Param_Move); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_SendMove_Validate(Z_Param_Move)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SendMove_Validate")); \
			return; \
		} \
		P_THIS->Server_SendMove_Implementation(Z_Param_Move); \
		P_NATIVE_END; \
	}


#define KrazyKarts_Source_KrazyKarts_GoKartMovementReplicator_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_SendMove_Validate(FGoKartMove ); \
	virtual void Server_SendMove_Implementation(FGoKartMove Move); \
 \
	DECLARE_FUNCTION(execOnRep_ServerState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_ServerState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServer_SendMove) \
	{ \
		P_GET_STRUCT(FGoKartMove,Z_Param_Move); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->Server_SendMove_Validate(Z_Param_Move)) \
		{ \
			RPC_ValidateFailed(TEXT("Server_SendMove_Validate")); \
			return; \
		} \
		P_THIS->Server_SendMove_Implementation(Z_Param_Move); \
		P_NATIVE_END; \
	}


#define KrazyKarts_Source_KrazyKarts_GoKartMovementReplicator_h_28_EVENT_PARMS \
	struct GoKartMovementReplicator_eventServer_SendMove_Parms \
	{ \
		FGoKartMove Move; \
	};


#define KrazyKarts_Source_KrazyKarts_GoKartMovementReplicator_h_28_CALLBACK_WRAPPERS
#define KrazyKarts_Source_KrazyKarts_GoKartMovementReplicator_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGoKartMovementReplicator(); \
	friend struct Z_Construct_UClass_UGoKartMovementReplicator_Statics; \
public: \
	DECLARE_CLASS(UGoKartMovementReplicator, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KrazyKarts"), NO_API) \
	DECLARE_SERIALIZER(UGoKartMovementReplicator) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define KrazyKarts_Source_KrazyKarts_GoKartMovementReplicator_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUGoKartMovementReplicator(); \
	friend struct Z_Construct_UClass_UGoKartMovementReplicator_Statics; \
public: \
	DECLARE_CLASS(UGoKartMovementReplicator, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KrazyKarts"), NO_API) \
	DECLARE_SERIALIZER(UGoKartMovementReplicator) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define KrazyKarts_Source_KrazyKarts_GoKartMovementReplicator_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGoKartMovementReplicator(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGoKartMovementReplicator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGoKartMovementReplicator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGoKartMovementReplicator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGoKartMovementReplicator(UGoKartMovementReplicator&&); \
	NO_API UGoKartMovementReplicator(const UGoKartMovementReplicator&); \
public:


#define KrazyKarts_Source_KrazyKarts_GoKartMovementReplicator_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGoKartMovementReplicator(UGoKartMovementReplicator&&); \
	NO_API UGoKartMovementReplicator(const UGoKartMovementReplicator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGoKartMovementReplicator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGoKartMovementReplicator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGoKartMovementReplicator)


#define KrazyKarts_Source_KrazyKarts_GoKartMovementReplicator_h_28_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ServerState() { return STRUCT_OFFSET(UGoKartMovementReplicator, ServerState); } \
	FORCEINLINE static uint32 __PPO__MovementComponent() { return STRUCT_OFFSET(UGoKartMovementReplicator, MovementComponent); }


#define KrazyKarts_Source_KrazyKarts_GoKartMovementReplicator_h_25_PROLOG \
	KrazyKarts_Source_KrazyKarts_GoKartMovementReplicator_h_28_EVENT_PARMS


#define KrazyKarts_Source_KrazyKarts_GoKartMovementReplicator_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KrazyKarts_Source_KrazyKarts_GoKartMovementReplicator_h_28_PRIVATE_PROPERTY_OFFSET \
	KrazyKarts_Source_KrazyKarts_GoKartMovementReplicator_h_28_SPARSE_DATA \
	KrazyKarts_Source_KrazyKarts_GoKartMovementReplicator_h_28_RPC_WRAPPERS \
	KrazyKarts_Source_KrazyKarts_GoKartMovementReplicator_h_28_CALLBACK_WRAPPERS \
	KrazyKarts_Source_KrazyKarts_GoKartMovementReplicator_h_28_INCLASS \
	KrazyKarts_Source_KrazyKarts_GoKartMovementReplicator_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define KrazyKarts_Source_KrazyKarts_GoKartMovementReplicator_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KrazyKarts_Source_KrazyKarts_GoKartMovementReplicator_h_28_PRIVATE_PROPERTY_OFFSET \
	KrazyKarts_Source_KrazyKarts_GoKartMovementReplicator_h_28_SPARSE_DATA \
	KrazyKarts_Source_KrazyKarts_GoKartMovementReplicator_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	KrazyKarts_Source_KrazyKarts_GoKartMovementReplicator_h_28_CALLBACK_WRAPPERS \
	KrazyKarts_Source_KrazyKarts_GoKartMovementReplicator_h_28_INCLASS_NO_PURE_DECLS \
	KrazyKarts_Source_KrazyKarts_GoKartMovementReplicator_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KRAZYKARTS_API UClass* StaticClass<class UGoKartMovementReplicator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID KrazyKarts_Source_KrazyKarts_GoKartMovementReplicator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
