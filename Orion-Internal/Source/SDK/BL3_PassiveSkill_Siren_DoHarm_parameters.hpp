#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_DoHarm_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PassiveSkill_Siren_DoHarm.PassiveSkill_Siren_DoHarm_C.CalculateAbilityState
struct UPassiveSkill_Siren_DoHarm_C_CalculateAbilityState_Params
{
	EGbxAbilityState                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PassiveSkill_Siren_DoHarm.PassiveSkill_Siren_DoHarm_C.OnActivated
struct UPassiveSkill_Siren_DoHarm_C_OnActivated_Params
{
};

// Function PassiveSkill_Siren_DoHarm.PassiveSkill_Siren_DoHarm_C.DoHarmOnKilledEnemy
struct UPassiveSkill_Siren_DoHarm_C_DoHarmOnKilledEnemy_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PassiveSkill_Siren_DoHarm.PassiveSkill_Siren_DoHarm_C.TriggerRushEffect
struct UPassiveSkill_Siren_DoHarm_C_TriggerRushEffect_Params
{
	int                                                RushStacks;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveSkill_Siren_DoHarm.PassiveSkill_Siren_DoHarm_C.ExecuteUbergraph_PassiveSkill_Siren_DoHarm
struct UPassiveSkill_Siren_DoHarm_C_ExecuteUbergraph_PassiveSkill_Siren_DoHarm_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
