// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_InventoryTab_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_InventoryTab.Widget_InventoryTab_C.OverrideVisibility
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility*              OverrideVisibilityType         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_InventoryTab_C::OverrideVisibility(ESlateVisibility* OverrideVisibilityType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryTab.Widget_InventoryTab_C.OverrideVisibility");

	UWidget_InventoryTab_C_OverrideVisibility_Params params;
	params.OverrideVisibilityType = OverrideVisibilityType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryTab.Widget_InventoryTab_C.HasValidItems
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_InventoryTab_C::HasValidItems(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryTab.Widget_InventoryTab_C.HasValidItems");

	UWidget_InventoryTab_C_HasValidItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_InventoryTab.Widget_InventoryTab_C.GetColorAndOpacity_1
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UWidget_InventoryTab_C::GetColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryTab.Widget_InventoryTab_C.GetColorAndOpacity_1");

	UWidget_InventoryTab_C_GetColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_InventoryTab.Widget_InventoryTab_C.IsValidCategory
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AItem**                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_InventoryTab_C::IsValidCategory(class AItem** Item, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryTab.Widget_InventoryTab_C.IsValidCategory");

	UWidget_InventoryTab_C_IsValidCategory_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_InventoryTab.Widget_InventoryTab_C.IsValidItemType
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AItem**                  Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_InventoryTab_C::IsValidItemType(class AItem** Item, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryTab.Widget_InventoryTab_C.IsValidItemType");

	UWidget_InventoryTab_C_IsValidItemType_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_InventoryTab.Widget_InventoryTab_C.EvaluateVisibility
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_InventoryTab_C::EvaluateVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryTab.Widget_InventoryTab_C.EvaluateVisibility");

	UWidget_InventoryTab_C_EvaluateVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryTab.Widget_InventoryTab_C.Init
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryComponent**    Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<EInventoryAction>* InAction                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_InventoryTab_C::Init(class UInventoryComponent** Inventory, TEnumAsByte<EInventoryAction>* InAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryTab.Widget_InventoryTab_C.Init");

	UWidget_InventoryTab_C_Init_Params params;
	params.Inventory = Inventory;
	params.InAction = InAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryTab.Widget_InventoryTab_C.GetLabel
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Label                          (Parm, OutParm)

void UWidget_InventoryTab_C::GetLabel(struct FText* Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryTab.Widget_InventoryTab_C.GetLabel");

	UWidget_InventoryTab_C_GetLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Label != nullptr)
		*Label = params.Label;
}


// Function Widget_InventoryTab.Widget_InventoryTab_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_InventoryTab_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryTab.Widget_InventoryTab_C.Construct");

	UWidget_InventoryTab_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryTab.Widget_InventoryTab_C.BndEvt__TabButton_0_K2Node_ComponentBoundEvent_59_OnTabFocusDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Tab                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget**                Panel                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_InventoryTab_C::BndEvt__TabButton_0_K2Node_ComponentBoundEvent_59_OnTabFocusDelegate__DelegateSignature(class UWidget** Tab, class UWidget** Panel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryTab.Widget_InventoryTab_C.BndEvt__TabButton_0_K2Node_ComponentBoundEvent_59_OnTabFocusDelegate__DelegateSignature");

	UWidget_InventoryTab_C_BndEvt__TabButton_0_K2Node_ComponentBoundEvent_59_OnTabFocusDelegate__DelegateSignature_Params params;
	params.Tab = Tab;
	params.Panel = Panel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryTab.Widget_InventoryTab_C.BndEvt__TabButton_0_K2Node_ComponentBoundEvent_81_OnButtonPressedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)

void UWidget_InventoryTab_C::BndEvt__TabButton_0_K2Node_ComponentBoundEvent_81_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryTab.Widget_InventoryTab_C.BndEvt__TabButton_0_K2Node_ComponentBoundEvent_81_OnButtonPressedEvent__DelegateSignature");

	UWidget_InventoryTab_C_BndEvt__TabButton_0_K2Node_ComponentBoundEvent_81_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryTab.Widget_InventoryTab_C.ExecuteUbergraph_Widget_InventoryTab
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_InventoryTab_C::ExecuteUbergraph_Widget_InventoryTab(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryTab.Widget_InventoryTab_C.ExecuteUbergraph_Widget_InventoryTab");

	UWidget_InventoryTab_C_ExecuteUbergraph_Widget_InventoryTab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_InventoryTab.Widget_InventoryTab_C.OnTabFocus__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_InventoryTab_C** Tab                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_InventoryTab_C::OnTabFocus__DelegateSignature(class UWidget_InventoryTab_C** Tab)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_InventoryTab.Widget_InventoryTab_C.OnTabFocus__DelegateSignature");

	UWidget_InventoryTab_C_OnTabFocus__DelegateSignature_Params params;
	params.Tab = Tab;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
