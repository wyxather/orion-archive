#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass ActionPopupWidget.ActionPopupWidget_C
// (None)

class UClass* UActionPopupWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActionPopupWidget_C");

	return Clss;
}


// ActionPopupWidget_C ActionPopupWidget.Default__ActionPopupWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UActionPopupWidget_C* UActionPopupWidget_C::GetDefaultObj()
{
	static class UActionPopupWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UActionPopupWidget_C*>(UActionPopupWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ActionPopupWidget.ActionPopupWidget_C.UpdateButtonText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionPopupWidget_C::UpdateButtonText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "UpdateButtonText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionPopupWidget.ActionPopupWidget_C.HideTemporaryInternal
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHidden                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EWIDGET_TEMPORARY_HIDE_USERHideUser                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionPopupWidget_C::HideTemporaryInternal(bool IsHidden, enum class EWIDGET_TEMPORARY_HIDE_USER HideUser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "HideTemporaryInternal");

	Params::UActionPopupWidget_C_HideTemporaryInternal_Params Parms{};

	Parms.IsHidden = IsHidden;
	Parms.HideUser = HideUser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionPopupWidget.ActionPopupWidget_C.TemporaryClose
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UActionPopupWidget_C::TemporaryClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "TemporaryClose");

	Params::UActionPopupWidget_C_TemporaryClose_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ActionPopupWidget.ActionPopupWidget_C.ReOpen
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UActionPopupWidget_C::ReOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "ReOpen");

	Params::UActionPopupWidget_C_ReOpen_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ActionPopupWidget.ActionPopupWidget_C.Open
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ActionTextLabel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UActionPopupWidget_C::Open(class AActor* TargetActor, class FName ActionTextLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "Open");

	Params::UActionPopupWidget_C_Open_Params Parms{};

	Parms.TargetActor = TargetActor;
	Parms.ActionTextLabel = ActionTextLabel;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ActionPopupWidget.ActionPopupWidget_C.Close
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UActionPopupWidget_C::Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "Close");

	Params::UActionPopupWidget_C_Close_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ActionPopupWidget.ActionPopupWidget_C.RequestAnimation
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              RequestID                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionPopupWidget_C::RequestAnimation(int32 RequestID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "RequestAnimation");

	Params::UActionPopupWidget_C_RequestAnimation_Params Parms{};

	Parms.RequestID = RequestID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionPopupWidget.ActionPopupWidget_C.PlayAnim
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            Anim                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionPopupWidget_C::PlayAnim(class UWidgetAnimation* Anim)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "PlayAnim");

	Params::UActionPopupWidget_C_PlayAnim_Params Parms{};

	Parms.Anim = Anim;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionPopupWidget.ActionPopupWidget_C.OnCursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionPopupWidget_C::OnCursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "OnCursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionPopupWidget.ActionPopupWidget_C.OnCursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionPopupWidget_C::OnCursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "OnCursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionPopupWidget.ActionPopupWidget_C.OnCursorLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionPopupWidget_C::OnCursorLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "OnCursorLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionPopupWidget.ActionPopupWidget_C.OnCursorRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionPopupWidget_C::OnCursorRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "OnCursorRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionPopupWidget.ActionPopupWidget_C.OnMenuDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionPopupWidget_C::OnMenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "OnMenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionPopupWidget.ActionPopupWidget_C.OnMenuCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionPopupWidget_C::OnMenuCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "OnMenuCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionPopupWidget.ActionPopupWidget_C.OnMenuButtonX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionPopupWidget_C::OnMenuButtonX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "OnMenuButtonX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionPopupWidget.ActionPopupWidget_C.OnMenuButtonY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionPopupWidget_C::OnMenuButtonY()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "OnMenuButtonY");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionPopupWidget.ActionPopupWidget_C.OnMenuLB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionPopupWidget_C::OnMenuLB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "OnMenuLB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionPopupWidget.ActionPopupWidget_C.OnMenuRB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionPopupWidget_C::OnMenuRB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "OnMenuRB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionPopupWidget.ActionPopupWidget_C.OnMenuButtonStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionPopupWidget_C::OnMenuButtonStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "OnMenuButtonStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionPopupWidget.ActionPopupWidget_C.OnMenuButtonSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionPopupWidget_C::OnMenuButtonSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "OnMenuButtonSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionPopupWidget.ActionPopupWidget_C.OnCursorUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionPopupWidget_C::OnCursorUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "OnCursorUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionPopupWidget.ActionPopupWidget_C.OnCursorDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionPopupWidget_C::OnCursorDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "OnCursorDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionPopupWidget.ActionPopupWidget_C.OnCursorLeftRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionPopupWidget_C::OnCursorLeftRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "OnCursorLeftRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionPopupWidget.ActionPopupWidget_C.OnCursorRightRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionPopupWidget_C::OnCursorRightRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "OnCursorRightRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionPopupWidget.ActionPopupWidget_C.OnMenuDecideRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionPopupWidget_C::OnMenuDecideRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "OnMenuDecideRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionPopupWidget.ActionPopupWidget_C.OnMenuCancelRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionPopupWidget_C::OnMenuCancelRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "OnMenuCancelRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionPopupWidget.ActionPopupWidget_C.OnMenuButtonXRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionPopupWidget_C::OnMenuButtonXRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "OnMenuButtonXRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionPopupWidget.ActionPopupWidget_C.OnMenuButtonYRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionPopupWidget_C::OnMenuButtonYRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "OnMenuButtonYRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionPopupWidget.ActionPopupWidget_C.OnMenuLBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionPopupWidget_C::OnMenuLBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "OnMenuLBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionPopupWidget.ActionPopupWidget_C.OnMenuRBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionPopupWidget_C::OnMenuRBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "OnMenuRBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionPopupWidget.ActionPopupWidget_C.OnMenuButtonStartRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionPopupWidget_C::OnMenuButtonStartRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "OnMenuButtonStartRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionPopupWidget.ActionPopupWidget_C.OnMenuButtonSelectRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionPopupWidget_C::OnMenuButtonSelectRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "OnMenuButtonSelectRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionPopupWidget.ActionPopupWidget_C.OnRightAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionPopupWidget_C::OnRightAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "OnRightAxisX");

	Params::UActionPopupWidget_C_OnRightAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionPopupWidget.ActionPopupWidget_C.OnRightAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionPopupWidget_C::OnRightAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "OnRightAxisY");

	Params::UActionPopupWidget_C_OnRightAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionPopupWidget.ActionPopupWidget_C.OnMenuLStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionPopupWidget_C::OnMenuLStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "OnMenuLStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionPopupWidget.ActionPopupWidget_C.OnMenuRStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionPopupWidget_C::OnMenuRStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "OnMenuRStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionPopupWidget.ActionPopupWidget_C.OnLeftAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionPopupWidget_C::OnLeftAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "OnLeftAxisX");

	Params::UActionPopupWidget_C_OnLeftAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionPopupWidget.ActionPopupWidget_C.OnLeftAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionPopupWidget_C::OnLeftAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "OnLeftAxisY");

	Params::UActionPopupWidget_C_OnLeftAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionPopupWidget.ActionPopupWidget_C.OnPlusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionPopupWidget_C::OnPlusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "OnPlusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionPopupWidget.ActionPopupWidget_C.OnMinusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionPopupWidget_C::OnMinusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "OnMinusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionPopupWidget.ActionPopupWidget_C.OnRightAxisUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionPopupWidget_C::OnRightAxisUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "OnRightAxisUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionPopupWidget.ActionPopupWidget_C.OnRightAxisDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionPopupWidget_C::OnRightAxisDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "OnRightAxisDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionPopupWidget.ActionPopupWidget_C.OnMenuRBRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionPopupWidget_C::OnMenuRBRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "OnMenuRBRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionPopupWidget.ActionPopupWidget_C.OnGamePadAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionPopupWidget_C::OnGamePadAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "OnGamePadAxisX");

	Params::UActionPopupWidget_C_OnGamePadAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionPopupWidget.ActionPopupWidget_C.OnGamePadAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionPopupWidget_C::OnGamePadAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "OnGamePadAxisY");

	Params::UActionPopupWidget_C_OnGamePadAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionPopupWidget.ActionPopupWidget_C.OnCursorUpRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionPopupWidget_C::OnCursorUpRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "OnCursorUpRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionPopupWidget.ActionPopupWidget_C.OnCursorDownRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionPopupWidget_C::OnCursorDownRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "OnCursorDownRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionPopupWidget.ActionPopupWidget_C.OnCursorLeftRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionPopupWidget_C::OnCursorLeftRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "OnCursorLeftRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionPopupWidget.ActionPopupWidget_C.OnCursorRightRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionPopupWidget_C::OnCursorRightRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "OnCursorRightRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionPopupWidget.ActionPopupWidget_C.OnAnyButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionPopupWidget_C::OnAnyButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "OnAnyButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionPopupWidget.ActionPopupWidget_C.OnListPaging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeftInput                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UActionPopupWidget_C::OnListPaging(bool IsLeftInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "OnListPaging");

	Params::UActionPopupWidget_C_OnListPaging_Params Parms{};

	Parms.IsLeftInput = IsLeftInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionPopupWidget.ActionPopupWidget_C.OnMenuRTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionPopupWidget_C::OnMenuRTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "OnMenuRTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionPopupWidget.ActionPopupWidget_C.OnMenuLTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionPopupWidget_C::OnMenuLTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "OnMenuLTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionPopupWidget.ActionPopupWidget_C.OnMenuRightUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionPopupWidget_C::OnMenuRightUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "OnMenuRightUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionPopupWidget.ActionPopupWidget_C.OnMenuRightDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionPopupWidget_C::OnMenuRightDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "OnMenuRightDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionPopupWidget.ActionPopupWidget_C.ChangeTimeZone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionPopupWidget_C::ChangeTimeZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "ChangeTimeZone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionPopupWidget.ActionPopupWidget_C.WorldMapZoomIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionPopupWidget_C::WorldMapZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "WorldMapZoomIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionPopupWidget.ActionPopupWidget_C.WorldMapZoomOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionPopupWidget_C::WorldMapZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "WorldMapZoomOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionPopupWidget.ActionPopupWidget_C.WorldMapSlowCursorX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionPopupWidget_C::WorldMapSlowCursorX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "WorldMapSlowCursorX");

	Params::UActionPopupWidget_C_WorldMapSlowCursorX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionPopupWidget.ActionPopupWidget_C.WorldMapSlowCursorY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionPopupWidget_C::WorldMapSlowCursorY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "WorldMapSlowCursorY");

	Params::UActionPopupWidget_C_WorldMapSlowCursorY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionPopupWidget.ActionPopupWidget_C.ChangeStatusRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionPopupWidget_C::ChangeStatusRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "ChangeStatusRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionPopupWidget.ActionPopupWidget_C.ChangeStatusLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionPopupWidget_C::ChangeStatusLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "ChangeStatusLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionPopupWidget.ActionPopupWidget_C.HelpScrollAxis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisaValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionPopupWidget_C::HelpScrollAxis(float AxisaValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "HelpScrollAxis");

	Params::UActionPopupWidget_C_HelpScrollAxis_Params Parms{};

	Parms.AxisaValue = AxisaValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionPopupWidget.ActionPopupWidget_C.OnAnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionPopupWidget_C::OnAnyKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "OnAnyKey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionPopupWidget.ActionPopupWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UActionPopupWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionPopupWidget.ActionPopupWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionPopupWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "Tick");

	Params::UActionPopupWidget_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionPopupWidget.ActionPopupWidget_C.ChangeInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSUseInputType         Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionPopupWidget_C::ChangeInputMode(enum class EKSUseInputType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "ChangeInputMode");

	Params::UActionPopupWidget_C_ChangeInputMode_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionPopupWidget.ActionPopupWidget_C.ExecuteUbergraph_ActionPopupWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionPopupWidget_C::ExecuteUbergraph_ActionPopupWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionPopupWidget_C", "ExecuteUbergraph_ActionPopupWidget");

	Params::UActionPopupWidget_C_ExecuteUbergraph_ActionPopupWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


