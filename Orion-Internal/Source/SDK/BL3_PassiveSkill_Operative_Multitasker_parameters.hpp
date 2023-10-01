#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Operative_Multitasker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PassiveSkill_Operative_Multitasker.PassiveSkill_Operative_Multitasker_C.OnActivated
struct UPassiveSkill_Operative_Multitasker_C_OnActivated_Params
{
};

// Function PassiveSkill_Operative_Multitasker.PassiveSkill_Operative_Multitasker_C.Multitasker_OnActionSkillActivated
struct UPassiveSkill_Operative_Multitasker_C_Multitasker_OnActionSkillActivated_Params
{
	class UOakActionAbility*                           ActionAbility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveSkill_Operative_Multitasker.PassiveSkill_Operative_Multitasker_C.Multitasker_OnActionSkillCoolingDown
struct UPassiveSkill_Operative_Multitasker_C_Multitasker_OnActionSkillCoolingDown_Params
{
	class UOakActionAbility*                           ActionAbility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveSkill_Operative_Multitasker.PassiveSkill_Operative_Multitasker_C.ExecuteUbergraph_PassiveSkill_Operative_Multitasker
struct UPassiveSkill_Operative_Multitasker_C_ExecuteUbergraph_PassiveSkill_Operative_Multitasker_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
