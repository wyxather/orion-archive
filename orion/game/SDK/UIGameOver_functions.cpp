#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass UIGameOver.UIGameOver_C
// (None)

class UClass* UUIGameOver_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIGameOver_C");

	return Clss;
}


// UIGameOver_C UIGameOver.Default__UIGameOver_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUIGameOver_C* UUIGameOver_C::GetDefaultObj()
{
	static class UUIGameOver_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIGameOver_C*>(UUIGameOver_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UIGameOver.UIGameOver_C.ResetGameOverResource
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::ResetGameOverResource()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "ResetGameOverResource");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.SetGameOverResource
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::SetGameOverResource()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "SetGameOverResource");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.IsCursorSelect
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UUIGameOver_C::IsCursorSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "IsCursorSelect");

	Params::UUIGameOver_C_IsCursorSelect_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UIGameOver.UIGameOver_C.Init
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUIGameOver_C::Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "Init");

	Params::UUIGameOver_C_Init_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UIGameOver.UIGameOver_C.SetReference
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUIGameOver_C::SetReference()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "SetReference");

	Params::UUIGameOver_C_SetReference_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UIGameOver.UIGameOver_C.UpdateCursor
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewCursorPos                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Fast                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsCursorMove                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIGameOver_C::UpdateCursor(int32 NewCursorPos, bool Fast, bool* IsCursorMove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "UpdateCursor");

	Params::UUIGameOver_C_UpdateCursor_Params Parms{};

	Parms.NewCursorPos = NewCursorPos;
	Parms.Fast = Fast;

	UObject::ProcessEvent(Func, &Parms);

	if (IsCursorMove != nullptr)
		*IsCursorMove = Parms.IsCursorMove;

}


// Function UIGameOver.UIGameOver_C.UpdateEvent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIGameOver_C::UpdateEvent(int32 CurrentState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "UpdateEvent");

	Params::UUIGameOver_C_UpdateEvent_Params Parms{};

	Parms.CurrentState = CurrentState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIGameOver.UIGameOver_C.CloseEvent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::CloseEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "CloseEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.OpenEvent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::OpenEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "OpenEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.IsRunning
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UUIGameOver_C::IsRunning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "IsRunning");

	Params::UUIGameOver_C_IsRunning_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UIGameOver.UIGameOver_C.SetupText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::SetupText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "SetupText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.OnCursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::OnCursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "OnCursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.OnCursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::OnCursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "OnCursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.OnCursorLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::OnCursorLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "OnCursorLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.OnCursorRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::OnCursorRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "OnCursorRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.OnMenuCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::OnMenuCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "OnMenuCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.OnMenuButtonX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::OnMenuButtonX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "OnMenuButtonX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.OnMenuButtonY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::OnMenuButtonY()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "OnMenuButtonY");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.OnMenuLB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::OnMenuLB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "OnMenuLB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.OnMenuRB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::OnMenuRB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "OnMenuRB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.OnMenuButtonStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::OnMenuButtonStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "OnMenuButtonStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.OnMenuButtonSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::OnMenuButtonSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "OnMenuButtonSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.OnCursorLeftRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::OnCursorLeftRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "OnCursorLeftRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.OnCursorRightRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::OnCursorRightRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "OnCursorRightRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.OnMenuDecideRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::OnMenuDecideRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "OnMenuDecideRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.OnMenuCancelRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::OnMenuCancelRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "OnMenuCancelRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.OnMenuButtonXRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::OnMenuButtonXRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "OnMenuButtonXRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.OnMenuButtonYRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::OnMenuButtonYRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "OnMenuButtonYRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.OnMenuLBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::OnMenuLBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "OnMenuLBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.OnMenuRBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::OnMenuRBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "OnMenuRBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.OnMenuButtonStartRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::OnMenuButtonStartRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "OnMenuButtonStartRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.OnMenuButtonSelectRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::OnMenuButtonSelectRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "OnMenuButtonSelectRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.OnRightAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIGameOver_C::OnRightAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "OnRightAxisX");

	Params::UUIGameOver_C_OnRightAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIGameOver.UIGameOver_C.OnRightAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIGameOver_C::OnRightAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "OnRightAxisY");

	Params::UUIGameOver_C_OnRightAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIGameOver.UIGameOver_C.OnMenuLStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::OnMenuLStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "OnMenuLStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.OnMenuRStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::OnMenuRStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "OnMenuRStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.OnLeftAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIGameOver_C::OnLeftAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "OnLeftAxisX");

	Params::UUIGameOver_C_OnLeftAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIGameOver.UIGameOver_C.OnLeftAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIGameOver_C::OnLeftAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "OnLeftAxisY");

	Params::UUIGameOver_C_OnLeftAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIGameOver.UIGameOver_C.OnPlusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::OnPlusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "OnPlusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.OnMinusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::OnMinusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "OnMinusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.OnRightAxisUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::OnRightAxisUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "OnRightAxisUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.OnRightAxisDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::OnRightAxisDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "OnRightAxisDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.OnMenuRBRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::OnMenuRBRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "OnMenuRBRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.OnGamePadAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIGameOver_C::OnGamePadAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "OnGamePadAxisX");

	Params::UUIGameOver_C_OnGamePadAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIGameOver.UIGameOver_C.OnGamePadAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIGameOver_C::OnGamePadAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "OnGamePadAxisY");

	Params::UUIGameOver_C_OnGamePadAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIGameOver.UIGameOver_C.OnCursorUpRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::OnCursorUpRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "OnCursorUpRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.OnCursorDownRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::OnCursorDownRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "OnCursorDownRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.OnCursorLeftRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::OnCursorLeftRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "OnCursorLeftRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.OnCursorRightRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::OnCursorRightRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "OnCursorRightRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.OnAnyButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::OnAnyButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "OnAnyButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.OnListPaging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeftInput                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIGameOver_C::OnListPaging(bool IsLeftInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "OnListPaging");

	Params::UUIGameOver_C_OnListPaging_Params Parms{};

	Parms.IsLeftInput = IsLeftInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIGameOver.UIGameOver_C.OnMenuRTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::OnMenuRTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "OnMenuRTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.OnMenuLTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::OnMenuLTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "OnMenuLTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.OnMenuRightUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::OnMenuRightUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "OnMenuRightUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.OnMenuRightDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::OnMenuRightDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "OnMenuRightDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.ChangeTimeZone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::ChangeTimeZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "ChangeTimeZone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.WorldMapZoomIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::WorldMapZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "WorldMapZoomIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.WorldMapZoomOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::WorldMapZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "WorldMapZoomOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.WorldMapSlowCursorX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIGameOver_C::WorldMapSlowCursorX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "WorldMapSlowCursorX");

	Params::UUIGameOver_C_WorldMapSlowCursorX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIGameOver.UIGameOver_C.WorldMapSlowCursorY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIGameOver_C::WorldMapSlowCursorY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "WorldMapSlowCursorY");

	Params::UUIGameOver_C_WorldMapSlowCursorY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIGameOver.UIGameOver_C.ChangeStatusRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::ChangeStatusRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "ChangeStatusRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.ChangeStatusLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::ChangeStatusLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "ChangeStatusLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.HelpScrollAxis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisaValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIGameOver_C::HelpScrollAxis(float AxisaValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "HelpScrollAxis");

	Params::UUIGameOver_C_HelpScrollAxis_Params Parms{};

	Parms.AxisaValue = AxisaValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIGameOver.UIGameOver_C.OnAnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::OnAnyKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "OnAnyKey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.UpdateMain
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::UpdateMain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "UpdateMain");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.UpdateOpening
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::UpdateOpening()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "UpdateOpening");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.UpdateClosing
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::UpdateClosing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "UpdateClosing");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.OnCloseFinish
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::OnCloseFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "OnCloseFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.OnOpenFinish
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::OnOpenFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "OnOpenFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIGameOver_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "Tick");

	Params::UUIGameOver_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIGameOver.UIGameOver_C.OnUpdateState
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentState                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIGameOver_C::OnUpdateState(int32 CurrentState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "OnUpdateState");

	Params::UUIGameOver_C_OnUpdateState_Params Parms{};

	Parms.CurrentState = CurrentState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIGameOver.UIGameOver_C.OnCursorUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::OnCursorUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "OnCursorUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.OnCursorDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::OnCursorDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "OnCursorDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.OnMenuDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::OnMenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "OnMenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.UIOpen
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::UIOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "UIOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.UIClose
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::UIClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "UIClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.CursorUpEvent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::CursorUpEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "CursorUpEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.CursorDownEvent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::CursorDownEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "CursorDownEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.DecideEvent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIGameOver_C::DecideEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "DecideEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.SetGameOverType
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGAMEOVER_TYPE          Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIGameOver_C::SetGameOverType(enum class EGAMEOVER_TYPE Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "SetGameOverType");

	Params::UUIGameOver_C_SetGameOverType_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIGameOver.UIGameOver_C.RefreshLanguage
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSLanguage             NewLanguage                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIGameOver_C::RefreshLanguage(enum class EKSLanguage NewLanguage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "RefreshLanguage");

	Params::UUIGameOver_C_RefreshLanguage_Params Parms{};

	Parms.NewLanguage = NewLanguage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIGameOver.UIGameOver_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUIGameOver_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIGameOver.UIGameOver_C.ExecuteUbergraph_UIGameOver
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIGameOver_C::ExecuteUbergraph_UIGameOver(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "ExecuteUbergraph_UIGameOver");

	Params::UUIGameOver_C_ExecuteUbergraph_UIGameOver_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIGameOver.UIGameOver_C.FinishEvent_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectCursor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIGameOver_C::FinishEvent_0__DelegateSignature(int32 SelectCursor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIGameOver_C", "FinishEvent_0__DelegateSignature");

	Params::UUIGameOver_C_FinishEvent_0__DelegateSignature_Params Parms{};

	Parms.SelectCursor = SelectCursor;

	UObject::ProcessEvent(Func, &Parms);

}

}


