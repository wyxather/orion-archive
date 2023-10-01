#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_ArmorSkill_Juggernaut_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ArmorSkill_Juggernaut.ArmorSkill_Juggernaut_C.GetStaggerReductionChance
struct UArmorSkill_Juggernaut_C_GetStaggerReductionChance_Params
{
	int*                                               Tier;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Chance;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ArmorSkill_Juggernaut.ArmorSkill_Juggernaut_C.GetDescription
struct UArmorSkill_Juggernaut_C_GetDescription_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Out;                                                      // (Parm, OutParm)
};

// Function ArmorSkill_Juggernaut.ArmorSkill_Juggernaut_C.FilterIncomingDamage
struct UArmorSkill_Juggernaut_C_FilterIncomingDamage_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FDamageInfo                                 DamageInfoOut;                                            // (Parm, OutParm, ContainsInstancedReference)
	bool                                               ShouldApplyDamage;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ArmorSkill_Juggernaut.ArmorSkill_Juggernaut_C.GetTierDescription
struct UArmorSkill_Juggernaut_C_GetTierDescription_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               Tier;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Out;                                                      // (Parm, OutParm)
};

// Function ArmorSkill_Juggernaut.ArmorSkill_Juggernaut_C.OnActionStart
struct UArmorSkill_Juggernaut_C_OnActionStart_Params
{
};

// Function ArmorSkill_Juggernaut.ArmorSkill_Juggernaut_C.Timer
struct UArmorSkill_Juggernaut_C_Timer_Params
{
};

// Function ArmorSkill_Juggernaut.ArmorSkill_Juggernaut_C.OnComputeStats
struct UArmorSkill_Juggernaut_C_OnComputeStats_Params
{
};

// Function ArmorSkill_Juggernaut.ArmorSkill_Juggernaut_C.ExecuteUbergraph_ArmorSkill_Juggernaut
struct UArmorSkill_Juggernaut_C_ExecuteUbergraph_ArmorSkill_Juggernaut_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
