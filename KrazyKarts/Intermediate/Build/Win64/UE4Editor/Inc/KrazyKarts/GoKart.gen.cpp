// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "KrazyKarts/GoKart.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoKart() {}
// Cross Module References
	KRAZYKARTS_API UClass* Z_Construct_UClass_AGoKart_NoRegister();
	KRAZYKARTS_API UClass* Z_Construct_UClass_AGoKart();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_KrazyKarts();
	KRAZYKARTS_API UFunction* Z_Construct_UFunction_AGoKart_OnRep_ReplicatedTranform();
	KRAZYKARTS_API UFunction* Z_Construct_UFunction_AGoKart_Server_MoveForward();
	KRAZYKARTS_API UFunction* Z_Construct_UFunction_AGoKart_Server_MoveRight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	static FName NAME_AGoKart_Server_MoveForward = FName(TEXT("Server_MoveForward"));
	void AGoKart::Server_MoveForward(float Value)
	{
		GoKart_eventServer_MoveForward_Parms Parms;
		Parms.Value=Value;
		ProcessEvent(FindFunctionChecked(NAME_AGoKart_Server_MoveForward),&Parms);
	}
	static FName NAME_AGoKart_Server_MoveRight = FName(TEXT("Server_MoveRight"));
	void AGoKart::Server_MoveRight(float Value)
	{
		GoKart_eventServer_MoveRight_Parms Parms;
		Parms.Value=Value;
		ProcessEvent(FindFunctionChecked(NAME_AGoKart_Server_MoveRight),&Parms);
	}
	void AGoKart::StaticRegisterNativesAGoKart()
	{
		UClass* Class = AGoKart::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_ReplicatedTranform", &AGoKart::execOnRep_ReplicatedTranform },
			{ "Server_MoveForward", &AGoKart::execServer_MoveForward },
			{ "Server_MoveRight", &AGoKart::execServer_MoveRight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGoKart_OnRep_ReplicatedTranform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGoKart_OnRep_ReplicatedTranform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GoKart.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGoKart_OnRep_ReplicatedTranform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGoKart, nullptr, "OnRep_ReplicatedTranform", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGoKart_OnRep_ReplicatedTranform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGoKart_OnRep_ReplicatedTranform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGoKart_OnRep_ReplicatedTranform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGoKart_OnRep_ReplicatedTranform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGoKart_Server_MoveForward_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGoKart_Server_MoveForward_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoKart_eventServer_MoveForward_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGoKart_Server_MoveForward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGoKart_Server_MoveForward_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGoKart_Server_MoveForward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GoKart.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGoKart_Server_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGoKart, nullptr, "Server_MoveForward", nullptr, nullptr, sizeof(GoKart_eventServer_MoveForward_Parms), Z_Construct_UFunction_AGoKart_Server_MoveForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGoKart_Server_MoveForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGoKart_Server_MoveForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGoKart_Server_MoveForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGoKart_Server_MoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGoKart_Server_MoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGoKart_Server_MoveRight_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGoKart_Server_MoveRight_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GoKart_eventServer_MoveRight_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGoKart_Server_MoveRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGoKart_Server_MoveRight_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGoKart_Server_MoveRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GoKart.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGoKart_Server_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGoKart, nullptr, "Server_MoveRight", nullptr, nullptr, sizeof(GoKart_eventServer_MoveRight_Parms), Z_Construct_UFunction_AGoKart_Server_MoveRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGoKart_Server_MoveRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGoKart_Server_MoveRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGoKart_Server_MoveRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGoKart_Server_MoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGoKart_Server_MoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGoKart_NoRegister()
	{
		return AGoKart::StaticClass();
	}
	struct Z_Construct_UClass_AGoKart_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedTranform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReplicatedTranform;
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
	UObject* (*const Z_Construct_UClass_AGoKart_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_KrazyKarts,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGoKart_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGoKart_OnRep_ReplicatedTranform, "OnRep_ReplicatedTranform" }, // 2480790000
		{ &Z_Construct_UFunction_AGoKart_Server_MoveForward, "Server_MoveForward" }, // 2977269254
		{ &Z_Construct_UFunction_AGoKart_Server_MoveRight, "Server_MoveRight" }, // 2390613101
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoKart_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GoKart.h" },
		{ "ModuleRelativePath", "GoKart.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoKart_Statics::NewProp_ReplicatedTranform_MetaData[] = {
		{ "ModuleRelativePath", "GoKart.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGoKart_Statics::NewProp_ReplicatedTranform = { "ReplicatedTranform", "OnRep_ReplicatedTranform", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGoKart, ReplicatedTranform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_AGoKart_Statics::NewProp_ReplicatedTranform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGoKart_Statics::NewProp_ReplicatedTranform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoKart_Statics::NewProp_RollingResistanceCoefficient_MetaData[] = {
		{ "Category", "GoKart" },
		{ "Comment", "// Higher means more rolling resistance.\n" },
		{ "ModuleRelativePath", "GoKart.h" },
		{ "ToolTip", "Higher means more rolling resistance." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGoKart_Statics::NewProp_RollingResistanceCoefficient = { "RollingResistanceCoefficient", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGoKart, RollingResistanceCoefficient), METADATA_PARAMS(Z_Construct_UClass_AGoKart_Statics::NewProp_RollingResistanceCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGoKart_Statics::NewProp_RollingResistanceCoefficient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoKart_Statics::NewProp_DragCoefficient_MetaData[] = {
		{ "Category", "GoKart" },
		{ "Comment", "// Higher means more drag.\n" },
		{ "ModuleRelativePath", "GoKart.h" },
		{ "ToolTip", "Higher means more drag." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGoKart_Statics::NewProp_DragCoefficient = { "DragCoefficient", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGoKart, DragCoefficient), METADATA_PARAMS(Z_Construct_UClass_AGoKart_Statics::NewProp_DragCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGoKart_Statics::NewProp_DragCoefficient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoKart_Statics::NewProp_MinTurningRadius_MetaData[] = {
		{ "Category", "GoKart" },
		{ "Comment", "// Minimum radius of the car turning circle at full lock (m).\n" },
		{ "ModuleRelativePath", "GoKart.h" },
		{ "ToolTip", "Minimum radius of the car turning circle at full lock (m)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGoKart_Statics::NewProp_MinTurningRadius = { "MinTurningRadius", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGoKart, MinTurningRadius), METADATA_PARAMS(Z_Construct_UClass_AGoKart_Statics::NewProp_MinTurningRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGoKart_Statics::NewProp_MinTurningRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoKart_Statics::NewProp_MaxDrivingForce_MetaData[] = {
		{ "Category", "GoKart" },
		{ "Comment", "// The force applied to the car when the throttle is fully down (N).\n" },
		{ "ModuleRelativePath", "GoKart.h" },
		{ "ToolTip", "The force applied to the car when the throttle is fully down (N)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGoKart_Statics::NewProp_MaxDrivingForce = { "MaxDrivingForce", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGoKart, MaxDrivingForce), METADATA_PARAMS(Z_Construct_UClass_AGoKart_Statics::NewProp_MaxDrivingForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGoKart_Statics::NewProp_MaxDrivingForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoKart_Statics::NewProp_Mass_MetaData[] = {
		{ "Category", "GoKart" },
		{ "Comment", "// The mass of the car (kg).\n" },
		{ "ModuleRelativePath", "GoKart.h" },
		{ "ToolTip", "The mass of the car (kg)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGoKart_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGoKart, Mass), METADATA_PARAMS(Z_Construct_UClass_AGoKart_Statics::NewProp_Mass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGoKart_Statics::NewProp_Mass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGoKart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoKart_Statics::NewProp_ReplicatedTranform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoKart_Statics::NewProp_RollingResistanceCoefficient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoKart_Statics::NewProp_DragCoefficient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoKart_Statics::NewProp_MinTurningRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoKart_Statics::NewProp_MaxDrivingForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGoKart_Statics::NewProp_Mass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGoKart_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGoKart>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGoKart_Statics::ClassParams = {
		&AGoKart::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGoKart_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGoKart_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGoKart_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGoKart_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGoKart()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGoKart_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGoKart, 664904409);
	template<> KRAZYKARTS_API UClass* StaticClass<AGoKart>()
	{
		return AGoKart::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGoKart(Z_Construct_UClass_AGoKart, &AGoKart::StaticClass, TEXT("/Script/KrazyKarts"), TEXT("AGoKart"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGoKart);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
