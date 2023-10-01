// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_OptionsSaveExit_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.IsHardcoreSurvival
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsHardcoreSurvival             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_OptionsSaveExit_C::IsHardcoreSurvival(bool* IsHardcoreSurvival)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.IsHardcoreSurvival");

	UWidget_OptionsSaveExit_C_IsHardcoreSurvival_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsHardcoreSurvival != nullptr)
		*IsHardcoreSurvival = params.IsHardcoreSurvival;
}


// Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.CanChangeMatchmakingOptions
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           CanShow                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_OptionsSaveExit_C::CanChangeMatchmakingOptions(bool* CanShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.CanChangeMatchmakingOptions");

	UWidget_OptionsSaveExit_C_CanChangeMatchmakingOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanShow != nullptr)
		*CanShow = params.CanShow;
}


// Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.CheckExitState
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ShowingWarning                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_OptionsSaveExit_C::CheckExitState(struct FName* Action, bool* ShowingWarning)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.CheckExitState");

	UWidget_OptionsSaveExit_C_CheckExitState_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShowingWarning != nullptr)
		*ShowingWarning = params.ShowingWarning;
}


// Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.ShowExitWarning
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AUIActor*                UIActor                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_OptionsSaveExit_C::ShowExitWarning(struct FName* Reason, class AUIActor** UIActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.ShowExitWarning");

	UWidget_OptionsSaveExit_C_ShowExitWarning_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UIActor != nullptr)
		*UIActor = params.UIActor;
}


// Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.IsInSurvival
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsSurvival                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWidget_OptionsSaveExit_C::IsInSurvival(bool* IsSurvival)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.IsInSurvival");

	UWidget_OptionsSaveExit_C_IsInSurvival_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSurvival != nullptr)
		*IsSurvival = params.IsSurvival;
}


// Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.Get_ExitApplicationWarning_Visibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_OptionsSaveExit_C::Get_ExitApplicationWarning_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.Get_ExitApplicationWarning_Visibility_1");

	UWidget_OptionsSaveExit_C_Get_ExitApplicationWarning_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.Get_ExitMainMenuWarning_Visibility_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_OptionsSaveExit_C::Get_ExitMainMenuWarning_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.Get_ExitMainMenuWarning_Visibility_1");

	UWidget_OptionsSaveExit_C_Get_ExitMainMenuWarning_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.GetbIsEnabled_2
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWidget_OptionsSaveExit_C::GetbIsEnabled_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.GetbIsEnabled_2");

	UWidget_OptionsSaveExit_C_GetbIsEnabled_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.GetbIsEnabled_1
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWidget_OptionsSaveExit_C::GetbIsEnabled_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.GetbIsEnabled_1");

	UWidget_OptionsSaveExit_C_GetbIsEnabled_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.AddMatchmakingOptions
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWidget_OptionsSaveExit_C::AddMatchmakingOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.AddMatchmakingOptions");

	UWidget_OptionsSaveExit_C_AddMatchmakingOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.SaveUserSettings
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_OptionsSaveExit_C::SaveUserSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.SaveUserSettings");

	UWidget_OptionsSaveExit_C_SaveUserSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.UpdateHostOptions
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_OptionsSaveExit_C::UpdateHostOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.UpdateHostOptions");

	UWidget_OptionsSaveExit_C_UpdateHostOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.GetExitApplicationVis
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UWidget_OptionsSaveExit_C::GetExitApplicationVis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.GetExitApplicationVis");

	UWidget_OptionsSaveExit_C_GetExitApplicationVis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.SaveCharacterData
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_OptionsSaveExit_C::SaveCharacterData()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.SaveCharacterData");

	UWidget_OptionsSaveExit_C_SaveCharacterData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_OptionsSaveExit_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.Construct");

	UWidget_OptionsSaveExit_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.BndEvt__Widget_FixedSetting_1_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_OptionsSaveExit_C::BndEvt__Widget_FixedSetting_1_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.BndEvt__Widget_FixedSetting_1_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_OptionsSaveExit_C_BndEvt__Widget_FixedSetting_1_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.BndEvt__Widget_FixedSetting_0_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_OptionsSaveExit_C::BndEvt__Widget_FixedSetting_0_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.BndEvt__Widget_FixedSetting_0_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_OptionsSaveExit_C_BndEvt__Widget_FixedSetting_0_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.RefocusList
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_OptionsSaveExit_C::RefocusList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.RefocusList");

	UWidget_OptionsSaveExit_C_RefocusList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.BndEvt__Widget_FixedSetting_2_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_OptionsSaveExit_C::BndEvt__Widget_FixedSetting_2_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.BndEvt__Widget_FixedSetting_2_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_OptionsSaveExit_C_BndEvt__Widget_FixedSetting_2_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.OnExitKickBan
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_OptionsSaveExit_C::OnExitKickBan(struct FName* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.OnExitKickBan");

	UWidget_OptionsSaveExit_C_OnExitKickBan_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.Destruct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_OptionsSaveExit_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.Destruct");

	UWidget_OptionsSaveExit_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.OnDialogResult
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_OptionsSaveExit_C::OnDialogResult(struct FName* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.OnDialogResult");

	UWidget_OptionsSaveExit_C_OnDialogResult_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.UpdateMatchmakingSettings
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWidget_OptionsSaveExit_C::UpdateMatchmakingSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.UpdateMatchmakingSettings");

	UWidget_OptionsSaveExit_C_UpdateMatchmakingSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.ExitToMenuWarningResult
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_OptionsSaveExit_C::ExitToMenuWarningResult(struct FName* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.ExitToMenuWarningResult");

	UWidget_OptionsSaveExit_C_ExitToMenuWarningResult_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.ExitGameWarningResult
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_OptionsSaveExit_C::ExitGameWarningResult(struct FName* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.ExitGameWarningResult");

	UWidget_OptionsSaveExit_C_ExitGameWarningResult_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.ExecuteUbergraph_Widget_OptionsSaveExit
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_OptionsSaveExit_C::ExecuteUbergraph_Widget_OptionsSaveExit(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_OptionsSaveExit.Widget_OptionsSaveExit_C.ExecuteUbergraph_Widget_OptionsSaveExit");

	UWidget_OptionsSaveExit_C_ExecuteUbergraph_Widget_OptionsSaveExit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
