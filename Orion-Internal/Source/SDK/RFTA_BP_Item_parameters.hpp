#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_Item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Item.BP_Item_C.OnPickupFailed
struct ABP_Item_C_OnPickupFailed_Params
{
};

// Function BP_Item.BP_Item_C.OnPickedUp
struct ABP_Item_C_OnPickedUp_Params
{
};

// Function BP_Item.BP_Item_C.ExecuteUbergraph_BP_Item
struct ABP_Item_C_ExecuteUbergraph_BP_Item_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
