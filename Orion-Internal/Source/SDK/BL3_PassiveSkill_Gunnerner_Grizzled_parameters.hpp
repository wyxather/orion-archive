#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Gunnerner_Grizzled_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PassiveSkill_Gunnerner_Grizzled.PassiveSkill_Gunnerner_Grizzled_C.MozeKilledEvent
struct UPassiveSkill_Gunnerner_Grizzled_C_MozeKilledEvent_Params
{
	class UDamageComponent*                            Damaged;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PassiveSkill_Gunnerner_Grizzled.PassiveSkill_Gunnerner_Grizzled_C.OnActivated
struct UPassiveSkill_Gunnerner_Grizzled_C_OnActivated_Params
{
};

// Function PassiveSkill_Gunnerner_Grizzled.PassiveSkill_Gunnerner_Grizzled_C.OnAbilityTimerStarted
struct UPassiveSkill_Gunnerner_Grizzled_C_OnAbilityTimerStarted_Params
{
	struct FOakAbilityTimerSpec*                       Spec;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PassiveSkill_Gunnerner_Grizzled.PassiveSkill_Gunnerner_Grizzled_C.OnAbilityTimerEnded
struct UPassiveSkill_Gunnerner_Grizzled_C_OnAbilityTimerEnded_Params
{
	struct FOakAbilityTimerSpec*                       Spec;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FOakAbilityTimerResult*                     Result;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function PassiveSkill_Gunnerner_Grizzled.PassiveSkill_Gunnerner_Grizzled_C.ExecuteUbergraph_PassiveSkill_Gunnerner_Grizzled
struct UPassiveSkill_Gunnerner_Grizzled_C_ExecuteUbergraph_PassiveSkill_Gunnerner_Grizzled_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
