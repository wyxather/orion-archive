// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_LootRarityFunctionLibrary_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_LootRarityFunctionLibrary.BP_LootRarityFunctionLibrary_C.ApplyRarityWeightLevelBias
// (Static, Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          LevelToDetermineRarityAt       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          GlobalRarityWeightLevelBias    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          LocalRarityWeightLevelBias     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RarityWeightLevelBiasMultiplier (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Biased_Level                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LootRarityFunctionLibrary_C::STATIC_ApplyRarityWeightLevelBias(float LevelToDetermineRarityAt, float GlobalRarityWeightLevelBias, float LocalRarityWeightLevelBias, float RarityWeightLevelBiasMultiplier, class UObject* __WorldContext, float* Biased_Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootRarityFunctionLibrary.BP_LootRarityFunctionLibrary_C.ApplyRarityWeightLevelBias");

	UBP_LootRarityFunctionLibrary_C_ApplyRarityWeightLevelBias_Params params;
	params.LevelToDetermineRarityAt = LevelToDetermineRarityAt;
	params.GlobalRarityWeightLevelBias = GlobalRarityWeightLevelBias;
	params.LocalRarityWeightLevelBias = LocalRarityWeightLevelBias;
	params.RarityWeightLevelBiasMultiplier = RarityWeightLevelBiasMultiplier;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Biased_Level != nullptr)
		*Biased_Level = params.Biased_Level;
}


// Function BP_LootRarityFunctionLibrary.BP_LootRarityFunctionLibrary_C.CalculateRarityWeight
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle     RarityTableRowHandle           (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          LevelToDetermineRarityAt       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          GlobalRarityWeightLevelBias    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          LocalRarityWeightLevelBias     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          GlobalRarityWeightModifier     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          LocalRarityWeightModifier      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Weight                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LootRarityFunctionLibrary_C::STATIC_CalculateRarityWeight(const struct FDataTableRowHandle& RarityTableRowHandle, float LevelToDetermineRarityAt, float GlobalRarityWeightLevelBias, float LocalRarityWeightLevelBias, float GlobalRarityWeightModifier, float LocalRarityWeightModifier, class UObject* __WorldContext, float* Weight)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LootRarityFunctionLibrary.BP_LootRarityFunctionLibrary_C.CalculateRarityWeight");

	UBP_LootRarityFunctionLibrary_C_CalculateRarityWeight_Params params;
	params.RarityTableRowHandle = RarityTableRowHandle;
	params.LevelToDetermineRarityAt = LevelToDetermineRarityAt;
	params.GlobalRarityWeightLevelBias = GlobalRarityWeightLevelBias;
	params.LocalRarityWeightLevelBias = LocalRarityWeightLevelBias;
	params.GlobalRarityWeightModifier = GlobalRarityWeightModifier;
	params.LocalRarityWeightModifier = LocalRarityWeightModifier;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Weight != nullptr)
		*Weight = params.Weight;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
