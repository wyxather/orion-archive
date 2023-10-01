#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Inventory_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_Inventory.Widget_Inventory_C.DoSelectSkin
struct UWidget_Inventory_C_DoSelectSkin_Params
{
};

// Function Widget_Inventory.Widget_Inventory_C.Get_QuickSelect_Visibility_1
struct UWidget_Inventory_C_Get_QuickSelect_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Inventory.Widget_Inventory_C.SetAction
struct UWidget_Inventory_C_SetAction_Params
{
	int*                                               Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText*                                      ActionLabel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              Valid;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_Inventory.Widget_Inventory_C.FocusInventoryTab
struct UWidget_Inventory_C_FocusInventoryTab_Params
{
	class UWidget_EquipmentSlot_C**                    EquipmentSlot;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Inventory.Widget_Inventory_C.ParseEquipmentSlots
struct UWidget_Inventory_C_ParseEquipmentSlots_Params
{
	class UPanelWidget**                               Panel;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Inventory.Widget_Inventory_C.GetItemToCompare
struct UWidget_Inventory_C_GetItemToCompare_Params
{
	int                                                NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Inventory.Widget_Inventory_C.SetItemResumeInfo
struct UWidget_Inventory_C_SetItemResumeInfo_Params
{
	int*                                               InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Inventory.Widget_Inventory_C.CommandsVisibility
struct UWidget_Inventory_C_CommandsVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Inventory.Widget_Inventory_C.FindInfo
struct UWidget_Inventory_C_FindInfo_Params
{
	struct FInspectInfo*                               InspectInfo;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int*                                               InfoNumber;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInspectStat                                Array_Element;                                            // (Parm, OutParm)
};

// Function Widget_Inventory.Widget_Inventory_C.Get_ItemTypeLabel_Text_1
struct UWidget_Inventory_C_Get_ItemTypeLabel_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_Inventory.Widget_Inventory_C.GetVisibility_2
struct UWidget_Inventory_C_GetVisibility_2_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Inventory.Widget_Inventory_C.GetVisibility_1
struct UWidget_Inventory_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Inventory.Widget_Inventory_C.ShowQuickSelect
struct UWidget_Inventory_C_ShowQuickSelect_Params
{
	struct FName*                                      Radial;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Inventory.Widget_Inventory_C.DoQuickSelect
struct UWidget_Inventory_C_DoQuickSelect_Params
{
};

// Function Widget_Inventory.Widget_Inventory_C.Get_Scrap_Text_1
struct UWidget_Inventory_C_Get_Scrap_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_Inventory.Widget_Inventory_C.Refresh
struct UWidget_Inventory_C_Refresh_Params
{
	struct FInspectInfo*                               InspectInfo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              Comparing;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FInspectInfo*                               CompareInspectInfo;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_Inventory.Widget_Inventory_C.Construct
struct UWidget_Inventory_C_Construct_Params
{
};

// Function Widget_Inventory.Widget_Inventory_C.OnInventoryChanged_Event_1
struct UWidget_Inventory_C_OnInventoryChanged_Event_1_Params
{
};

// Function Widget_Inventory.Widget_Inventory_C.OnTabFocus_Event_1
struct UWidget_Inventory_C_OnTabFocus_Event_1_Params
{
	class UWidget_InventoryTab_C**                     Tab;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Inventory.Widget_Inventory_C.BndEvt__QuickSelect_K2Node_ComponentBoundEvent_149_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Inventory_C_BndEvt__QuickSelect_K2Node_ComponentBoundEvent_149_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Inventory.Widget_Inventory_C.BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Inventory_C_BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Inventory.Widget_Inventory_C.BndEvt__AdvancedStatsBtn_K2Node_ComponentBoundEvent_16_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Inventory_C_BndEvt__AdvancedStatsBtn_K2Node_ComponentBoundEvent_16_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Inventory.Widget_Inventory_C.BndEvt__EquipUnequip_K2Node_ComponentBoundEvent_34_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Inventory_C_BndEvt__EquipUnequip_K2Node_ComponentBoundEvent_34_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Inventory.Widget_Inventory_C.OnEquipmentFocused
struct UWidget_Inventory_C_OnEquipmentFocused_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Inventory.Widget_Inventory_C.OnEquipmentClicked
struct UWidget_Inventory_C_OnEquipmentClicked_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Inventory.Widget_Inventory_C.BndEvt__ItemInfo_K2Node_ComponentBoundEvent_1_OnSubAction__DelegateSignature
struct UWidget_Inventory_C_BndEvt__ItemInfo_K2Node_ComponentBoundEvent_1_OnSubAction__DelegateSignature_Params
{
	struct FText*                                      ActionLabel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_Inventory.Widget_Inventory_C.BndEvt__InventoryList_K2Node_ComponentBoundEvent_2_OnSelectItem__DelegateSignature
struct UWidget_Inventory_C_BndEvt__InventoryList_K2Node_ComponentBoundEvent_2_OnSelectItem__DelegateSignature_Params
{
	int*                                               ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInspectInfo*                               InspectInfo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              Comparing;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FInspectInfo*                               InspectInfoCompare;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              ShowIngredients;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRecipeInfo*                                Recipe;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UClass**                                     ItemBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Inventory.Widget_Inventory_C.BndEvt__ResumeInfo_K2Node_ComponentBoundEvent_3_OnSubAction__DelegateSignature
struct UWidget_Inventory_C_BndEvt__ResumeInfo_K2Node_ComponentBoundEvent_3_OnSubAction__DelegateSignature_Params
{
	struct FText*                                      ActionLabel;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_Inventory.Widget_Inventory_C.ExecuteUbergraph_Widget_Inventory
struct UWidget_Inventory_C_ExecuteUbergraph_Widget_Inventory_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Inventory.Widget_Inventory_C.AdvancedStats__DelegateSignature
struct UWidget_Inventory_C_AdvancedStats__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
