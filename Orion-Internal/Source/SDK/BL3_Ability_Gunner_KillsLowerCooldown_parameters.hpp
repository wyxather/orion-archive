#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Gunner_KillsLowerCooldown_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_Gunner_KillsLowerCooldown.Ability_Gunner_KillsLowerCooldown_C.AnointTriggerEffect
struct UAbility_Gunner_KillsLowerCooldown_C_AnointTriggerEffect_Params
{
	bool*                                              TriggerEffect;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_Gunner_KillsLowerCooldown.Ability_Gunner_KillsLowerCooldown_C.KilledEnemy
struct UAbility_Gunner_KillsLowerCooldown_C_KilledEnemy_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Ability_Gunner_KillsLowerCooldown.Ability_Gunner_KillsLowerCooldown_C.AnointRemoveEffect
struct UAbility_Gunner_KillsLowerCooldown_C_AnointRemoveEffect_Params
{
};

// Function Ability_Gunner_KillsLowerCooldown.Ability_Gunner_KillsLowerCooldown_C.BindKillEffect
struct UAbility_Gunner_KillsLowerCooldown_C_BindKillEffect_Params
{
};

// Function Ability_Gunner_KillsLowerCooldown.Ability_Gunner_KillsLowerCooldown_C.ExecuteUbergraph_Ability_Gunner_KillsLowerCooldown
struct UAbility_Gunner_KillsLowerCooldown_C_ExecuteUbergraph_Ability_Gunner_KillsLowerCooldown_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
