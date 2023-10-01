#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_RecipeList_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_RecipeList.Widget_RecipeList_C.GetItemFromRecipe
struct UWidget_RecipeList_C_GetItemFromRecipe_Params
{
	class UCraftingRecipe_Base**                       Recipe;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      Item;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_RecipeList.Widget_RecipeList_C.GetVisibility_1
struct UWidget_RecipeList_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_RecipeList.Widget_RecipeList_C.4_Itemlist
struct UWidget_RecipeList_C__4_Itemlist_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_RecipeList.Widget_RecipeList_C.3_Itemlist
struct UWidget_RecipeList_C__3_Itemlist_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_RecipeList.Widget_RecipeList_C.2_Itemlist
struct UWidget_RecipeList_C__2_Itemlist_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_RecipeList.Widget_RecipeList_C.1_Itemlist
struct UWidget_RecipeList_C__1_Itemlist_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_RecipeList.Widget_RecipeList_C.0_ItemsList
struct UWidget_RecipeList_C__0_ItemsList_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_RecipeList.Widget_RecipeList_C.Get_EmptyVisibility
struct UWidget_RecipeList_C_Get_EmptyVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_RecipeList.Widget_RecipeList_C.SetContext
struct UWidget_RecipeList_C_SetContext_Params
{
	class AActor**                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_RecipeList.Widget_RecipeList_C.Refresh
struct UWidget_RecipeList_C_Refresh_Params
{
};

// Function Widget_RecipeList.Widget_RecipeList_C.IsEmpty
struct UWidget_RecipeList_C_IsEmpty_Params
{
	bool                                               Rtn;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Widget_RecipeList.Widget_RecipeList_C.AddRecipe
struct UWidget_RecipeList_C_AddRecipe_Params
{
	struct FRecipeInfo*                                Recipe;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_RecipeList.Widget_RecipeList_C.Focus
struct UWidget_RecipeList_C_Focus_Params
{
};

// Function Widget_RecipeList.Widget_RecipeList_C.BuildRecipeList
struct UWidget_RecipeList_C_BuildRecipeList_Params
{
};

// Function Widget_RecipeList.Widget_RecipeList_C.Construct
struct UWidget_RecipeList_C_Construct_Params
{
};

// Function Widget_RecipeList.Widget_RecipeList_C.SelectRecipeCallback
struct UWidget_RecipeList_C_SelectRecipeCallback_Params
{
	struct FRecipeInfo*                                Recipe;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UWidget_Recipe_C**                           RecipeWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_RecipeList.Widget_RecipeList_C.ClearRecipeCallback
struct UWidget_RecipeList_C_ClearRecipeCallback_Params
{
};

// Function Widget_RecipeList.Widget_RecipeList_C.AttemptedCraftCallback
struct UWidget_RecipeList_C_AttemptedCraftCallback_Params
{
	struct FRecipeInfo*                                Recipe;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_RecipeList.Widget_RecipeList_C.ExecuteUbergraph_Widget_RecipeList
struct UWidget_RecipeList_C_ExecuteUbergraph_Widget_RecipeList_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_RecipeList.Widget_RecipeList_C.OnAttemptedCraft__DelegateSignature
struct UWidget_RecipeList_C_OnAttemptedCraft__DelegateSignature_Params
{
	struct FRecipeInfo*                                Recipe;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_RecipeList.Widget_RecipeList_C.OnClearRecipes__DelegateSignature
struct UWidget_RecipeList_C_OnClearRecipes__DelegateSignature_Params
{
};

// Function Widget_RecipeList.Widget_RecipeList_C.OnRecipeClick__DelegateSignature
struct UWidget_RecipeList_C_OnRecipeClick__DelegateSignature_Params
{
	struct FRecipeInfo*                                Recipe;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_RecipeList.Widget_RecipeList_C.OnSelectRecipe__DelegateSignature
struct UWidget_RecipeList_C_OnSelectRecipe__DelegateSignature_Params
{
	struct FRecipeInfo*                                Recipe;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UWidget_Recipe_C**                           RecipeWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
