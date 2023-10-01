// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_HUD_QuickSelectSlot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_HUD_QuickSelectSlot.Widget_HUD_QuickSelectSlot_C.CheckEntitlement
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 ItemBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                          NotifyOnNoEntitlement          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsEntitled                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_HUD_QuickSelectSlot_C::CheckEntitlement(class UClass** ItemBP, bool* NotifyOnNoEntitlement, bool* IsEntitled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD_QuickSelectSlot.Widget_HUD_QuickSelectSlot_C.CheckEntitlement");

	UWidget_HUD_QuickSelectSlot_C_CheckEntitlement_Params params;
	params.ItemBP = ItemBP;
	params.NotifyOnNoEntitlement = NotifyOnNoEntitlement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsEntitled != nullptr)
		*IsEntitled = params.IsEntitled;
}


// Function Widget_HUD_QuickSelectSlot.Widget_HUD_QuickSelectSlot_C.UpdateQuantity
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_HUD_QuickSelectSlot_C::UpdateQuantity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD_QuickSelectSlot.Widget_HUD_QuickSelectSlot_C.UpdateQuantity");

	UWidget_HUD_QuickSelectSlot_C_UpdateQuantity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUD_QuickSelectSlot.Widget_HUD_QuickSelectSlot_C.Get_Icon_Visibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_HUD_QuickSelectSlot_C::Get_Icon_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD_QuickSelectSlot.Widget_HUD_QuickSelectSlot_C.Get_Icon_Visibility_1");

	UWidget_HUD_QuickSelectSlot_C_Get_Icon_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_HUD_QuickSelectSlot.Widget_HUD_QuickSelectSlot_C.CanUse
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_HUD_QuickSelectSlot_C::CanUse(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD_QuickSelectSlot.Widget_HUD_QuickSelectSlot_C.CanUse");

	UWidget_HUD_QuickSelectSlot_C_CanUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_HUD_QuickSelectSlot.Widget_HUD_QuickSelectSlot_C.Refresh
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_HUD_QuickSelectSlot_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD_QuickSelectSlot.Widget_HUD_QuickSelectSlot_C.Refresh");

	UWidget_HUD_QuickSelectSlot_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUD_QuickSelectSlot.Widget_HUD_QuickSelectSlot_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_HUD_QuickSelectSlot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD_QuickSelectSlot.Widget_HUD_QuickSelectSlot_C.Construct");

	UWidget_HUD_QuickSelectSlot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUD_QuickSelectSlot.Widget_HUD_QuickSelectSlot_C.OnChanged_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_HUD_QuickSelectSlot_C::OnChanged_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD_QuickSelectSlot.Widget_HUD_QuickSelectSlot_C.OnChanged_Event_1");

	UWidget_HUD_QuickSelectSlot_C_OnChanged_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUD_QuickSelectSlot.Widget_HUD_QuickSelectSlot_C.OnInventoryChanged_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_HUD_QuickSelectSlot_C::OnInventoryChanged_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD_QuickSelectSlot.Widget_HUD_QuickSelectSlot_C.OnInventoryChanged_Event_1");

	UWidget_HUD_QuickSelectSlot_C_OnInventoryChanged_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUD_QuickSelectSlot.Widget_HUD_QuickSelectSlot_C.OnSlotUsed_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char*                 Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_HUD_QuickSelectSlot_C::OnSlotUsed_Event_1(unsigned char* Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD_QuickSelectSlot.Widget_HUD_QuickSelectSlot_C.OnSlotUsed_Event_1");

	UWidget_HUD_QuickSelectSlot_C_OnSlotUsed_Event_1_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUD_QuickSelectSlot.Widget_HUD_QuickSelectSlot_C.UpdateImageBinding
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_HUD_QuickSelectSlot_C::UpdateImageBinding()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD_QuickSelectSlot.Widget_HUD_QuickSelectSlot_C.UpdateImageBinding");

	UWidget_HUD_QuickSelectSlot_C_UpdateImageBinding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_HUD_QuickSelectSlot.Widget_HUD_QuickSelectSlot_C.ExecuteUbergraph_Widget_HUD_QuickSelectSlot
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_HUD_QuickSelectSlot_C::ExecuteUbergraph_Widget_HUD_QuickSelectSlot(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HUD_QuickSelectSlot.Widget_HUD_QuickSelectSlot_C.ExecuteUbergraph_Widget_HUD_QuickSelectSlot");

	UWidget_HUD_QuickSelectSlot_C_ExecuteUbergraph_Widget_HUD_QuickSelectSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
