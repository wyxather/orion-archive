#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_WidgetPingWheel_Item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WidgetPingWheel_Item.WidgetPingWheel_Item_C.UpdateFromContext
struct UWidgetPingWheel_Item_C_UpdateFromContext_Params
{
	class UPingSubContext**                            Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function WidgetPingWheel_Item.WidgetPingWheel_Item_C.OnActivate
struct UWidgetPingWheel_Item_C_OnActivate_Params
{
};

// Function WidgetPingWheel_Item.WidgetPingWheel_Item_C.NotifySelectedChanged
struct UWidgetPingWheel_Item_C_NotifySelectedChanged_Params
{
	bool*                                              Selected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function WidgetPingWheel_Item.WidgetPingWheel_Item_C.Construct
struct UWidgetPingWheel_Item_C_Construct_Params
{
};

// Function WidgetPingWheel_Item.WidgetPingWheel_Item_C.ExecuteUbergraph_WidgetPingWheel_Item
struct UWidgetPingWheel_Item_C_ExecuteUbergraph_WidgetPingWheel_Item_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
