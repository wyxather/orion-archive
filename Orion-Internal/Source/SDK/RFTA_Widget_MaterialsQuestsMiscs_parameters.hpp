#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_MaterialsQuestsMiscs_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.GetItemLabel
struct UWidget_MaterialsQuestsMiscs_C_GetItemLabel_Params
{
	class UClass**                                     ItemBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Out;                                                      // (Parm, OutParm)
};

// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.RequiredUseConfirm
struct UWidget_MaterialsQuestsMiscs_C_RequiredUseConfirm_Params
{
	class UClass**                                     ItemBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.CanBeHotKeyed
struct UWidget_MaterialsQuestsMiscs_C_CanBeHotKeyed_Params
{
	class UClass**                                     ItemBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.GetSelectedItem
struct UWidget_MaterialsQuestsMiscs_C_GetSelectedItem_Params
{
	bool                                               Valid;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FInventoryItem                              Item;                                                     // (Parm, OutParm, NoDestructor, ContainsInstancedReference)
};

// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.GetRelevantInventory
struct UWidget_MaterialsQuestsMiscs_C_GetRelevantInventory_Params
{
	class UInventoryComponent*                         Inventory;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.GetVisibility_3
struct UWidget_MaterialsQuestsMiscs_C_GetVisibility_3_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.CommandsVisibility
struct UWidget_MaterialsQuestsMiscs_C_CommandsVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.FindInfo
struct UWidget_MaterialsQuestsMiscs_C_FindInfo_Params
{
	struct FInspectInfo*                               InspectInfo;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int*                                               InfoNumber;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInspectStat                                Array_Element;                                            // (Parm, OutParm)
};

// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.FocusList
struct UWidget_MaterialsQuestsMiscs_C_FocusList_Params
{
};

// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.Get_ItemTypeLabel_Text_1
struct UWidget_MaterialsQuestsMiscs_C_Get_ItemTypeLabel_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.GetVisibility_2
struct UWidget_MaterialsQuestsMiscs_C_GetVisibility_2_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.GetVisibility_1
struct UWidget_MaterialsQuestsMiscs_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.ShowQuickSelect
struct UWidget_MaterialsQuestsMiscs_C_ShowQuickSelect_Params
{
	struct FName*                                      Radial;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.DoQuickSelect
struct UWidget_MaterialsQuestsMiscs_C_DoQuickSelect_Params
{
};

// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.Get_Scrap_Text_1
struct UWidget_MaterialsQuestsMiscs_C_Get_Scrap_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.Refresh
struct UWidget_MaterialsQuestsMiscs_C_Refresh_Params
{
};

// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.Construct
struct UWidget_MaterialsQuestsMiscs_C_Construct_Params
{
};

// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.OnInventoryChanged_Event_1
struct UWidget_MaterialsQuestsMiscs_C_OnInventoryChanged_Event_1_Params
{
};

// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.OnTabFocus_Event_1
struct UWidget_MaterialsQuestsMiscs_C_OnTabFocus_Event_1_Params
{
	class UWidget_InventoryTab_C**                     Tab;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.BndEvt__QuickSelect_K2Node_ComponentBoundEvent_149_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_MaterialsQuestsMiscs_C_BndEvt__QuickSelect_K2Node_ComponentBoundEvent_149_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_MaterialsQuestsMiscs_C_BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.BndEvt__AdvancedStatsBtn_K2Node_ComponentBoundEvent_16_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_MaterialsQuestsMiscs_C_BndEvt__AdvancedStatsBtn_K2Node_ComponentBoundEvent_16_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.BndEvt__InventoryList_K2Node_ComponentBoundEvent_0_OnSelectItem__DelegateSignature
struct UWidget_MaterialsQuestsMiscs_C_BndEvt__InventoryList_K2Node_ComponentBoundEvent_0_OnSelectItem__DelegateSignature_Params
{
	int*                                               ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInspectInfo*                               InspectInfo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              Comparing;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FInspectInfo*                               InspectInfoCompare;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              ShowIngredients;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRecipeInfo*                                Recipe;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UClass**                                     ItemBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.BndEvt__UseItem_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_MaterialsQuestsMiscs_C_BndEvt__UseItem_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.BndEvt__InventoryList_K2Node_ComponentBoundEvent_2_OnItemClicked__DelegateSignature
struct UWidget_MaterialsQuestsMiscs_C_BndEvt__InventoryList_K2Node_ComponentBoundEvent_2_OnItemClicked__DelegateSignature_Params
{
	int*                                               ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.RefocusList
struct UWidget_MaterialsQuestsMiscs_C_RefocusList_Params
{
};

// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.OnSelectItem_Event
struct UWidget_MaterialsQuestsMiscs_C_OnSelectItem_Event_Params
{
	int*                                               ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInspectInfo*                               InspectInfo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              Comparing;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FInspectInfo*                               InspectInfoCompare;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              ShowIngredients;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRecipeInfo*                                Recipe;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UClass**                                     ItemBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.OnDialogResult_Event_1
struct UWidget_MaterialsQuestsMiscs_C_OnDialogResult_Event_1_Params
{
	struct FName*                                      Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.ExecuteUbergraph_Widget_MaterialsQuestsMiscs
struct UWidget_MaterialsQuestsMiscs_C_ExecuteUbergraph_Widget_MaterialsQuestsMiscs_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C.AdvancedStats__DelegateSignature
struct UWidget_MaterialsQuestsMiscs_C_AdvancedStats__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
