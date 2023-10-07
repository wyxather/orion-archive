#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass MainMenuWidget.MainMenuWidget_C
// (None)

class UClass* UMainMenuWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MainMenuWidget_C");

	return Clss;
}


// MainMenuWidget_C MainMenuWidget.Default__MainMenuWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMainMenuWidget_C* UMainMenuWidget_C::GetDefaultObj()
{
	static class UMainMenuWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMainMenuWidget_C*>(UMainMenuWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MainMenuWidget.MainMenuWidget_C.PreCloseActionFromPartyChat
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UMainMenuWidget_C::PreCloseActionFromPartyChat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "PreCloseActionFromPartyChat");

	Params::UMainMenuWidget_C_PreCloseActionFromPartyChat_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MainMenuWidget.MainMenuWidget_C.EndState
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMAINMENUSTATE          State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuWidget_C::EndState(enum class EMAINMENUSTATE State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "EndState");

	Params::UMainMenuWidget_C_EndState_Params Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuWidget.MainMenuWidget_C.BeginState
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMAINMENUSTATE          State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuWidget_C::BeginState(enum class EMAINMENUSTATE State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "BeginState");

	Params::UMainMenuWidget_C_BeginState_Params Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuWidget.MainMenuWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.Debug_GetStateInfoAsString
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UMainMenuWidget_C::Debug_GetStateInfoAsString()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "Debug_GetStateInfoAsString");

	Params::UMainMenuWidget_C_Debug_GetStateInfoAsString_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MainMenuWidget.MainMenuWidget_C.ReOpenCommonUI
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::ReOpenCommonUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "ReOpenCommonUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.GetCurrentWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UKSUserWidgetBase*           CurrentWidget                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuWidget_C::GetCurrentWidget(class UKSUserWidgetBase** CurrentWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "GetCurrentWidget");

	Params::UMainMenuWidget_C_GetCurrentWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CurrentWidget != nullptr)
		*CurrentWidget = Parms.CurrentWidget;

}


// Function MainMenuWidget.MainMenuWidget_C.ClosingStackCheck
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsClosing                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuWidget_C::ClosingStackCheck(bool* IsClosing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "ClosingStackCheck");

	Params::UMainMenuWidget_C_ClosingStackCheck_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsClosing != nullptr)
		*IsClosing = Parms.IsClosing;

}


// Function MainMenuWidget.MainMenuWidget_C.GetMainMenuList
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMainMenuListBase*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UMainMenuListBase* UMainMenuWidget_C::GetMainMenuList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "GetMainMenuList");

	Params::UMainMenuWidget_C_GetMainMenuList_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MainMenuWidget.MainMenuWidget_C.SequenceRequestCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EREQUEST_RESULT         Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuWidget_C::SequenceRequestCallback(enum class EREQUEST_RESULT Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "SequenceRequestCallback");

	Params::UMainMenuWidget_C_SequenceRequestCallback_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuWidget.MainMenuWidget_C.HideRadarMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::HideRadarMap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "HideRadarMap");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.CanMainMenuClose
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UMainMenuWidget_C::CanMainMenuClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "CanMainMenuClose");

	Params::UMainMenuWidget_C_CanMainMenuClose_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MainMenuWidget.MainMenuWidget_C.PreCloseAction
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UMainMenuWidget_C::PreCloseAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "PreCloseAction");

	Params::UMainMenuWidget_C_PreCloseAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MainMenuWidget.MainMenuWidget_C.OpenMissionRecordReOpen
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UMainMenuWidget_C::OpenMissionRecordReOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "OpenMissionRecordReOpen");

	Params::UMainMenuWidget_C_OpenMissionRecordReOpen_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MainMenuWidget.MainMenuWidget_C.OpenFastWorldMap
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UMainMenuWidget_C::OpenFastWorldMap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "OpenFastWorldMap");

	Params::UMainMenuWidget_C_OpenFastWorldMap_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MainMenuWidget.MainMenuWidget_C.IsFastWorldMapMode
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               FastWorldMapMode                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuWidget_C::IsFastWorldMapMode(bool* FastWorldMapMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "IsFastWorldMapMode");

	Params::UMainMenuWidget_C_IsFastWorldMapMode_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (FastWorldMapMode != nullptr)
		*FastWorldMapMode = Parms.FastWorldMapMode;

}


// Function MainMenuWidget.MainMenuWidget_C.BackTitleCallback
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuWidget_C::BackTitleCallback(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "BackTitleCallback");

	Params::UMainMenuWidget_C_BackTitleCallback_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuWidget.MainMenuWidget_C.QuitGameCallBack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuWidget_C::QuitGameCallBack(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "QuitGameCallBack");

	Params::UMainMenuWidget_C_QuitGameCallBack_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuWidget.MainMenuWidget_C.BindFinishCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSUserWidgetBase*           WidgetBase                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuWidget_C::BindFinishCallback(class UKSUserWidgetBase* WidgetBase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "BindFinishCallback");

	Params::UMainMenuWidget_C_BindFinishCallback_Params Parms{};

	Parms.WidgetBase = WidgetBase;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuWidget.MainMenuWidget_C.UnBindFinishCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSUserWidgetBase*           TargetWidgetBase                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuWidget_C::UnBindFinishCallback(class UKSUserWidgetBase* TargetWidgetBase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "UnBindFinishCallback");

	Params::UMainMenuWidget_C_UnBindFinishCallback_Params Parms{};

	Parms.TargetWidgetBase = TargetWidgetBase;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuWidget.MainMenuWidget_C.CloseFinishCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::CloseFinishCallback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "CloseFinishCallback");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.SetStartState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMAINMENUSTATE          StartState                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuWidget_C::SetStartState(enum class EMAINMENUSTATE StartState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "SetStartState");

	Params::UMainMenuWidget_C_SetStartState_Params Parms{};

	Parms.StartState = StartState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuWidget.MainMenuWidget_C.Init
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UMainMenuWidget_C::Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "Init");

	Params::UMainMenuWidget_C_Init_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MainMenuWidget.MainMenuWidget_C.IsChangeStateCloseFinish
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UMainMenuWidget_C::IsChangeStateCloseFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "IsChangeStateCloseFinish");

	Params::UMainMenuWidget_C_IsChangeStateCloseFinish_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MainMenuWidget.MainMenuWidget_C.IsChangeStateOpenFinish
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UMainMenuWidget_C::IsChangeStateOpenFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "IsChangeStateOpenFinish");

	Params::UMainMenuWidget_C_IsChangeStateOpenFinish_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MainMenuWidget.MainMenuWidget_C.SetReference
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UMainMenuWidget_C::SetReference()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "SetReference");

	Params::UMainMenuWidget_C_SetReference_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MainMenuWidget.MainMenuWidget_C.OnRButtonRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::OnRButtonRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "OnRButtonRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.CheckSaving
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Saving                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuWidget_C::CheckSaving(bool* Saving)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "CheckSaving");

	Params::UMainMenuWidget_C_CheckSaving_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Saving != nullptr)
		*Saving = Parms.Saving;

}


// Function MainMenuWidget.MainMenuWidget_C.CheckShowAbilityMenu
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::CheckShowAbilityMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "CheckShowAbilityMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.RightAxisDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::RightAxisDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "RightAxisDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.RightAxisUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::RightAxisUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "RightAxisUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.LeftAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisYValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Gamepad                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuWidget_C::LeftAxisY(float AxisYValue, bool Gamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "LeftAxisY");

	Params::UMainMenuWidget_C_LeftAxisY_Params Parms{};

	Parms.AxisYValue = AxisYValue;
	Parms.Gamepad = Gamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuWidget.MainMenuWidget_C.LeftAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisXValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Gamepad                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuWidget_C::LeftAxisX(float AxisXValue, bool Gamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "LeftAxisX");

	Params::UMainMenuWidget_C_LeftAxisX_Params Parms{};

	Parms.AxisXValue = AxisXValue;
	Parms.Gamepad = Gamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuWidget.MainMenuWidget_C.CheckSubmenuPlayingAnim
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsPlaying                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuWidget_C::CheckSubmenuPlayingAnim(bool* IsPlaying)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "CheckSubmenuPlayingAnim");

	Params::UMainMenuWidget_C_CheckSubmenuPlayingAnim_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsPlaying != nullptr)
		*IsPlaying = Parms.IsPlaying;

}


// Function MainMenuWidget.MainMenuWidget_C.CheckEventPreview
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsEventPreview                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuWidget_C::CheckEventPreview(bool* IsEventPreview)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "CheckEventPreview");

	Params::UMainMenuWidget_C_CheckEventPreview_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsEventPreview != nullptr)
		*IsEventPreview = Parms.IsEventPreview;

}


// Function MainMenuWidget.MainMenuWidget_C.InitPartsWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::InitPartsWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "InitPartsWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.FastClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::FastClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "FastClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.ChangeFormationCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PlaySE                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsSelectAnima                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuWidget_C::ChangeFormationCancel(bool PlaySE, bool IsSelectAnima)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "ChangeFormationCancel");

	Params::UMainMenuWidget_C_ChangeFormationCancel_Params Parms{};

	Parms.PlaySE = PlaySE;
	Parms.IsSelectAnima = IsSelectAnima;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuWidget.MainMenuWidget_C.RequestChangeFormation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ChangePartyIndex1                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ChangePartyIndex2                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsSuccess                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuWidget_C::RequestChangeFormation(int32 ChangePartyIndex1, int32 ChangePartyIndex2, bool* IsSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "RequestChangeFormation");

	Params::UMainMenuWidget_C_RequestChangeFormation_Params Parms{};

	Parms.ChangePartyIndex1 = ChangePartyIndex1;
	Parms.ChangePartyIndex2 = ChangePartyIndex2;

	UObject::ProcessEvent(Func, &Parms);

	if (IsSuccess != nullptr)
		*IsSuccess = Parms.IsSuccess;

}


// Function MainMenuWidget.MainMenuWidget_C.MenuY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::MenuY()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "MenuY");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.ChangeStateMain
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::ChangeStateMain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "ChangeStateMain");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.CursorRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::CursorRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "CursorRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.CursorLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::CursorLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "CursorLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.IsRunning
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UMainMenuWidget_C::IsRunning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "IsRunning");

	Params::UMainMenuWidget_C_IsRunning_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MainMenuWidget.MainMenuWidget_C.UpdateProc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::UpdateProc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "UpdateProc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.CheckWidgetPlayingAnim
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPlaying                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuWidget_C::CheckWidgetPlayingAnim(bool* IsPlaying)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "CheckWidgetPlayingAnim");

	Params::UMainMenuWidget_C_CheckWidgetPlayingAnim_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsPlaying != nullptr)
		*IsPlaying = Parms.IsPlaying;

}


// Function MainMenuWidget.MainMenuWidget_C.OnRButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::OnRButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "OnRButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.RightAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisYValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuWidget_C::RightAxisY(float AxisYValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "RightAxisY");

	Params::UMainMenuWidget_C_RightAxisY_Params Parms{};

	Parms.AxisYValue = AxisYValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuWidget.MainMenuWidget_C.RightAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisXValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuWidget_C::RightAxisX(float AxisXValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "RightAxisX");

	Params::UMainMenuWidget_C_RightAxisX_Params Parms{};

	Parms.AxisXValue = AxisXValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuWidget.MainMenuWidget_C.CloseMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::CloseMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "CloseMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.OnLButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::OnLButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "OnLButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.PlayAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuWidget_C::PlayAnim(class UWidgetAnimation* InAnimation, bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "PlayAnim");

	Params::UMainMenuWidget_C_PlayAnim_Params Parms{};

	Parms.InAnimation = InAnimation;
	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuWidget.MainMenuWidget_C.PostChangeMainState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::PostChangeMainState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "PostChangeMainState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.PreChangeMainState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMAINMENUSTATE          NextState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuWidget_C::PreChangeMainState(enum class EMAINMENUSTATE NextState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "PreChangeMainState");

	Params::UMainMenuWidget_C_PreChangeMainState_Params Parms{};

	Parms.NextState = NextState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuWidget.MainMenuWidget_C.Close
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "Close");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.Open
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::Open()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "Open");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.ChangeMainState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMAINMENUSTATE          NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuWidget_C::ChangeMainState(enum class EMAINMENUSTATE NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "ChangeMainState");

	Params::UMainMenuWidget_C_ChangeMainState_Params Parms{};

	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuWidget.MainMenuWidget_C.CursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::CursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "CursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.Cancel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::Cancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "Cancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.Decide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::Decide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "Decide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.CursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::CursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "CursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.OnCursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::OnCursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "OnCursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.OnCursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::OnCursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "OnCursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.OnCursorLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::OnCursorLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "OnCursorLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.OnCursorRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::OnCursorRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "OnCursorRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.OnMenuButtonX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::OnMenuButtonX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "OnMenuButtonX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.OnMenuButtonStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::OnMenuButtonStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "OnMenuButtonStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.OnMenuButtonSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::OnMenuButtonSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "OnMenuButtonSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.OnMenuDecideRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::OnMenuDecideRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "OnMenuDecideRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.OnMenuCancelRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::OnMenuCancelRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "OnMenuCancelRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.OnMenuButtonXRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::OnMenuButtonXRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "OnMenuButtonXRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.OnMenuButtonYRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::OnMenuButtonYRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "OnMenuButtonYRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.OnMenuLBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::OnMenuLBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "OnMenuLBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.OnMenuRBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::OnMenuRBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "OnMenuRBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.OnMenuButtonStartRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::OnMenuButtonStartRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "OnMenuButtonStartRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.OnMenuButtonSelectRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::OnMenuButtonSelectRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "OnMenuButtonSelectRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.OnMenuLStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::OnMenuLStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "OnMenuLStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.OnMenuRStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::OnMenuRStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "OnMenuRStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.OnPlusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::OnPlusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "OnPlusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.OnMinusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::OnMinusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "OnMinusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.OnCursorUpRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::OnCursorUpRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "OnCursorUpRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.OnCursorDownRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::OnCursorDownRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "OnCursorDownRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.OnCursorLeftRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::OnCursorLeftRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "OnCursorLeftRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.OnCursorRightRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::OnCursorRightRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "OnCursorRightRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.OnAnyButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::OnAnyButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "OnAnyButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.OnListPaging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeftInput                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMainMenuWidget_C::OnListPaging(bool IsLeftInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "OnListPaging");

	Params::UMainMenuWidget_C_OnListPaging_Params Parms{};

	Parms.IsLeftInput = IsLeftInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuWidget.MainMenuWidget_C.OnMenuRTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::OnMenuRTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "OnMenuRTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.OnMenuLTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::OnMenuLTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "OnMenuLTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.ChangeTimeZone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::ChangeTimeZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "ChangeTimeZone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.ChangeStatusRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::ChangeStatusRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "ChangeStatusRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.ChangeStatusLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::ChangeStatusLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "ChangeStatusLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.HelpScrollAxis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisaValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuWidget_C::HelpScrollAxis(float AxisaValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "HelpScrollAxis");

	Params::UMainMenuWidget_C_HelpScrollAxis_Params Parms{};

	Parms.AxisaValue = AxisaValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuWidget.MainMenuWidget_C.OnAnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::OnAnyKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "OnAnyKey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.UpdateMain
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::UpdateMain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "UpdateMain");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.OnCloseFinish
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::OnCloseFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "OnCloseFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.OnOpenFinish
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::OnOpenFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "OnOpenFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.OnMenuDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::OnMenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "OnMenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.OnMenuCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::OnMenuCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "OnMenuCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.OnMenuLB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::OnMenuLB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "OnMenuLB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.OnCursorUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::OnCursorUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "OnCursorUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.OnCursorDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::OnCursorDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "OnCursorDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.OnRightAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuWidget_C::OnRightAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "OnRightAxisX");

	Params::UMainMenuWidget_C_OnRightAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuWidget.MainMenuWidget_C.OnRightAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuWidget_C::OnRightAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "OnRightAxisY");

	Params::UMainMenuWidget_C_OnRightAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuWidget.MainMenuWidget_C.OnMenuRB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::OnMenuRB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "OnMenuRB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.UIOpen
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::UIOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "UIOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.UIClose
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::UIClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "UIClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.OnCursorRightRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::OnCursorRightRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "OnCursorRightRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.OnCursorLeftRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::OnCursorLeftRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "OnCursorLeftRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.OnMenuButtonY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::OnMenuButtonY()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "OnMenuButtonY");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.OnLeftAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuWidget_C::OnLeftAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "OnLeftAxisX");

	Params::UMainMenuWidget_C_OnLeftAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuWidget.MainMenuWidget_C.OnLeftAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuWidget_C::OnLeftAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "OnLeftAxisY");

	Params::UMainMenuWidget_C_OnLeftAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuWidget.MainMenuWidget_C.OnRightAxisUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::OnRightAxisUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "OnRightAxisUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.OnRightAxisDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::OnRightAxisDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "OnRightAxisDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.OnMenuRBRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::OnMenuRBRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "OnMenuRBRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.OnGamePadAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuWidget_C::OnGamePadAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "OnGamePadAxisX");

	Params::UMainMenuWidget_C_OnGamePadAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuWidget.MainMenuWidget_C.OnGamePadAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuWidget_C::OnGamePadAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "OnGamePadAxisY");

	Params::UMainMenuWidget_C_OnGamePadAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuWidget.MainMenuWidget_C.OnMenuRightUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::OnMenuRightUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "OnMenuRightUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.OnMenuRightDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::OnMenuRightDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "OnMenuRightDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.ClsoeWorldMap
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::ClsoeWorldMap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "ClsoeWorldMap");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.WorldMapZoomIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::WorldMapZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "WorldMapZoomIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.WorldMapZoomOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMainMenuWidget_C::WorldMapZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "WorldMapZoomOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuWidget.MainMenuWidget_C.WorldMapSlowCursorX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuWidget_C::WorldMapSlowCursorX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "WorldMapSlowCursorX");

	Params::UMainMenuWidget_C_WorldMapSlowCursorX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuWidget.MainMenuWidget_C.WorldMapSlowCursorY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuWidget_C::WorldMapSlowCursorY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "WorldMapSlowCursorY");

	Params::UMainMenuWidget_C_WorldMapSlowCursorY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MainMenuWidget.MainMenuWidget_C.ExecuteUbergraph_MainMenuWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMainMenuWidget_C::ExecuteUbergraph_MainMenuWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("MainMenuWidget_C", "ExecuteUbergraph_MainMenuWidget");

	Params::UMainMenuWidget_C_ExecuteUbergraph_MainMenuWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


