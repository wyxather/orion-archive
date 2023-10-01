#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Siren_DLCSkill_3_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Passive_Siren_DLCSkill_3.Passive_Siren_DLCSkill_2_C.OnActivated
struct UPassive_Siren_DLCSkill_2_C_OnActivated_Params
{
};

// Function Passive_Siren_DLCSkill_3.Passive_Siren_DLCSkill_2_C.DLCSkill1_OnCausedElementalEffect
struct UPassive_Siren_DLCSkill_2_C_DLCSkill1_OnCausedElementalEffect_Params
{
	class AActor*                                      Causer;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FStatusEffectSpec                           Spec;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Passive_Siren_DLCSkill_3.Passive_Siren_DLCSkill_2_C.DLCSkill1_OnCausedMaxResourceEffect
struct UPassive_Siren_DLCSkill_2_C_DLCSkill1_OnCausedMaxResourceEffect_Params
{
	class AActor*                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EOakStatusEffectResourceEffectType                 ResourceEffectType;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Siren_DLCSkill_3.Passive_Siren_DLCSkill_2_C.ExecuteUbergraph_Passive_Siren_DLCSkill_3
struct UPassive_Siren_DLCSkill_2_C_ExecuteUbergraph_Passive_Siren_DLCSkill_3_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
