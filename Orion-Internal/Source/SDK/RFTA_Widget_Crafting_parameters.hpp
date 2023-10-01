#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Crafting_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_Crafting.Widget_Crafting_C.GetItemLevelFromRecipe
struct UWidget_Crafting_C_GetItemLevelFromRecipe_Params
{
	class UCraftingRecipe_Base**                       Recipe;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ItemLevel;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Crafting.Widget_Crafting_C.GetItemFromRecipe
struct UWidget_Crafting_C_GetItemFromRecipe_Params
{
	class UCraftingRecipe_Base**                       Recipe;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      Item;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Crafting.Widget_Crafting_C.MarkCraftIngredientsForRemoval
struct UWidget_Crafting_C_MarkCraftIngredientsForRemoval_Params
{
	struct FRecipeInfo*                                Recipe;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_Crafting.Widget_Crafting_C.UpdateItemInfo
struct UWidget_Crafting_C_UpdateItemInfo_Params
{
};

// Function Widget_Crafting.Widget_Crafting_C.Get_RecipeInfo_Visibility_1
struct UWidget_Crafting_C_Get_RecipeInfo_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Crafting.Widget_Crafting_C.Spacer_Visibility_Smaller
struct UWidget_Crafting_C_Spacer_Visibility_Smaller_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Crafting.Widget_Crafting_C.Spacer_Visibility_Larger
struct UWidget_Crafting_C_Spacer_Visibility_Larger_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Crafting.Widget_Crafting_C.GetVisibility_1
struct UWidget_Crafting_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Crafting.Widget_Crafting_C.FocusFirstVisibleTab
struct UWidget_Crafting_C_FocusFirstVisibleTab_Params
{
};

// Function Widget_Crafting.Widget_Crafting_C.SetTabVisibility
struct UWidget_Crafting_C_SetTabVisibility_Params
{
	class UWidget**                                    TabPanel;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_Crafting.Widget_Crafting_C.SetRecipeList
struct UWidget_Crafting_C_SetRecipeList_Params
{
	class UWidget_RecipeList_C**                       List;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Crafting.Widget_Crafting_C.Get_Craft_bIsEnabled_1
struct UWidget_Crafting_C_Get_Craft_bIsEnabled_1_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Widget_Crafting.Widget_Crafting_C.SetContext
struct UWidget_Crafting_C_SetContext_Params
{
	class AActor**                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Crafting.Widget_Crafting_C.Construct
struct UWidget_Crafting_C_Construct_Params
{
};

// Function Widget_Crafting.Widget_Crafting_C.OnSelectRecipe_Event_1
struct UWidget_Crafting_C_OnSelectRecipe_Event_1_Params
{
	struct FRecipeInfo*                                Recipe;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UWidget_Recipe_C**                           RecipeWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Crafting.Widget_Crafting_C.OnTabFocused_Event_1
struct UWidget_Crafting_C_OnTabFocused_Event_1_Params
{
	class UWidget**                                    Tab;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget**                                    Panel;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Crafting.Widget_Crafting_C.BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Crafting_C_BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Crafting.Widget_Crafting_C.OnClearRecipes
struct UWidget_Crafting_C_OnClearRecipes_Params
{
};

// Function Widget_Crafting.Widget_Crafting_C.OnCraft
struct UWidget_Crafting_C_OnCraft_Params
{
	struct FRecipeInfo*                                Recipe;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_Crafting.Widget_Crafting_C.BndEvt__HoldtoCraft_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Crafting_C_BndEvt__HoldtoCraft_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Crafting.Widget_Crafting_C.OnDialogResult_Event_1
struct UWidget_Crafting_C_OnDialogResult_Event_1_Params
{
	struct FName*                                      Result;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Crafting.Widget_Crafting_C.OnInventoryChanged_Event_1
struct UWidget_Crafting_C_OnInventoryChanged_Event_1_Params
{
};

// Function Widget_Crafting.Widget_Crafting_C.ExecuteUbergraph_Widget_Crafting
struct UWidget_Crafting_C_ExecuteUbergraph_Widget_Crafting_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
