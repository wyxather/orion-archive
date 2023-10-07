#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass BarMenuStorySelect.BarMenuStorySelect_C
// (None)

class UClass* UBarMenuStorySelect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BarMenuStorySelect_C");

	return Clss;
}


// BarMenuStorySelect_C BarMenuStorySelect.Default__BarMenuStorySelect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBarMenuStorySelect_C* UBarMenuStorySelect_C::GetDefaultObj()
{
	static class UBarMenuStorySelect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBarMenuStorySelect_C*>(UBarMenuStorySelect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BarMenuStorySelect.BarMenuStorySelect_C.CloseShopMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::CloseShopMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "CloseShopMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.RefreshObjectOnInterruptOrResumeMainStory
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::RefreshObjectOnInterruptOrResumeMainStory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "RefreshObjectOnInterruptOrResumeMainStory");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.PrologueConfirmFinalDialogCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBarMenuStorySelect_C::PrologueConfirmFinalDialogCallback(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "PrologueConfirmFinalDialogCallback");

	Params::UBarMenuStorySelect_C_PrologueConfirmFinalDialogCallback_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.PrologueFadeOutFinish
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::PrologueFadeOutFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "PrologueFadeOutFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.PrologueDecideEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::PrologueDecideEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "PrologueDecideEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.PrologueCancelEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::PrologueCancelEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "PrologueCancelEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.PrologueConfirmDialogCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBarMenuStorySelect_C::PrologueConfirmDialogCallback(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "PrologueConfirmDialogCallback");

	Params::UBarMenuStorySelect_C_PrologueConfirmDialogCallback_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.Create Non Story Select
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPrologue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBarMenuStorySelect_C::Create_Non_Story_Select(bool IsPrologue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "Create Non Story Select");

	Params::UBarMenuStorySelect_C_Create_Non_Story_Select_Params Parms{};

	Parms.IsPrologue = IsPrologue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.CloseSelf
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::CloseSelf()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "CloseSelf");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OnFinishPlayingEventFadeOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::OnFinishPlayingEventFadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OnFinishPlayingEventFadeOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OpenConfirmCouplingDialog
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        MessageLabel                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBarMenuStorySelect_C::OpenConfirmCouplingDialog(class FName MessageLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OpenConfirmCouplingDialog");

	Params::UBarMenuStorySelect_C_OpenConfirmCouplingDialog_Params Parms{};

	Parms.MessageLabel = MessageLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.Set Event First Flag On Decide Exit
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBarMenuStoryItem>   StoryList                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBarMenuStorySelect_C::Set_Event_First_Flag_On_Decide_Exit(TArray<struct FBarMenuStoryItem>& StoryList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "Set Event First Flag On Decide Exit");

	Params::UBarMenuStorySelect_C_Set_Event_First_Flag_On_Decide_Exit_Params Parms{};

	Parms.StoryList = StoryList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OpenConfirmDialog
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        MessageLabel                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBarMenuStorySelect_C::OpenConfirmDialog(class FName MessageLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OpenConfirmDialog");

	Params::UBarMenuStorySelect_C_OpenConfirmDialog_Params Parms{};

	Parms.MessageLabel = MessageLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OpenFailedDialog
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        MessageLabel                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBarMenuStorySelect_C::OpenFailedDialog(class FName MessageLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OpenFailedDialog");

	Params::UBarMenuStorySelect_C_OpenFailedDialog_Params Parms{};

	Parms.MessageLabel = MessageLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.Close
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "Close");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.Setup Character List
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::Setup_Character_List()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "Setup Character List");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.SetUIParts
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBarMenuStorySelect_C::SetUIParts()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "SetUIParts");

	Params::UBarMenuStorySelect_C_SetUIParts_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OnFinishNoEventFadeOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::OnFinishNoEventFadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OnFinishNoEventFadeOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.GrayOutText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsGrayOut                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBarMenuStorySelect_C::GrayOutText(bool IsGrayOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "GrayOutText");

	Params::UBarMenuStorySelect_C_GrayOutText_Params Parms{};

	Parms.IsGrayOut = IsGrayOut;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.Update Display Normal
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBarMenuPlayerSelect_C*      InputPin                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBarMenuStorySelect_C::Update_Display_Normal(class UBarMenuPlayerSelect_C*& InputPin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "Update Display Normal");

	Params::UBarMenuStorySelect_C_Update_Display_Normal_Params Parms{};

	Parms.InputPin = InputPin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OnClosedFailedDialog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBarMenuStorySelect_C::OnClosedFailedDialog(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OnClosedFailedDialog");

	Params::UBarMenuStorySelect_C_OnClosedFailedDialog_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OnClosedConfirmDialog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              DialogSelectIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBarMenuStorySelect_C::OnClosedConfirmDialog(int32 DialogSelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OnClosedConfirmDialog");

	Params::UBarMenuStorySelect_C_OnClosedConfirmDialog_Params Parms{};

	Parms.DialogSelectIndex = DialogSelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.Setup
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        WorldMapLabel                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsBarMode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBarMenuStorySelect_C::Setup(class FName& WorldMapLabel, bool bIsBarMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "Setup");

	Params::UBarMenuStorySelect_C_Setup_Params Parms{};

	Parms.WorldMapLabel = WorldMapLabel;
	Parms.bIsBarMode = bIsBarMode;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OpenConfirmDialogOrFailedDialog
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::OpenConfirmDialogOrFailedDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OpenConfirmDialogOrFailedDialog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.DecideEvent
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::DecideEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "DecideEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.CancelEvent
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::CancelEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "CancelEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.SetupFixText
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::SetupFixText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "SetupFixText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.UpdateDisplay
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBarMenuStorySelect_C::UpdateDisplay(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "UpdateDisplay");

	Params::UBarMenuStorySelect_C_UpdateDisplay_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.SetSelectIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewSelectIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Fast                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UBarMenuStorySelect_C::SetSelectIndex(int32 NewSelectIndex, bool Fast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "SetSelectIndex");

	Params::UBarMenuStorySelect_C_SetSelectIndex_Params Parms{};

	Parms.NewSelectIndex = NewSelectIndex;
	Parms.Fast = Fast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.MoveCurosr
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsRight                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBarMenuStorySelect_C::MoveCurosr(bool IsRight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "MoveCurosr");

	Params::UBarMenuStorySelect_C_MoveCurosr_Params Parms{};

	Parms.IsRight = IsRight;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.UpdateFocus
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentIndex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBarMenuStorySelect_C::UpdateFocus(int32 CurrentIndex, bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "UpdateFocus");

	Params::UBarMenuStorySelect_C_UpdateFocus_Params Parms{};

	Parms.CurrentIndex = CurrentIndex;
	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.UpdteCharacterpanel
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Fast                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBarMenuStorySelect_C::UpdteCharacterpanel(int32 SelectIndex, bool Fast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "UpdteCharacterpanel");

	Params::UBarMenuStorySelect_C_UpdteCharacterpanel_Params Parms{};

	Parms.SelectIndex = SelectIndex;
	Parms.Fast = Fast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.SetupStoryData
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        WorldMapLabel                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBarMenuStorySelect_C::SetupStoryData(class FName& WorldMapLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "SetupStoryData");

	Params::UBarMenuStorySelect_C_SetupStoryData_Params Parms{};

	Parms.WorldMapLabel = WorldMapLabel;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.IsRunning
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBarMenuStorySelect_C::IsRunning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "IsRunning");

	Params::UBarMenuStorySelect_C_IsRunning_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OnMenuButtonX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::OnMenuButtonX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OnMenuButtonX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OnMenuButtonY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::OnMenuButtonY()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OnMenuButtonY");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OnMenuLB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::OnMenuLB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OnMenuLB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OnMenuRB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::OnMenuRB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OnMenuRB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OnMenuButtonStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::OnMenuButtonStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OnMenuButtonStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OnMenuButtonSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::OnMenuButtonSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OnMenuButtonSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OnCursorUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::OnCursorUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OnCursorUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OnCursorDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::OnCursorDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OnCursorDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OnCursorLeftRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::OnCursorLeftRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OnCursorLeftRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OnCursorRightRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::OnCursorRightRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OnCursorRightRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OnMenuDecideRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::OnMenuDecideRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OnMenuDecideRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OnMenuCancelRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::OnMenuCancelRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OnMenuCancelRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OnMenuButtonXRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::OnMenuButtonXRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OnMenuButtonXRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OnMenuButtonYRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::OnMenuButtonYRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OnMenuButtonYRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OnMenuLBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::OnMenuLBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OnMenuLBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OnMenuRBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::OnMenuRBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OnMenuRBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OnMenuButtonStartRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::OnMenuButtonStartRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OnMenuButtonStartRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OnMenuButtonSelectRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::OnMenuButtonSelectRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OnMenuButtonSelectRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OnRightAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBarMenuStorySelect_C::OnRightAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OnRightAxisX");

	Params::UBarMenuStorySelect_C_OnRightAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OnRightAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBarMenuStorySelect_C::OnRightAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OnRightAxisY");

	Params::UBarMenuStorySelect_C_OnRightAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OnMenuLStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::OnMenuLStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OnMenuLStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OnMenuRStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::OnMenuRStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OnMenuRStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OnLeftAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBarMenuStorySelect_C::OnLeftAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OnLeftAxisX");

	Params::UBarMenuStorySelect_C_OnLeftAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OnLeftAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBarMenuStorySelect_C::OnLeftAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OnLeftAxisY");

	Params::UBarMenuStorySelect_C_OnLeftAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OnPlusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::OnPlusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OnPlusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OnMinusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::OnMinusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OnMinusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OnRightAxisUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::OnRightAxisUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OnRightAxisUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OnRightAxisDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::OnRightAxisDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OnRightAxisDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OnMenuRBRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::OnMenuRBRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OnMenuRBRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OnGamePadAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBarMenuStorySelect_C::OnGamePadAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OnGamePadAxisX");

	Params::UBarMenuStorySelect_C_OnGamePadAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OnGamePadAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBarMenuStorySelect_C::OnGamePadAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OnGamePadAxisY");

	Params::UBarMenuStorySelect_C_OnGamePadAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OnCursorUpRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::OnCursorUpRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OnCursorUpRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OnCursorDownRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::OnCursorDownRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OnCursorDownRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OnCursorLeftRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::OnCursorLeftRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OnCursorLeftRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OnCursorRightRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::OnCursorRightRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OnCursorRightRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OnAnyButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::OnAnyButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OnAnyButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OnListPaging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeftInput                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBarMenuStorySelect_C::OnListPaging(bool IsLeftInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OnListPaging");

	Params::UBarMenuStorySelect_C_OnListPaging_Params Parms{};

	Parms.IsLeftInput = IsLeftInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OnMenuRTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::OnMenuRTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OnMenuRTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OnMenuLTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::OnMenuLTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OnMenuLTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OnMenuRightUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::OnMenuRightUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OnMenuRightUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OnMenuRightDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::OnMenuRightDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OnMenuRightDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.ChangeTimeZone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::ChangeTimeZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "ChangeTimeZone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.WorldMapZoomIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::WorldMapZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "WorldMapZoomIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.WorldMapZoomOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::WorldMapZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "WorldMapZoomOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.WorldMapSlowCursorX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBarMenuStorySelect_C::WorldMapSlowCursorX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "WorldMapSlowCursorX");

	Params::UBarMenuStorySelect_C_WorldMapSlowCursorX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.WorldMapSlowCursorY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBarMenuStorySelect_C::WorldMapSlowCursorY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "WorldMapSlowCursorY");

	Params::UBarMenuStorySelect_C_WorldMapSlowCursorY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.ChangeStatusRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::ChangeStatusRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "ChangeStatusRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.ChangeStatusLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::ChangeStatusLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "ChangeStatusLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.HelpScrollAxis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisaValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBarMenuStorySelect_C::HelpScrollAxis(float AxisaValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "HelpScrollAxis");

	Params::UBarMenuStorySelect_C_HelpScrollAxis_Params Parms{};

	Parms.AxisaValue = AxisaValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OnAnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::OnAnyKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OnAnyKey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OnCursorRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::OnCursorRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OnCursorRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OnCursorLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::OnCursorLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OnCursorLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OnMenuCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::OnMenuCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OnMenuCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OnMenuDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::OnMenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OnMenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OnCursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::OnCursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OnCursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OnCursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::OnCursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OnCursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.UpdateOpening
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::UpdateOpening()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "UpdateOpening");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OnOpenFinish
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::OnOpenFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OnOpenFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.UpdateMain
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::UpdateMain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "UpdateMain");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.UpdateClosing
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::UpdateClosing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "UpdateClosing");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.OnCloseFinish
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::OnCloseFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "OnCloseFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBarMenuStorySelect_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "Tick");

	Params::UBarMenuStorySelect_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.UIOpen
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::UIOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "UIOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.UIClose
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBarMenuStorySelect_C::UIClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "UIClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BarMenuStorySelect.BarMenuStorySelect_C.ExecuteUbergraph_BarMenuStorySelect
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBarMenuStorySelect_C::ExecuteUbergraph_BarMenuStorySelect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BarMenuStorySelect_C", "ExecuteUbergraph_BarMenuStorySelect");

	Params::UBarMenuStorySelect_C_ExecuteUbergraph_BarMenuStorySelect_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


