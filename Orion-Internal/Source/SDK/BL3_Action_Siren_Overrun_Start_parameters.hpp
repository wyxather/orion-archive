#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Siren_Overrun_Start_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Siren_Overrun_Start.Action_Siren_Overrun_Start_C.OnServerBegin
struct UAction_Siren_Overrun_Start_C_OnServerBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Siren_Overrun_Start.Action_Siren_Overrun_Start_C.AN_PerformBlitzFeedback_Start
struct UAction_Siren_Overrun_Start_C_AN_PerformBlitzFeedback_Start_Params
{
};

// Function Action_Siren_Overrun_Start.Action_Siren_Overrun_Start_C.ExecuteUbergraph_Action_Siren_Overrun_Start
struct UAction_Siren_Overrun_Start_C_ExecuteUbergraph_Action_Siren_Overrun_Start_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
