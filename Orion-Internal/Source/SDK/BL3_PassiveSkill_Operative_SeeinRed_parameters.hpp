#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Operative_SeeinRed_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PassiveSkill_Operative_SeeinRed.PassiveSkill_Operative_SeeinRed_C.OnActivated
struct UPassiveSkill_Operative_SeeinRed_C_OnActivated_Params
{
};

// Function PassiveSkill_Operative_SeeinRed.PassiveSkill_Operative_SeeinRed_C.SeeinRedOnActionSkillActivated
struct UPassiveSkill_Operative_SeeinRed_C_SeeinRedOnActionSkillActivated_Params
{
	class UOakActionAbility*                           ActionAbility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveSkill_Operative_SeeinRed.PassiveSkill_Operative_SeeinRed_C.ExecuteUbergraph_PassiveSkill_Operative_SeeinRed
struct UPassiveSkill_Operative_SeeinRed_C_ExecuteUbergraph_PassiveSkill_Operative_SeeinRed_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
