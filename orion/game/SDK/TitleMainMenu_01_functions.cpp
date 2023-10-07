#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass TitleMainMenu_01.TitleMainMenu_01_C
// (None)

class UClass* UTitleMainMenu_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TitleMainMenu_01_C");

	return Clss;
}


// TitleMainMenu_01_C TitleMainMenu_01.Default__TitleMainMenu_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTitleMainMenu_01_C* UTitleMainMenu_01_C::GetDefaultObj()
{
	static class UTitleMainMenu_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTitleMainMenu_01_C*>(UTitleMainMenu_01_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnDecide_FromPS4
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::OnDecide_FromPS4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnDecide_FromPS4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.Scroll List
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::Scroll_List()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "Scroll List");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnClosedConfrimQuitDialog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitleMainMenu_01_C::OnClosedConfrimQuitDialog(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnClosedConfrimQuitDialog");

	Params::UTitleMainMenu_01_C_OnClosedConfrimQuitDialog_Params Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.GetisExistsTrialData
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UTitleMainMenu_01_C::GetisExistsTrialData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "GetisExistsTrialData");

	Params::UTitleMainMenu_01_C_GetisExistsTrialData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.InitFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::InitFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "InitFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.Start
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.SetupDelegate
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::SetupDelegate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "SetupDelegate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnDecide_Option
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::OnDecide_Option()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnDecide_Option");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnDecide_QuitGame
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::OnDecide_QuitGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnDecide_QuitGame");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnDecide_LoadFromTrial
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::OnDecide_LoadFromTrial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnDecide_LoadFromTrial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnDecide_Load
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::OnDecide_Load()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnDecide_Load");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnDecide_NewGame
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::OnDecide_NewGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnDecide_NewGame");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.SetupMenu
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::SetupMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "SetupMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.IsEnd
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UTitleMainMenu_01_C::IsEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "IsEnd");

	Params::UTitleMainMenu_01_C_IsEnd_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnFocusUp
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::OnFocusUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnFocusUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnFocusDown
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::OnFocusDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnFocusDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.FocusButton
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Select                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               PlaySE                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTitleMainMenu_01_C::FocusButton(int32 Select, bool PlaySE, bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "FocusButton");

	Params::UTitleMainMenu_01_C_FocusButton_Params Parms{};

	Parms.Select = Select;
	Parms.PlaySE = PlaySE;
	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnCursorUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::OnCursorUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnCursorUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnCursorDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::OnCursorDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnCursorDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnCursorLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::OnCursorLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnCursorLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnCursorRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::OnCursorRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnCursorRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnMenuButtonX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::OnMenuButtonX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnMenuButtonX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnMenuButtonY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::OnMenuButtonY()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnMenuButtonY");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnMenuLB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::OnMenuLB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnMenuLB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnMenuRB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::OnMenuRB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnMenuRB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnMenuButtonStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::OnMenuButtonStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnMenuButtonStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnMenuButtonSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::OnMenuButtonSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnMenuButtonSelect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnCursorLeftRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::OnCursorLeftRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnCursorLeftRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnCursorRightRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::OnCursorRightRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnCursorRightRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnMenuDecideRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::OnMenuDecideRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnMenuDecideRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnMenuCancelRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::OnMenuCancelRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnMenuCancelRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnMenuButtonXRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::OnMenuButtonXRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnMenuButtonXRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnMenuButtonYRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::OnMenuButtonYRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnMenuButtonYRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnMenuLBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::OnMenuLBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnMenuLBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnMenuRBRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::OnMenuRBRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnMenuRBRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnMenuButtonStartRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::OnMenuButtonStartRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnMenuButtonStartRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnMenuButtonSelectRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::OnMenuButtonSelectRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnMenuButtonSelectRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnRightAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitleMainMenu_01_C::OnRightAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnRightAxisX");

	Params::UTitleMainMenu_01_C_OnRightAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnRightAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitleMainMenu_01_C::OnRightAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnRightAxisY");

	Params::UTitleMainMenu_01_C_OnRightAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnMenuLStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::OnMenuLStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnMenuLStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnMenuRStickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::OnMenuRStickButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnMenuRStickButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnLeftAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitleMainMenu_01_C::OnLeftAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnLeftAxisX");

	Params::UTitleMainMenu_01_C_OnLeftAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnLeftAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitleMainMenu_01_C::OnLeftAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnLeftAxisY");

	Params::UTitleMainMenu_01_C_OnLeftAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnPlusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::OnPlusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnPlusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnMinusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::OnMinusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnMinusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnRightAxisUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::OnRightAxisUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnRightAxisUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnRightAxisDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::OnRightAxisDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnRightAxisDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnMenuRBRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::OnMenuRBRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnMenuRBRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnGamePadAxisX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitleMainMenu_01_C::OnGamePadAxisX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnGamePadAxisX");

	Params::UTitleMainMenu_01_C_OnGamePadAxisX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnGamePadAxisY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitleMainMenu_01_C::OnGamePadAxisY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnGamePadAxisY");

	Params::UTitleMainMenu_01_C_OnGamePadAxisY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnCursorUpRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::OnCursorUpRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnCursorUpRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnCursorDownRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::OnCursorDownRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnCursorDownRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnCursorLeftRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::OnCursorLeftRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnCursorLeftRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnCursorRightRelease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::OnCursorRightRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnCursorRightRelease");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnAnyButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::OnAnyButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnAnyButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnListPaging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeftInput                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTitleMainMenu_01_C::OnListPaging(bool IsLeftInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnListPaging");

	Params::UTitleMainMenu_01_C_OnListPaging_Params Parms{};

	Parms.IsLeftInput = IsLeftInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnMenuRTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::OnMenuRTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnMenuRTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnMenuLTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::OnMenuLTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnMenuLTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnMenuRightUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::OnMenuRightUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnMenuRightUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnMenuRightDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::OnMenuRightDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnMenuRightDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.ChangeTimeZone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::ChangeTimeZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "ChangeTimeZone");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.WorldMapZoomIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::WorldMapZoomIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "WorldMapZoomIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.WorldMapZoomOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::WorldMapZoomOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "WorldMapZoomOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.WorldMapSlowCursorX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitleMainMenu_01_C::WorldMapSlowCursorX(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "WorldMapSlowCursorX");

	Params::UTitleMainMenu_01_C_WorldMapSlowCursorX_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.WorldMapSlowCursorY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitleMainMenu_01_C::WorldMapSlowCursorY(float AxisValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "WorldMapSlowCursorY");

	Params::UTitleMainMenu_01_C_WorldMapSlowCursorY_Params Parms{};

	Parms.AxisValue = AxisValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.ChangeStatusRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::ChangeStatusRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "ChangeStatusRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.ChangeStatusLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::ChangeStatusLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "ChangeStatusLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.HelpScrollAxis
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              AxisaValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitleMainMenu_01_C::HelpScrollAxis(float AxisaValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "HelpScrollAxis");

	Params::UTitleMainMenu_01_C_HelpScrollAxis_Params Parms{};

	Parms.AxisaValue = AxisaValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnAnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::OnAnyKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnAnyKey");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnCursorDownRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::OnCursorDownRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnCursorDownRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnCursorUpRepeat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::OnCursorUpRepeat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnCursorUpRepeat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnMenuDecide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::OnMenuDecide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnMenuDecide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnMenuCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::OnMenuCancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnMenuCancel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitleMainMenu_01_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "Tick");

	Params::UTitleMainMenu_01_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.OnFinishedFadeOut
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleMainMenu_01_C::OnFinishedFadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "OnFinishedFadeOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleMainMenu_01.TitleMainMenu_01_C.ExecuteUbergraph_TitleMainMenu_01
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTitleMainMenu_01_C::ExecuteUbergraph_TitleMainMenu_01(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TitleMainMenu_01_C", "ExecuteUbergraph_TitleMainMenu_01");

	Params::UTitleMainMenu_01_C_ExecuteUbergraph_TitleMainMenu_01_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


