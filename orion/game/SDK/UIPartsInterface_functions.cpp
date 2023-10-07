#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass UIPartsInterface.UIPartsInterface_C
// (None)

class UClass* IUIPartsInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIPartsInterface_C");

	return Clss;
}


// UIPartsInterface_C UIPartsInterface.Default__UIPartsInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IUIPartsInterface_C* IUIPartsInterface_C::GetDefaultObj()
{
	static class IUIPartsInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IUIPartsInterface_C*>(IUIPartsInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UIPartsInterface.UIPartsInterface_C.InitWidgetData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUIPartsInterface_C::InitWidgetData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIPartsInterface_C", "InitWidgetData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIPartsInterface.UIPartsInterface_C.IsUIPartsRunning
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               IsRunning                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IUIPartsInterface_C::IsUIPartsRunning(bool* IsRunning)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIPartsInterface_C", "IsUIPartsRunning");

	Params::IUIPartsInterface_C_IsUIPartsRunning_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsRunning != nullptr)
		*IsRunning = Parms.IsRunning;

}


// Function UIPartsInterface.UIPartsInterface_C.IsPlayingAnim
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               IsPlaying                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IUIPartsInterface_C::IsPlayingAnim(bool* IsPlaying)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIPartsInterface_C", "IsPlayingAnim");

	Params::IUIPartsInterface_C_IsPlayingAnim_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsPlaying != nullptr)
		*IsPlaying = Parms.IsPlaying;

}


// Function UIPartsInterface.UIPartsInterface_C.CloseWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUIPartsInterface_C::CloseWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIPartsInterface_C", "CloseWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIPartsInterface.UIPartsInterface_C.OpenWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IUIPartsInterface_C::OpenWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UIPartsInterface_C", "OpenWidget");



	UObject::ProcessEvent(Func, nullptr);

}

}


