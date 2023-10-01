// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Inspectable_NavButtons_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Inspectable_NavButtons.Widget_Inspectable_NavButtons_C.ToggleNextButtonVisibility
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          MakeVisible                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_Inspectable_NavButtons_C::ToggleNextButtonVisibility(bool* MakeVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inspectable_NavButtons.Widget_Inspectable_NavButtons_C.ToggleNextButtonVisibility");

	UWidget_Inspectable_NavButtons_C_ToggleNextButtonVisibility_Params params;
	params.MakeVisible = MakeVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Inspectable_NavButtons.Widget_Inspectable_NavButtons_C.TogglePrevButtonVisibility
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          MakeVisible                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_Inspectable_NavButtons_C::TogglePrevButtonVisibility(bool* MakeVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inspectable_NavButtons.Widget_Inspectable_NavButtons_C.TogglePrevButtonVisibility");

	UWidget_Inspectable_NavButtons_C_TogglePrevButtonVisibility_Params params;
	params.MakeVisible = MakeVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Inspectable_NavButtons.Widget_Inspectable_NavButtons_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_Inspectable_NavButtons_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inspectable_NavButtons.Widget_Inspectable_NavButtons_C.Construct");

	UWidget_Inspectable_NavButtons_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Inspectable_NavButtons.Widget_Inspectable_NavButtons_C.SetNavBindings
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_Inspectable_NavButtons_C::SetNavBindings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inspectable_NavButtons.Widget_Inspectable_NavButtons_C.SetNavBindings");

	UWidget_Inspectable_NavButtons_C_SetNavBindings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Inspectable_NavButtons.Widget_Inspectable_NavButtons_C.OnNavLeft
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Inspectable_NavButtons_C::OnNavLeft(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inspectable_NavButtons.Widget_Inspectable_NavButtons_C.OnNavLeft");

	UWidget_Inspectable_NavButtons_C_OnNavLeft_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Inspectable_NavButtons.Widget_Inspectable_NavButtons_C.OnNavRight
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Inspectable_NavButtons_C::OnNavRight(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inspectable_NavButtons.Widget_Inspectable_NavButtons_C.OnNavRight");

	UWidget_Inspectable_NavButtons_C_OnNavRight_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Inspectable_NavButtons.Widget_Inspectable_NavButtons_C.ExecuteUbergraph_Widget_Inspectable_NavButtons
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Inspectable_NavButtons_C::ExecuteUbergraph_Widget_Inspectable_NavButtons(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inspectable_NavButtons.Widget_Inspectable_NavButtons_C.ExecuteUbergraph_Widget_Inspectable_NavButtons");

	UWidget_Inspectable_NavButtons_C_ExecuteUbergraph_Widget_Inspectable_NavButtons_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Inspectable_NavButtons.Widget_Inspectable_NavButtons_C.OnNavigatePrev__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWidget_Inspectable_NavButtons_C::OnNavigatePrev__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inspectable_NavButtons.Widget_Inspectable_NavButtons_C.OnNavigatePrev__DelegateSignature");

	UWidget_Inspectable_NavButtons_C_OnNavigatePrev__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Inspectable_NavButtons.Widget_Inspectable_NavButtons_C.OnNavigateNext__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWidget_Inspectable_NavButtons_C::OnNavigateNext__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Inspectable_NavButtons.Widget_Inspectable_NavButtons_C.OnNavigateNext__DelegateSignature");

	UWidget_Inspectable_NavButtons_C_OnNavigateNext__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
