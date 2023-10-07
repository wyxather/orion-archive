#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass UICommonDialogBP.UICommonDialogBP_C
// (None)

class UClass* UUICommonDialogBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UICommonDialogBP_C");

	return Clss;
}


// UICommonDialogBP_C UICommonDialogBP.Default__UICommonDialogBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUICommonDialogBP_C* UUICommonDialogBP_C::GetDefaultObj()
{
	static class UUICommonDialogBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUICommonDialogBP_C*>(UUICommonDialogBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UICommonDialogBP.UICommonDialogBP_C.RereshAfterLanguage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::RereshAfterLanguage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "RereshAfterLanguage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.SelectButton
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              buttonIdx                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUICommonDialogBP_C::SelectButton(int32 buttonIdx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "SelectButton");

	Params::UUICommonDialogBP_C_SelectButton_Params Parms{};

	Parms.buttonIdx = buttonIdx;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UICommonDialogBP.UICommonDialogBP_C.UpdateWaitCounter
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::UpdateWaitCounter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "UpdateWaitCounter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.OnFinishWaitTime
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::OnFinishWaitTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "OnFinishWaitTime");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.ClosePlayerMoney
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUICommonDialogBP_C::ClosePlayerMoney()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "ClosePlayerMoney");

	Params::UUICommonDialogBP_C_ClosePlayerMoney_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UICommonDialogBP.UICommonDialogBP_C.OpenPlayerMoney
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUICommonDialogBP_C::OpenPlayerMoney()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "OpenPlayerMoney");

	Params::UUICommonDialogBP_C_OpenPlayerMoney_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UICommonDialogBP.UICommonDialogBP_C.CheckSpecialParform
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::CheckSpecialParform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "CheckSpecialParform");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.RemoveSelectWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::RemoveSelectWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "RemoveSelectWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.AttachToSelectWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::AttachToSelectWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "AttachToSelectWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.ButtonVisible
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUICommonDialogBP_C::ButtonVisible(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "ButtonVisible");

	Params::UUICommonDialogBP_C_ButtonVisible_Params Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UICommonDialogBP.UICommonDialogBP_C.SettingSelectSE
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                SelectSE                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUICommonDialogBP_C::SettingSelectSE(TArray<class FName>& SelectSE)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "SettingSelectSE");

	Params::UUICommonDialogBP_C_SettingSelectSE_Params Parms{};

	Parms.SelectSE = SelectSE;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UICommonDialogBP.UICommonDialogBP_C.CloseDialog
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUICommonDialogBP_C::CloseDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "CloseDialog");

	Params::UUICommonDialogBP_C_CloseDialog_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UICommonDialogBP.UICommonDialogBP_C.IsChangeStateOpenFinish
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUICommonDialogBP_C::IsChangeStateOpenFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "IsChangeStateOpenFinish");

	Params::UUICommonDialogBP_C_IsChangeStateOpenFinish_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UICommonDialogBP.UICommonDialogBP_C.IsChangeStateCloseFinish
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUICommonDialogBP_C::IsChangeStateCloseFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "IsChangeStateCloseFinish");

	Params::UUICommonDialogBP_C_IsChangeStateCloseFinish_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UICommonDialogBP.UICommonDialogBP_C.SetReference
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUICommonDialogBP_C::SetReference()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "SetReference");

	Params::UUICommonDialogBP_C_SetReference_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UICommonDialogBP.UICommonDialogBP_C.SetupDialog
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::SetupDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "SetupDialog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.OpenDialog
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMJUICommonDialogParam      Param                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUICommonDialogBP_C::OpenDialog(struct FMJUICommonDialogParam& Param)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "OpenDialog");

	Params::UUICommonDialogBP_C_OpenDialog_Params Parms{};

	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UICommonDialogBP.UICommonDialogBP_C.ResetSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::ResetSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "ResetSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.SetSelectSE
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                SelectSE                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUICommonDialogBP_C::SetSelectSE(TArray<class FName>& SelectSE)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "SetSelectSE");

	Params::UUICommonDialogBP_C_SetSelectSE_Params Parms{};

	Parms.SelectSE = SelectSE;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UICommonDialogBP.UICommonDialogBP_C.DetachWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DetachCaption                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               DetachDetail                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUICommonDialogBP_C::DetachWidget(bool DetachCaption, bool DetachDetail)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "DetachWidget");

	Params::UUICommonDialogBP_C_DetachWidget_Params Parms{};

	Parms.DetachCaption = DetachCaption;
	Parms.DetachDetail = DetachDetail;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UICommonDialogBP.UICommonDialogBP_C.IsRunning
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUICommonDialogBP_C::IsRunning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "IsRunning");

	Params::UUICommonDialogBP_C_IsRunning_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UICommonDialogBP.UICommonDialogBP_C.DetailAttachWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 DetailAttachWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AttachOnTop                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUICommonDialogBP_C::DetailAttachWidget(class UUserWidget* DetailAttachWidget, bool AttachOnTop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "DetailAttachWidget");

	Params::UUICommonDialogBP_C_DetailAttachWidget_Params Parms{};

	Parms.DetailAttachWidget = DetailAttachWidget;
	Parms.AttachOnTop = AttachOnTop;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UICommonDialogBP.UICommonDialogBP_C.CaptionAttachWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 CaptionAttachWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AttachOnTop                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               UseSeparation                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUICommonDialogBP_C::CaptionAttachWidget(class UUserWidget* CaptionAttachWidget, bool AttachOnTop, bool UseSeparation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "CaptionAttachWidget");

	Params::UUICommonDialogBP_C_CaptionAttachWidget_Params Parms{};

	Parms.CaptionAttachWidget = CaptionAttachWidget;
	Parms.AttachOnTop = AttachOnTop;
	Parms.UseSeparation = UseSeparation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UICommonDialogBP.UICommonDialogBP_C.GetDialogParam
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FKSUICommonDialogParam      NowParam                                                         (Parm, OutParm)

void UUICommonDialogBP_C::GetDialogParam(struct FKSUICommonDialogParam* NowParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "GetDialogParam");

	Params::UUICommonDialogBP_C_GetDialogParam_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NowParam != nullptr)
		*NowParam = std::move(Parms.NowParam);

}


// Function UICommonDialogBP.UICommonDialogBP_C.IsDialogOpen
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsOpen                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUICommonDialogBP_C::IsDialogOpen(bool* IsOpen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "IsDialogOpen");

	Params::UUICommonDialogBP_C_IsDialogOpen_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsOpen != nullptr)
		*IsOpen = Parms.IsOpen;

}


// Function UICommonDialogBP.UICommonDialogBP_C.GetSelectData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsSelected                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              FocusIndex                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUICommonDialogBP_C::GetSelectData(bool* IsSelected, int32* FocusIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "GetSelectData");

	Params::UUICommonDialogBP_C_GetSelectData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsSelected != nullptr)
		*IsSelected = Parms.IsSelected;

	if (FocusIndex != nullptr)
		*FocusIndex = Parms.FocusIndex;

}


// Function UICommonDialogBP.UICommonDialogBP_C.DialogCancel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsCancel                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUICommonDialogBP_C::DialogCancel(bool* IsCancel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "DialogCancel");

	Params::UUICommonDialogBP_C_DialogCancel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsCancel != nullptr)
		*IsCancel = Parms.IsCancel;

}


// Function UICommonDialogBP.UICommonDialogBP_C.DialogDecide
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDecide                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUICommonDialogBP_C::DialogDecide(bool* IsDecide)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "DialogDecide");

	Params::UUICommonDialogBP_C_DialogDecide_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsDecide != nullptr)
		*IsDecide = Parms.IsDecide;

}


// Function UICommonDialogBP.UICommonDialogBP_C.CursorUpdate
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              New_Cursor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Fast                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               MoveCursor                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUICommonDialogBP_C::CursorUpdate(int32 New_Cursor, bool Fast, bool* MoveCursor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "CursorUpdate");

	Params::UUICommonDialogBP_C_CursorUpdate_Params Parms{};

	Parms.New_Cursor = New_Cursor;
	Parms.Fast = Fast;

	UObject::ProcessEvent(Func, &Parms);

	if (MoveCursor != nullptr)
		*MoveCursor = Parms.MoveCursor;

}


// Function UICommonDialogBP.UICommonDialogBP_C.CursorDown
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MoveCursor                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUICommonDialogBP_C::CursorDown(bool* MoveCursor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "CursorDown");

	Params::UUICommonDialogBP_C_CursorDown_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MoveCursor != nullptr)
		*MoveCursor = Parms.MoveCursor;

}


// Function UICommonDialogBP.UICommonDialogBP_C.CursorUp
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MoveCursor                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUICommonDialogBP_C::CursorUp(bool* MoveCursor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "CursorUp");

	Params::UUICommonDialogBP_C_CursorUp_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MoveCursor != nullptr)
		*MoveCursor = Parms.MoveCursor;

}


// Function UICommonDialogBP.UICommonDialogBP_C.OnCursorRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::OnCursorRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "OnCursorRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.OnMenuButtonX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::OnMenuButtonX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "OnMenuButtonX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.OnMenuButtonY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::OnMenuButtonY()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "OnMenuButtonY");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.OnMenuLB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::OnMenuLB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "OnMenuLB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.OnMenuRB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::OnMenuRB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "OnMenuRB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.OnMenuButtonStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::OnMenuButtonStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "OnMenuButtonStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.OnMenuButtonSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::OnMenuButtonSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "OnMenuButtonSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.OnCursorLeftRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::OnCursorLeftRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "OnCursorLeftRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.OnCursorRightRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::OnCursorRightRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "OnCursorRightRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.OnMenuDecideRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::OnMenuDecideRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "OnMenuDecideRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.OnMenuCancelRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::OnMenuCancelRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "OnMenuCancelRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.OnMenuButtonXRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::OnMenuButtonXRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "OnMenuButtonXRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.OnMenuButtonYRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::OnMenuButtonYRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "OnMenuButtonYRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.OnMenuLBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::OnMenuLBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "OnMenuLBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.OnMenuRBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::OnMenuRBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "OnMenuRBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.OnMenuButtonStartRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::OnMenuButtonStartRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "OnMenuButtonStartRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.OnMenuButtonSelectRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::OnMenuButtonSelectRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "OnMenuButtonSelectRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.OnRightAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUICommonDialogBP_C::OnRightAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "OnRightAxisX");

	Params::UUICommonDialogBP_C_OnRightAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UICommonDialogBP.UICommonDialogBP_C.OnRightAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUICommonDialogBP_C::OnRightAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "OnRightAxisY");

	Params::UUICommonDialogBP_C_OnRightAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UICommonDialogBP.UICommonDialogBP_C.OnMenuLStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::OnMenuLStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "OnMenuLStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.OnMenuRStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::OnMenuRStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "OnMenuRStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.OnLeftAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUICommonDialogBP_C::OnLeftAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "OnLeftAxisX");

	Params::UUICommonDialogBP_C_OnLeftAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UICommonDialogBP.UICommonDialogBP_C.OnLeftAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUICommonDialogBP_C::OnLeftAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "OnLeftAxisY");

	Params::UUICommonDialogBP_C_OnLeftAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UICommonDialogBP.UICommonDialogBP_C.OnPlusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::OnPlusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "OnPlusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.OnMinusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::OnMinusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "OnMinusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.OnRightAxisUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::OnRightAxisUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "OnRightAxisUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.OnRightAxisDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::OnRightAxisDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "OnRightAxisDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.OnMenuRBRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::OnMenuRBRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "OnMenuRBRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.OnGamePadAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUICommonDialogBP_C::OnGamePadAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "OnGamePadAxisX");

	Params::UUICommonDialogBP_C_OnGamePadAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UICommonDialogBP.UICommonDialogBP_C.OnGamePadAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUICommonDialogBP_C::OnGamePadAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "OnGamePadAxisY");

	Params::UUICommonDialogBP_C_OnGamePadAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UICommonDialogBP.UICommonDialogBP_C.OnCursorUpRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::OnCursorUpRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "OnCursorUpRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.OnCursorDownRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::OnCursorDownRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "OnCursorDownRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.OnCursorLeftRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::OnCursorLeftRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "OnCursorLeftRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.OnCursorRightRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::OnCursorRightRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "OnCursorRightRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.OnAnyButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::OnAnyButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "OnAnyButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.OnListPaging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeftInput                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUICommonDialogBP_C::OnListPaging(bool IsLeftInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "OnListPaging");

	Params::UUICommonDialogBP_C_OnListPaging_Params Parms{};

	Parms.IsLeftInput = IsLeftInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UICommonDialogBP.UICommonDialogBP_C.OnMenuRTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::OnMenuRTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "OnMenuRTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.OnMenuLTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::OnMenuLTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "OnMenuLTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.OnMenuRightUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::OnMenuRightUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "OnMenuRightUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.OnMenuRightDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::OnMenuRightDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "OnMenuRightDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.ChangeTimeZone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::ChangeTimeZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "ChangeTimeZone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.WorldMapZoomIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::WorldMapZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "WorldMapZoomIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.WorldMapZoomOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::WorldMapZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "WorldMapZoomOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.WorldMapSlowCursorX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUICommonDialogBP_C::WorldMapSlowCursorX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "WorldMapSlowCursorX");

	Params::UUICommonDialogBP_C_WorldMapSlowCursorX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UICommonDialogBP.UICommonDialogBP_C.WorldMapSlowCursorY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUICommonDialogBP_C::WorldMapSlowCursorY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "WorldMapSlowCursorY");

	Params::UUICommonDialogBP_C_WorldMapSlowCursorY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UICommonDialogBP.UICommonDialogBP_C.ChangeStatusRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::ChangeStatusRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "ChangeStatusRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.ChangeStatusLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::ChangeStatusLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "ChangeStatusLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.HelpScrollAxis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisaValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUICommonDialogBP_C::HelpScrollAxis(float AxisaValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "HelpScrollAxis");

	Params::UUICommonDialogBP_C_HelpScrollAxis_Params Parms{};

	Parms.AxisaValue = AxisaValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UICommonDialogBP.UICommonDialogBP_C.OnAnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::OnAnyKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "OnAnyKey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.OnOpenFinish
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::OnOpenFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "OnOpenFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.OnCloseFinish
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::OnCloseFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "OnCloseFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.UpdateOpening
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::UpdateOpening()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "UpdateOpening");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.UpdateClosing
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::UpdateClosing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "UpdateClosing");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.OnCursorLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::OnCursorLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "OnCursorLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.OnCursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::OnCursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "OnCursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.OnCursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::OnCursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "OnCursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.UpdateMain
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::UpdateMain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "UpdateMain");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.OnMenuDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::OnMenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "OnMenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.OnMenuCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::OnMenuCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "OnMenuCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.OnCursorUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::OnCursorUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "OnCursorUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.OnCursorDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::OnCursorDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "OnCursorDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.ExecuteUbergraph_UICommonDialogBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUICommonDialogBP_C::ExecuteUbergraph_UICommonDialogBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "ExecuteUbergraph_UICommonDialogBP");

	Params::UUICommonDialogBP_C_ExecuteUbergraph_UICommonDialogBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UICommonDialogBP.UICommonDialogBP_C.OnFinishedWaitTime__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUICommonDialogBP_C::OnFinishedWaitTime__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "OnFinishedWaitTime__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UICommonDialogBP.UICommonDialogBP_C.CommonDialogClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectCursor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUICommonDialogBP_C::CommonDialogClose__DelegateSignature(int32 SelectCursor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UICommonDialogBP_C", "CommonDialogClose__DelegateSignature");

	Params::UUICommonDialogBP_C_CommonDialogClose__DelegateSignature_Params Parms{};

	Parms.SelectCursor = SelectCursor;

	UObject::ProcessEvent(Func, &Parms);

}

}


