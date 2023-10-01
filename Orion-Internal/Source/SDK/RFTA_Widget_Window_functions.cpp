// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Window_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Window.Widget_Window_C.Get Use Visibility
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UWidget_Window_C::Get_Use_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Window.Widget_Window_C.Get Use Visibility");

	UWidget_Window_C_Get_Use_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Window.Widget_Window_C.GetBrush_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UWidget_Window_C::GetBrush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Window.Widget_Window_C.GetBrush_1");

	UWidget_Window_C_GetBrush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Window.Widget_Window_C.Get_Overlay_Visibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_Window_C::Get_Overlay_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Window.Widget_Window_C.Get_Overlay_Visibility_1");

	UWidget_Window_C_Get_Overlay_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Window.Widget_Window_C.SetCaption
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_Window_C::SetCaption(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Window.Widget_Window_C.SetCaption");

	UWidget_Window_C_SetCaption_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Window.Widget_Window_C.Get_Close_Visibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_Window_C::Get_Close_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Window.Widget_Window_C.Get_Close_Visibility_1");

	UWidget_Window_C_Get_Close_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Window.Widget_Window_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_Window_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Window.Widget_Window_C.Construct");

	UWidget_Window_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Window.Widget_Window_C.BndEvt__FocusButtonWidget_101_K2Node_ComponentBoundEvent_93_OnButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Window_C::BndEvt__FocusButtonWidget_101_K2Node_ComponentBoundEvent_93_OnButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Window.Widget_Window_C.BndEvt__FocusButtonWidget_101_K2Node_ComponentBoundEvent_93_OnButtonClickedEvent__DelegateSignature");

	UWidget_Window_C_BndEvt__FocusButtonWidget_101_K2Node_ComponentBoundEvent_93_OnButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Window.Widget_Window_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_276_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Window_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_276_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Window.Widget_Window_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_276_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Window_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_276_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Window.Widget_Window_C.ExecuteUbergraph_Widget_Window
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Window_C::ExecuteUbergraph_Widget_Window(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Window.Widget_Window_C.ExecuteUbergraph_Widget_Window");

	UWidget_Window_C_ExecuteUbergraph_Widget_Window_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Window.Widget_Window_C.Closed__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWidget_Window_C::Closed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Window.Widget_Window_C.Closed__DelegateSignature");

	UWidget_Window_C_Closed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
