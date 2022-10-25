// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Spring2022Capstone/Spring2022CapstoneGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpring2022CapstoneGameModeBase() {}
// Cross Module References
	SPRING2022CAPSTONE_API UClass* Z_Construct_UClass_ASpring2022CapstoneGameModeBase_NoRegister();
	SPRING2022CAPSTONE_API UClass* Z_Construct_UClass_ASpring2022CapstoneGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Spring2022Capstone();
// End Cross Module References
	void ASpring2022CapstoneGameModeBase::StaticRegisterNativesASpring2022CapstoneGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpring2022CapstoneGameModeBase);
	UClass* Z_Construct_UClass_ASpring2022CapstoneGameModeBase_NoRegister()
	{
		return ASpring2022CapstoneGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ASpring2022CapstoneGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpring2022CapstoneGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Spring2022Capstone,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpring2022CapstoneGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Spring2022CapstoneGameModeBase.h" },
		{ "ModuleRelativePath", "Spring2022CapstoneGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpring2022CapstoneGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpring2022CapstoneGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpring2022CapstoneGameModeBase_Statics::ClassParams = {
		&ASpring2022CapstoneGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASpring2022CapstoneGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpring2022CapstoneGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpring2022CapstoneGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ASpring2022CapstoneGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpring2022CapstoneGameModeBase.OuterSingleton, Z_Construct_UClass_ASpring2022CapstoneGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASpring2022CapstoneGameModeBase.OuterSingleton;
	}
	template<> SPRING2022CAPSTONE_API UClass* StaticClass<ASpring2022CapstoneGameModeBase>()
	{
		return ASpring2022CapstoneGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpring2022CapstoneGameModeBase);
	struct Z_CompiledInDeferFile_FID_Spring2022Capstone_Source_Spring2022Capstone_Spring2022CapstoneGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Spring2022Capstone_Source_Spring2022Capstone_Spring2022CapstoneGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASpring2022CapstoneGameModeBase, ASpring2022CapstoneGameModeBase::StaticClass, TEXT("ASpring2022CapstoneGameModeBase"), &Z_Registration_Info_UClass_ASpring2022CapstoneGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpring2022CapstoneGameModeBase), 533987051U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Spring2022Capstone_Source_Spring2022Capstone_Spring2022CapstoneGameModeBase_h_1669592706(TEXT("/Script/Spring2022Capstone"),
		Z_CompiledInDeferFile_FID_Spring2022Capstone_Source_Spring2022Capstone_Spring2022CapstoneGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Spring2022Capstone_Source_Spring2022Capstone_Spring2022CapstoneGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
