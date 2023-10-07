#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass ActionController_Impl.ActionController_Impl_C
// (None)

class UClass* UActionController_Impl_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActionController_Impl_C");

	return Clss;
}


// ActionController_Impl_C ActionController_Impl.Default__ActionController_Impl_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UActionController_Impl_C* UActionController_Impl_C::GetDefaultObj()
{
	static class UActionController_Impl_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UActionController_Impl_C*>(UActionController_Impl_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ActionController_Impl.ActionController_Impl_C.OnPlayerInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionController_Impl_C::OnPlayerInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionController_Impl_C", "OnPlayerInput");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionController_Impl.ActionController_Impl_C.EqaulZero
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              X                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Y                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UActionController_Impl_C::EqaulZero(float X, float Y)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionController_Impl_C", "EqaulZero");

	Params::UActionController_Impl_C_EqaulZero_Params Parms{};

	Parms.X = X;
	Parms.Y = Y;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ActionController_Impl.ActionController_Impl_C.Move
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSCharacterBase*            Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Axis                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionController_Impl_C::Move(class AKSCharacterBase* Character, float DeltaTime, const struct FVector2D& Axis)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionController_Impl_C", "Move");

	Params::UActionController_Impl_C_Move_Params Parms{};

	Parms.Character = Character;
	Parms.DeltaTime = DeltaTime;
	Parms.Axis = Axis;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionController_Impl.ActionController_Impl_C.OnActionMenuCancel_Released
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionController_Impl_C::OnActionMenuCancel_Released()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionController_Impl_C", "OnActionMenuCancel_Released");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionController_Impl.ActionController_Impl_C.OnActionMenuRB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionController_Impl_C::OnActionMenuRB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionController_Impl_C", "OnActionMenuRB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionController_Impl.ActionController_Impl_C.OnTick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InputAxisX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InputAxisY                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionController_Impl_C::OnTick(float DeltaTime, float InputAxisX, float InputAxisY)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionController_Impl_C", "OnTick");

	Params::UActionController_Impl_C_OnTick_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.InputAxisX = InputAxisX;
	Parms.InputAxisY = InputAxisY;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionController_Impl.ActionController_Impl_C.OnActionMenuCancel_Pressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionController_Impl_C::OnActionMenuCancel_Pressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionController_Impl_C", "OnActionMenuCancel_Pressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionController_Impl.ActionController_Impl_C.OnActionMainMenuOpenClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionController_Impl_C::OnActionMainMenuOpenClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionController_Impl_C", "OnActionMainMenuOpenClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionController_Impl.ActionController_Impl_C.OnActionFieldCommand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionController_Impl_C::OnActionFieldCommand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionController_Impl_C", "OnActionFieldCommand");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionController_Impl.ActionController_Impl_C.OnActionMenuPlusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionController_Impl_C::OnActionMenuPlusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionController_Impl_C", "OnActionMenuPlusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionController_Impl.ActionController_Impl_C.OnActionMenuMinusButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionController_Impl_C::OnActionMenuMinusButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionController_Impl_C", "OnActionMenuMinusButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionController_Impl.ActionController_Impl_C.OnPlayerAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionController_Impl_C::OnPlayerAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionController_Impl_C", "OnPlayerAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionController_Impl.ActionController_Impl_C.OnActionDash
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Press                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UActionController_Impl_C::OnActionDash(bool Press)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionController_Impl_C", "OnActionDash");

	Params::UActionController_Impl_C_OnActionDash_Params Parms{};

	Parms.Press = Press;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionController_Impl.ActionController_Impl_C.OnActionChangeTimeButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionController_Impl_C::OnActionChangeTimeButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionController_Impl_C", "OnActionChangeTimeButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionController_Impl.ActionController_Impl_C.OnActionBattleSpeedUpButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionController_Impl_C::OnActionBattleSpeedUpButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionController_Impl_C", "OnActionBattleSpeedUpButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionController_Impl.ActionController_Impl_C.OnActionEventSpeedUpDownButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Input                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UActionController_Impl_C::OnActionEventSpeedUpDownButton(bool Input)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionController_Impl_C", "OnActionEventSpeedUpDownButton");

	Params::UActionController_Impl_C_OnActionEventSpeedUpDownButton_Params Parms{};

	Parms.Input = Input;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionController_Impl.ActionController_Impl_C.ExecuteUbergraph_ActionController_Impl
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionController_Impl_C::ExecuteUbergraph_ActionController_Impl(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ActionController_Impl_C", "ExecuteUbergraph_ActionController_Impl");

	Params::UActionController_Impl_C_ExecuteUbergraph_ActionController_Impl_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


