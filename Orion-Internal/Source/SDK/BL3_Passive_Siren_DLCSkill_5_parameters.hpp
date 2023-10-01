#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Siren_DLCSkill_5_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Passive_Siren_DLCSkill_5.Passive_Siren_DLCSkill_4_C.OnActivated
struct UPassive_Siren_DLCSkill_4_C_OnActivated_Params
{
};

// Function Passive_Siren_DLCSkill_5.Passive_Siren_DLCSkill_4_C.DLCSkill4_OnCausedMaxResourceEffect
struct UPassive_Siren_DLCSkill_4_C_DLCSkill4_OnCausedMaxResourceEffect_Params
{
	class AActor*                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EOakStatusEffectResourceEffectType                 ResourceEffectType;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Siren_DLCSkill_5.Passive_Siren_DLCSkill_4_C.ExecuteUbergraph_Passive_Siren_DLCSkill_5
struct UPassive_Siren_DLCSkill_4_C_ExecuteUbergraph_Passive_Siren_DLCSkill_5_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
