// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_KeybindUserSetting_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_KeybindUserSetting.Widget_KeybindUserSetting_C.MenuSelect
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_KeybindUserSetting_C::MenuSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KeybindUserSetting.Widget_KeybindUserSetting_C.MenuSelect");

	UWidget_KeybindUserSetting_C_MenuSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_KeybindUserSetting.Widget_KeybindUserSetting_C.SetKeybind
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey*                   InputPin                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWidget_KeybindUserSetting_C::SetKeybind(struct FKey* InputPin)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KeybindUserSetting.Widget_KeybindUserSetting_C.SetKeybind");

	UWidget_KeybindUserSetting_C_SetKeybind_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_KeybindUserSetting.Widget_KeybindUserSetting_C.GetText_1
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_KeybindUserSetting_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KeybindUserSetting.Widget_KeybindUserSetting_C.GetText_1");

	UWidget_KeybindUserSetting_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_KeybindUserSetting.Widget_KeybindUserSetting_C.GetVisibility_2
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_KeybindUserSetting_C::GetVisibility_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KeybindUserSetting.Widget_KeybindUserSetting_C.GetVisibility_2");

	UWidget_KeybindUserSetting_C_GetVisibility_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_KeybindUserSetting.Widget_KeybindUserSetting_C.GetVisibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_KeybindUserSetting_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KeybindUserSetting.Widget_KeybindUserSetting_C.GetVisibility_1");

	UWidget_KeybindUserSetting_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_KeybindUserSetting.Widget_KeybindUserSetting_C.Get_Label_Text_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_KeybindUserSetting_C::Get_Label_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KeybindUserSetting.Widget_KeybindUserSetting_C.Get_Label_Text_1");

	UWidget_KeybindUserSetting_C_Get_Label_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_KeybindUserSetting.Widget_KeybindUserSetting_C.BndEvt__FocusButtonWidget_2_K2Node_ComponentBoundEvent_266_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_KeybindUserSetting_C::BndEvt__FocusButtonWidget_2_K2Node_ComponentBoundEvent_266_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KeybindUserSetting.Widget_KeybindUserSetting_C.BndEvt__FocusButtonWidget_2_K2Node_ComponentBoundEvent_266_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_KeybindUserSetting_C_BndEvt__FocusButtonWidget_2_K2Node_ComponentBoundEvent_266_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_KeybindUserSetting.Widget_KeybindUserSetting_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_7_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_KeybindUserSetting_C::BndEvt__FocusButton_K2Node_ComponentBoundEvent_7_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KeybindUserSetting.Widget_KeybindUserSetting_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_7_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_KeybindUserSetting_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_7_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_KeybindUserSetting.Widget_KeybindUserSetting_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_143_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_KeybindUserSetting_C::BndEvt__FocusButton_K2Node_ComponentBoundEvent_143_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KeybindUserSetting.Widget_KeybindUserSetting_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_143_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_KeybindUserSetting_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_143_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_KeybindUserSetting.Widget_KeybindUserSetting_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_KeybindUserSetting_C::BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KeybindUserSetting.Widget_KeybindUserSetting_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_KeybindUserSetting_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_KeybindUserSetting.Widget_KeybindUserSetting_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_KeybindUserSetting_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KeybindUserSetting.Widget_KeybindUserSetting_C.Construct");

	UWidget_KeybindUserSetting_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_KeybindUserSetting.Widget_KeybindUserSetting_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_4_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_KeybindUserSetting_C::BndEvt__FocusButton_K2Node_ComponentBoundEvent_4_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KeybindUserSetting.Widget_KeybindUserSetting_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_4_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_KeybindUserSetting_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_4_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_KeybindUserSetting.Widget_KeybindUserSetting_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_KeybindUserSetting_C::BndEvt__FocusButton_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KeybindUserSetting.Widget_KeybindUserSetting_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_KeybindUserSetting_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_KeybindUserSetting.Widget_KeybindUserSetting_C.OnKeyInput
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool*                          InvalidInput                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool*                          Shift                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool*                          Ctrl                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool*                          Alt                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool*                          Cmd                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_KeybindUserSetting_C::OnKeyInput(struct FKey* Key, bool* InvalidInput, bool* Shift, bool* Ctrl, bool* Alt, bool* Cmd)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KeybindUserSetting.Widget_KeybindUserSetting_C.OnKeyInput");

	UWidget_KeybindUserSetting_C_OnKeyInput_Params params;
	params.Key = Key;
	params.InvalidInput = InvalidInput;
	params.Shift = Shift;
	params.Ctrl = Ctrl;
	params.Alt = Alt;
	params.Cmd = Cmd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_KeybindUserSetting.Widget_KeybindUserSetting_C.OnInvalidInput
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_KeybindUserSetting_C::OnInvalidInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KeybindUserSetting.Widget_KeybindUserSetting_C.OnInvalidInput");

	UWidget_KeybindUserSetting_C_OnInvalidInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_KeybindUserSetting.Widget_KeybindUserSetting_C.OnDuplicateInput
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class URebindableInputSetting** Conflict                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_KeybindUserSetting_C::OnDuplicateInput(class URebindableInputSetting** Conflict)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KeybindUserSetting.Widget_KeybindUserSetting_C.OnDuplicateInput");

	UWidget_KeybindUserSetting_C_OnDuplicateInput_Params params;
	params.Conflict = Conflict;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_KeybindUserSetting.Widget_KeybindUserSetting_C.ReturnFocus
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_KeybindUserSetting_C::ReturnFocus(struct FName* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KeybindUserSetting.Widget_KeybindUserSetting_C.ReturnFocus");

	UWidget_KeybindUserSetting_C_ReturnFocus_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_KeybindUserSetting.Widget_KeybindUserSetting_C.ExecuteUbergraph_Widget_KeybindUserSetting
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_KeybindUserSetting_C::ExecuteUbergraph_Widget_KeybindUserSetting(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KeybindUserSetting.Widget_KeybindUserSetting_C.ExecuteUbergraph_Widget_KeybindUserSetting");

	UWidget_KeybindUserSetting_C_ExecuteUbergraph_Widget_KeybindUserSetting_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
