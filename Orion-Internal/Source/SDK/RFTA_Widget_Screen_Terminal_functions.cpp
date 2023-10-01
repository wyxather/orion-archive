// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Screen_Terminal_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.SetOverrideLocalizationFontSize
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_Screen_Terminal_C::SetOverrideLocalizationFontSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.SetOverrideLocalizationFontSize");

	UWidget_Screen_Terminal_C_SetOverrideLocalizationFontSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.ShowOverlayButton
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_Screen_Terminal_C::ShowOverlayButton(bool* Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.ShowOverlayButton");

	UWidget_Screen_Terminal_C_ShowOverlayButton_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.FillHeader
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_Screen_Terminal_C::FillHeader()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.FillHeader");

	UWidget_Screen_Terminal_C_FillHeader_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.FillOptions
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_Screen_Terminal_C::FillOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.FillOptions");

	UWidget_Screen_Terminal_C_FillOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.FillDialog
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_Screen_Terminal_C::FillDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.FillDialog");

	UWidget_Screen_Terminal_C_FillDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.HasOptions
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_Screen_Terminal_C::HasOptions(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.HasOptions");

	UWidget_Screen_Terminal_C_HasOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.HasDialogText
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_Screen_Terminal_C::HasDialogText(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.HasDialogText");

	UWidget_Screen_Terminal_C_HasDialogText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.Set Content Justification
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_Screen_Terminal_C::Set_Content_Justification()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.Set Content Justification");

	UWidget_Screen_Terminal_C_Set_Content_Justification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.Get Subtext Text
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_Screen_Terminal_C::Get_Subtext_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.Get Subtext Text");

	UWidget_Screen_Terminal_C_Get_Subtext_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.Get Subtext Visibility
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_Screen_Terminal_C::Get_Subtext_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.Get Subtext Visibility");

	UWidget_Screen_Terminal_C_Get_Subtext_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.Add Option
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_Screen_Option_C** Option                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Screen_Terminal_C::Add_Option(class UWidget_Screen_Option_C** Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.Add Option");

	UWidget_Screen_Terminal_C_Add_Option_Params params;
	params.Option = Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.Clear Options
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Screen_Terminal_C::Clear_Options()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.Clear Options");

	UWidget_Screen_Terminal_C_Clear_Options_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.OnDialogUpdate
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_Screen_Terminal_C::OnDialogUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.OnDialogUpdate");

	UWidget_Screen_Terminal_C_OnDialogUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.InitScreen
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Screen_Terminal_C::InitScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.InitScreen");

	UWidget_Screen_Terminal_C_InitScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.BndEvt__Header_K2Node_ComponentBoundEvent_165_OnTextFilled__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)

void UWidget_Screen_Terminal_C::BndEvt__Header_K2Node_ComponentBoundEvent_165_OnTextFilled__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.BndEvt__Header_K2Node_ComponentBoundEvent_165_OnTextFilled__DelegateSignature");

	UWidget_Screen_Terminal_C_BndEvt__Header_K2Node_ComponentBoundEvent_165_OnTextFilled__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.OptionsUpdated
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Screen_Terminal_C::OptionsUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.OptionsUpdated");

	UWidget_Screen_Terminal_C_OptionsUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.BndEvt__FocusButtonWidget_0_K2Node_ComponentBoundEvent_308_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Screen_Terminal_C::BndEvt__FocusButtonWidget_0_K2Node_ComponentBoundEvent_308_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.BndEvt__FocusButtonWidget_0_K2Node_ComponentBoundEvent_308_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Screen_Terminal_C_BndEvt__FocusButtonWidget_0_K2Node_ComponentBoundEvent_308_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.DelayFocus
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_Screen_Terminal_C::DelayFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.DelayFocus");

	UWidget_Screen_Terminal_C_DelayFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.BndEvt__Body_K2Node_ComponentBoundEvent_18_OnTextFilled__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)

void UWidget_Screen_Terminal_C::BndEvt__Body_K2Node_ComponentBoundEvent_18_OnTextFilled__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.BndEvt__Body_K2Node_ComponentBoundEvent_18_OnTextFilled__DelegateSignature");

	UWidget_Screen_Terminal_C_BndEvt__Body_K2Node_ComponentBoundEvent_18_OnTextFilled__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.DelayFocusOverlayButton
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_Screen_Terminal_C::DelayFocusOverlayButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.DelayFocusOverlayButton");

	UWidget_Screen_Terminal_C_DelayFocusOverlayButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.ExecuteUbergraph_Widget_Screen_Terminal
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Screen_Terminal_C::ExecuteUbergraph_Widget_Screen_Terminal(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Screen_Terminal.Widget_Screen_Terminal_C.ExecuteUbergraph_Widget_Screen_Terminal");

	UWidget_Screen_Terminal_C_ExecuteUbergraph_Widget_Screen_Terminal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
