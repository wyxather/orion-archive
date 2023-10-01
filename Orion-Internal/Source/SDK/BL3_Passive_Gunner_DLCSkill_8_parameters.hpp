#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Gunner_DLCSkill_8_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Passive_Gunner_DLCSkill_8.Passive_Gunner_DLCSkill_7_C.GunnerCausedElementalEffect
struct UPassive_Gunner_DLCSkill_7_C_GunnerCausedElementalEffect_Params
{
	class AActor**                                     Causer;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FStatusEffectSpec*                          Spec;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Passive_Gunner_DLCSkill_8.Passive_Gunner_DLCSkill_7_C.ExecuteUbergraph_Passive_Gunner_DLCSkill_8
struct UPassive_Gunner_DLCSkill_7_C_ExecuteUbergraph_Passive_Gunner_DLCSkill_8_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
