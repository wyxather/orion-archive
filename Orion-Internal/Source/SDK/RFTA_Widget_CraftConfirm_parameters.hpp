#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_CraftConfirm_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_CraftConfirm.Widget_CraftConfirm_C.GetItemLevelFromRecipe
struct UWidget_CraftConfirm_C_GetItemLevelFromRecipe_Params
{
	class UCraftingRecipe_Base**                       Recipe;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ItemLevel;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_CraftConfirm.Widget_CraftConfirm_C.GetItemFromRecipe
struct UWidget_CraftConfirm_C_GetItemFromRecipe_Params
{
	class UCraftingRecipe_Base**                       Recipe;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      Item;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_CraftConfirm.Widget_CraftConfirm_C.Init
struct UWidget_CraftConfirm_C_Init_Params
{
	struct FRecipeInfo*                                RecipeInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Widget_CraftConfirm.Widget_CraftConfirm_C.BndEvt__Yes_K2Node_ComponentBoundEvent_154_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_CraftConfirm_C_BndEvt__Yes_K2Node_ComponentBoundEvent_154_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_CraftConfirm.Widget_CraftConfirm_C.BndEvt__No_K2Node_ComponentBoundEvent_240_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_CraftConfirm_C_BndEvt__No_K2Node_ComponentBoundEvent_240_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_CraftConfirm.Widget_CraftConfirm_C.Construct
struct UWidget_CraftConfirm_C_Construct_Params
{
};

// Function Widget_CraftConfirm.Widget_CraftConfirm_C.BndEvt__Cancel2_K2Node_ComponentBoundEvent_69_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_CraftConfirm_C_BndEvt__Cancel2_K2Node_ComponentBoundEvent_69_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_CraftConfirm.Widget_CraftConfirm_C.BndEvt__Ok_K2Node_ComponentBoundEvent_416_OnAdvButtonClickedEvent__DelegateSignature
struct UWidget_CraftConfirm_C_BndEvt__Ok_K2Node_ComponentBoundEvent_416_OnAdvButtonClickedEvent__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Widget_CraftConfirm.Widget_CraftConfirm_C.ExecuteUbergraph_Widget_CraftConfirm
struct UWidget_CraftConfirm_C_ExecuteUbergraph_Widget_CraftConfirm_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
