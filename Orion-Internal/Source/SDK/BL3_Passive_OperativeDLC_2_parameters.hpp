#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_OperativeDLC_2_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Passive_OperativeDLC_2.Passive_OperativeDLC_1_C.OnActivated
struct UPassive_OperativeDLC_1_C_OnActivated_Params
{
};

// Function Passive_OperativeDLC_2.Passive_OperativeDLC_1_C.OperativeDLCSkill1_OnActionSkillActivated
struct UPassive_OperativeDLC_1_C_OperativeDLCSkill1_OnActionSkillActivated_Params
{
	class UOakActionAbility*                           ActionAbility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_OperativeDLC_2.Passive_OperativeDLC_1_C.ExecuteUbergraph_Passive_OperativeDLC_2
struct UPassive_OperativeDLC_1_C_ExecuteUbergraph_Passive_OperativeDLC_2_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
