#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_ArmorSkill_TreasureHunter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ArmorSkill_TreasureHunter.ArmorSkill_TreasureHunter_C.GetDescription
struct UArmorSkill_TreasureHunter_C_GetDescription_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Out;                                                      // (Parm, OutParm)
};

// Function ArmorSkill_TreasureHunter.ArmorSkill_TreasureHunter_C.GetTierDescription
struct UArmorSkill_TreasureHunter_C_GetTierDescription_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               Tier;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Out;                                                      // (Parm, OutParm)
};

// Function ArmorSkill_TreasureHunter.ArmorSkill_TreasureHunter_C.OnComputeStats
struct UArmorSkill_TreasureHunter_C_OnComputeStats_Params
{
};

// Function ArmorSkill_TreasureHunter.ArmorSkill_TreasureHunter_C.ExecuteUbergraph_ArmorSkill_TreasureHunter
struct UArmorSkill_TreasureHunter_C_ExecuteUbergraph_ArmorSkill_TreasureHunter_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
