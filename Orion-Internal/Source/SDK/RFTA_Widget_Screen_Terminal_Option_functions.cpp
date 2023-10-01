// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Screen_Terminal_Option_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Screen_Terminal_Option.Widget_Screen_Terminal_Option_C.SetOverrideLocalizationFontSize
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Screen_Terminal_Option_C::SetOverrideLocalizationFontSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Screen_Terminal_Option.Widget_Screen_Terminal_Option_C.SetOverrideLocalizationFontSize");

	UWidget_Screen_Terminal_Option_C_SetOverrideLocalizationFontSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Screen_Terminal_Option.Widget_Screen_Terminal_Option_C.FillIn
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Screen_Terminal_Option_C::FillIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Screen_Terminal_Option.Widget_Screen_Terminal_Option_C.FillIn");

	UWidget_Screen_Terminal_Option_C_FillIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Screen_Terminal_Option.Widget_Screen_Terminal_Option_C.Get_Label_ColorAndOpacity_1
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UWidget_Screen_Terminal_Option_C::Get_Label_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Screen_Terminal_Option.Widget_Screen_Terminal_Option_C.Get_Label_ColorAndOpacity_1");

	UWidget_Screen_Terminal_Option_C_Get_Label_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Screen_Terminal_Option.Widget_Screen_Terminal_Option_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_Screen_Terminal_Option_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Screen_Terminal_Option.Widget_Screen_Terminal_Option_C.Construct");

	UWidget_Screen_Terminal_Option_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Screen_Terminal_Option.Widget_Screen_Terminal_Option_C.Set Option Value
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget_Screen_C**       Screen                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDialogOption*          Option                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_Screen_Terminal_Option_C::Set_Option_Value(class UWidget_Screen_C** Screen, struct FDialogOption* Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Screen_Terminal_Option.Widget_Screen_Terminal_Option_C.Set Option Value");

	UWidget_Screen_Terminal_Option_C_Set_Option_Value_Params params;
	params.Screen = Screen;
	params.Option = Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Screen_Terminal_Option.Widget_Screen_Terminal_Option_C.BndEvt__UI_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)

void UWidget_Screen_Terminal_Option_C::BndEvt__UI_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Screen_Terminal_Option.Widget_Screen_Terminal_Option_C.BndEvt__UI_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWidget_Screen_Terminal_Option_C_BndEvt__UI_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Screen_Terminal_Option.Widget_Screen_Terminal_Option_C.BndEvt__OptionLabel_K2Node_ComponentBoundEvent_75_OnTextFilled__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)

void UWidget_Screen_Terminal_Option_C::BndEvt__OptionLabel_K2Node_ComponentBoundEvent_75_OnTextFilled__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Screen_Terminal_Option.Widget_Screen_Terminal_Option_C.BndEvt__OptionLabel_K2Node_ComponentBoundEvent_75_OnTextFilled__DelegateSignature");

	UWidget_Screen_Terminal_Option_C_BndEvt__OptionLabel_K2Node_ComponentBoundEvent_75_OnTextFilled__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Screen_Terminal_Option.Widget_Screen_Terminal_Option_C.ExecuteUbergraph_Widget_Screen_Terminal_Option
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Screen_Terminal_Option_C::ExecuteUbergraph_Widget_Screen_Terminal_Option(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Screen_Terminal_Option.Widget_Screen_Terminal_Option_C.ExecuteUbergraph_Widget_Screen_Terminal_Option");

	UWidget_Screen_Terminal_Option_C_ExecuteUbergraph_Widget_Screen_Terminal_Option_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
