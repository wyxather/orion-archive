// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_NewWorldTab_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_NewWorldTab.Widget_NewWorldTab_C.IsEnabled
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsEnabled                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_NewWorldTab_C::IsEnabled(bool* IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_NewWorldTab.Widget_NewWorldTab_C.IsEnabled");

	UWidget_NewWorldTab_C_IsEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsEnabled != nullptr)
		*IsEnabled = params.IsEnabled;
}


// Function Widget_NewWorldTab.Widget_NewWorldTab_C.SetQuestInfo
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRemnantQuestEntry*     Info                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          Valid                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_NewWorldTab_C::SetQuestInfo(struct FRemnantQuestEntry* Info, bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_NewWorldTab.Widget_NewWorldTab_C.SetQuestInfo");

	UWidget_NewWorldTab_C_SetQuestInfo_Params params;
	params.Info = Info;
	params.Valid = Valid;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_NewWorldTab.Widget_NewWorldTab_C.Refresh
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_NewWorldTab_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_NewWorldTab.Widget_NewWorldTab_C.Refresh");

	UWidget_NewWorldTab_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_NewWorldTab.Widget_NewWorldTab_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_NewWorldTab_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_NewWorldTab.Widget_NewWorldTab_C.Construct");

	UWidget_NewWorldTab_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_NewWorldTab.Widget_NewWorldTab_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_NewWorldTab_C::BndEvt__FocusButton_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_NewWorldTab.Widget_NewWorldTab_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_NewWorldTab_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_NewWorldTab.Widget_NewWorldTab_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_NewWorldTab_C::BndEvt__FocusButton_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_NewWorldTab.Widget_NewWorldTab_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_NewWorldTab_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_NewWorldTab.Widget_NewWorldTab_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnNavigationDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// EUINavigation*                 Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_NewWorldTab_C::BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnNavigationDelegate__DelegateSignature(EUINavigation* Direction, class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_NewWorldTab.Widget_NewWorldTab_C.BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnNavigationDelegate__DelegateSignature");

	UWidget_NewWorldTab_C_BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnNavigationDelegate__DelegateSignature_Params params;
	params.Direction = Direction;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_NewWorldTab.Widget_NewWorldTab_C.ExecuteUbergraph_Widget_NewWorldTab
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_NewWorldTab_C::ExecuteUbergraph_Widget_NewWorldTab(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_NewWorldTab.Widget_NewWorldTab_C.ExecuteUbergraph_Widget_NewWorldTab");

	UWidget_NewWorldTab_C_ExecuteUbergraph_Widget_NewWorldTab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_NewWorldTab.Widget_NewWorldTab_C.OnRight__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWidget_NewWorldTab_C::OnRight__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_NewWorldTab.Widget_NewWorldTab_C.OnRight__DelegateSignature");

	UWidget_NewWorldTab_C_OnRight__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_NewWorldTab.Widget_NewWorldTab_C.OnLeft__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWidget_NewWorldTab_C::OnLeft__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_NewWorldTab.Widget_NewWorldTab_C.OnLeft__DelegateSignature");

	UWidget_NewWorldTab_C_OnLeft__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_NewWorldTab.Widget_NewWorldTab_C.OnSelected__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWidget_NewWorldTab_C::OnSelected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_NewWorldTab.Widget_NewWorldTab_C.OnSelected__DelegateSignature");

	UWidget_NewWorldTab_C_OnSelected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
