#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Recipe_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_Recipe.Widget_Recipe_C.GetItemLevelFromRecipe
struct UWidget_Recipe_C_GetItemLevelFromRecipe_Params
{
	class UCraftingRecipe_Base**                       Recipe;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ItemLevel;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Recipe.Widget_Recipe_C.GetItemFromRecipe
struct UWidget_Recipe_C_GetItemFromRecipe_Params
{
	class UCraftingRecipe_Base**                       Recipe;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      Item;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Recipe.Widget_Recipe_C.CheckEntitlement
struct UWidget_Recipe_C_CheckEntitlement_Params
{
	class UClass**                                     ItemBP;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              NotifyOnNoEntitlement;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsEntitled;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_Recipe.Widget_Recipe_C.Get_ValidOverlay_Visibility_1
struct UWidget_Recipe_C_Get_ValidOverlay_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Recipe.Widget_Recipe_C.Get_TextBlock_0_ColorAndOpacity_1
struct UWidget_Recipe_C_Get_TextBlock_0_ColorAndOpacity_1_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_Recipe.Widget_Recipe_C.Get_ItemName_Text_1
struct UWidget_Recipe_C_Get_ItemName_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_Recipe.Widget_Recipe_C.GetPercent_1
struct UWidget_Recipe_C_GetPercent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Recipe.Widget_Recipe_C.Get_Cost_Text_1
struct UWidget_Recipe_C_Get_Cost_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_Recipe.Widget_Recipe_C.GetCost
struct UWidget_Recipe_C_GetCost_Params
{
	int                                                Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Recipe.Widget_Recipe_C.Get_CostPanel_Visibility_1
struct UWidget_Recipe_C_Get_CostPanel_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Recipe.Widget_Recipe_C.Get_Selection_White_Stripe_Visibility
struct UWidget_Recipe_C_Get_Selection_White_Stripe_Visibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Recipe.Widget_Recipe_C.Get_ActionPanel_Visibility_1
struct UWidget_Recipe_C_Get_ActionPanel_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Recipe.Widget_Recipe_C.GetVisibility_1
struct UWidget_Recipe_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Recipe.Widget_Recipe_C.BuildStats
struct UWidget_Recipe_C_BuildStats_Params
{
};

// Function Widget_Recipe.Widget_Recipe_C.Refresh
struct UWidget_Recipe_C_Refresh_Params
{
};

// Function Widget_Recipe.Widget_Recipe_C.GetCraftingComponent
struct UWidget_Recipe_C_GetCraftingComponent_Params
{
	class UCraftingComponent*                          Component;                                                // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Recipe.Widget_Recipe_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_116_OnAdvButtonPressedEvent__DelegateSignature
struct UWidget_Recipe_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_116_OnAdvButtonPressedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Recipe.Widget_Recipe_C.Construct
struct UWidget_Recipe_C_Construct_Params
{
};

// Function Widget_Recipe.Widget_Recipe_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_94_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Recipe_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_94_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Recipe.Widget_Recipe_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_291_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Recipe_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_291_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Recipe.Widget_Recipe_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_260_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Recipe_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_260_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Recipe.Widget_Recipe_C.BndEvt__HoldButton_K2Node_ComponentBoundEvent_0_OnPressAndHold__DelegateSignature
struct UWidget_Recipe_C_BndEvt__HoldButton_K2Node_ComponentBoundEvent_0_OnPressAndHold__DelegateSignature_Params
{
	bool*                                              Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float*                                             CompletionPct;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Recipe.Widget_Recipe_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_141_OnAdvButtonReleasedEvent__DelegateSignature
struct UWidget_Recipe_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_141_OnAdvButtonReleasedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Recipe.Widget_Recipe_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Recipe_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Recipe.Widget_Recipe_C.SimulateDoAction
struct UWidget_Recipe_C_SimulateDoAction_Params
{
};

// Function Widget_Recipe.Widget_Recipe_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Recipe_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Recipe.Widget_Recipe_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Recipe_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Recipe.Widget_Recipe_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_4_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_Recipe_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_4_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Recipe.Widget_Recipe_C.ExecuteUbergraph_Widget_Recipe
struct UWidget_Recipe_C_ExecuteUbergraph_Widget_Recipe_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Recipe.Widget_Recipe_C.OnSelectRecipe__DelegateSignature
struct UWidget_Recipe_C_OnSelectRecipe__DelegateSignature_Params
{
	struct FRecipeInfo*                                Recipe;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UWidget_Recipe_C**                           RecipeWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_Recipe.Widget_Recipe_C.OnClearRecipe__DelegateSignature
struct UWidget_Recipe_C_OnClearRecipe__DelegateSignature_Params
{
};

// Function Widget_Recipe.Widget_Recipe_C.OnAttemptedCraft__DelegateSignature
struct UWidget_Recipe_C_OnAttemptedCraft__DelegateSignature_Params
{
	struct FRecipeInfo*                                Recipe;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
