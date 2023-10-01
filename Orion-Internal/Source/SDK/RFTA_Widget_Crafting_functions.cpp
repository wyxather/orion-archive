// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Crafting_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Crafting.Widget_Crafting_C.GetItemLevelFromRecipe
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCraftingRecipe_Base**   Recipe                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ItemLevel                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Crafting_C::GetItemLevelFromRecipe(class UCraftingRecipe_Base** Recipe, int* ItemLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Crafting.Widget_Crafting_C.GetItemLevelFromRecipe");

	UWidget_Crafting_C_GetItemLevelFromRecipe_Params params;
	params.Recipe = Recipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemLevel != nullptr)
		*ItemLevel = params.ItemLevel;
}


// Function Widget_Crafting.Widget_Crafting_C.GetItemFromRecipe
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCraftingRecipe_Base**   Recipe                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  Item                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Crafting_C::GetItemFromRecipe(class UCraftingRecipe_Base** Recipe, class UClass** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Crafting.Widget_Crafting_C.GetItemFromRecipe");

	UWidget_Crafting_C_GetItemFromRecipe_Params params;
	params.Recipe = Recipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
}


// Function Widget_Crafting.Widget_Crafting_C.MarkCraftIngredientsForRemoval
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRecipeInfo*            Recipe                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_Crafting_C::MarkCraftIngredientsForRemoval(struct FRecipeInfo* Recipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Crafting.Widget_Crafting_C.MarkCraftIngredientsForRemoval");

	UWidget_Crafting_C_MarkCraftIngredientsForRemoval_Params params;
	params.Recipe = Recipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Crafting.Widget_Crafting_C.UpdateItemInfo
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_Crafting_C::UpdateItemInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Crafting.Widget_Crafting_C.UpdateItemInfo");

	UWidget_Crafting_C_UpdateItemInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Crafting.Widget_Crafting_C.Get_RecipeInfo_Visibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_Crafting_C::Get_RecipeInfo_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Crafting.Widget_Crafting_C.Get_RecipeInfo_Visibility_1");

	UWidget_Crafting_C_Get_RecipeInfo_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Crafting.Widget_Crafting_C.Spacer_Visibility_Smaller
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_Crafting_C::Spacer_Visibility_Smaller()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Crafting.Widget_Crafting_C.Spacer_Visibility_Smaller");

	UWidget_Crafting_C_Spacer_Visibility_Smaller_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Crafting.Widget_Crafting_C.Spacer_Visibility_Larger
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_Crafting_C::Spacer_Visibility_Larger()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Crafting.Widget_Crafting_C.Spacer_Visibility_Larger");

	UWidget_Crafting_C_Spacer_Visibility_Larger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Crafting.Widget_Crafting_C.GetVisibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_Crafting_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Crafting.Widget_Crafting_C.GetVisibility_1");

	UWidget_Crafting_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Crafting.Widget_Crafting_C.FocusFirstVisibleTab
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Crafting_C::FocusFirstVisibleTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Crafting.Widget_Crafting_C.FocusFirstVisibleTab");

	UWidget_Crafting_C_FocusFirstVisibleTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Crafting.Widget_Crafting_C.SetTabVisibility
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                TabPanel                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                          Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_Crafting_C::SetTabVisibility(class UWidget** TabPanel, bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Crafting.Widget_Crafting_C.SetTabVisibility");

	UWidget_Crafting_C_SetTabVisibility_Params params;
	params.TabPanel = TabPanel;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Crafting.Widget_Crafting_C.SetRecipeList
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_RecipeList_C**   List                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Crafting_C::SetRecipeList(class UWidget_RecipeList_C** List)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Crafting.Widget_Crafting_C.SetRecipeList");

	UWidget_Crafting_C_SetRecipeList_Params params;
	params.List = List;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Crafting.Widget_Crafting_C.Get_Craft_bIsEnabled_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWidget_Crafting_C::Get_Craft_bIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Crafting.Widget_Crafting_C.Get_Craft_bIsEnabled_1");

	UWidget_Crafting_C_Get_Craft_bIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Crafting.Widget_Crafting_C.SetContext
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Crafting_C::SetContext(class AActor** Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Crafting.Widget_Crafting_C.SetContext");

	UWidget_Crafting_C_SetContext_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Crafting.Widget_Crafting_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_Crafting_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Crafting.Widget_Crafting_C.Construct");

	UWidget_Crafting_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Crafting.Widget_Crafting_C.OnSelectRecipe_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRecipeInfo*            Recipe                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWidget_Recipe_C**       RecipeWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Crafting_C::OnSelectRecipe_Event_1(struct FRecipeInfo* Recipe, class UWidget_Recipe_C** RecipeWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Crafting.Widget_Crafting_C.OnSelectRecipe_Event_1");

	UWidget_Crafting_C_OnSelectRecipe_Event_1_Params params;
	params.Recipe = Recipe;
	params.RecipeWidget = RecipeWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Crafting.Widget_Crafting_C.OnTabFocused_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Tab                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget**                Panel                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Crafting_C::OnTabFocused_Event_1(class UWidget** Tab, class UWidget** Panel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Crafting.Widget_Crafting_C.OnTabFocused_Event_1");

	UWidget_Crafting_C_OnTabFocused_Event_1_Params params;
	params.Tab = Tab;
	params.Panel = Panel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Crafting.Widget_Crafting_C.BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Crafting_C::BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Crafting.Widget_Crafting_C.BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Crafting_C_BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Crafting.Widget_Crafting_C.OnClearRecipes
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_Crafting_C::OnClearRecipes()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Crafting.Widget_Crafting_C.OnClearRecipes");

	UWidget_Crafting_C_OnClearRecipes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Crafting.Widget_Crafting_C.OnCraft
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRecipeInfo*            Recipe                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_Crafting_C::OnCraft(struct FRecipeInfo* Recipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Crafting.Widget_Crafting_C.OnCraft");

	UWidget_Crafting_C_OnCraft_Params params;
	params.Recipe = Recipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Crafting.Widget_Crafting_C.BndEvt__HoldtoCraft_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Crafting_C::BndEvt__HoldtoCraft_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Crafting.Widget_Crafting_C.BndEvt__HoldtoCraft_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Crafting_C_BndEvt__HoldtoCraft_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Crafting.Widget_Crafting_C.OnDialogResult_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Crafting_C::OnDialogResult_Event_1(struct FName* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Crafting.Widget_Crafting_C.OnDialogResult_Event_1");

	UWidget_Crafting_C_OnDialogResult_Event_1_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Crafting.Widget_Crafting_C.OnInventoryChanged_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_Crafting_C::OnInventoryChanged_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Crafting.Widget_Crafting_C.OnInventoryChanged_Event_1");

	UWidget_Crafting_C_OnInventoryChanged_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Crafting.Widget_Crafting_C.ExecuteUbergraph_Widget_Crafting
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Crafting_C::ExecuteUbergraph_Widget_Crafting(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Crafting.Widget_Crafting_C.ExecuteUbergraph_Widget_Crafting");

	UWidget_Crafting_C_ExecuteUbergraph_Widget_Crafting_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
