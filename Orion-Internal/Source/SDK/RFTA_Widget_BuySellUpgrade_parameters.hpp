#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_BuySellUpgrade_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.FocusTab
struct UWidget_BuySellUpgrade_C_FocusTab_Params
{
};

// Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.HasFocusedTab
struct UWidget_BuySellUpgrade_C_HasFocusedTab_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.SetActionEnabled
struct UWidget_BuySellUpgrade_C_SetActionEnabled_Params
{
};

// Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.GetVisibility_1
struct UWidget_BuySellUpgrade_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.CheckTutorial
struct UWidget_BuySellUpgrade_C_CheckTutorial_Params
{
};

// Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.ShowHideTabs
struct UWidget_BuySellUpgrade_C_ShowHideTabs_Params
{
};

// Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.Get_Scrap_Text_1
struct UWidget_BuySellUpgrade_C_Get_Scrap_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.GetRelevantInventory
struct UWidget_BuySellUpgrade_C_GetRelevantInventory_Params
{
	class UInventoryComponent*                         Inventory;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.FocusFirstVisibleTab
struct UWidget_BuySellUpgrade_C_FocusFirstVisibleTab_Params
{
};

// Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.Construct
struct UWidget_BuySellUpgrade_C_Construct_Params
{
};

// Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.OnSelectItem
struct UWidget_BuySellUpgrade_C_OnSelectItem_Params
{
	int*                                               ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInspectInfo*                               InspectInfo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              Comparing;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FInspectInfo*                               InspectInfoCompare;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              ShowIngredients;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRecipeInfo*                                Recipe;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UClass**                                     ItemBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.OnTabFocus
struct UWidget_BuySellUpgrade_C_OnTabFocus_Params
{
	class UWidget_InventoryTab_C**                     Tab;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.PreConstruct
struct UWidget_BuySellUpgrade_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_BuySellUpgrade_C_BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.OnAddedToFocusPath
struct UWidget_BuySellUpgrade_C_OnAddedToFocusPath_Params
{
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.BndEvt__AdvancedStatsBtn_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_BuySellUpgrade_C_BndEvt__AdvancedStatsBtn_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.BndEvt__HoldtoCraft_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_BuySellUpgrade_C_BndEvt__HoldtoCraft_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.ShowTutorialWithDelay
struct UWidget_BuySellUpgrade_C_ShowTutorialWithDelay_Params
{
};

// Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.FocusFirstAvailableEvent
struct UWidget_BuySellUpgrade_C_FocusFirstAvailableEvent_Params
{
};

// Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.OnInventoryChanged_Event_1
struct UWidget_BuySellUpgrade_C_OnInventoryChanged_Event_1_Params
{
};

// Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.ExecuteUbergraph_Widget_BuySellUpgrade
struct UWidget_BuySellUpgrade_C_ExecuteUbergraph_Widget_BuySellUpgrade_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.AdvancedStats__DelegateSignature
struct UWidget_BuySellUpgrade_C_AdvancedStats__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
