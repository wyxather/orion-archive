#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass CharactersGridPanel.CharactersGridPanel_C
// (None)

class UClass* UCharactersGridPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CharactersGridPanel_C");

	return Clss;
}


// CharactersGridPanel_C CharactersGridPanel.Default__CharactersGridPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCharactersGridPanel_C* UCharactersGridPanel_C::GetDefaultObj()
{
	static class UCharactersGridPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCharactersGridPanel_C*>(UCharactersGridPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CharactersGridPanel.CharactersGridPanel_C.On Finished Close Anim
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharactersGridPanel_C::On_Finished_Close_Anim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "On Finished Close Anim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharactersGridPanel.CharactersGridPanel_C.On Finished Open Anim
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharactersGridPanel_C::On_Finished_Open_Anim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "On Finished Open Anim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharactersGridPanel.CharactersGridPanel_C.Decide
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharactersGridPanel_C::Decide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "Decide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharactersGridPanel.CharactersGridPanel_C.SetCursorPosition
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIntPoint                   NewPos                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharactersGridPanel_C::SetCursorPosition(struct FIntPoint& NewPos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "SetCursorPosition");

	Params::UCharactersGridPanel_C_SetCursorPosition_Params Parms{};

	Parms.NewPos = NewPos;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharactersGridPanel.CharactersGridPanel_C.MoveCursor
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIntPoint                   Delta                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharactersGridPanel_C::MoveCursor(struct FIntPoint& Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "MoveCursor");

	Params::UCharactersGridPanel_C_MoveCursor_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharactersGridPanel.CharactersGridPanel_C.Close
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharactersGridPanel_C::Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "Close");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharactersGridPanel.CharactersGridPanel_C.Open
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharactersGridPanel_C::Open()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "Open");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharactersGridPanel.CharactersGridPanel_C.SetMember
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FCharacterGridPanelParam>NewMember                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCharactersGridPanel_C::SetMember(TArray<struct FCharacterGridPanelParam>& NewMember)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "SetMember");

	Params::UCharactersGridPanel_C_SetMember_Params Parms{};

	Parms.NewMember = NewMember;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharactersGridPanel.CharactersGridPanel_C.SetTitleText
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TextLabel                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharactersGridPanel_C::SetTitleText(class FName& TextLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "SetTitleText");

	Params::UCharactersGridPanel_C_SetTitleText_Params Parms{};

	Parms.TextLabel = TextLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharactersGridPanel.CharactersGridPanel_C.SetupWidgetPositions
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharactersGridPanel_C::SetupWidgetPositions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "SetupWidgetPositions");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharactersGridPanel.CharactersGridPanel_C.Construct
// (BlueprintCosmetic, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharactersGridPanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharactersGridPanel.CharactersGridPanel_C.OnCursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharactersGridPanel_C::OnCursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "OnCursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharactersGridPanel.CharactersGridPanel_C.OnCursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharactersGridPanel_C::OnCursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "OnCursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharactersGridPanel.CharactersGridPanel_C.OnCursorLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharactersGridPanel_C::OnCursorLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "OnCursorLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharactersGridPanel.CharactersGridPanel_C.OnCursorRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharactersGridPanel_C::OnCursorRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "OnCursorRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharactersGridPanel.CharactersGridPanel_C.OnMenuDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharactersGridPanel_C::OnMenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "OnMenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharactersGridPanel.CharactersGridPanel_C.OnMenuButtonX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharactersGridPanel_C::OnMenuButtonX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "OnMenuButtonX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharactersGridPanel.CharactersGridPanel_C.OnMenuButtonY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharactersGridPanel_C::OnMenuButtonY()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "OnMenuButtonY");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharactersGridPanel.CharactersGridPanel_C.OnMenuLB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharactersGridPanel_C::OnMenuLB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "OnMenuLB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharactersGridPanel.CharactersGridPanel_C.OnMenuRB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharactersGridPanel_C::OnMenuRB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "OnMenuRB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharactersGridPanel.CharactersGridPanel_C.OnMenuButtonStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharactersGridPanel_C::OnMenuButtonStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "OnMenuButtonStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharactersGridPanel.CharactersGridPanel_C.OnMenuButtonSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharactersGridPanel_C::OnMenuButtonSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "OnMenuButtonSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharactersGridPanel.CharactersGridPanel_C.OnCursorUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharactersGridPanel_C::OnCursorUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "OnCursorUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharactersGridPanel.CharactersGridPanel_C.OnCursorDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharactersGridPanel_C::OnCursorDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "OnCursorDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharactersGridPanel.CharactersGridPanel_C.OnCursorLeftRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharactersGridPanel_C::OnCursorLeftRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "OnCursorLeftRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharactersGridPanel.CharactersGridPanel_C.OnCursorRightRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharactersGridPanel_C::OnCursorRightRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "OnCursorRightRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharactersGridPanel.CharactersGridPanel_C.OnMenuDecideRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharactersGridPanel_C::OnMenuDecideRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "OnMenuDecideRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharactersGridPanel.CharactersGridPanel_C.OnMenuCancelRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharactersGridPanel_C::OnMenuCancelRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "OnMenuCancelRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharactersGridPanel.CharactersGridPanel_C.OnMenuButtonXRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharactersGridPanel_C::OnMenuButtonXRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "OnMenuButtonXRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharactersGridPanel.CharactersGridPanel_C.OnMenuButtonYRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharactersGridPanel_C::OnMenuButtonYRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "OnMenuButtonYRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharactersGridPanel.CharactersGridPanel_C.OnMenuLBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharactersGridPanel_C::OnMenuLBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "OnMenuLBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharactersGridPanel.CharactersGridPanel_C.OnMenuRBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharactersGridPanel_C::OnMenuRBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "OnMenuRBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharactersGridPanel.CharactersGridPanel_C.OnMenuButtonStartRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharactersGridPanel_C::OnMenuButtonStartRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "OnMenuButtonStartRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharactersGridPanel.CharactersGridPanel_C.OnMenuButtonSelectRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharactersGridPanel_C::OnMenuButtonSelectRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "OnMenuButtonSelectRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharactersGridPanel.CharactersGridPanel_C.OnRightAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharactersGridPanel_C::OnRightAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "OnRightAxisX");

	Params::UCharactersGridPanel_C_OnRightAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharactersGridPanel.CharactersGridPanel_C.OnRightAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharactersGridPanel_C::OnRightAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "OnRightAxisY");

	Params::UCharactersGridPanel_C_OnRightAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharactersGridPanel.CharactersGridPanel_C.OnMenuLStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharactersGridPanel_C::OnMenuLStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "OnMenuLStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharactersGridPanel.CharactersGridPanel_C.OnMenuRStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharactersGridPanel_C::OnMenuRStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "OnMenuRStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharactersGridPanel.CharactersGridPanel_C.OnLeftAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharactersGridPanel_C::OnLeftAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "OnLeftAxisX");

	Params::UCharactersGridPanel_C_OnLeftAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharactersGridPanel.CharactersGridPanel_C.OnLeftAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharactersGridPanel_C::OnLeftAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "OnLeftAxisY");

	Params::UCharactersGridPanel_C_OnLeftAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharactersGridPanel.CharactersGridPanel_C.OnPlusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharactersGridPanel_C::OnPlusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "OnPlusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharactersGridPanel.CharactersGridPanel_C.OnMinusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharactersGridPanel_C::OnMinusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "OnMinusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharactersGridPanel.CharactersGridPanel_C.OnRightAxisUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharactersGridPanel_C::OnRightAxisUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "OnRightAxisUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharactersGridPanel.CharactersGridPanel_C.OnRightAxisDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharactersGridPanel_C::OnRightAxisDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "OnRightAxisDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharactersGridPanel.CharactersGridPanel_C.OnMenuRBRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharactersGridPanel_C::OnMenuRBRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "OnMenuRBRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharactersGridPanel.CharactersGridPanel_C.OnGamePadAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharactersGridPanel_C::OnGamePadAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "OnGamePadAxisX");

	Params::UCharactersGridPanel_C_OnGamePadAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharactersGridPanel.CharactersGridPanel_C.OnGamePadAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharactersGridPanel_C::OnGamePadAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "OnGamePadAxisY");

	Params::UCharactersGridPanel_C_OnGamePadAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharactersGridPanel.CharactersGridPanel_C.OnCursorUpRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharactersGridPanel_C::OnCursorUpRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "OnCursorUpRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharactersGridPanel.CharactersGridPanel_C.OnCursorDownRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharactersGridPanel_C::OnCursorDownRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "OnCursorDownRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharactersGridPanel.CharactersGridPanel_C.OnCursorLeftRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharactersGridPanel_C::OnCursorLeftRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "OnCursorLeftRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharactersGridPanel.CharactersGridPanel_C.OnCursorRightRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharactersGridPanel_C::OnCursorRightRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "OnCursorRightRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharactersGridPanel.CharactersGridPanel_C.OnAnyButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharactersGridPanel_C::OnAnyButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "OnAnyButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharactersGridPanel.CharactersGridPanel_C.OnListPaging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeftInput                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCharactersGridPanel_C::OnListPaging(bool IsLeftInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "OnListPaging");

	Params::UCharactersGridPanel_C_OnListPaging_Params Parms{};

	Parms.IsLeftInput = IsLeftInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharactersGridPanel.CharactersGridPanel_C.OnMenuRTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharactersGridPanel_C::OnMenuRTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "OnMenuRTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharactersGridPanel.CharactersGridPanel_C.OnMenuLTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharactersGridPanel_C::OnMenuLTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "OnMenuLTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharactersGridPanel.CharactersGridPanel_C.OnMenuRightUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharactersGridPanel_C::OnMenuRightUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "OnMenuRightUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharactersGridPanel.CharactersGridPanel_C.OnMenuRightDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharactersGridPanel_C::OnMenuRightDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "OnMenuRightDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharactersGridPanel.CharactersGridPanel_C.ChangeTimeZone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharactersGridPanel_C::ChangeTimeZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "ChangeTimeZone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharactersGridPanel.CharactersGridPanel_C.WorldMapZoomIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharactersGridPanel_C::WorldMapZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "WorldMapZoomIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharactersGridPanel.CharactersGridPanel_C.WorldMapZoomOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharactersGridPanel_C::WorldMapZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "WorldMapZoomOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharactersGridPanel.CharactersGridPanel_C.WorldMapSlowCursorX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharactersGridPanel_C::WorldMapSlowCursorX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "WorldMapSlowCursorX");

	Params::UCharactersGridPanel_C_WorldMapSlowCursorX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharactersGridPanel.CharactersGridPanel_C.WorldMapSlowCursorY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharactersGridPanel_C::WorldMapSlowCursorY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "WorldMapSlowCursorY");

	Params::UCharactersGridPanel_C_WorldMapSlowCursorY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharactersGridPanel.CharactersGridPanel_C.ChangeStatusRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharactersGridPanel_C::ChangeStatusRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "ChangeStatusRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharactersGridPanel.CharactersGridPanel_C.ChangeStatusLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharactersGridPanel_C::ChangeStatusLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "ChangeStatusLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharactersGridPanel.CharactersGridPanel_C.HelpScrollAxis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisaValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharactersGridPanel_C::HelpScrollAxis(float AxisaValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "HelpScrollAxis");

	Params::UCharactersGridPanel_C_HelpScrollAxis_Params Parms{};

	Parms.AxisaValue = AxisaValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharactersGridPanel.CharactersGridPanel_C.OnAnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharactersGridPanel_C::OnAnyKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "OnAnyKey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharactersGridPanel.CharactersGridPanel_C.OnMenuCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharactersGridPanel_C::OnMenuCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "OnMenuCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharactersGridPanel.CharactersGridPanel_C.ExecuteUbergraph_CharactersGridPanel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharactersGridPanel_C::ExecuteUbergraph_CharactersGridPanel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CharactersGridPanel_C", "ExecuteUbergraph_CharactersGridPanel");

	Params::UCharactersGridPanel_C_ExecuteUbergraph_CharactersGridPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


