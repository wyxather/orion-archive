#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_GuardianRank_Harmageddon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_GuardianRank_Harmageddon.Ability_GuardianRank_Harmageddon_C.OnActivated
struct UAbility_GuardianRank_Harmageddon_C_OnActivated_Params
{
};

// Function Ability_GuardianRank_Harmageddon.Ability_GuardianRank_Harmageddon_C.ApplyDebuffOnCausedElementalEffect
struct UAbility_GuardianRank_Harmageddon_C_ApplyDebuffOnCausedElementalEffect_Params
{
	class AActor*                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FStatusEffectSpec                           Spec;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_GuardianRank_Harmageddon.Ability_GuardianRank_Harmageddon_C.ExecuteUbergraph_Ability_GuardianRank_Harmageddon
struct UAbility_GuardianRank_Harmageddon_C_ExecuteUbergraph_Ability_GuardianRank_Harmageddon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
