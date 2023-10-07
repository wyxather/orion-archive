#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass ToggleButtonWBP.ToggleButtonWBP_C
// (None)

class UClass* UToggleButtonWBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ToggleButtonWBP_C");

	return Clss;
}


// ToggleButtonWBP_C ToggleButtonWBP.Default__ToggleButtonWBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UToggleButtonWBP_C* UToggleButtonWBP_C::GetDefaultObj()
{
	static class UToggleButtonWBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UToggleButtonWBP_C*>(UToggleButtonWBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ToggleButtonWBP.ToggleButtonWBP_C.Focus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UToggleButtonWBP_C::Focus(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ToggleButtonWBP_C", "Focus");

	Params::UToggleButtonWBP_C_Focus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToggleButtonWBP.ToggleButtonWBP_C.OutFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UToggleButtonWBP_C::OutFocus(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ToggleButtonWBP_C", "OutFocus");

	Params::UToggleButtonWBP_C_OutFocus_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToggleButtonWBP.ToggleButtonWBP_C.SetValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ToggleSwitch                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UToggleButtonWBP_C::SetValue(bool ToggleSwitch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ToggleButtonWBP_C", "SetValue");

	Params::UToggleButtonWBP_C_SetValue_Params Parms{};

	Parms.ToggleSwitch = ToggleSwitch;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToggleButtonWBP.ToggleButtonWBP_C.GetToggleStatus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ToggleSwitch                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UToggleButtonWBP_C::GetToggleStatus(bool* ToggleSwitch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ToggleButtonWBP_C", "GetToggleStatus");

	Params::UToggleButtonWBP_C_GetToggleStatus_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ToggleSwitch != nullptr)
		*ToggleSwitch = Parms.ToggleSwitch;

}


// Function ToggleButtonWBP.ToggleButtonWBP_C.SwitchToggle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UToggleButtonWBP_C::SwitchToggle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ToggleButtonWBP_C", "SwitchToggle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ToggleButtonWBP.ToggleButtonWBP_C.UpdateToggle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFast                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UToggleButtonWBP_C::UpdateToggle(bool IsFast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ToggleButtonWBP_C", "UpdateToggle");

	Params::UToggleButtonWBP_C_UpdateToggle_Params Parms{};

	Parms.IsFast = IsFast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToggleButtonWBP.ToggleButtonWBP_C.UpdateText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UToggleButtonWBP_C::UpdateText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ToggleButtonWBP_C", "UpdateText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ToggleButtonWBP.ToggleButtonWBP_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UToggleButtonWBP_C::Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ToggleButtonWBP_C", "Init");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ToggleButtonWBP.ToggleButtonWBP_C.OnInputRight
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UToggleButtonWBP_C::OnInputRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ToggleButtonWBP_C", "OnInputRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ToggleButtonWBP.ToggleButtonWBP_C.OnInputLeft
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UToggleButtonWBP_C::OnInputLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ToggleButtonWBP_C", "OnInputLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ToggleButtonWBP.ToggleButtonWBP_C.InitExWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UToggleButtonWBP_C::InitExWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ToggleButtonWBP_C", "InitExWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ToggleButtonWBP.ToggleButtonWBP_C.ResetAppearance
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UToggleButtonWBP_C::ResetAppearance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ToggleButtonWBP_C", "ResetAppearance");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ToggleButtonWBP.ToggleButtonWBP_C.ExecuteUbergraph_ToggleButtonWBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UToggleButtonWBP_C::ExecuteUbergraph_ToggleButtonWBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ToggleButtonWBP_C", "ExecuteUbergraph_ToggleButtonWBP");

	Params::UToggleButtonWBP_C_ExecuteUbergraph_ToggleButtonWBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ToggleButtonWBP.ToggleButtonWBP_C.OnChangeValue__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UToggleButtonWBP_C::OnChangeValue__DelegateSignature(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ToggleButtonWBP_C", "OnChangeValue__DelegateSignature");

	Params::UToggleButtonWBP_C_OnChangeValue__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}

}


