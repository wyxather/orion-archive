#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_HealOverTime_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_HealOverTime.Action_HealOverTime_C.OnActionStart
struct UAction_HealOverTime_C_OnActionStart_Params
{
};

// Function Action_HealOverTime.Action_HealOverTime_C.OnComputeStats
struct UAction_HealOverTime_C_OnComputeStats_Params
{
};

// Function Action_HealOverTime.Action_HealOverTime_C.ExecuteUbergraph_Action_HealOverTime
struct UAction_HealOverTime_C_ExecuteUbergraph_Action_HealOverTime_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
