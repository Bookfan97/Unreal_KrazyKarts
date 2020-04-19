// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KrazyKarts/GoKartMovementReplicator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoKartMovementReplicator() {}
// Cross Module References
	KRAZYKARTS_API UScriptStruct* Z_Construct_UScriptStruct_FGoKartState();
	UPackage* Z_Construct_UPackage__Script_KrazyKarts();
	KRAZYKARTS_API UScriptStruct* Z_Construct_UScriptStruct_FGoKartMove();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	KRAZYKARTS_API UClass* Z_Construct_UClass_UGoKartMovementReplicator_NoRegister();
	KRAZYKARTS_API UClass* Z_Construct_UClass_UGoKartMovementReplicator();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	KRAZYKARTS_API UFunction* Z_Construct_UFunction_UGoKartMovementReplicator_OnRep_ServerState();
	KRAZYKARTS_API UFunction* Z_Construct_UFunction_UGoKartMovementReplicator_Server_SendMove();
	KRAZYKARTS_API UFunction* Z_Construct_UFunction_UGoKartMovementReplicator_SetMeshOffsetRoot();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	KRAZYKARTS_API UClass* Z_Construct_UClass_UGoKartMovementComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FGoKartState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KRAZYKARTS_API uint32 Get_Z_Construct_UScriptStruct_FGoKartState_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGoKartState, Z_Construct_UPackage__Script_KrazyKarts(), TEXT("GoKartState"), sizeof(FGoKartState), Get_Z_Construct_UScriptStruct_FGoKartState_Hash());
	}
	return Singleton;
}
template<> KRAZYKARTS_API UScriptStruct* StaticStruct<FGoKartState>()
{
	return FGoKartState::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGoKartState(FGoKartState::StaticStruct, TEXT("/Script/KrazyKarts"), TEXT("GoKartState"), false, nullptr, nullptr);
static struct FScriptStruct_KrazyKarts_StaticRegisterNativesFGoKartState
{
	FScriptStruct_KrazyKarts_StaticRegisterNativesFGoKartState()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GoKartState")),new UScriptStruct::TCppStructOps<FGoKartState>);
	}
} ScriptStruct_KrazyKarts_StaticRegisterNativesFGoKartState;
	struct Z_Construct_UScriptStruct_FGoKartState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastMove_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tranform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tranform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoKartState_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "GoKartMovementReplicator.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGoKartState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGoKartState>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoKartState_Statics::NewProp_LastMove_MetaData[] = {
		{ "ModuleRelativePath", "GoKartMovementReplicator.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGoKartState_Statics::NewProp_LastMove = { "LastMove", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGoKartState, LastMove), Z_Construct_UScriptStruct_FGoKartMove, METADATA_PARAMS(Z_Construct_UScriptStruct_FGoKartState_Statics::NewProp_LastMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoKartState_Statics::NewProp_LastMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoKartState_Statics::NewProp_Velocity_MetaData[] = {
		{ "ModuleRelativePath", "GoKartMovementReplicator.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGoKartState_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGoKartState, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGoKartState_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoKartState_Statics::NewProp_Velocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoKartState_Statics::NewProp_Tranform_MetaData[] = {
		{ "ModuleRelativePath", "GoKartMovementReplicator.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGoKartState_Statics::NewProp_Tranform = { "Tranform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGoKartState, Tranform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FGoKartState_Statics::NewProp_Tranform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoKartState_Statics::NewProp_Tranform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGoKartState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoKartState_Statics::NewProp_LastMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoKartState_Statics::NewProp_Velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoKartState_Statics::NewProp_Tranform,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGoKartState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KrazyKarts,
		nullptr,
		&NewStructOps,
		"GoKartState",
		sizeof(FGoKartState),
		alignof(FGoKartState),
		Z_Construct_UScriptStruct_FGoKartState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoKartState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGoKartState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoKartState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGoKartState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGoKartState_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_KrazyKarts();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GoKartState"), sizeof(FGoKartState), Get_Z_Construct_UScriptStruct_FGoKartState_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGoKartState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGoKartState_Hash() { return 2977263298U; }
	static FName NAME_UGoKartMovementReplicator_Server_SendMove = FName(TEXT("Server_SendMove"));
	void UGoKartMovementReplicator::Server_SendMove(FGoKartMove Move)
	{
		GoKartMovementReplicator_eventServer_SendMove_Parms Parms;
		Parms.Move=Move;
		ProcessEvent(FindFunctionChecked(NAME_UGoKartMovementReplicator_Server_SendMove),&Parms);
	}
	void UGoKartMovementReplicator::StaticRegisterNativesUGoKartMovementReplicator()
	{
		UClass* Class = UGoKartMovementReplicator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_ServerState", &UGoKartMovementReplicator::execOnRep_ServerState },
			{ "Server_SendMove", &UGoKartMovementReplicator::execServer_SendMove },
			{ "SetMeshOffsetRoot", &UGoKartMovementReplicator::execSetMeshOffsetRoot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGoKartMovementReplicator_OnRep_ServerState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoKartMovementReplicator_OnRep_ServerState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GoKartMovementReplicator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoKartMovementReplicator_OnRep_ServerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoKartMovementReplicator, nullptr, "OnRep_ServerState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoKartMovementReplicator_OnRep_ServerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoKartMovementReplicator_OnRep_ServerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoKartMovementReplicator_OnRep_ServerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGoKartMovementReplicator_OnRep_ServerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoKartMovementReplicator_Server_SendMove_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Move;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGoKartMovementReplicator_Server_SendMove_Statics::NewProp_Move = { "Move", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoKartMovementReplicator_eventServer_SendMove_Parms, Move), Z_Construct_UScriptStruct_FGoKartMove, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoKartMovementReplicator_Server_SendMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoKartMovementReplicator_Server_SendMove_Statics::NewProp_Move,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoKartMovementReplicator_Server_SendMove_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GoKartMovementReplicator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoKartMovementReplicator_Server_SendMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoKartMovementReplicator, nullptr, "Server_SendMove", nullptr, nullptr, sizeof(GoKartMovementReplicator_eventServer_SendMove_Parms), Z_Construct_UFunction_UGoKartMovementReplicator_Server_SendMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoKartMovementReplicator_Server_SendMove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoKartMovementReplicator_Server_SendMove_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoKartMovementReplicator_Server_SendMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoKartMovementReplicator_Server_SendMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGoKartMovementReplicator_Server_SendMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGoKartMovementReplicator_SetMeshOffsetRoot_Statics
	{
		struct GoKartMovementReplicator_eventSetMeshOffsetRoot_Parms
		{
			USceneComponent* Root;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoKartMovementReplicator_SetMeshOffsetRoot_Statics::NewProp_Root_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGoKartMovementReplicator_SetMeshOffsetRoot_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoKartMovementReplicator_eventSetMeshOffsetRoot_Parms, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGoKartMovementReplicator_SetMeshOffsetRoot_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoKartMovementReplicator_SetMeshOffsetRoot_Statics::NewProp_Root_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGoKartMovementReplicator_SetMeshOffsetRoot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGoKartMovementReplicator_SetMeshOffsetRoot_Statics::NewProp_Root,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGoKartMovementReplicator_SetMeshOffsetRoot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GoKartMovementReplicator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGoKartMovementReplicator_SetMeshOffsetRoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGoKartMovementReplicator, nullptr, "SetMeshOffsetRoot", nullptr, nullptr, sizeof(GoKartMovementReplicator_eventSetMeshOffsetRoot_Parms), Z_Construct_UFunction_UGoKartMovementReplicator_SetMeshOffsetRoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoKartMovementReplicator_SetMeshOffsetRoot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGoKartMovementReplicator_SetMeshOffsetRoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGoKartMovementReplicator_SetMeshOffsetRoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGoKartMovementReplicator_SetMeshOffsetRoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGoKartMovementReplicator_SetMeshOffsetRoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGoKartMovementReplicator_NoRegister()
	{
		return UGoKartMovementReplicator::StaticClass();
	}
	struct Z_Construct_UClass_UGoKartMovementReplicator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshOffsetRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshOffsetRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ServerState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGoKartMovementReplicator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_KrazyKarts,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGoKartMovementReplicator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGoKartMovementReplicator_OnRep_ServerState, "OnRep_ServerState" }, // 2741503167
		{ &Z_Construct_UFunction_UGoKartMovementReplicator_Server_SendMove, "Server_SendMove" }, // 2476393234
		{ &Z_Construct_UFunction_UGoKartMovementReplicator_SetMeshOffsetRoot, "SetMeshOffsetRoot" }, // 3182316850
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoKartMovementReplicator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "GoKartMovementReplicator.h" },
		{ "ModuleRelativePath", "GoKartMovementReplicator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoKartMovementReplicator_Statics::NewProp_MeshOffsetRoot_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GoKartMovementReplicator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGoKartMovementReplicator_Statics::NewProp_MeshOffsetRoot = { "MeshOffsetRoot", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGoKartMovementReplicator, MeshOffsetRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGoKartMovementReplicator_Statics::NewProp_MeshOffsetRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoKartMovementReplicator_Statics::NewProp_MeshOffsetRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoKartMovementReplicator_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GoKartMovementReplicator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGoKartMovementReplicator_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGoKartMovementReplicator, MovementComponent), Z_Construct_UClass_UGoKartMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGoKartMovementReplicator_Statics::NewProp_MovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoKartMovementReplicator_Statics::NewProp_MovementComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoKartMovementReplicator_Statics::NewProp_ServerState_MetaData[] = {
		{ "ModuleRelativePath", "GoKartMovementReplicator.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGoKartMovementReplicator_Statics::NewProp_ServerState = { "ServerState", "OnRep_ServerState", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGoKartMovementReplicator, ServerState), Z_Construct_UScriptStruct_FGoKartState, METADATA_PARAMS(Z_Construct_UClass_UGoKartMovementReplicator_Statics::NewProp_ServerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoKartMovementReplicator_Statics::NewProp_ServerState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGoKartMovementReplicator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoKartMovementReplicator_Statics::NewProp_MeshOffsetRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoKartMovementReplicator_Statics::NewProp_MovementComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoKartMovementReplicator_Statics::NewProp_ServerState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGoKartMovementReplicator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGoKartMovementReplicator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGoKartMovementReplicator_Statics::ClassParams = {
		&UGoKartMovementReplicator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGoKartMovementReplicator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGoKartMovementReplicator_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGoKartMovementReplicator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGoKartMovementReplicator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGoKartMovementReplicator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGoKartMovementReplicator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGoKartMovementReplicator, 4110314359);
	template<> KRAZYKARTS_API UClass* StaticClass<UGoKartMovementReplicator>()
	{
		return UGoKartMovementReplicator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGoKartMovementReplicator(Z_Construct_UClass_UGoKartMovementReplicator, &UGoKartMovementReplicator::StaticClass, TEXT("/Script/KrazyKarts"), TEXT("UGoKartMovementReplicator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGoKartMovementReplicator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
