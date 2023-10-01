#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_SkillScreen_Unlocked_Beastmaster_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_SkillScreen_Unlocked_Beastmaster.Action_SkillScreen_Unlocked_Beastmaster_C.OnEnd
struct UAction_SkillScreen_Unlocked_Beastmaster_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_SkillScreen_Unlocked_Beastmaster.Action_SkillScreen_Unlocked_Beastmaster_C.ExecuteUbergraph_Action_SkillScreen_Unlocked_Beastmaster
struct UAction_SkillScreen_Unlocked_Beastmaster_C_ExecuteUbergraph_Action_SkillScreen_Unlocked_Beastmaster_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
