#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_InventoryList_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_InventoryList.Widget_InventoryList_C.ItemHasDoNotSellTag
struct UWidget_InventoryList_C_ItemHasDoNotSellTag_Params
{
	class AItem**                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasTag;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_InventoryList.Widget_InventoryList_C.GetSortMethod
struct UWidget_InventoryList_C_GetSortMethod_Params
{
	EItemQuerySortMethod                               SortMethod;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryList.Widget_InventoryList_C.UpdateInventoryIndex
struct UWidget_InventoryList_C_UpdateInventoryIndex_Params
{
};

// Function Widget_InventoryList.Widget_InventoryList_C.GetInventoryOwner
struct UWidget_InventoryList_C_GetInventoryOwner_Params
{
	class AActor*                                      Actor;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryList.Widget_InventoryList_C.SetInventoryOwner
struct UWidget_InventoryList_C_SetInventoryOwner_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryList.Widget_InventoryList_C.GetQueryFilter
struct UWidget_InventoryList_C_GetQueryFilter_Params
{
	struct FItemQueryFilter                            Filter;                                                   // (Parm, OutParm)
};

// Function Widget_InventoryList.Widget_InventoryList_C.GetEmptyVisibility_2
struct UWidget_InventoryList_C_GetEmptyVisibility_2_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryList.Widget_InventoryList_C.GetEmptyVisibility_1
struct UWidget_InventoryList_C_GetEmptyVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryList.Widget_InventoryList_C.IsEmptyMerchantList
struct UWidget_InventoryList_C_IsEmptyMerchantList_Params
{
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_InventoryList.Widget_InventoryList_C.GetPlayerInventory
struct UWidget_InventoryList_C_GetPlayerInventory_Params
{
	class UInventoryComponent*                         Inventory;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryList.Widget_InventoryList_C.IsItemAtMaxStack
struct UWidget_InventoryList_C_IsItemAtMaxStack_Params
{
	class UClass**                                     ItemBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_InventoryList.Widget_InventoryList_C.SetBackgroundGridFadedSlotsSize
struct UWidget_InventoryList_C_SetBackgroundGridFadedSlotsSize_Params
{
};

// Function Widget_InventoryList.Widget_InventoryList_C.ScreenSizeResolutionCalculation
struct UWidget_InventoryList_C_ScreenSizeResolutionCalculation_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryList.Widget_InventoryList_C.GetEquippedItem
struct UWidget_InventoryList_C_GetEquippedItem_Params
{
	class AEquipment*                                  Equipment;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryList.Widget_InventoryList_C.SetEnabled
struct UWidget_InventoryList_C_SetEnabled_Params
{
	bool*                                              Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_InventoryList.Widget_InventoryList_C.FocusFirstInventoryItem
struct UWidget_InventoryList_C_FocusFirstInventoryItem_Params
{
};

// Function Widget_InventoryList.Widget_InventoryList_C.GetVisibility_1
struct UWidget_InventoryList_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryList.Widget_InventoryList_C.SetEquippedItem
struct UWidget_InventoryList_C_SetEquippedItem_Params
{
	bool*                                              Valid;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FInspectInfo*                               InspectInfo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              FocusEquipped;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_InventoryList.Widget_InventoryList_C.HasEquippedItem
struct UWidget_InventoryList_C_HasEquippedItem_Params
{
	int*                                               ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_InventoryList.Widget_InventoryList_C.BuildUpdateEquippedItem
struct UWidget_InventoryList_C_BuildUpdateEquippedItem_Params
{
};

// Function Widget_InventoryList.Widget_InventoryList_C.ShouldHideItem
struct UWidget_InventoryList_C_ShouldHideItem_Params
{
	int*                                               ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventoryComponent**                        Inventory;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_InventoryList.Widget_InventoryList_C.SetPanelPadding
struct UWidget_InventoryList_C_SetPanelPadding_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryList.Widget_InventoryList_C.GetPanelWidget
struct UWidget_InventoryList_C_GetPanelWidget_Params
{
	class UPanelWidget*                                Out;                                                      // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryList.Widget_InventoryList_C.GetInventoryItemByID
struct UWidget_InventoryList_C_GetInventoryItemByID_Params
{
	int*                                               ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget_InventoryItem_C*                     Out;                                                      // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryList.Widget_InventoryList_C.GetVisibility_4Item
struct UWidget_InventoryList_C_GetVisibility_4Item_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryList.Widget_InventoryList_C.GetVisibility_3Item
struct UWidget_InventoryList_C_GetVisibility_3Item_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryList.Widget_InventoryList_C.PlayerHasItem
struct UWidget_InventoryList_C_PlayerHasItem_Params
{
	class UClass**                                     ItemBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_InventoryList.Widget_InventoryList_C.IsItemUnique
struct UWidget_InventoryList_C_IsItemUnique_Params
{
	class UClass**                                     ItemBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_InventoryList.Widget_InventoryList_C.ShouldAddItem
struct UWidget_InventoryList_C_ShouldAddItem_Params
{
	struct FInventoryItem*                             InventoryItem;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	bool                                               Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_InventoryList.Widget_InventoryList_C.GetVisibility_2Item
struct UWidget_InventoryList_C_GetVisibility_2Item_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryList.Widget_InventoryList_C.GetVisibility_1Item
struct UWidget_InventoryList_C_GetVisibility_1Item_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryList.Widget_InventoryList_C.GetVisibility_Empty
struct UWidget_InventoryList_C_GetVisibility_Empty_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryList.Widget_InventoryList_C.SetItemType
struct UWidget_InventoryList_C_SetItemType_Params
{
	class UClass**                                     Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass**                                     Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              FocusEquippedItem;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName*                                      EquipSlotName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryList.Widget_InventoryList_C.FocusItem
struct UWidget_InventoryList_C_FocusItem_Params
{
	int*                                               ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              InactiveFocus;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_InventoryList.Widget_InventoryList_C.ShowInactiveFocus
struct UWidget_InventoryList_C_ShowInactiveFocus_Params
{
	bool*                                              Allow;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_InventoryList.Widget_InventoryList_C.IsEmpty
struct UWidget_InventoryList_C_IsEmpty_Params
{
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_InventoryList.Widget_InventoryList_C.AddInventoryItem
struct UWidget_InventoryList_C_AddInventoryItem_Params
{
	struct FInventoryItem                              Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	class UInventoryComponent**                        Inventory;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               ItemIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryList.Widget_InventoryList_C.HasInventoryItem
struct UWidget_InventoryList_C_HasInventoryItem_Params
{
	int*                                               ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventoryComponent**                        Inventory;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UWidget_InventoryItem_C*                     InventoryItem;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryList.Widget_InventoryList_C.UpdateInventoryList
struct UWidget_InventoryList_C_UpdateInventoryList_Params
{
};

// Function Widget_InventoryList.Widget_InventoryList_C.Focus
struct UWidget_InventoryList_C_Focus_Params
{
};

// Function Widget_InventoryList.Widget_InventoryList_C.BuildInventoryList
struct UWidget_InventoryList_C_BuildInventoryList_Params
{
};

// Function Widget_InventoryList.Widget_InventoryList_C.Construct
struct UWidget_InventoryList_C_Construct_Params
{
};

// Function Widget_InventoryList.Widget_InventoryList_C.OnSetInventory
struct UWidget_InventoryList_C_OnSetInventory_Params
{
	TArray<class UInventoryComponent*>*                NewInventories;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Widget_InventoryList.Widget_InventoryList_C.OnInventoryChanged
struct UWidget_InventoryList_C_OnInventoryChanged_Params
{
};

// Function Widget_InventoryList.Widget_InventoryList_C.ReFocus
struct UWidget_InventoryList_C_ReFocus_Params
{
	int*                                               ItemIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryList.Widget_InventoryList_C.FocusFistAvailableEvent
struct UWidget_InventoryList_C_FocusFistAvailableEvent_Params
{
};

// Function Widget_InventoryList.Widget_InventoryList_C.ResetScrollOffset
struct UWidget_InventoryList_C_ResetScrollOffset_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryList.Widget_InventoryList_C.OnItemSelected
struct UWidget_InventoryList_C_OnItemSelected_Params
{
	int*                                               ItemIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryList.Widget_InventoryList_C.ExecuteUbergraph_Widget_InventoryList
struct UWidget_InventoryList_C_ExecuteUbergraph_Widget_InventoryList_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryList.Widget_InventoryList_C.OnInventoryUpdate__DelegateSignature
struct UWidget_InventoryList_C_OnInventoryUpdate__DelegateSignature_Params
{
};

// Function Widget_InventoryList.Widget_InventoryList_C.OnUpdateCustomEquipment__DelegateSignature
struct UWidget_InventoryList_C_OnUpdateCustomEquipment__DelegateSignature_Params
{
};

// Function Widget_InventoryList.Widget_InventoryList_C.OnRightClickEquipMod__DelegateSignature
struct UWidget_InventoryList_C_OnRightClickEquipMod__DelegateSignature_Params
{
};

// Function Widget_InventoryList.Widget_InventoryList_C.OnItemAction__DelegateSignature
struct UWidget_InventoryList_C_OnItemAction__DelegateSignature_Params
{
	TEnumAsByte<EInventoryAction>*                     Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int*                                               ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryList.Widget_InventoryList_C.OnItemClicked__DelegateSignature
struct UWidget_InventoryList_C_OnItemClicked__DelegateSignature_Params
{
	int*                                               ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_InventoryList.Widget_InventoryList_C.OnSelectItem__DelegateSignature
struct UWidget_InventoryList_C_OnSelectItem__DelegateSignature_Params
{
	int*                                               ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInspectInfo*                               InspectInfo;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              Comparing;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FInspectInfo*                               InspectInfoCompare;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              ShowIngredients;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRecipeInfo*                                Recipe;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UClass**                                     ItemBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
