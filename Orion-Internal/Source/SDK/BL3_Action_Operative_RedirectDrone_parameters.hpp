#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Operative_RedirectDrone_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Operative_RedirectDrone.Action_Operative_RedirectDrone_C.AN_RedirectDrone
struct UAction_Operative_RedirectDrone_C_AN_RedirectDrone_Params
{
};

// Function Action_Operative_RedirectDrone.Action_Operative_RedirectDrone_C.OnServerBegin
struct UAction_Operative_RedirectDrone_C_OnServerBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Operative_RedirectDrone.Action_Operative_RedirectDrone_C.AN_PerformRedirectFeedback
struct UAction_Operative_RedirectDrone_C_AN_PerformRedirectFeedback_Params
{
};

// Function Action_Operative_RedirectDrone.Action_Operative_RedirectDrone_C.ExecuteUbergraph_Action_Operative_RedirectDrone
struct UAction_Operative_RedirectDrone_C_ExecuteUbergraph_Action_Operative_RedirectDrone_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
