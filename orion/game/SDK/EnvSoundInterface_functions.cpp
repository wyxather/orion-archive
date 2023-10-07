#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass EnvSoundInterface.EnvSoundInterface_C
// (None)

class UClass* IEnvSoundInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvSoundInterface_C");

	return Clss;
}


// EnvSoundInterface_C EnvSoundInterface.Default__EnvSoundInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IEnvSoundInterface_C* IEnvSoundInterface_C::GetDefaultObj()
{
	static class IEnvSoundInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IEnvSoundInterface_C*>(IEnvSoundInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EnvSoundInterface.EnvSoundInterface_C.StopEnvSound
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IEnvSoundInterface_C::StopEnvSound(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EnvSoundInterface_C", "StopEnvSound");

	Params::IEnvSoundInterface_C_StopEnvSound_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function EnvSoundInterface.EnvSoundInterface_C.GetAtomComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAtomComponent*              AtomComponent                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IEnvSoundInterface_C::GetAtomComponent(class UAtomComponent** AtomComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EnvSoundInterface_C", "GetAtomComponent");

	Params::IEnvSoundInterface_C_GetAtomComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AtomComponent != nullptr)
		*AtomComponent = Parms.AtomComponent;

}


// Function EnvSoundInterface.EnvSoundInterface_C.InitSound
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IEnvSoundInterface_C::InitSound(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EnvSoundInterface_C", "InitSound");

	Params::IEnvSoundInterface_C_InitSound_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function EnvSoundInterface.EnvSoundInterface_C.SetVolume
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Volume                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IEnvSoundInterface_C::SetVolume(float Volume, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EnvSoundInterface_C", "SetVolume");

	Params::IEnvSoundInterface_C_SetVolume_Params Parms{};

	Parms.Volume = Volume;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function EnvSoundInterface.EnvSoundInterface_C.Pause
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bPause                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IEnvSoundInterface_C::Pause(bool bPause, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EnvSoundInterface_C", "Pause");

	Params::IEnvSoundInterface_C_Pause_Params Parms{};

	Parms.bPause = bPause;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}

}


