#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Inventory_SkinItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.CheckEntitlement
struct UWidget_Inventory_SkinItem_C_CheckEntitlement_Params
{
	int*                                               ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              NotifyOnNoEntitlement;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsEntitled;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.IsEquipped
struct UWidget_Inventory_SkinItem_C_IsEquipped_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.Get_OverlayIcon_ColorAndOpacity_1
struct UWidget_Inventory_SkinItem_C_Get_OverlayIcon_ColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.GetInspectInfo
struct UWidget_Inventory_SkinItem_C_GetInspectInfo_Params
{
	struct FInspectInfo                                InspectInfo;                                              // (Parm, OutParm)
};

// Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.SetInspectInfo
struct UWidget_Inventory_SkinItem_C_SetInspectInfo_Params
{
	struct FInspectInfo*                               InspectInfo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.Get_Border_4_BrushColor_1
struct UWidget_Inventory_SkinItem_C_Get_Border_4_BrushColor_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.GetEquippedVisibility
struct UWidget_Inventory_SkinItem_C_GetEquippedVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.GetVisibility_2
struct UWidget_Inventory_SkinItem_C_GetVisibility_2_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.SelectItem
struct UWidget_Inventory_SkinItem_C_SelectItem_Params
{
};

// Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.DoAction
struct UWidget_Inventory_SkinItem_C_DoAction_Params
{
};

// Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.CacheInfo
struct UWidget_Inventory_SkinItem_C_CacheInfo_Params
{
};

// Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.GetCachedInventory
struct UWidget_Inventory_SkinItem_C_GetCachedInventory_Params
{
	class UInventoryComponent*                         Inventory;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.GetInventoryItem
struct UWidget_Inventory_SkinItem_C_GetInventoryItem_Params
{
	struct FInventoryItem                              Item;                                                     // (Parm, OutParm, NoDestructor, ContainsInstancedReference)
};

// Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.OnFocus_Event_1
struct UWidget_Inventory_SkinItem_C_OnFocus_Event_1_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.OnAdded
struct UWidget_Inventory_SkinItem_C_OnAdded_Params
{
};

// Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.OnInventoryChanged
struct UWidget_Inventory_SkinItem_C_OnInventoryChanged_Params
{
};

// Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_1278_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Inventory_SkinItem_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_1278_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_1315_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Inventory_SkinItem_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_1315_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Inventory_SkinItem_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Inventory_SkinItem_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.Construct
struct UWidget_Inventory_SkinItem_C_Construct_Params
{
};

// Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Inventory_SkinItem_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.SimulateAction
struct UWidget_Inventory_SkinItem_C_SimulateAction_Params
{
};

// Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.Refresh
struct UWidget_Inventory_SkinItem_C_Refresh_Params
{
};

// Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.ExecuteUbergraph_Widget_Inventory_SkinItem
struct UWidget_Inventory_SkinItem_C_ExecuteUbergraph_Widget_Inventory_SkinItem_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.OnSelected__DelegateSignature
struct UWidget_Inventory_SkinItem_C_OnSelected__DelegateSignature_Params
{
	class UWidget_Inventory_SkinItem_C**               Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.OnItemAction__DelegateSignature
struct UWidget_Inventory_SkinItem_C_OnItemAction__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
