// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdPreson/MyRegex.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyRegex() {}
// Cross Module References
	THIRDPRESON_API UClass* Z_Construct_UClass_AMyRegex_NoRegister();
	THIRDPRESON_API UClass* Z_Construct_UClass_AMyRegex();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ThirdPreson();
// End Cross Module References
	DEFINE_FUNCTION(AMyRegex::execTestFunc)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_args);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TestFunc(Z_Param_Out_args);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMyRegex::execRegular)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_str);
		P_GET_PROPERTY(FStrProperty,Z_Param_Reg);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Regular(Z_Param_str,Z_Param_Reg);
		P_NATIVE_END;
	}
	void AMyRegex::StaticRegisterNativesAMyRegex()
	{
		UClass* Class = AMyRegex::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Regular", &AMyRegex::execRegular },
			{ "TestFunc", &AMyRegex::execTestFunc },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyRegex_Regular_Statics
	{
		struct MyRegex_eventRegular_Parms
		{
			FString str;
			FString Reg;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_str_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_str;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Reg;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyRegex_Regular_Statics::NewProp_str_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMyRegex_Regular_Statics::NewProp_str = { "str", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyRegex_eventRegular_Parms, str), METADATA_PARAMS(Z_Construct_UFunction_AMyRegex_Regular_Statics::NewProp_str_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyRegex_Regular_Statics::NewProp_str_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyRegex_Regular_Statics::NewProp_Reg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMyRegex_Regular_Statics::NewProp_Reg = { "Reg", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyRegex_eventRegular_Parms, Reg), METADATA_PARAMS(Z_Construct_UFunction_AMyRegex_Regular_Statics::NewProp_Reg_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyRegex_Regular_Statics::NewProp_Reg_MetaData)) };
	void Z_Construct_UFunction_AMyRegex_Regular_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MyRegex_eventRegular_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMyRegex_Regular_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MyRegex_eventRegular_Parms), &Z_Construct_UFunction_AMyRegex_Regular_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyRegex_Regular_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyRegex_Regular_Statics::NewProp_str,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyRegex_Regular_Statics::NewProp_Reg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyRegex_Regular_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyRegex_Regular_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "MyRegex.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyRegex_Regular_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyRegex, nullptr, "Regular", nullptr, nullptr, sizeof(MyRegex_eventRegular_Parms), Z_Construct_UFunction_AMyRegex_Regular_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyRegex_Regular_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyRegex_Regular_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyRegex_Regular_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyRegex_Regular()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyRegex_Regular_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMyRegex_TestFunc_Statics
	{
		struct MyRegex_eventTestFunc_Parms
		{
			int32 args;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_args_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_args;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyRegex_TestFunc_Statics::NewProp_args_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMyRegex_TestFunc_Statics::NewProp_args = { "args", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyRegex_eventTestFunc_Parms, args), METADATA_PARAMS(Z_Construct_UFunction_AMyRegex_TestFunc_Statics::NewProp_args_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyRegex_TestFunc_Statics::NewProp_args_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyRegex_TestFunc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyRegex_TestFunc_Statics::NewProp_args,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyRegex_TestFunc_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "MyRegex.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyRegex_TestFunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyRegex, nullptr, "TestFunc", nullptr, nullptr, sizeof(MyRegex_eventTestFunc_Parms), Z_Construct_UFunction_AMyRegex_TestFunc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyRegex_TestFunc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyRegex_TestFunc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyRegex_TestFunc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyRegex_TestFunc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyRegex_TestFunc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyRegex_NoRegister()
	{
		return AMyRegex::StaticClass();
	}
	struct Z_Construct_UClass_AMyRegex_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ohInt_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ohInt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyRegex_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ThirdPreson,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyRegex_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyRegex_Regular, "Regular" }, // 661579070
		{ &Z_Construct_UFunction_AMyRegex_TestFunc, "TestFunc" }, // 2449602135
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyRegex_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MyRegex.h" },
		{ "ModuleRelativePath", "MyRegex.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyRegex_Statics::NewProp_ohInt_MetaData[] = {
		{ "Category", "MyRegex" },
		{ "ModuleRelativePath", "MyRegex.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMyRegex_Statics::NewProp_ohInt = { "ohInt", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyRegex, ohInt), METADATA_PARAMS(Z_Construct_UClass_AMyRegex_Statics::NewProp_ohInt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyRegex_Statics::NewProp_ohInt_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyRegex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyRegex_Statics::NewProp_ohInt,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyRegex_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyRegex>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyRegex_Statics::ClassParams = {
		&AMyRegex::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyRegex_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyRegex_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyRegex_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyRegex_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyRegex()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyRegex_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyRegex, 732525366);
	template<> THIRDPRESON_API UClass* StaticClass<AMyRegex>()
	{
		return AMyRegex::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyRegex(Z_Construct_UClass_AMyRegex, &AMyRegex::StaticClass, TEXT("/Script/ThirdPreson"), TEXT("AMyRegex"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyRegex);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
