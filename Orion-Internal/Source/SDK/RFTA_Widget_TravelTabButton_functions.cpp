// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_TravelTabButton_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_TravelTabButton.Widget_TravelTabButton_C.IsPressed
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_TravelTabButton_C::IsPressed(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TravelTabButton.Widget_TravelTabButton_C.IsPressed");

	UWidget_TravelTabButton_C_IsPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Widget_TravelTabButton.Widget_TravelTabButton_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_TravelTabButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TravelTabButton.Widget_TravelTabButton_C.Construct");

	UWidget_TravelTabButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TravelTabButton.Widget_TravelTabButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_77_OnTabFocusDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Tab                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget**                Panel                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_TravelTabButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_77_OnTabFocusDelegate__DelegateSignature(class UWidget** Tab, class UWidget** Panel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TravelTabButton.Widget_TravelTabButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_77_OnTabFocusDelegate__DelegateSignature");

	UWidget_TravelTabButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_77_OnTabFocusDelegate__DelegateSignature_Params params;
	params.Tab = Tab;
	params.Panel = Panel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TravelTabButton.Widget_TravelTabButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_83_OnButtonReleasedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)

void UWidget_TravelTabButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_83_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TravelTabButton.Widget_TravelTabButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_83_OnButtonReleasedEvent__DelegateSignature");

	UWidget_TravelTabButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_83_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TravelTabButton.Widget_TravelTabButton_C.ExecuteUbergraph_Widget_TravelTabButton
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_TravelTabButton_C::ExecuteUbergraph_Widget_TravelTabButton(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TravelTabButton.Widget_TravelTabButton_C.ExecuteUbergraph_Widget_TravelTabButton");

	UWidget_TravelTabButton_C_ExecuteUbergraph_Widget_TravelTabButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_TravelTabButton.Widget_TravelTabButton_C.AnimateLine__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWidget_TravelTabButton_C::AnimateLine__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_TravelTabButton.Widget_TravelTabButton_C.AnimateLine__DelegateSignature");

	UWidget_TravelTabButton_C_AnimateLine__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
