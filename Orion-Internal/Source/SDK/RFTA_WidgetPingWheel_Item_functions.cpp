// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_WidgetPingWheel_Item_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WidgetPingWheel_Item.WidgetPingWheel_Item_C.UpdateFromContext
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPingSubContext**        Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidgetPingWheel_Item_C::UpdateFromContext(class UPingSubContext** Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function WidgetPingWheel_Item.WidgetPingWheel_Item_C.UpdateFromContext");

	UWidgetPingWheel_Item_C_UpdateFromContext_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WidgetPingWheel_Item.WidgetPingWheel_Item_C.OnActivate
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidgetPingWheel_Item_C::OnActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function WidgetPingWheel_Item.WidgetPingWheel_Item_C.OnActivate");

	UWidgetPingWheel_Item_C_OnActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WidgetPingWheel_Item.WidgetPingWheel_Item_C.NotifySelectedChanged
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidgetPingWheel_Item_C::NotifySelectedChanged(bool* Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function WidgetPingWheel_Item.WidgetPingWheel_Item_C.NotifySelectedChanged");

	UWidgetPingWheel_Item_C_NotifySelectedChanged_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WidgetPingWheel_Item.WidgetPingWheel_Item_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidgetPingWheel_Item_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WidgetPingWheel_Item.WidgetPingWheel_Item_C.Construct");

	UWidgetPingWheel_Item_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WidgetPingWheel_Item.WidgetPingWheel_Item_C.ExecuteUbergraph_WidgetPingWheel_Item
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidgetPingWheel_Item_C::ExecuteUbergraph_WidgetPingWheel_Item(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WidgetPingWheel_Item.WidgetPingWheel_Item_C.ExecuteUbergraph_WidgetPingWheel_Item");

	UWidgetPingWheel_Item_C_ExecuteUbergraph_WidgetPingWheel_Item_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
