#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_All_SkillEnd_CyberSpike_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_All_SkillEnd_CyberSpike.Ability_All_SkillEnd_CyberSpike_C.AnointTriggerEffect
struct UAbility_All_SkillEnd_CyberSpike_C_AnointTriggerEffect_Params
{
	bool*                                              TriggerEffect;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_All_SkillEnd_CyberSpike.Ability_All_SkillEnd_CyberSpike_C.SpawnSkillProjectile
struct UAbility_All_SkillEnd_CyberSpike_C_SpawnSkillProjectile_Params
{
};

// Function Ability_All_SkillEnd_CyberSpike.Ability_All_SkillEnd_CyberSpike_C.ExecuteUbergraph_Ability_All_SkillEnd_CyberSpike
struct UAbility_All_SkillEnd_CyberSpike_C_ExecuteUbergraph_Ability_All_SkillEnd_CyberSpike_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
