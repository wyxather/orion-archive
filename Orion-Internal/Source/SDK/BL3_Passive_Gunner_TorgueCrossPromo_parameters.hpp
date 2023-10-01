#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Gunner_TorgueCrossPromo_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Passive_Gunner_TorgueCrossPromo.Passive_Gunner_TorgueCrossPromo_C.OnActivated
struct UPassive_Gunner_TorgueCrossPromo_C_OnActivated_Params
{
};

// Function Passive_Gunner_TorgueCrossPromo.Passive_Gunner_TorgueCrossPromo_C.OnResumed
struct UPassive_Gunner_TorgueCrossPromo_C_OnResumed_Params
{
};

// Function Passive_Gunner_TorgueCrossPromo.Passive_Gunner_TorgueCrossPromo_C.OnAbilityTimerEnded
struct UPassive_Gunner_TorgueCrossPromo_C_OnAbilityTimerEnded_Params
{
	struct FOakAbilityTimerSpec*                       Spec;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FOakAbilityTimerResult*                     Result;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Passive_Gunner_TorgueCrossPromo.Passive_Gunner_TorgueCrossPromo_C.OnGradeChanged
struct UPassive_Gunner_TorgueCrossPromo_C_OnGradeChanged_Params
{
};

// Function Passive_Gunner_TorgueCrossPromo.Passive_Gunner_TorgueCrossPromo_C.DetermineNewChance
struct UPassive_Gunner_TorgueCrossPromo_C_DetermineNewChance_Params
{
};

// Function Passive_Gunner_TorgueCrossPromo.Passive_Gunner_TorgueCrossPromo_C.ExecuteUbergraph_Passive_Gunner_TorgueCrossPromo
struct UPassive_Gunner_TorgueCrossPromo_C_ExecuteUbergraph_Passive_Gunner_TorgueCrossPromo_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
