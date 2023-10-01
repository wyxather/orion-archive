// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Recipe_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Recipe.Widget_Recipe_C.GetItemLevelFromRecipe
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCraftingRecipe_Base**   Recipe                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ItemLevel                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Recipe_C::GetItemLevelFromRecipe(class UCraftingRecipe_Base** Recipe, int* ItemLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Recipe.Widget_Recipe_C.GetItemLevelFromRecipe");

	UWidget_Recipe_C_GetItemLevelFromRecipe_Params params;
	params.Recipe = Recipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemLevel != nullptr)
		*ItemLevel = params.ItemLevel;
}


// Function Widget_Recipe.Widget_Recipe_C.GetItemFromRecipe
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCraftingRecipe_Base**   Recipe                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  Item                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Recipe_C::GetItemFromRecipe(class UCraftingRecipe_Base** Recipe, class UClass** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Recipe.Widget_Recipe_C.GetItemFromRecipe");

	UWidget_Recipe_C_GetItemFromRecipe_Params params;
	params.Recipe = Recipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
}


// Function Widget_Recipe.Widget_Recipe_C.CheckEntitlement
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 ItemBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                          NotifyOnNoEntitlement          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsEntitled                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_Recipe_C::CheckEntitlement(class UClass** ItemBP, bool* NotifyOnNoEntitlement, bool* IsEntitled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Recipe.Widget_Recipe_C.CheckEntitlement");

	UWidget_Recipe_C_CheckEntitlement_Params params;
	params.ItemBP = ItemBP;
	params.NotifyOnNoEntitlement = NotifyOnNoEntitlement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsEntitled != nullptr)
		*IsEntitled = params.IsEntitled;
}


// Function Widget_Recipe.Widget_Recipe_C.Get_ValidOverlay_Visibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_Recipe_C::Get_ValidOverlay_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Recipe.Widget_Recipe_C.Get_ValidOverlay_Visibility_1");

	UWidget_Recipe_C_Get_ValidOverlay_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Recipe.Widget_Recipe_C.Get_TextBlock_0_ColorAndOpacity_1
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UWidget_Recipe_C::Get_TextBlock_0_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Recipe.Widget_Recipe_C.Get_TextBlock_0_ColorAndOpacity_1");

	UWidget_Recipe_C_Get_TextBlock_0_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Recipe.Widget_Recipe_C.Get_ItemName_Text_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_Recipe_C::Get_ItemName_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Recipe.Widget_Recipe_C.Get_ItemName_Text_1");

	UWidget_Recipe_C_Get_ItemName_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Recipe.Widget_Recipe_C.GetPercent_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UWidget_Recipe_C::GetPercent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Recipe.Widget_Recipe_C.GetPercent_1");

	UWidget_Recipe_C_GetPercent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Recipe.Widget_Recipe_C.Get_Cost_Text_1
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_Recipe_C::Get_Cost_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Recipe.Widget_Recipe_C.Get_Cost_Text_1");

	UWidget_Recipe_C_Get_Cost_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Recipe.Widget_Recipe_C.GetCost
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Recipe_C::GetCost(int* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Recipe.Widget_Recipe_C.GetCost");

	UWidget_Recipe_C_GetCost_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_Recipe.Widget_Recipe_C.Get_CostPanel_Visibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_Recipe_C::Get_CostPanel_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Recipe.Widget_Recipe_C.Get_CostPanel_Visibility_1");

	UWidget_Recipe_C_Get_CostPanel_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Recipe.Widget_Recipe_C.Get_Selection_White_Stripe_Visibility
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_Recipe_C::Get_Selection_White_Stripe_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Recipe.Widget_Recipe_C.Get_Selection_White_Stripe_Visibility");

	UWidget_Recipe_C_Get_Selection_White_Stripe_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Recipe.Widget_Recipe_C.Get_ActionPanel_Visibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_Recipe_C::Get_ActionPanel_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Recipe.Widget_Recipe_C.Get_ActionPanel_Visibility_1");

	UWidget_Recipe_C_Get_ActionPanel_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Recipe.Widget_Recipe_C.GetVisibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_Recipe_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Recipe.Widget_Recipe_C.GetVisibility_1");

	UWidget_Recipe_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Recipe.Widget_Recipe_C.BuildStats
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_Recipe_C::BuildStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Recipe.Widget_Recipe_C.BuildStats");

	UWidget_Recipe_C_BuildStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Recipe.Widget_Recipe_C.Refresh
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_Recipe_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Recipe.Widget_Recipe_C.Refresh");

	UWidget_Recipe_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Recipe.Widget_Recipe_C.GetCraftingComponent
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCraftingComponent*      Component                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Recipe_C::GetCraftingComponent(class UCraftingComponent** Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Recipe.Widget_Recipe_C.GetCraftingComponent");

	UWidget_Recipe_C_GetCraftingComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Component != nullptr)
		*Component = params.Component;
}


// Function Widget_Recipe.Widget_Recipe_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_116_OnAdvButtonPressedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Recipe_C::BndEvt__FocusButton_K2Node_ComponentBoundEvent_116_OnAdvButtonPressedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Recipe.Widget_Recipe_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_116_OnAdvButtonPressedEvent__DelegateSignature");

	UWidget_Recipe_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_116_OnAdvButtonPressedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Recipe.Widget_Recipe_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_Recipe_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Recipe.Widget_Recipe_C.Construct");

	UWidget_Recipe_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Recipe.Widget_Recipe_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_94_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Recipe_C::BndEvt__FocusButton_K2Node_ComponentBoundEvent_94_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Recipe.Widget_Recipe_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_94_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Recipe_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_94_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Recipe.Widget_Recipe_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_291_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Recipe_C::BndEvt__FocusButton_K2Node_ComponentBoundEvent_291_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Recipe.Widget_Recipe_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_291_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Recipe_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_291_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Recipe.Widget_Recipe_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_260_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Recipe_C::BndEvt__FocusButton_K2Node_ComponentBoundEvent_260_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Recipe.Widget_Recipe_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_260_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Recipe_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_260_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Recipe.Widget_Recipe_C.BndEvt__HoldButton_K2Node_ComponentBoundEvent_0_OnPressAndHold__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// bool*                          Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float*                         CompletionPct                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Recipe_C::BndEvt__HoldButton_K2Node_ComponentBoundEvent_0_OnPressAndHold__DelegateSignature(bool* Success, float* CompletionPct)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Recipe.Widget_Recipe_C.BndEvt__HoldButton_K2Node_ComponentBoundEvent_0_OnPressAndHold__DelegateSignature");

	UWidget_Recipe_C_BndEvt__HoldButton_K2Node_ComponentBoundEvent_0_OnPressAndHold__DelegateSignature_Params params;
	params.Success = Success;
	params.CompletionPct = CompletionPct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Recipe.Widget_Recipe_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_141_OnAdvButtonReleasedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Recipe_C::BndEvt__FocusButton_K2Node_ComponentBoundEvent_141_OnAdvButtonReleasedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Recipe.Widget_Recipe_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_141_OnAdvButtonReleasedEvent__DelegateSignature");

	UWidget_Recipe_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_141_OnAdvButtonReleasedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Recipe.Widget_Recipe_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Recipe_C::BndEvt__FocusButton_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Recipe.Widget_Recipe_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Recipe_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Recipe.Widget_Recipe_C.SimulateDoAction
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_Recipe_C::SimulateDoAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Recipe.Widget_Recipe_C.SimulateDoAction");

	UWidget_Recipe_C_SimulateDoAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Recipe.Widget_Recipe_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Recipe_C::BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Recipe.Widget_Recipe_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Recipe_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Recipe.Widget_Recipe_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Recipe_C::BndEvt__FocusButton_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Recipe.Widget_Recipe_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Recipe_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Recipe.Widget_Recipe_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_4_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Recipe_C::BndEvt__FocusButton_K2Node_ComponentBoundEvent_4_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Recipe.Widget_Recipe_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_4_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Recipe_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_4_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Recipe.Widget_Recipe_C.ExecuteUbergraph_Widget_Recipe
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Recipe_C::ExecuteUbergraph_Widget_Recipe(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Recipe.Widget_Recipe_C.ExecuteUbergraph_Widget_Recipe");

	UWidget_Recipe_C_ExecuteUbergraph_Widget_Recipe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Recipe.Widget_Recipe_C.OnSelectRecipe__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRecipeInfo*            Recipe                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWidget_Recipe_C**       RecipeWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Recipe_C::OnSelectRecipe__DelegateSignature(struct FRecipeInfo* Recipe, class UWidget_Recipe_C** RecipeWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Recipe.Widget_Recipe_C.OnSelectRecipe__DelegateSignature");

	UWidget_Recipe_C_OnSelectRecipe__DelegateSignature_Params params;
	params.Recipe = Recipe;
	params.RecipeWidget = RecipeWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Recipe.Widget_Recipe_C.OnClearRecipe__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWidget_Recipe_C::OnClearRecipe__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Recipe.Widget_Recipe_C.OnClearRecipe__DelegateSignature");

	UWidget_Recipe_C_OnClearRecipe__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Recipe.Widget_Recipe_C.OnAttemptedCraft__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRecipeInfo*            Recipe                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_Recipe_C::OnAttemptedCraft__DelegateSignature(struct FRecipeInfo* Recipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Recipe.Widget_Recipe_C.OnAttemptedCraft__DelegateSignature");

	UWidget_Recipe_C_OnAttemptedCraft__DelegateSignature_Params params;
	params.Recipe = Recipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
