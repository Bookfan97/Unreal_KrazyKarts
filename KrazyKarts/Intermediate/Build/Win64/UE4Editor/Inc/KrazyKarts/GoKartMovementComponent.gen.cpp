// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KrazyKarts/GoKartMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoKartMovementComponent() {}
// Cross Module References
	KRAZYKARTS_API UScriptStruct* Z_Construct_UScriptStruct_FGoKartMove();
	UPackage* Z_Construct_UPackage__Script_KrazyKarts();
	KRAZYKARTS_API UClass* Z_Construct_UClass_UGoKartMovementComponent_NoRegister();
	KRAZYKARTS_API UClass* Z_Construct_UClass_UGoKartMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
class UScriptStruct* FGoKartMove::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern KRAZYKARTS_API uint32 Get_Z_Construct_UScriptStruct_FGoKartMove_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGoKartMove, Z_Construct_UPackage__Script_KrazyKarts(), TEXT("GoKartMove"), sizeof(FGoKartMove), Get_Z_Construct_UScriptStruct_FGoKartMove_Hash());
	}
	return Singleton;
}
template<> KRAZYKARTS_API UScriptStruct* StaticStruct<FGoKartMove>()
{
	return FGoKartMove::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGoKartMove(FGoKartMove::StaticStruct, TEXT("/Script/KrazyKarts"), TEXT("GoKartMove"), false, nullptr, nullptr);
static struct FScriptStruct_KrazyKarts_StaticRegisterNativesFGoKartMove
{
	FScriptStruct_KrazyKarts_StaticRegisterNativesFGoKartMove()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GoKartMove")),new UScriptStruct::TCppStructOps<FGoKartMove>);
	}
} ScriptStruct_KrazyKarts_StaticRegisterNativesFGoKartMove;
	struct Z_Construct_UScriptStruct_FGoKartMove_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeltaTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteeringThrow_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SteeringThrow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Throttle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Throttle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoKartMove_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "GoKartMovementComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGoKartMove_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGoKartMove>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoKartMove_Statics::NewProp_Time_MetaData[] = {
		{ "ModuleRelativePath", "GoKartMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGoKartMove_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGoKartMove, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FGoKartMove_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoKartMove_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoKartMove_Statics::NewProp_DeltaTime_MetaData[] = {
		{ "ModuleRelativePath", "GoKartMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGoKartMove_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGoKartMove, DeltaTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FGoKartMove_Statics::NewProp_DeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoKartMove_Statics::NewProp_DeltaTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoKartMove_Statics::NewProp_SteeringThrow_MetaData[] = {
		{ "ModuleRelativePath", "GoKartMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGoKartMove_Statics::NewProp_SteeringThrow = { "SteeringThrow", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGoKartMove, SteeringThrow), METADATA_PARAMS(Z_Construct_UScriptStruct_FGoKartMove_Statics::NewProp_SteeringThrow_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoKartMove_Statics::NewProp_SteeringThrow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGoKartMove_Statics::NewProp_Throttle_MetaData[] = {
		{ "ModuleRelativePath", "GoKartMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGoKartMove_Statics::NewProp_Throttle = { "Throttle", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGoKartMove, Throttle), METADATA_PARAMS(Z_Construct_UScriptStruct_FGoKartMove_Statics::NewProp_Throttle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoKartMove_Statics::NewProp_Throttle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGoKartMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoKartMove_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoKartMove_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoKartMove_Statics::NewProp_SteeringThrow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGoKartMove_Statics::NewProp_Throttle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGoKartMove_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_KrazyKarts,
		nullptr,
		&NewStructOps,
		"GoKartMove",
		sizeof(FGoKartMove),
		alignof(FGoKartMove),
		Z_Construct_UScriptStruct_FGoKartMove_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoKartMove_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGoKartMove_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGoKartMove_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGoKartMove()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGoKartMove_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_KrazyKarts();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GoKartMove"), sizeof(FGoKartMove), Get_Z_Construct_UScriptStruct_FGoKartMove_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGoKartMove_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGoKartMove_Hash() { return 797212375U; }
	void UGoKartMovementComponent::StaticRegisterNativesUGoKartMovementComponent()
	{
	}
	UClass* Z_Construct_UClass_UGoKartMovementComponent_NoRegister()
	{
		return UGoKartMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGoKartMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollingResistanceCoefficient_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RollingResistanceCoefficient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DragCoefficient_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DragCoefficient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinTurningRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinTurningRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDrivingForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDrivingForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Mass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGoKartMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_KrazyKarts,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoKartMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "GoKartMovementComponent.h" },
		{ "ModuleRelativePath", "GoKartMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoKartMovementComponent_Statics::NewProp_RollingResistanceCoefficient_MetaData[] = {
		{ "Category", "GoKartMovementComponent" },
		{ "Comment", "// Higher means more rolling resistance.\n" },
		{ "ModuleRelativePath", "GoKartMovementComponent.h" },
		{ "ToolTip", "Higher means more rolling resistance." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGoKartMovementComponent_Statics::NewProp_RollingResistanceCoefficient = { "RollingResistanceCoefficient", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGoKartMovementComponent, RollingResistanceCoefficient), METADATA_PARAMS(Z_Construct_UClass_UGoKartMovementComponent_Statics::NewProp_RollingResistanceCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoKartMovementComponent_Statics::NewProp_RollingResistanceCoefficient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoKartMovementComponent_Statics::NewProp_DragCoefficient_MetaData[] = {
		{ "Category", "GoKartMovementComponent" },
		{ "Comment", "// Higher means more drag.\n" },
		{ "ModuleRelativePath", "GoKartMovementComponent.h" },
		{ "ToolTip", "Higher means more drag." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGoKartMovementComponent_Statics::NewProp_DragCoefficient = { "DragCoefficient", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGoKartMovementComponent, DragCoefficient), METADATA_PARAMS(Z_Construct_UClass_UGoKartMovementComponent_Statics::NewProp_DragCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoKartMovementComponent_Statics::NewProp_DragCoefficient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoKartMovementComponent_Statics::NewProp_MinTurningRadius_MetaData[] = {
		{ "Category", "GoKartMovementComponent" },
		{ "Comment", "// Minimum radius of the car turning circle at full lock (m).\n" },
		{ "ModuleRelativePath", "GoKartMovementComponent.h" },
		{ "ToolTip", "Minimum radius of the car turning circle at full lock (m)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGoKartMovementComponent_Statics::NewProp_MinTurningRadius = { "MinTurningRadius", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGoKartMovementComponent, MinTurningRadius), METADATA_PARAMS(Z_Construct_UClass_UGoKartMovementComponent_Statics::NewProp_MinTurningRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoKartMovementComponent_Statics::NewProp_MinTurningRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoKartMovementComponent_Statics::NewProp_MaxDrivingForce_MetaData[] = {
		{ "Category", "GoKartMovementComponent" },
		{ "Comment", "// The force applied to the car when the throttle is fully down (N).\n" },
		{ "ModuleRelativePath", "GoKartMovementComponent.h" },
		{ "ToolTip", "The force applied to the car when the throttle is fully down (N)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGoKartMovementComponent_Statics::NewProp_MaxDrivingForce = { "MaxDrivingForce", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGoKartMovementComponent, MaxDrivingForce), METADATA_PARAMS(Z_Construct_UClass_UGoKartMovementComponent_Statics::NewProp_MaxDrivingForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoKartMovementComponent_Statics::NewProp_MaxDrivingForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoKartMovementComponent_Statics::NewProp_Mass_MetaData[] = {
		{ "Category", "GoKartMovementComponent" },
		{ "Comment", "// The mass of the car (kg).\n" },
		{ "ModuleRelativePath", "GoKartMovementComponent.h" },
		{ "ToolTip", "The mass of the car (kg)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGoKartMovementComponent_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGoKartMovementComponent, Mass), METADATA_PARAMS(Z_Construct_UClass_UGoKartMovementComponent_Statics::NewProp_Mass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGoKartMovementComponent_Statics::NewProp_Mass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGoKartMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoKartMovementComponent_Statics::NewProp_RollingResistanceCoefficient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoKartMovementComponent_Statics::NewProp_DragCoefficient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoKartMovementComponent_Statics::NewProp_MinTurningRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoKartMovementComponent_Statics::NewProp_MaxDrivingForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoKartMovementComponent_Statics::NewProp_Mass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGoKartMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGoKartMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGoKartMovementComponent_Statics::ClassParams = {
		&UGoKartMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGoKartMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGoKartMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGoKartMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGoKartMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGoKartMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGoKartMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGoKartMovementComponent, 2052143275);
	template<> KRAZYKARTS_API UClass* StaticClass<UGoKartMovementComponent>()
	{
		return UGoKartMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGoKartMovementComponent(Z_Construct_UClass_UGoKartMovementComponent, &UGoKartMovementComponent::StaticClass, TEXT("/Script/KrazyKarts"), TEXT("UGoKartMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGoKartMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
