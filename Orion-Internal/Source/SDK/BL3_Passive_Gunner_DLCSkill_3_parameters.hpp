#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Gunner_DLCSkill_3_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Passive_Gunner_DLCSkill_3.Passive_Gunner_DLCSkill_2_C.OnActivated
struct UPassive_Gunner_DLCSkill_2_C_OnActivated_Params
{
};

// Function Passive_Gunner_DLCSkill_3.Passive_Gunner_DLCSkill_2_C.DLCSkill2_OnActionSkillCoolingDown
struct UPassive_Gunner_DLCSkill_2_C_DLCSkill2_OnActionSkillCoolingDown_Params
{
	class UOakActionAbility*                           ActionAbility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Gunner_DLCSkill_3.Passive_Gunner_DLCSkill_2_C.DLCSkill2_OnActionSkillReady
struct UPassive_Gunner_DLCSkill_2_C_DLCSkill2_OnActionSkillReady_Params
{
	class UOakActionAbility*                           ActionAbility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Gunner_DLCSkill_3.Passive_Gunner_DLCSkill_2_C.ExecuteUbergraph_Passive_Gunner_DLCSkill_3
struct UPassive_Gunner_DLCSkill_2_C_ExecuteUbergraph_Passive_Gunner_DLCSkill_3_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
