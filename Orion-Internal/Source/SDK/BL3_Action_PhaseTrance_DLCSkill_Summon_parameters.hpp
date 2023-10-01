#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PhaseTrance_DLCSkill_Summon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_PhaseTrance_DLCSkill_Summon.Action_PhaseTrance_DLCSkill_Summon_C.OnBegin
struct UAction_PhaseTrance_DLCSkill_Summon_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_PhaseTrance_DLCSkill_Summon.Action_PhaseTrance_DLCSkill_Summon_C.OnEnd
struct UAction_PhaseTrance_DLCSkill_Summon_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_PhaseTrance_DLCSkill_Summon.Action_PhaseTrance_DLCSkill_Summon_C.ExecuteUbergraph_Action_PhaseTrance_DLCSkill_Summon
struct UAction_PhaseTrance_DLCSkill_Summon_C_ExecuteUbergraph_Action_PhaseTrance_DLCSkill_Summon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
