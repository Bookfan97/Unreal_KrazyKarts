// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGoKartMove;
#ifdef KRAZYKARTS_GoKart_generated_h
#error "GoKart.generated.h already included, missing '#pragma once' in GoKart.h"
#endif
#define KRAZYKARTS_GoKart_generated_h

#define KrazyKarts_Source_KrazyKarts_GoKart_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGoKartState_Statics; \
	KRAZYKARTS_API static class UScriptStruct* StaticStruct();


template<> KRAZYKARTS_API UScriptStruct* StaticStruct<struct FGoKartState>();

#define KrazyKarts_Source_KrazyKarts_GoKart_h_28_SPARSE_DATA
#define KrazyKarts_Source_KrazyKarts_GoKart_h_28_RPC_WRAPPERS \
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


#define KrazyKarts_Source_KrazyKarts_GoKart_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define KrazyKarts_Source_KrazyKarts_GoKart_h_28_EVENT_PARMS \
	struct GoKart_eventServer_SendMove_Parms \
	{ \
		FGoKartMove Move; \
	};


#define KrazyKarts_Source_KrazyKarts_GoKart_h_28_CALLBACK_WRAPPERS
#define KrazyKarts_Source_KrazyKarts_GoKart_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGoKart(); \
	friend struct Z_Construct_UClass_AGoKart_Statics; \
public: \
	DECLARE_CLASS(AGoKart, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KrazyKarts"), NO_API) \
	DECLARE_SERIALIZER(AGoKart) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define KrazyKarts_Source_KrazyKarts_GoKart_h_28_INCLASS \
private: \
	static void StaticRegisterNativesAGoKart(); \
	friend struct Z_Construct_UClass_AGoKart_Statics; \
public: \
	DECLARE_CLASS(AGoKart, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/KrazyKarts"), NO_API) \
	DECLARE_SERIALIZER(AGoKart) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define KrazyKarts_Source_KrazyKarts_GoKart_h_28_STANDARD_CONSTRUCTORS \
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


#define KrazyKarts_Source_KrazyKarts_GoKart_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGoKart(AGoKart&&); \
	NO_API AGoKart(const AGoKart&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGoKart); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGoKart); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGoKart)


#define KrazyKarts_Source_KrazyKarts_GoKart_h_28_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ServerState() { return STRUCT_OFFSET(AGoKart, ServerState); } \
	FORCEINLINE static uint32 __PPO__MovementComponent() { return STRUCT_OFFSET(AGoKart, MovementComponent); }


#define KrazyKarts_Source_KrazyKarts_GoKart_h_25_PROLOG \
	KrazyKarts_Source_KrazyKarts_GoKart_h_28_EVENT_PARMS


#define KrazyKarts_Source_KrazyKarts_GoKart_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KrazyKarts_Source_KrazyKarts_GoKart_h_28_PRIVATE_PROPERTY_OFFSET \
	KrazyKarts_Source_KrazyKarts_GoKart_h_28_SPARSE_DATA \
	KrazyKarts_Source_KrazyKarts_GoKart_h_28_RPC_WRAPPERS \
	KrazyKarts_Source_KrazyKarts_GoKart_h_28_CALLBACK_WRAPPERS \
	KrazyKarts_Source_KrazyKarts_GoKart_h_28_INCLASS \
	KrazyKarts_Source_KrazyKarts_GoKart_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define KrazyKarts_Source_KrazyKarts_GoKart_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	KrazyKarts_Source_KrazyKarts_GoKart_h_28_PRIVATE_PROPERTY_OFFSET \
	KrazyKarts_Source_KrazyKarts_GoKart_h_28_SPARSE_DATA \
	KrazyKarts_Source_KrazyKarts_GoKart_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	KrazyKarts_Source_KrazyKarts_GoKart_h_28_CALLBACK_WRAPPERS \
	KrazyKarts_Source_KrazyKarts_GoKart_h_28_INCLASS_NO_PURE_DECLS \
	KrazyKarts_Source_KrazyKarts_GoKart_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> KRAZYKARTS_API UClass* StaticClass<class AGoKart>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID KrazyKarts_Source_KrazyKarts_GoKart_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
