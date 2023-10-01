#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Operative_SupersonicMan_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PassiveSkill_Operative_SupersonicMan.PassiveSkill_Operative_SupersonicMan_C.OnActivated
struct UPassiveSkill_Operative_SupersonicMan_C_OnActivated_Params
{
};

// Function PassiveSkill_Operative_SupersonicMan.PassiveSkill_Operative_SupersonicMan_C.OOO_OnActionSkillActivated
struct UPassiveSkill_Operative_SupersonicMan_C_OOO_OnActionSkillActivated_Params
{
	class UOakActionAbility*                           ActionAbility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveSkill_Operative_SupersonicMan.PassiveSkill_Operative_SupersonicMan_C.OOO_OnActionSkillCoolingDown
struct UPassiveSkill_Operative_SupersonicMan_C_OOO_OnActionSkillCoolingDown_Params
{
	class UOakActionAbility*                           ActionAbility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveSkill_Operative_SupersonicMan.PassiveSkill_Operative_SupersonicMan_C.ExecuteUbergraph_PassiveSkill_Operative_SupersonicMan
struct UPassiveSkill_Operative_SupersonicMan_C_ExecuteUbergraph_PassiveSkill_Operative_SupersonicMan_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
