#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_LootRarityFunctionLibrary_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_LootRarityFunctionLibrary.BP_LootRarityFunctionLibrary_C.ApplyRarityWeightLevelBias
struct UBP_LootRarityFunctionLibrary_C_ApplyRarityWeightLevelBias_Params
{
	float                                              LevelToDetermineRarityAt;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              GlobalRarityWeightLevelBias;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LocalRarityWeightLevelBias;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              RarityWeightLevelBiasMultiplier;                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Biased_Level;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_LootRarityFunctionLibrary.BP_LootRarityFunctionLibrary_C.CalculateRarityWeight
struct UBP_LootRarityFunctionLibrary_C_CalculateRarityWeight_Params
{
	struct FDataTableRowHandle                         RarityTableRowHandle;                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              LevelToDetermineRarityAt;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              GlobalRarityWeightLevelBias;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LocalRarityWeightLevelBias;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              GlobalRarityWeightModifier;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LocalRarityWeightModifier;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Weight;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
