#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_AAS_ScheduledEmitters_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_AAS_ScheduledEmitters.BP_AAS_ScheduledEmitters_C.UserConstructionScript
struct ABP_AAS_ScheduledEmitters_C_UserConstructionScript_Params
{
};

// Function BP_AAS_ScheduledEmitters.BP_AAS_ScheduledEmitters_C.ReceiveBeginPlay
struct ABP_AAS_ScheduledEmitters_C_ReceiveBeginPlay_Params
{
};

// Function BP_AAS_ScheduledEmitters.BP_AAS_ScheduledEmitters_C.ReceiveTick
struct ABP_AAS_ScheduledEmitters_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_AAS_ScheduledEmitters.BP_AAS_ScheduledEmitters_C.ExecuteUbergraph_BP_AAS_ScheduledEmitters
struct ABP_AAS_ScheduledEmitters_C_ExecuteUbergraph_BP_AAS_ScheduledEmitters_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
