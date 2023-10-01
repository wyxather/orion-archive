#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Gunner_DLCSkill_14_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Passive_Gunner_DLCSkill_14.Passive_Gunner_DLCSkill_13_C.CalculateAbilityState
struct UPassive_Gunner_DLCSkill_13_C_CalculateAbilityState_Params
{
	EGbxAbilityState                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Passive_Gunner_DLCSkill_14.Passive_Gunner_DLCSkill_13_C.GunnerCausedElementalEffect
struct UPassive_Gunner_DLCSkill_13_C_GunnerCausedElementalEffect_Params
{
	class AActor**                                     Causer;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FStatusEffectSpec*                          Spec;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Passive_Gunner_DLCSkill_14.Passive_Gunner_DLCSkill_13_C.ExecuteUbergraph_Passive_Gunner_DLCSkill_14
struct UPassive_Gunner_DLCSkill_13_C_ExecuteUbergraph_Passive_Gunner_DLCSkill_14_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
