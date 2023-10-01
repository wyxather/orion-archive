#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_InventoryItem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_InventoryItem.Widget_InventoryItem_C.CheckEntitlement
struct UWidget_InventoryItem_C_CheckEntitlement_Params
{
	int*                                               ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              NotifyOnNoEntitlement;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsEntitled;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_InventoryItem.Widget_InventoryItem_C.HasMaxQuantity
struct UWidget_InventoryItem_C_HasMaxQuantity_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_InventoryItem.Widget_InventoryItem_C.GetModifiedPurchaseLevel
struct UWidget_InventoryItem_C_GetModifiedPurchaseLevel_Params
{
	class AActor**                                     InspectActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventoryComponent**                        Inventory;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Level;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryItem.Widget_InventoryItem_C.MarkUpgradeIngredientsForRemoval
struct UWidget_InventoryItem_C_MarkUpgradeIngredientsForRemoval_Params
{
	struct FRecipeInfo*                                Recipe;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_InventoryItem.Widget_InventoryItem_C.IsRadialSlotted
struct UWidget_InventoryItem_C_IsRadialSlotted_Params
{
	int*                                               ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_InventoryItem.Widget_InventoryItem_C.CacheRecipe
struct UWidget_InventoryItem_C_CacheRecipe_Params
{
	struct FRecipeInfo                                 Recipe;                                                   // (Parm, OutParm)
};

// Function Widget_InventoryItem.Widget_InventoryItem_C.Get_OverlayIcon_ColorAndOpacity_1
struct UWidget_InventoryItem_C_Get_OverlayIcon_ColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryItem.Widget_InventoryItem_C.GetInspectInfo
struct UWidget_InventoryItem_C_GetInspectInfo_Params
{
	struct FInspectInfo                                InspectInfo;                                              // (Parm, OutParm)
};

// Function Widget_InventoryItem.Widget_InventoryItem_C.SetInspectInfo
struct UWidget_InventoryItem_C_SetInspectInfo_Params
{
	struct FInspectInfo*                               InspectInfo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_InventoryItem.Widget_InventoryItem_C.Get_Border_4_BrushColor_1
struct UWidget_InventoryItem_C_Get_Border_4_BrushColor_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryItem.Widget_InventoryItem_C.GetCost
struct UWidget_InventoryItem_C_GetCost_Params
{
	int                                                Cost;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryItem.Widget_InventoryItem_C.GetPrimaryStat
struct UWidget_InventoryItem_C_GetPrimaryStat_Params
{
	struct FInspectInfo*                               InspectInfo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FInspectStat                                InspectStat;                                              // (Parm, OutParm)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_InventoryItem.Widget_InventoryItem_C.UpgradeLevelColor
struct UWidget_InventoryItem_C_UpgradeLevelColor_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_InventoryItem.Widget_InventoryItem_C.Get_Cost_ColorAndOpacity_1
struct UWidget_InventoryItem_C_Get_Cost_ColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_InventoryItem.Widget_InventoryItem_C.GetEquippedVisibility
struct UWidget_InventoryItem_C_GetEquippedVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryItem.Widget_InventoryItem_C.Action Panel Visibility
struct UWidget_InventoryItem_C_Action_Panel_Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryItem.Widget_InventoryItem_C.GetVisibility_2
struct UWidget_InventoryItem_C_GetVisibility_2_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryItem.Widget_InventoryItem_C.PlayEquipedSound
struct UWidget_InventoryItem_C_PlayEquipedSound_Params
{
};

// Function Widget_InventoryItem.Widget_InventoryItem_C.ShouldRemoveUniqueItem
struct UWidget_InventoryItem_C_ShouldRemoveUniqueItem_Params
{
	class UClass**                                     ItemBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_InventoryItem.Widget_InventoryItem_C.PlayerHasItem
struct UWidget_InventoryItem_C_PlayerHasItem_Params
{
	class UClass**                                     ItemBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_InventoryItem.Widget_InventoryItem_C.IsUnique
struct UWidget_InventoryItem_C_IsUnique_Params
{
	class UClass**                                     ItemBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_InventoryItem.Widget_InventoryItem_C.GetRecipeCost
struct UWidget_InventoryItem_C_GetRecipeCost_Params
{
	struct FRecipeInfo*                                RecipeInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Cost;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryItem.Widget_InventoryItem_C.SelectItem
struct UWidget_InventoryItem_C_SelectItem_Params
{
};

// Function Widget_InventoryItem.Widget_InventoryItem_C.Get_CostPanel_Visibility_1
struct UWidget_InventoryItem_C_Get_CostPanel_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryItem.Widget_InventoryItem_C.RefreshAction
struct UWidget_InventoryItem_C_RefreshAction_Params
{
};

// Function Widget_InventoryItem.Widget_InventoryItem_C.ValidateAction
struct UWidget_InventoryItem_C_ValidateAction_Params
{
	bool                                               Visible;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Valid;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       Label;                                                    // (Parm, OutParm)
	int                                                Cost;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryItem.Widget_InventoryItem_C.DoAction
struct UWidget_InventoryItem_C_DoAction_Params
{
	bool                                               Handled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_InventoryItem.Widget_InventoryItem_C.CacheInfo
struct UWidget_InventoryItem_C_CacheInfo_Params
{
};

// Function Widget_InventoryItem.Widget_InventoryItem_C.GetFillUpBarVisibility
struct UWidget_InventoryItem_C_GetFillUpBarVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryItem.Widget_InventoryItem_C.GetCachedInventory
struct UWidget_InventoryItem_C_GetCachedInventory_Params
{
	class UInventoryComponent*                         Inventory;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryItem.Widget_InventoryItem_C.GetInventoryItem
struct UWidget_InventoryItem_C_GetInventoryItem_Params
{
	struct FInventoryItem                              Item;                                                     // (Parm, OutParm, NoDestructor, ContainsInstancedReference)
};

// Function Widget_InventoryItem.Widget_InventoryItem_C.DoUpgrade
struct UWidget_InventoryItem_C_DoUpgrade_Params
{
};

// Function Widget_InventoryItem.Widget_InventoryItem_C.OnUpgradeResult
struct UWidget_InventoryItem_C_OnUpgradeResult_Params
{
	struct FName*                                      Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryItem.Widget_InventoryItem_C.OnBuyResult
struct UWidget_InventoryItem_C_OnBuyResult_Params
{
	struct FName*                                      Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryItem.Widget_InventoryItem_C.Construct
struct UWidget_InventoryItem_C_Construct_Params
{
};

// Function Widget_InventoryItem.Widget_InventoryItem_C.OnFocus_Event_1
struct UWidget_InventoryItem_C_OnFocus_Event_1_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryItem.Widget_InventoryItem_C.OnAdded
struct UWidget_InventoryItem_C_OnAdded_Params
{
};

// Function Widget_InventoryItem.Widget_InventoryItem_C.OnInventoryChanged
struct UWidget_InventoryItem_C_OnInventoryChanged_Params
{
};

// Function Widget_InventoryItem.Widget_InventoryItem_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_92_OnAdvButtonPressedEvent__DelegateSignature
struct UWidget_InventoryItem_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_92_OnAdvButtonPressedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryItem.Widget_InventoryItem_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_1278_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_InventoryItem_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_1278_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryItem.Widget_InventoryItem_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_1315_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_InventoryItem_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_1315_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryItem.Widget_InventoryItem_C.BndEvt__HoldButton_K2Node_ComponentBoundEvent_1388_OnPressAndHold__DelegateSignature
struct UWidget_InventoryItem_C_BndEvt__HoldButton_K2Node_ComponentBoundEvent_1388_OnPressAndHold__DelegateSignature_Params
{
	bool*                                              Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float*                                             CompletionPct;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryItem.Widget_InventoryItem_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_528_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_InventoryItem_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_528_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryItem.Widget_InventoryItem_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_InventoryItem_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryItem.Widget_InventoryItem_C.RemoveOnQuantityZero
struct UWidget_InventoryItem_C_RemoveOnQuantityZero_Params
{
};

// Function Widget_InventoryItem.Widget_InventoryItem_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_InventoryItem_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryItem.Widget_InventoryItem_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_InventoryItem_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryItem.Widget_InventoryItem_C.SimulateAction
struct UWidget_InventoryItem_C_SimulateAction_Params
{
};

// Function Widget_InventoryItem.Widget_InventoryItem_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_InventoryItem_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryItem.Widget_InventoryItem_C.Refresh
struct UWidget_InventoryItem_C_Refresh_Params
{
};

// Function Widget_InventoryItem.Widget_InventoryItem_C.ExecuteUbergraph_Widget_InventoryItem
struct UWidget_InventoryItem_C_ExecuteUbergraph_Widget_InventoryItem_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryItem.Widget_InventoryItem_C.OnItemSelected__DelegateSignature
struct UWidget_InventoryItem_C_OnItemSelected__DelegateSignature_Params
{
	int*                                               ItemIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryItem.Widget_InventoryItem_C.OnItemAction__DelegateSignature
struct UWidget_InventoryItem_C_OnItemAction__DelegateSignature_Params
{
	int*                                               ItemIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
