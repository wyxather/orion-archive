#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass EventPartnerSelect.EventPartnerSelect_C
// (None)

class UClass* UEventPartnerSelect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EventPartnerSelect_C");

	return Clss;
}


// EventPartnerSelect_C EventPartnerSelect.Default__EventPartnerSelect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEventPartnerSelect_C* UEventPartnerSelect_C::GetDefaultObj()
{
	static class UEventPartnerSelect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEventPartnerSelect_C*>(UEventPartnerSelect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EventPartnerSelect.EventPartnerSelect_C.Debug_DecideUI
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Param                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventPartnerSelect_C::Debug_DecideUI(int32 Param)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "Debug_DecideUI");

	Params::UEventPartnerSelect_C_Debug_DecideUI_Params Parms{};

	Parms.Param = Param;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventPartnerSelect.EventPartnerSelect_C.OnFinishWaitTime
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::OnFinishWaitTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "OnFinishWaitTime");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.GetPartnerName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        TextLabel                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventPartnerSelect_C::GetPartnerName(int32 Index, class FName* TextLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "GetPartnerName");

	Params::UEventPartnerSelect_C_GetPartnerName_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

	if (TextLabel != nullptr)
		*TextLabel = Parms.TextLabel;

}


// Function EventPartnerSelect.EventPartnerSelect_C.GetPartnerInvadeData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInvadeData                 InvadeData                                                       (Parm, OutParm)

void UEventPartnerSelect_C::GetPartnerInvadeData(int32 Index, struct FInvadeData* InvadeData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "GetPartnerInvadeData");

	Params::UEventPartnerSelect_C_GetPartnerInvadeData_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

	if (InvadeData != nullptr)
		*InvadeData = std::move(Parms.InvadeData);

}


// Function EventPartnerSelect.EventPartnerSelect_C.PartnerSelectConfirmDialog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventPartnerSelect_C::PartnerSelectConfirmDialog(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "PartnerSelectConfirmDialog");

	Params::UEventPartnerSelect_C_PartnerSelectConfirmDialog_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventPartnerSelect.EventPartnerSelect_C.SetReference
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UEventPartnerSelect_C::SetReference()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "SetReference");

	Params::UEventPartnerSelect_C_SetReference_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventPartnerSelect.EventPartnerSelect_C.OnClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::OnClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "OnClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.Decide
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::Decide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "Decide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.CursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::CursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "CursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.PlayCurrentFocusAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEventPartnerSelect_C::PlayCurrentFocusAnim(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "PlayCurrentFocusAnim");

	Params::UEventPartnerSelect_C_PlayCurrentFocusAnim_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventPartnerSelect.EventPartnerSelect_C.UpdateIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsUp                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEventPartnerSelect_C::UpdateIndex(bool IsUp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "UpdateIndex");

	Params::UEventPartnerSelect_C_UpdateIndex_Params Parms{};

	Parms.IsUp = IsUp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventPartnerSelect.EventPartnerSelect_C.CursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::CursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "CursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.UpdateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::UpdateText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "UpdateText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.InnerTick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::InnerTick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "InnerTick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.IsRunning
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UEventPartnerSelect_C::IsRunning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "IsRunning");

	Params::UEventPartnerSelect_C_IsRunning_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventPartnerSelect.EventPartnerSelect_C.OnOpen
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::OnOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "OnOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.OnCursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::OnCursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "OnCursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.OnCursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::OnCursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "OnCursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.OnCursorLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::OnCursorLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "OnCursorLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.OnCursorRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::OnCursorRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "OnCursorRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.OnMenuButtonX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::OnMenuButtonX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "OnMenuButtonX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.OnMenuButtonY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::OnMenuButtonY()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "OnMenuButtonY");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.OnMenuLB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::OnMenuLB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "OnMenuLB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.OnMenuRB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::OnMenuRB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "OnMenuRB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.OnMenuButtonStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::OnMenuButtonStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "OnMenuButtonStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.OnMenuButtonSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::OnMenuButtonSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "OnMenuButtonSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.OnCursorLeftRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::OnCursorLeftRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "OnCursorLeftRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.OnCursorRightRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::OnCursorRightRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "OnCursorRightRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.OnMenuDecideRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::OnMenuDecideRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "OnMenuDecideRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.OnMenuCancelRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::OnMenuCancelRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "OnMenuCancelRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.OnMenuButtonXRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::OnMenuButtonXRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "OnMenuButtonXRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.OnMenuButtonYRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::OnMenuButtonYRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "OnMenuButtonYRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.OnMenuLBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::OnMenuLBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "OnMenuLBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.OnMenuRBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::OnMenuRBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "OnMenuRBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.OnMenuButtonStartRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::OnMenuButtonStartRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "OnMenuButtonStartRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.OnMenuButtonSelectRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::OnMenuButtonSelectRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "OnMenuButtonSelectRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.OnRightAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventPartnerSelect_C::OnRightAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "OnRightAxisX");

	Params::UEventPartnerSelect_C_OnRightAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventPartnerSelect.EventPartnerSelect_C.OnRightAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventPartnerSelect_C::OnRightAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "OnRightAxisY");

	Params::UEventPartnerSelect_C_OnRightAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventPartnerSelect.EventPartnerSelect_C.OnMenuLStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::OnMenuLStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "OnMenuLStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.OnMenuRStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::OnMenuRStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "OnMenuRStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.OnLeftAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventPartnerSelect_C::OnLeftAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "OnLeftAxisX");

	Params::UEventPartnerSelect_C_OnLeftAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventPartnerSelect.EventPartnerSelect_C.OnLeftAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventPartnerSelect_C::OnLeftAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "OnLeftAxisY");

	Params::UEventPartnerSelect_C_OnLeftAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventPartnerSelect.EventPartnerSelect_C.OnPlusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::OnPlusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "OnPlusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.OnMinusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::OnMinusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "OnMinusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.OnRightAxisUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::OnRightAxisUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "OnRightAxisUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.OnRightAxisDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::OnRightAxisDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "OnRightAxisDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.OnMenuRBRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::OnMenuRBRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "OnMenuRBRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.OnGamePadAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventPartnerSelect_C::OnGamePadAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "OnGamePadAxisX");

	Params::UEventPartnerSelect_C_OnGamePadAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventPartnerSelect.EventPartnerSelect_C.OnGamePadAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventPartnerSelect_C::OnGamePadAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "OnGamePadAxisY");

	Params::UEventPartnerSelect_C_OnGamePadAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventPartnerSelect.EventPartnerSelect_C.OnCursorUpRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::OnCursorUpRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "OnCursorUpRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.OnCursorDownRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::OnCursorDownRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "OnCursorDownRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.OnCursorLeftRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::OnCursorLeftRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "OnCursorLeftRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.OnCursorRightRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::OnCursorRightRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "OnCursorRightRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.OnAnyButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::OnAnyButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "OnAnyButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.OnListPaging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeftInput                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEventPartnerSelect_C::OnListPaging(bool IsLeftInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "OnListPaging");

	Params::UEventPartnerSelect_C_OnListPaging_Params Parms{};

	Parms.IsLeftInput = IsLeftInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventPartnerSelect.EventPartnerSelect_C.OnMenuRTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::OnMenuRTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "OnMenuRTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.OnMenuLTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::OnMenuLTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "OnMenuLTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.OnMenuRightUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::OnMenuRightUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "OnMenuRightUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.OnMenuRightDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::OnMenuRightDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "OnMenuRightDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.ChangeTimeZone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::ChangeTimeZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "ChangeTimeZone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.WorldMapZoomIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::WorldMapZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "WorldMapZoomIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.WorldMapZoomOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::WorldMapZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "WorldMapZoomOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.WorldMapSlowCursorX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventPartnerSelect_C::WorldMapSlowCursorX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "WorldMapSlowCursorX");

	Params::UEventPartnerSelect_C_WorldMapSlowCursorX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventPartnerSelect.EventPartnerSelect_C.WorldMapSlowCursorY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventPartnerSelect_C::WorldMapSlowCursorY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "WorldMapSlowCursorY");

	Params::UEventPartnerSelect_C_WorldMapSlowCursorY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventPartnerSelect.EventPartnerSelect_C.ChangeStatusRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::ChangeStatusRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "ChangeStatusRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.ChangeStatusLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::ChangeStatusLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "ChangeStatusLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.HelpScrollAxis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisaValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventPartnerSelect_C::HelpScrollAxis(float AxisaValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "HelpScrollAxis");

	Params::UEventPartnerSelect_C_HelpScrollAxis_Params Parms{};

	Parms.AxisaValue = AxisaValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventPartnerSelect.EventPartnerSelect_C.OnAnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::OnAnyKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "OnAnyKey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.OnMenuDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::OnMenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "OnMenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.OnMenuCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::OnMenuCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "OnMenuCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.OnCursorDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::OnCursorDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "OnCursorDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.OnCursorUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::OnCursorUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "OnCursorUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.UpdateMain
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::UpdateMain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "UpdateMain");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.OnCloseFinish
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::OnCloseFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "OnCloseFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.UIOpen
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::UIOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "UIOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.UIClose
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEventPartnerSelect_C::UIClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "UIClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventPartnerSelect.EventPartnerSelect_C.OnLoadedPartner
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>             ObjList                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UEventPartnerSelect_C::OnLoadedPartner(TArray<class UObject*>& ObjList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "OnLoadedPartner");

	Params::UEventPartnerSelect_C_OnLoadedPartner_Params Parms{};

	Parms.ObjList = ObjList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventPartnerSelect.EventPartnerSelect_C.ExecuteUbergraph_EventPartnerSelect
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventPartnerSelect_C::ExecuteUbergraph_EventPartnerSelect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventPartnerSelect_C", "ExecuteUbergraph_EventPartnerSelect");

	Params::UEventPartnerSelect_C_ExecuteUbergraph_EventPartnerSelect_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


