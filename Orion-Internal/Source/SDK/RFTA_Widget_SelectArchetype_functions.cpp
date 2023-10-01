// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_SelectArchetype_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_SelectArchetype.Widget_SelectArchetype_C.GetVisibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_SelectArchetype_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SelectArchetype.Widget_SelectArchetype_C.GetVisibility_1");

	UWidget_SelectArchetype_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_SelectArchetype.Widget_SelectArchetype_C.GetPercent_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UWidget_SelectArchetype_C::GetPercent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SelectArchetype.Widget_SelectArchetype_C.GetPercent_1");

	UWidget_SelectArchetype_C_GetPercent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_SelectArchetype.Widget_SelectArchetype_C.OnSelectArchetype
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Archetype                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_SelectArchetype_C::OnSelectArchetype(class UClass** Archetype)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SelectArchetype.Widget_SelectArchetype_C.OnSelectArchetype");

	UWidget_SelectArchetype_C_OnSelectArchetype_Params params;
	params.Archetype = Archetype;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_SelectArchetype.Widget_SelectArchetype_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_SelectArchetype_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SelectArchetype.Widget_SelectArchetype_C.Construct");

	UWidget_SelectArchetype_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_SelectArchetype.Widget_SelectArchetype_C.OnPressAndHold_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float*                         CompletionPct                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_SelectArchetype_C::OnPressAndHold_Event_1(bool* Success, float* CompletionPct)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SelectArchetype.Widget_SelectArchetype_C.OnPressAndHold_Event_1");

	UWidget_SelectArchetype_C_OnPressAndHold_Event_1_Params params;
	params.Success = Success;
	params.CompletionPct = CompletionPct;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_SelectArchetype.Widget_SelectArchetype_C.ConfirmPopAnimation
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_SelectArchetype_C::ConfirmPopAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SelectArchetype.Widget_SelectArchetype_C.ConfirmPopAnimation");

	UWidget_SelectArchetype_C_ConfirmPopAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_SelectArchetype.Widget_SelectArchetype_C.OnInputDeviceChanged
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ControllerId                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EInputDevice*                  InputDevice                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_SelectArchetype_C::OnInputDeviceChanged(int* ControllerId, EInputDevice* InputDevice)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SelectArchetype.Widget_SelectArchetype_C.OnInputDeviceChanged");

	UWidget_SelectArchetype_C_OnInputDeviceChanged_Params params;
	params.ControllerId = ControllerId;
	params.InputDevice = InputDevice;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_SelectArchetype.Widget_SelectArchetype_C.Initialize
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_SelectArchetype_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SelectArchetype.Widget_SelectArchetype_C.Initialize");

	UWidget_SelectArchetype_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_SelectArchetype.Widget_SelectArchetype_C.OnPressed_Event_2
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_SelectArchetype_C::OnPressed_Event_2(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SelectArchetype.Widget_SelectArchetype_C.OnPressed_Event_2");

	UWidget_SelectArchetype_C_OnPressed_Event_2_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_SelectArchetype.Widget_SelectArchetype_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_OnAdvButtonPressedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_SelectArchetype_C::BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_OnAdvButtonPressedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SelectArchetype.Widget_SelectArchetype_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_OnAdvButtonPressedEvent__DelegateSignature");

	UWidget_SelectArchetype_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_0_OnAdvButtonPressedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_SelectArchetype.Widget_SelectArchetype_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_1_OnAdvButtonReleasedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_SelectArchetype_C::BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_1_OnAdvButtonReleasedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SelectArchetype.Widget_SelectArchetype_C.BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_1_OnAdvButtonReleasedEvent__DelegateSignature");

	UWidget_SelectArchetype_C_BndEvt__ConfirmButton_K2Node_ComponentBoundEvent_1_OnAdvButtonReleasedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_SelectArchetype.Widget_SelectArchetype_C.BndEvt__FocusButtonWidget_465_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_SelectArchetype_C::BndEvt__FocusButtonWidget_465_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SelectArchetype.Widget_SelectArchetype_C.BndEvt__FocusButtonWidget_465_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_SelectArchetype_C_BndEvt__FocusButtonWidget_465_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_SelectArchetype.Widget_SelectArchetype_C.BndEvt__FocusButtonWidget_465_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_SelectArchetype_C::BndEvt__FocusButtonWidget_465_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SelectArchetype.Widget_SelectArchetype_C.BndEvt__FocusButtonWidget_465_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_SelectArchetype_C_BndEvt__FocusButtonWidget_465_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_SelectArchetype.Widget_SelectArchetype_C.BndEvt__FocusButtonWidget_465_K2Node_ComponentBoundEvent_4_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_SelectArchetype_C::BndEvt__FocusButtonWidget_465_K2Node_ComponentBoundEvent_4_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SelectArchetype.Widget_SelectArchetype_C.BndEvt__FocusButtonWidget_465_K2Node_ComponentBoundEvent_4_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_SelectArchetype_C_BndEvt__FocusButtonWidget_465_K2Node_ComponentBoundEvent_4_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_SelectArchetype.Widget_SelectArchetype_C.BndEvt__FocusButtonWidget_465_K2Node_ComponentBoundEvent_5_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_SelectArchetype_C::BndEvt__FocusButtonWidget_465_K2Node_ComponentBoundEvent_5_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SelectArchetype.Widget_SelectArchetype_C.BndEvt__FocusButtonWidget_465_K2Node_ComponentBoundEvent_5_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_SelectArchetype_C_BndEvt__FocusButtonWidget_465_K2Node_ComponentBoundEvent_5_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_SelectArchetype.Widget_SelectArchetype_C.BndEvt__FocusButtonWidget_465_K2Node_ComponentBoundEvent_6_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_SelectArchetype_C::BndEvt__FocusButtonWidget_465_K2Node_ComponentBoundEvent_6_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SelectArchetype.Widget_SelectArchetype_C.BndEvt__FocusButtonWidget_465_K2Node_ComponentBoundEvent_6_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_SelectArchetype_C_BndEvt__FocusButtonWidget_465_K2Node_ComponentBoundEvent_6_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_SelectArchetype.Widget_SelectArchetype_C.ExecuteUbergraph_Widget_SelectArchetype
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_SelectArchetype_C::ExecuteUbergraph_Widget_SelectArchetype(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_SelectArchetype.Widget_SelectArchetype_C.ExecuteUbergraph_Widget_SelectArchetype");

	UWidget_SelectArchetype_C_ExecuteUbergraph_Widget_SelectArchetype_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
