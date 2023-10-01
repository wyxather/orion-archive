#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_OakConsumableItemPickup_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_OakConsumableItemPickup.BP_OakConsumableItemPickup_C.UserConstructionScript
struct ABP_OakConsumableItemPickup_C_UserConstructionScript_Params
{
};

// Function BP_OakConsumableItemPickup.BP_OakConsumableItemPickup_C.ReceiveEndPlay
struct ABP_OakConsumableItemPickup_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OakConsumableItemPickup.BP_OakConsumableItemPickup_C.OnPickedUpEvent
struct ABP_OakConsumableItemPickup_C_OnPickedUpEvent_Params
{
	class AActor**                                     WasPickedUpBy;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_OakConsumableItemPickup.BP_OakConsumableItemPickup_C.ExecuteUbergraph_BP_OakConsumableItemPickup
struct ABP_OakConsumableItemPickup_C_ExecuteUbergraph_BP_OakConsumableItemPickup_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
