#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_EchoLogPickup_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_EchoLogPickup.BP_EchoLogPickup_C.UserConstructionScript
struct ABP_EchoLogPickup_C_UserConstructionScript_Params
{
};

// Function BP_EchoLogPickup.BP_EchoLogPickup_C.OnPickedUpEvent
struct ABP_EchoLogPickup_C_OnPickedUpEvent_Params
{
	class AActor**                                     WasPickedUpBy;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_EchoLogPickup.BP_EchoLogPickup_C.ExecuteUbergraph_BP_EchoLogPickup
struct ABP_EchoLogPickup_C_ExecuteUbergraph_BP_EchoLogPickup_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
