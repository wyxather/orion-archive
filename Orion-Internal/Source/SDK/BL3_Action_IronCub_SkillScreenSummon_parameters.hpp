#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_IronCub_SkillScreenSummon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_IronCub_SkillScreenSummon.Action_IronCub_SkillScreenSummon_C.OnEnd
struct UAction_IronCub_SkillScreenSummon_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_IronCub_SkillScreenSummon.Action_IronCub_SkillScreenSummon_C.OnBegin
struct UAction_IronCub_SkillScreenSummon_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_IronCub_SkillScreenSummon.Action_IronCub_SkillScreenSummon_C.ExecuteUbergraph_Action_IronCub_SkillScreenSummon
struct UAction_IronCub_SkillScreenSummon_C_ExecuteUbergraph_Action_IronCub_SkillScreenSummon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
