#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass FieldCommandMenu.FieldCommandMenu_C
// (None)

class UClass* UFieldCommandMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FieldCommandMenu_C");

	return Clss;
}


// FieldCommandMenu_C FieldCommandMenu.Default__FieldCommandMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFieldCommandMenu_C* UFieldCommandMenu_C::GetDefaultObj()
{
	static class UFieldCommandMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFieldCommandMenu_C*>(UFieldCommandMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FieldCommandMenu.FieldCommandMenu_C.SetHelpWindowPosition
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 TargetWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandMenu_C::SetHelpWindowPosition(class UUserWidget* TargetWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "SetHelpWindowPosition");

	Params::UFieldCommandMenu_C_SetHelpWindowPosition_Params Parms{};

	Parms.TargetWidget = TargetWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandMenu.FieldCommandMenu_C.UpdateHelpWindow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CursorIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandMenu_C::UpdateHelpWindow(int32 CursorIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "UpdateHelpWindow");

	Params::UFieldCommandMenu_C_UpdateHelpWindow_Params Parms{};

	Parms.CursorIndex = CursorIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandMenu.FieldCommandMenu_C.ToggleHelpWindow
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::ToggleHelpWindow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "ToggleHelpWindow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.CheckUniqueCommandFlow
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFieldCommandMenu_C::CheckUniqueCommandFlow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "CheckUniqueCommandFlow");

	Params::UFieldCommandMenu_C_CheckUniqueCommandFlow_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandMenu.FieldCommandMenu_C.IsInputEnableMode
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFieldCommandMenu_C::IsInputEnableMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "IsInputEnableMode");

	Params::UFieldCommandMenu_C_IsInputEnableMode_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandMenu.FieldCommandMenu_C.SetupCommandPanel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFieldCommandMenuItemPanel_C*Panel                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMJFieldCommandType     FCType                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandMenu_C::SetupCommandPanel(class UFieldCommandMenuItemPanel_C* Panel, enum class EMJFieldCommandType FCType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "SetupCommandPanel");

	Params::UFieldCommandMenu_C_SetupCommandPanel_Params Parms{};

	Parms.Panel = Panel;
	Parms.FCType = FCType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandMenu.FieldCommandMenu_C.UniqueMenuOpenRequest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EREQUEST_RESULT         Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandMenu_C::UniqueMenuOpenRequest(enum class EREQUEST_RESULT Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "UniqueMenuOpenRequest");

	Params::UFieldCommandMenu_C_UniqueMenuOpenRequest_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandMenu.FieldCommandMenu_C.Close
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               StateCheck                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFieldCommandMenu_C::Close(bool StateCheck)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "Close");

	Params::UFieldCommandMenu_C_Close_Params Parms{};

	Parms.StateCheck = StateCheck;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandMenu.FieldCommandMenu_C.Open
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSCharacterBase*            TargetChara                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DrawLeft                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class EMJFieldCommandType>CommandList                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFieldCommandMenu_C::Open(class AKSCharacterBase* TargetChara, bool DrawLeft, TArray<enum class EMJFieldCommandType>& CommandList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "Open");

	Params::UFieldCommandMenu_C_Open_Params Parms{};

	Parms.TargetChara = TargetChara;
	Parms.DrawLeft = DrawLeft;
	Parms.CommandList = CommandList;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandMenu.FieldCommandMenu_C.SetReference
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFieldCommandMenu_C::SetReference()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "SetReference");

	Params::UFieldCommandMenu_C_SetReference_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandMenu.FieldCommandMenu_C.IsRunning
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UFieldCommandMenu_C::IsRunning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "IsRunning");

	Params::UFieldCommandMenu_C_IsRunning_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FieldCommandMenu.FieldCommandMenu_C.CommandDecide
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::CommandDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "CommandDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.UpdateWindowPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::UpdateWindowPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "UpdateWindowPosition");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.UpdateCursor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewCursor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Fast                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFieldCommandMenu_C::UpdateCursor(int32 NewCursor, bool Fast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "UpdateCursor");

	Params::UFieldCommandMenu_C_UpdateCursor_Params Parms{};

	Parms.NewCursor = NewCursor;
	Parms.Fast = Fast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandMenu.FieldCommandMenu_C.CursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::CursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "CursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.CursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::CursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "CursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.Cancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::Cancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "Cancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.Decide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::Decide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "Decide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.SetupCommand
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<enum class EMJFieldCommandType>Array                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               IsSuccess                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFieldCommandMenu_C::SetupCommand(TArray<enum class EMJFieldCommandType>& Array, bool* IsSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "SetupCommand");

	Params::UFieldCommandMenu_C_SetupCommand_Params Parms{};

	Parms.Array = Array;

	UObject::ProcessEvent(Func, &Parms);

	if (IsSuccess != nullptr)
		*IsSuccess = Parms.IsSuccess;

}


// Function FieldCommandMenu.FieldCommandMenu_C.AllHideMenu
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::AllHideMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "AllHideMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.OnMenuLB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::OnMenuLB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "OnMenuLB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.OnMenuRB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::OnMenuRB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "OnMenuRB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.OnMenuButtonStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::OnMenuButtonStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "OnMenuButtonStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.OnMenuButtonSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::OnMenuButtonSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "OnMenuButtonSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.OnCursorLeftRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::OnCursorLeftRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "OnCursorLeftRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.OnCursorRightRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::OnCursorRightRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "OnCursorRightRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.OnMenuDecideRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::OnMenuDecideRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "OnMenuDecideRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.OnMenuCancelRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::OnMenuCancelRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "OnMenuCancelRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.OnMenuButtonXRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::OnMenuButtonXRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "OnMenuButtonXRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.OnMenuButtonYRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::OnMenuButtonYRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "OnMenuButtonYRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.OnMenuLBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::OnMenuLBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "OnMenuLBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.OnMenuRBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::OnMenuRBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "OnMenuRBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.OnMenuButtonStartRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::OnMenuButtonStartRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "OnMenuButtonStartRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.OnMenuButtonSelectRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::OnMenuButtonSelectRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "OnMenuButtonSelectRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.OnRightAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandMenu_C::OnRightAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "OnRightAxisX");

	Params::UFieldCommandMenu_C_OnRightAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandMenu.FieldCommandMenu_C.OnRightAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandMenu_C::OnRightAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "OnRightAxisY");

	Params::UFieldCommandMenu_C_OnRightAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandMenu.FieldCommandMenu_C.OnMenuLStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::OnMenuLStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "OnMenuLStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.OnMenuRStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::OnMenuRStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "OnMenuRStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.OnLeftAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandMenu_C::OnLeftAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "OnLeftAxisX");

	Params::UFieldCommandMenu_C_OnLeftAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandMenu.FieldCommandMenu_C.OnLeftAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandMenu_C::OnLeftAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "OnLeftAxisY");

	Params::UFieldCommandMenu_C_OnLeftAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandMenu.FieldCommandMenu_C.OnPlusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::OnPlusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "OnPlusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.OnMinusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::OnMinusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "OnMinusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.OnRightAxisUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::OnRightAxisUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "OnRightAxisUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.OnRightAxisDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::OnRightAxisDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "OnRightAxisDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.OnMenuRBRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::OnMenuRBRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "OnMenuRBRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.OnGamePadAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandMenu_C::OnGamePadAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "OnGamePadAxisX");

	Params::UFieldCommandMenu_C_OnGamePadAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandMenu.FieldCommandMenu_C.OnGamePadAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandMenu_C::OnGamePadAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "OnGamePadAxisY");

	Params::UFieldCommandMenu_C_OnGamePadAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandMenu.FieldCommandMenu_C.OnCursorUpRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::OnCursorUpRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "OnCursorUpRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.OnCursorDownRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::OnCursorDownRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "OnCursorDownRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.OnCursorLeftRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::OnCursorLeftRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "OnCursorLeftRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.OnCursorRightRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::OnCursorRightRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "OnCursorRightRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.OnAnyButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::OnAnyButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "OnAnyButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.OnListPaging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeftInput                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFieldCommandMenu_C::OnListPaging(bool IsLeftInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "OnListPaging");

	Params::UFieldCommandMenu_C_OnListPaging_Params Parms{};

	Parms.IsLeftInput = IsLeftInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandMenu.FieldCommandMenu_C.OnMenuRTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::OnMenuRTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "OnMenuRTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.OnMenuLTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::OnMenuLTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "OnMenuLTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.OnMenuRightUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::OnMenuRightUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "OnMenuRightUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.OnMenuRightDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::OnMenuRightDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "OnMenuRightDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.ChangeTimeZone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::ChangeTimeZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "ChangeTimeZone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.WorldMapZoomIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::WorldMapZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "WorldMapZoomIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.WorldMapZoomOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::WorldMapZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "WorldMapZoomOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.WorldMapSlowCursorX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandMenu_C::WorldMapSlowCursorX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "WorldMapSlowCursorX");

	Params::UFieldCommandMenu_C_WorldMapSlowCursorX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandMenu.FieldCommandMenu_C.WorldMapSlowCursorY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandMenu_C::WorldMapSlowCursorY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "WorldMapSlowCursorY");

	Params::UFieldCommandMenu_C_WorldMapSlowCursorY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandMenu.FieldCommandMenu_C.ChangeStatusRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::ChangeStatusRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "ChangeStatusRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.ChangeStatusLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::ChangeStatusLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "ChangeStatusLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.OnAnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::OnAnyKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "OnAnyKey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.UpdateOpening
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::UpdateOpening()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "UpdateOpening");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.OnOpenFinish
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::OnOpenFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "OnOpenFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.UpdateMain
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::UpdateMain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "UpdateMain");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.UpdateClosing
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::UpdateClosing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "UpdateClosing");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.OnCloseFinish
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::OnCloseFinish()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "OnCloseFinish");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.OnMenuButtonX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::OnMenuButtonX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "OnMenuButtonX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.OnCursorRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::OnCursorRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "OnCursorRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandMenu_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "Tick");

	Params::UFieldCommandMenu_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandMenu.FieldCommandMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.OnCursorLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::OnCursorLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "OnCursorLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.OnCursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::OnCursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "OnCursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.OnMenuDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::OnMenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "OnMenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.OnMenuCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::OnMenuCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "OnMenuCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.OnCursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::OnCursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "OnCursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.OnCursorUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::OnCursorUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "OnCursorUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.OnCursorDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::OnCursorDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "OnCursorDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.OnMenuButtonY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::OnMenuButtonY()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "OnMenuButtonY");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.UIClose
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::UIClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "UIClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.UIOpen
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UFieldCommandMenu_C::UIOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "UIOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FieldCommandMenu.FieldCommandMenu_C.HelpScrollAxis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisaValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandMenu_C::HelpScrollAxis(float AxisaValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "HelpScrollAxis");

	Params::UFieldCommandMenu_C_HelpScrollAxis_Params Parms{};

	Parms.AxisaValue = AxisaValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FieldCommandMenu.FieldCommandMenu_C.ExecuteUbergraph_FieldCommandMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFieldCommandMenu_C::ExecuteUbergraph_FieldCommandMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FieldCommandMenu_C", "ExecuteUbergraph_FieldCommandMenu");

	Params::UFieldCommandMenu_C_ExecuteUbergraph_FieldCommandMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


