// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Inventory_SkinItem_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.CheckEntitlement
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                          NotifyOnNoEntitlement          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsEntitled                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_Inventory_SkinItem_C::CheckEntitlement(int* ItemID, bool* NotifyOnNoEntitlement, bool* IsEntitled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.CheckEntitlement");

	UWidget_Inventory_SkinItem_C_CheckEntitlement_Params params;
	params.ItemID = ItemID;
	params.NotifyOnNoEntitlement = NotifyOnNoEntitlement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsEntitled != nullptr)
		*IsEntitled = params.IsEntitled;
}


// Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.IsEquipped
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_Inventory_SkinItem_C::IsEquipped(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.IsEquipped");

	UWidget_Inventory_SkinItem_C_IsEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.Get_OverlayIcon_ColorAndOpacity_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UWidget_Inventory_SkinItem_C::Get_OverlayIcon_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.Get_OverlayIcon_ColorAndOpacity_1");

	UWidget_Inventory_SkinItem_C_Get_OverlayIcon_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.GetInspectInfo
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInspectInfo            InspectInfo                    (Parm, OutParm)

void UWidget_Inventory_SkinItem_C::GetInspectInfo(struct FInspectInfo* InspectInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.GetInspectInfo");

	UWidget_Inventory_SkinItem_C_GetInspectInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InspectInfo != nullptr)
		*InspectInfo = params.InspectInfo;
}


// Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.SetInspectInfo
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInspectInfo*           InspectInfo                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_Inventory_SkinItem_C::SetInspectInfo(struct FInspectInfo* InspectInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.SetInspectInfo");

	UWidget_Inventory_SkinItem_C_SetInspectInfo_Params params;
	params.InspectInfo = InspectInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.Get_Border_4_BrushColor_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UWidget_Inventory_SkinItem_C::Get_Border_4_BrushColor_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.Get_Border_4_BrushColor_1");

	UWidget_Inventory_SkinItem_C_Get_Border_4_BrushColor_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.GetEquippedVisibility
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_Inventory_SkinItem_C::GetEquippedVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.GetEquippedVisibility");

	UWidget_Inventory_SkinItem_C_GetEquippedVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.GetVisibility_2
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_Inventory_SkinItem_C::GetVisibility_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.GetVisibility_2");

	UWidget_Inventory_SkinItem_C_GetVisibility_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.SelectItem
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Inventory_SkinItem_C::SelectItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.SelectItem");

	UWidget_Inventory_SkinItem_C_SelectItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.DoAction
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Inventory_SkinItem_C::DoAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.DoAction");

	UWidget_Inventory_SkinItem_C_DoAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.CacheInfo
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_Inventory_SkinItem_C::CacheInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.CacheInfo");

	UWidget_Inventory_SkinItem_C_CacheInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.GetCachedInventory
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UInventoryComponent*     Inventory                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Inventory_SkinItem_C::GetCachedInventory(class UInventoryComponent** Inventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.GetCachedInventory");

	UWidget_Inventory_SkinItem_C_GetCachedInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Inventory != nullptr)
		*Inventory = params.Inventory;
}


// Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.GetInventoryItem
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItem          Item                           (Parm, OutParm, NoDestructor, ContainsInstancedReference)

void UWidget_Inventory_SkinItem_C::GetInventoryItem(struct FInventoryItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.GetInventoryItem");

	UWidget_Inventory_SkinItem_C_GetInventoryItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
}


// Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.OnFocus_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Inventory_SkinItem_C::OnFocus_Event_1(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.OnFocus_Event_1");

	UWidget_Inventory_SkinItem_C_OnFocus_Event_1_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.OnAdded
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_Inventory_SkinItem_C::OnAdded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.OnAdded");

	UWidget_Inventory_SkinItem_C_OnAdded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.OnInventoryChanged
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_Inventory_SkinItem_C::OnInventoryChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.OnInventoryChanged");

	UWidget_Inventory_SkinItem_C_OnInventoryChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_1278_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Inventory_SkinItem_C::BndEvt__FocusButton_K2Node_ComponentBoundEvent_1278_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_1278_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Inventory_SkinItem_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_1278_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_1315_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Inventory_SkinItem_C::BndEvt__FocusButton_K2Node_ComponentBoundEvent_1315_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_1315_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Inventory_SkinItem_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_1315_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Inventory_SkinItem_C::BndEvt__FocusButton_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Inventory_SkinItem_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Inventory_SkinItem_C::BndEvt__FocusButton_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Inventory_SkinItem_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_Inventory_SkinItem_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.Construct");

	UWidget_Inventory_SkinItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Inventory_SkinItem_C::BndEvt__FocusButton_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Inventory_SkinItem_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.SimulateAction
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_Inventory_SkinItem_C::SimulateAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.SimulateAction");

	UWidget_Inventory_SkinItem_C_SimulateAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.Refresh
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_Inventory_SkinItem_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.Refresh");

	UWidget_Inventory_SkinItem_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.ExecuteUbergraph_Widget_Inventory_SkinItem
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Inventory_SkinItem_C::ExecuteUbergraph_Widget_Inventory_SkinItem(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.ExecuteUbergraph_Widget_Inventory_SkinItem");

	UWidget_Inventory_SkinItem_C_ExecuteUbergraph_Widget_Inventory_SkinItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.OnSelected__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_Inventory_SkinItem_C** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Inventory_SkinItem_C::OnSelected__DelegateSignature(class UWidget_Inventory_SkinItem_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.OnSelected__DelegateSignature");

	UWidget_Inventory_SkinItem_C_OnSelected__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.OnItemAction__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWidget_Inventory_SkinItem_C::OnItemAction__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C.OnItemAction__DelegateSignature");

	UWidget_Inventory_SkinItem_C_OnItemAction__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
