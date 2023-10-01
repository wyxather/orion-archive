// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_BuySellUpgrade_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.FocusTab
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_BuySellUpgrade_C::FocusTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.FocusTab");

	UWidget_BuySellUpgrade_C_FocusTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.HasFocusedTab
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_BuySellUpgrade_C::HasFocusedTab(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.HasFocusedTab");

	UWidget_BuySellUpgrade_C_HasFocusedTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.SetActionEnabled
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_BuySellUpgrade_C::SetActionEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.SetActionEnabled");

	UWidget_BuySellUpgrade_C_SetActionEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.GetVisibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_BuySellUpgrade_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.GetVisibility_1");

	UWidget_BuySellUpgrade_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.CheckTutorial
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_BuySellUpgrade_C::CheckTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.CheckTutorial");

	UWidget_BuySellUpgrade_C_CheckTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.ShowHideTabs
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_BuySellUpgrade_C::ShowHideTabs()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.ShowHideTabs");

	UWidget_BuySellUpgrade_C_ShowHideTabs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.Get_Scrap_Text_1
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_BuySellUpgrade_C::Get_Scrap_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.Get_Scrap_Text_1");

	UWidget_BuySellUpgrade_C_Get_Scrap_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.GetRelevantInventory
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UInventoryComponent*     Inventory                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_BuySellUpgrade_C::GetRelevantInventory(class UInventoryComponent** Inventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.GetRelevantInventory");

	UWidget_BuySellUpgrade_C_GetRelevantInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Inventory != nullptr)
		*Inventory = params.Inventory;
}


// Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.FocusFirstVisibleTab
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_BuySellUpgrade_C::FocusFirstVisibleTab()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.FocusFirstVisibleTab");

	UWidget_BuySellUpgrade_C_FocusFirstVisibleTab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_BuySellUpgrade_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.Construct");

	UWidget_BuySellUpgrade_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.OnSelectItem
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInspectInfo*           InspectInfo                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          Comparing                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInspectInfo*           InspectInfoCompare             (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          ShowIngredients                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRecipeInfo*            Recipe                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UClass**                 ItemBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_BuySellUpgrade_C::OnSelectItem(int* ItemID, struct FInspectInfo* InspectInfo, bool* Comparing, struct FInspectInfo* InspectInfoCompare, bool* ShowIngredients, struct FRecipeInfo* Recipe, class UClass** ItemBP)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.OnSelectItem");

	UWidget_BuySellUpgrade_C_OnSelectItem_Params params;
	params.ItemID = ItemID;
	params.InspectInfo = InspectInfo;
	params.Comparing = Comparing;
	params.InspectInfoCompare = InspectInfoCompare;
	params.ShowIngredients = ShowIngredients;
	params.Recipe = Recipe;
	params.ItemBP = ItemBP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.OnTabFocus
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_InventoryTab_C** Tab                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_BuySellUpgrade_C::OnTabFocus(class UWidget_InventoryTab_C** Tab)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.OnTabFocus");

	UWidget_BuySellUpgrade_C_OnTabFocus_Params params;
	params.Tab = Tab;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.PreConstruct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_BuySellUpgrade_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.PreConstruct");

	UWidget_BuySellUpgrade_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_BuySellUpgrade_C::BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_BuySellUpgrade_C_BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.OnAddedToFocusPath
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWidget_BuySellUpgrade_C::OnAddedToFocusPath(struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.OnAddedToFocusPath");

	UWidget_BuySellUpgrade_C_OnAddedToFocusPath_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.BndEvt__AdvancedStatsBtn_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_BuySellUpgrade_C::BndEvt__AdvancedStatsBtn_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.BndEvt__AdvancedStatsBtn_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_BuySellUpgrade_C_BndEvt__AdvancedStatsBtn_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.BndEvt__HoldtoCraft_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_BuySellUpgrade_C::BndEvt__HoldtoCraft_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.BndEvt__HoldtoCraft_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_BuySellUpgrade_C_BndEvt__HoldtoCraft_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.ShowTutorialWithDelay
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_BuySellUpgrade_C::ShowTutorialWithDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.ShowTutorialWithDelay");

	UWidget_BuySellUpgrade_C_ShowTutorialWithDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.FocusFirstAvailableEvent
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_BuySellUpgrade_C::FocusFirstAvailableEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.FocusFirstAvailableEvent");

	UWidget_BuySellUpgrade_C_FocusFirstAvailableEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.OnInventoryChanged_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_BuySellUpgrade_C::OnInventoryChanged_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.OnInventoryChanged_Event_1");

	UWidget_BuySellUpgrade_C_OnInventoryChanged_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.ExecuteUbergraph_Widget_BuySellUpgrade
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_BuySellUpgrade_C::ExecuteUbergraph_Widget_BuySellUpgrade(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.ExecuteUbergraph_Widget_BuySellUpgrade");

	UWidget_BuySellUpgrade_C_ExecuteUbergraph_Widget_BuySellUpgrade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.AdvancedStats__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWidget_BuySellUpgrade_C::AdvancedStats__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_BuySellUpgrade.Widget_BuySellUpgrade_C.AdvancedStats__DelegateSignature");

	UWidget_BuySellUpgrade_C_AdvancedStats__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
