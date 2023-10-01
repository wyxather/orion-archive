#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_HUD_QuickSelectSlot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_HUD_QuickSelectSlot.Widget_HUD_QuickSelectSlot_C.CheckEntitlement
struct UWidget_HUD_QuickSelectSlot_C_CheckEntitlement_Params
{
	class UClass**                                     ItemBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              NotifyOnNoEntitlement;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsEntitled;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_HUD_QuickSelectSlot.Widget_HUD_QuickSelectSlot_C.UpdateQuantity
struct UWidget_HUD_QuickSelectSlot_C_UpdateQuantity_Params
{
};

// Function Widget_HUD_QuickSelectSlot.Widget_HUD_QuickSelectSlot_C.Get_Icon_Visibility_1
struct UWidget_HUD_QuickSelectSlot_C_Get_Icon_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_HUD_QuickSelectSlot.Widget_HUD_QuickSelectSlot_C.CanUse
struct UWidget_HUD_QuickSelectSlot_C_CanUse_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_HUD_QuickSelectSlot.Widget_HUD_QuickSelectSlot_C.Refresh
struct UWidget_HUD_QuickSelectSlot_C_Refresh_Params
{
};

// Function Widget_HUD_QuickSelectSlot.Widget_HUD_QuickSelectSlot_C.Construct
struct UWidget_HUD_QuickSelectSlot_C_Construct_Params
{
};

// Function Widget_HUD_QuickSelectSlot.Widget_HUD_QuickSelectSlot_C.OnChanged_Event_1
struct UWidget_HUD_QuickSelectSlot_C_OnChanged_Event_1_Params
{
};

// Function Widget_HUD_QuickSelectSlot.Widget_HUD_QuickSelectSlot_C.OnInventoryChanged_Event_1
struct UWidget_HUD_QuickSelectSlot_C_OnInventoryChanged_Event_1_Params
{
};

// Function Widget_HUD_QuickSelectSlot.Widget_HUD_QuickSelectSlot_C.OnSlotUsed_Event_1
struct UWidget_HUD_QuickSelectSlot_C_OnSlotUsed_Event_1_Params
{
	unsigned char*                                     Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_HUD_QuickSelectSlot.Widget_HUD_QuickSelectSlot_C.UpdateImageBinding
struct UWidget_HUD_QuickSelectSlot_C_UpdateImageBinding_Params
{
};

// Function Widget_HUD_QuickSelectSlot.Widget_HUD_QuickSelectSlot_C.ExecuteUbergraph_Widget_HUD_QuickSelectSlot
struct UWidget_HUD_QuickSelectSlot_C_ExecuteUbergraph_Widget_HUD_QuickSelectSlot_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
