#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass ActionControllerInterface.ActionControllerInterface_C
// (None)

class UClass* IActionControllerInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActionControllerInterface_C");

	return Clss;
}


// ActionControllerInterface_C ActionControllerInterface.Default__ActionControllerInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IActionControllerInterface_C* IActionControllerInterface_C::GetDefaultObj()
{
	static class IActionControllerInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IActionControllerInterface_C*>(IActionControllerInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ActionControllerInterface.ActionControllerInterface_C.OnActionEventSpeedUpDownButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Input                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IActionControllerInterface_C::OnActionEventSpeedUpDownButton(bool Input)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionControllerInterface_C", "OnActionEventSpeedUpDownButton");

	Params::IActionControllerInterface_C_OnActionEventSpeedUpDownButton_Params Parms{};

	Parms.Input = Input;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionControllerInterface.ActionControllerInterface_C.OnActionBattleSpeedUpButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IActionControllerInterface_C::OnActionBattleSpeedUpButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionControllerInterface_C", "OnActionBattleSpeedUpButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionControllerInterface.ActionControllerInterface_C.OnActionChangeTimeButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IActionControllerInterface_C::OnActionChangeTimeButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionControllerInterface_C", "OnActionChangeTimeButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionControllerInterface.ActionControllerInterface_C.OnActionMenuMinusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IActionControllerInterface_C::OnActionMenuMinusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionControllerInterface_C", "OnActionMenuMinusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionControllerInterface.ActionControllerInterface_C.OnActionMenuPlusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IActionControllerInterface_C::OnActionMenuPlusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionControllerInterface_C", "OnActionMenuPlusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionControllerInterface.ActionControllerInterface_C.OnTick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InputAxisX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InputAxisY                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IActionControllerInterface_C::OnTick(float DeltaTime, float InputAxisX, float InputAxisY)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionControllerInterface_C", "OnTick");

	Params::IActionControllerInterface_C_OnTick_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.InputAxisX = InputAxisX;
	Parms.InputAxisY = InputAxisY;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionControllerInterface.ActionControllerInterface_C.OnPlayerAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IActionControllerInterface_C::OnPlayerAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionControllerInterface_C", "OnPlayerAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionControllerInterface.ActionControllerInterface_C.OnActionDash
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Press                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IActionControllerInterface_C::OnActionDash(bool Press)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionControllerInterface_C", "OnActionDash");

	Params::IActionControllerInterface_C_OnActionDash_Params Parms{};

	Parms.Press = Press;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionControllerInterface.ActionControllerInterface_C.OnActionMenuRB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IActionControllerInterface_C::OnActionMenuRB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionControllerInterface_C", "OnActionMenuRB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionControllerInterface.ActionControllerInterface_C.OnActionMenuCancel_Released
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IActionControllerInterface_C::OnActionMenuCancel_Released()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionControllerInterface_C", "OnActionMenuCancel_Released");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionControllerInterface.ActionControllerInterface_C.OnActionMenuCancel_Pressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IActionControllerInterface_C::OnActionMenuCancel_Pressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionControllerInterface_C", "OnActionMenuCancel_Pressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionControllerInterface.ActionControllerInterface_C.OnActionFieldCommand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IActionControllerInterface_C::OnActionFieldCommand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionControllerInterface_C", "OnActionFieldCommand");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionControllerInterface.ActionControllerInterface_C.OnActionMainMenuOpenClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IActionControllerInterface_C::OnActionMainMenuOpenClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionControllerInterface_C", "OnActionMainMenuOpenClose");



	UObject::ProcessEvent(Func, nullptr);

}

}


