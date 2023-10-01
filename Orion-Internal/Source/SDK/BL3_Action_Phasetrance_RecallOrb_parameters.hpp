#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Phasetrance_RecallOrb_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Phasetrance_RecallOrb.Action_Phasetrance_RecallOrb_C.AN_SummonOrb
struct UAction_Phasetrance_RecallOrb_C_AN_SummonOrb_Params
{
};

// Function Action_Phasetrance_RecallOrb.Action_Phasetrance_RecallOrb_C.OnServerBegin
struct UAction_Phasetrance_RecallOrb_C_OnServerBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Phasetrance_RecallOrb.Action_Phasetrance_RecallOrb_C.OnServerEnd
struct UAction_Phasetrance_RecallOrb_C_OnServerEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Phasetrance_RecallOrb.Action_Phasetrance_RecallOrb_C.ExecuteUbergraph_Action_Phasetrance_RecallOrb
struct UAction_Phasetrance_RecallOrb_C_ExecuteUbergraph_Action_Phasetrance_RecallOrb_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
