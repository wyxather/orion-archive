#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_LootRarityFunctionLibrary_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LootRarityFunctionLibrary.BP_LootRarityFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBP_LootRarityFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LootRarityFunctionLibrary.BP_LootRarityFunctionLibrary_C");
		return ptr;
	}


	void STATIC_ApplyRarityWeightLevelBias(float LevelToDetermineRarityAt, float GlobalRarityWeightLevelBias, float LocalRarityWeightLevelBias, float RarityWeightLevelBiasMultiplier, class UObject* __WorldContext, float* Biased_Level);
	void STATIC_CalculateRarityWeight(const struct FDataTableRowHandle& RarityTableRowHandle, float LevelToDetermineRarityAt, float GlobalRarityWeightLevelBias, float LocalRarityWeightLevelBias, float GlobalRarityWeightModifier, float LocalRarityWeightModifier, class UObject* __WorldContext, float* Weight);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
