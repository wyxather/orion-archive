#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_HitAndRun11_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Passive_Beastmaster_HitAndRun11.Passive_Beastmaster_HitAndRun11_C.OnActivated
struct UPassive_Beastmaster_HitAndRun11_C_OnActivated_Params
{
};

// Function Passive_Beastmaster_HitAndRun11.Passive_Beastmaster_HitAndRun11_C.OnActionSkillActivated_HitAndRun11
struct UPassive_Beastmaster_HitAndRun11_C_OnActionSkillActivated_HitAndRun11_Params
{
	class UOakActionAbility*                           ActionAbility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Beastmaster_HitAndRun11.Passive_Beastmaster_HitAndRun11_C.ExecuteUbergraph_Passive_Beastmaster_HitAndRun11
struct UPassive_Beastmaster_HitAndRun11_C_ExecuteUbergraph_Passive_Beastmaster_HitAndRun11_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
