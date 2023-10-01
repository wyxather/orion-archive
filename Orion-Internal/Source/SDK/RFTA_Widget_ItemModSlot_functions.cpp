// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_ItemModSlot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_ItemModSlot.Widget_ItemModSlot_C.GetSlotLabel
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Label                          (Parm, OutParm)

void UWidget_ItemModSlot_C::GetSlotLabel(struct FText* Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemModSlot.Widget_ItemModSlot_C.GetSlotLabel");

	UWidget_ItemModSlot_C_GetSlotLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Label != nullptr)
		*Label = params.Label;
}


// Function Widget_ItemModSlot.Widget_ItemModSlot_C.GetVisibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_ItemModSlot_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemModSlot.Widget_ItemModSlot_C.GetVisibility_1");

	UWidget_ItemModSlot_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_ItemModSlot.Widget_ItemModSlot_C.CacheInspectInfo
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_ItemModSlot_C::CacheInspectInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemModSlot.Widget_ItemModSlot_C.CacheInspectInfo");

	UWidget_ItemModSlot_C_CacheInspectInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ItemModSlot.Widget_ItemModSlot_C.Refresh
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_ItemModSlot_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemModSlot.Widget_ItemModSlot_C.Refresh");

	UWidget_ItemModSlot_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ItemModSlot.Widget_ItemModSlot_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_ItemModSlot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemModSlot.Widget_ItemModSlot_C.Construct");

	UWidget_ItemModSlot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ItemModSlot.Widget_ItemModSlot_C.BndEvt__FocusButtonWidget_0_K2Node_ComponentBoundEvent_200_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_ItemModSlot_C::BndEvt__FocusButtonWidget_0_K2Node_ComponentBoundEvent_200_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemModSlot.Widget_ItemModSlot_C.BndEvt__FocusButtonWidget_0_K2Node_ComponentBoundEvent_200_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_ItemModSlot_C_BndEvt__FocusButtonWidget_0_K2Node_ComponentBoundEvent_200_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ItemModSlot.Widget_ItemModSlot_C.BndEvt__FocusButtonWidget_0_K2Node_ComponentBoundEvent_236_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_ItemModSlot_C::BndEvt__FocusButtonWidget_0_K2Node_ComponentBoundEvent_236_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemModSlot.Widget_ItemModSlot_C.BndEvt__FocusButtonWidget_0_K2Node_ComponentBoundEvent_236_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_ItemModSlot_C_BndEvt__FocusButtonWidget_0_K2Node_ComponentBoundEvent_236_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ItemModSlot.Widget_ItemModSlot_C.BndEvt__FocusButtonWidget_0_K2Node_ComponentBoundEvent_254_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_ItemModSlot_C::BndEvt__FocusButtonWidget_0_K2Node_ComponentBoundEvent_254_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemModSlot.Widget_ItemModSlot_C.BndEvt__FocusButtonWidget_0_K2Node_ComponentBoundEvent_254_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_ItemModSlot_C_BndEvt__FocusButtonWidget_0_K2Node_ComponentBoundEvent_254_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ItemModSlot.Widget_ItemModSlot_C.InitFromInspectInfo
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInspectInfo*           InspectInfo                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          Comparing                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInspectInfo*           InspectInfoCompare             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_ItemModSlot_C::InitFromInspectInfo(struct FInspectInfo* InspectInfo, bool* Comparing, struct FInspectInfo* InspectInfoCompare)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemModSlot.Widget_ItemModSlot_C.InitFromInspectInfo");

	UWidget_ItemModSlot_C_InitFromInspectInfo_Params params;
	params.InspectInfo = InspectInfo;
	params.Comparing = Comparing;
	params.InspectInfoCompare = InspectInfoCompare;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ItemModSlot.Widget_ItemModSlot_C.OnInstanceDataChanged
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_ItemModSlot_C::OnInstanceDataChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemModSlot.Widget_ItemModSlot_C.OnInstanceDataChanged");

	UWidget_ItemModSlot_C_OnInstanceDataChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ItemModSlot.Widget_ItemModSlot_C.ExecuteUbergraph_Widget_ItemModSlot
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_ItemModSlot_C::ExecuteUbergraph_Widget_ItemModSlot(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemModSlot.Widget_ItemModSlot_C.ExecuteUbergraph_Widget_ItemModSlot");

	UWidget_ItemModSlot_C_ExecuteUbergraph_Widget_ItemModSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ItemModSlot.Widget_ItemModSlot_C.OnModClicked__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_ItemModSlot_C**  ModSlot                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_ItemModSlot_C::OnModClicked__DelegateSignature(class UWidget_ItemModSlot_C** ModSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemModSlot.Widget_ItemModSlot_C.OnModClicked__DelegateSignature");

	UWidget_ItemModSlot_C_OnModClicked__DelegateSignature_Params params;
	params.ModSlot = ModSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ItemModSlot.Widget_ItemModSlot_C.OnModSelected__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_ItemModSlot_C**  ModSlot                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_ItemModSlot_C::OnModSelected__DelegateSignature(class UWidget_ItemModSlot_C** ModSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemModSlot.Widget_ItemModSlot_C.OnModSelected__DelegateSignature");

	UWidget_ItemModSlot_C_OnModSelected__DelegateSignature_Params params;
	params.ModSlot = ModSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
