#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_FindYourCenter_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PassiveSkill_Siren_FindYourCenter.PassiveSkill_Siren_FindYourCenter_C.OnActivated
struct UPassiveSkill_Siren_FindYourCenter_C_OnActivated_Params
{
};

// Function PassiveSkill_Siren_FindYourCenter.PassiveSkill_Siren_FindYourCenter_C.OnActionSkillActivated
struct UPassiveSkill_Siren_FindYourCenter_C_OnActionSkillActivated_Params
{
	class UOakActionAbility*                           ActionAbility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveSkill_Siren_FindYourCenter.PassiveSkill_Siren_FindYourCenter_C.ExecuteUbergraph_PassiveSkill_Siren_FindYourCenter
struct UPassiveSkill_Siren_FindYourCenter_C_ExecuteUbergraph_PassiveSkill_Siren_FindYourCenter_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
