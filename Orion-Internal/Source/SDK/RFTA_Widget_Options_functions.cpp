// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_Options_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_Options.Widget_Options_C.InitList
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::InitList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.InitList");

	UWidget_Options_C_InitList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.SetEnableResetButton
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_Options_C::SetEnableResetButton(bool* enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.SetEnableResetButton");

	UWidget_Options_C_SetEnableResetButton_Params params;
	params.enable = enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.Get_ResetBtn_Visibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_Options_C::Get_ResetBtn_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.Get_ResetBtn_Visibility_1");

	UWidget_Options_C_Get_ResetBtn_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Options.Widget_Options_C.Get_LanguageTab_Visibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_Options_C::Get_LanguageTab_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.Get_LanguageTab_Visibility_1");

	UWidget_Options_C_Get_LanguageTab_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Options.Widget_Options_C.MenuSelect
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::MenuSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.MenuSelect");

	UWidget_Options_C_MenuSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.GetVisibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_Options_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.GetVisibility_1");

	UWidget_Options_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Options.Widget_Options_C.Get_ItemTypeLabel_Text_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWidget_Options_C::Get_ItemTypeLabel_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.Get_ItemTypeLabel_Text_1");

	UWidget_Options_C_Get_ItemTypeLabel_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_Options.Widget_Options_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_Options_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.Construct");

	UWidget_Options_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Options_C::BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Options_C_BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.BndEvt__SaveAndExitTab_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)

void UWidget_Options_C::BndEvt__SaveAndExitTab_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.BndEvt__SaveAndExitTab_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UWidget_Options_C_BndEvt__SaveAndExitTab_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.BndEvt__VideoTab_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)

void UWidget_Options_C::BndEvt__VideoTab_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.BndEvt__VideoTab_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");

	UWidget_Options_C_BndEvt__VideoTab_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.BndEvt__AudioTab_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)

void UWidget_Options_C::BndEvt__AudioTab_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.BndEvt__AudioTab_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");

	UWidget_Options_C_BndEvt__AudioTab_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.BndEvt__GameplayTab_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)

void UWidget_Options_C::BndEvt__GameplayTab_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.BndEvt__GameplayTab_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature");

	UWidget_Options_C_BndEvt__GameplayTab_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.BndEvt__KeybindsTab_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)

void UWidget_Options_C::BndEvt__KeybindsTab_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.BndEvt__KeybindsTab_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature");

	UWidget_Options_C_BndEvt__KeybindsTab_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.Destruct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_Options_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.Destruct");

	UWidget_Options_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.OnUpdateVideoSettings
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::OnUpdateVideoSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.OnUpdateVideoSettings");

	UWidget_Options_C_OnUpdateVideoSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.SaveNonResolutionSettings
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::SaveNonResolutionSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.SaveNonResolutionSettings");

	UWidget_Options_C_SaveNonResolutionSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.ShowResolutionConfirmation
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::ShowResolutionConfirmation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.ShowResolutionConfirmation");

	UWidget_Options_C_ShowResolutionConfirmation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.BndEvt__AudioTab_K2Node_ComponentBoundEvent_4_OnTabFocusDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Tab                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget**                Panel                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Options_C::BndEvt__AudioTab_K2Node_ComponentBoundEvent_4_OnTabFocusDelegate__DelegateSignature(class UWidget** Tab, class UWidget** Panel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.BndEvt__AudioTab_K2Node_ComponentBoundEvent_4_OnTabFocusDelegate__DelegateSignature");

	UWidget_Options_C_BndEvt__AudioTab_K2Node_ComponentBoundEvent_4_OnTabFocusDelegate__DelegateSignature_Params params;
	params.Tab = Tab;
	params.Panel = Panel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.BndEvt__GameplayTab_K2Node_ComponentBoundEvent_5_OnTabFocusDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Tab                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget**                Panel                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Options_C::BndEvt__GameplayTab_K2Node_ComponentBoundEvent_5_OnTabFocusDelegate__DelegateSignature(class UWidget** Tab, class UWidget** Panel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.BndEvt__GameplayTab_K2Node_ComponentBoundEvent_5_OnTabFocusDelegate__DelegateSignature");

	UWidget_Options_C_BndEvt__GameplayTab_K2Node_ComponentBoundEvent_5_OnTabFocusDelegate__DelegateSignature_Params params;
	params.Tab = Tab;
	params.Panel = Panel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.BndEvt__KeybindsTab_K2Node_ComponentBoundEvent_6_OnTabFocusDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Tab                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget**                Panel                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Options_C::BndEvt__KeybindsTab_K2Node_ComponentBoundEvent_6_OnTabFocusDelegate__DelegateSignature(class UWidget** Tab, class UWidget** Panel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.BndEvt__KeybindsTab_K2Node_ComponentBoundEvent_6_OnTabFocusDelegate__DelegateSignature");

	UWidget_Options_C_BndEvt__KeybindsTab_K2Node_ComponentBoundEvent_6_OnTabFocusDelegate__DelegateSignature_Params params;
	params.Tab = Tab;
	params.Panel = Panel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.BndEvt__VideoTab_K2Node_ComponentBoundEvent_10_OnTabFocusDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Tab                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget**                Panel                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Options_C::BndEvt__VideoTab_K2Node_ComponentBoundEvent_10_OnTabFocusDelegate__DelegateSignature(class UWidget** Tab, class UWidget** Panel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.BndEvt__VideoTab_K2Node_ComponentBoundEvent_10_OnTabFocusDelegate__DelegateSignature");

	UWidget_Options_C_BndEvt__VideoTab_K2Node_ComponentBoundEvent_10_OnTabFocusDelegate__DelegateSignature_Params params;
	params.Tab = Tab;
	params.Panel = Panel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.BndEvt__LanguageTab_K2Node_ComponentBoundEvent_7_OnTabFocusDelegate__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Tab                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget**                Panel                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Options_C::BndEvt__LanguageTab_K2Node_ComponentBoundEvent_7_OnTabFocusDelegate__DelegateSignature(class UWidget** Tab, class UWidget** Panel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.BndEvt__LanguageTab_K2Node_ComponentBoundEvent_7_OnTabFocusDelegate__DelegateSignature");

	UWidget_Options_C_BndEvt__LanguageTab_K2Node_ComponentBoundEvent_7_OnTabFocusDelegate__DelegateSignature_Params params;
	params.Tab = Tab;
	params.Panel = Panel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.BndEvt__LanguageTab_K2Node_ComponentBoundEvent_13_OnButtonPressedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)

void UWidget_Options_C::BndEvt__LanguageTab_K2Node_ComponentBoundEvent_13_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.BndEvt__LanguageTab_K2Node_ComponentBoundEvent_13_OnButtonPressedEvent__DelegateSignature");

	UWidget_Options_C_BndEvt__LanguageTab_K2Node_ComponentBoundEvent_13_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.RefocusOptions
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_Options_C::RefocusOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.RefocusOptions");

	UWidget_Options_C_RefocusOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.BndEvt__ResetBtn_K2Node_ComponentBoundEvent_9_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Options_C::BndEvt__ResetBtn_K2Node_ComponentBoundEvent_9_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.BndEvt__ResetBtn_K2Node_ComponentBoundEvent_9_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_Options_C_BndEvt__ResetBtn_K2Node_ComponentBoundEvent_9_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.OnReset
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Options_C::OnReset(struct FName* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.OnReset");

	UWidget_Options_C_OnReset_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_Options.Widget_Options_C.ExecuteUbergraph_Widget_Options
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_Options_C::ExecuteUbergraph_Widget_Options(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Options.Widget_Options_C.ExecuteUbergraph_Widget_Options");

	UWidget_Options_C_ExecuteUbergraph_Widget_Options_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
