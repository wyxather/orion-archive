#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BP_Obj_EnvSound_Base.BP_Obj_EnvSound_Base_C
// (Actor)

class UClass* ABP_Obj_EnvSound_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Obj_EnvSound_Base_C");

	return Clss;
}


// BP_Obj_EnvSound_Base_C BP_Obj_EnvSound_Base.Default__BP_Obj_EnvSound_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Obj_EnvSound_Base_C* ABP_Obj_EnvSound_Base_C::GetDefaultObj()
{
	static class ABP_Obj_EnvSound_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Obj_EnvSound_Base_C*>(ABP_Obj_EnvSound_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Obj_EnvSound_Base.BP_Obj_EnvSound_Base_C.StopEnvSound
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Obj_EnvSound_Base_C::StopEnvSound(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_Obj_EnvSound_Base_C", "StopEnvSound");

	Params::ABP_Obj_EnvSound_Base_C_StopEnvSound_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_Obj_EnvSound_Base.BP_Obj_EnvSound_Base_C.GetAtomComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAtomComponent*              AtomComponent                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Obj_EnvSound_Base_C::GetAtomComponent(class UAtomComponent** AtomComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_Obj_EnvSound_Base_C", "GetAtomComponent");

	Params::ABP_Obj_EnvSound_Base_C_GetAtomComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AtomComponent != nullptr)
		*AtomComponent = Parms.AtomComponent;

}


// Function BP_Obj_EnvSound_Base.BP_Obj_EnvSound_Base_C.Pause
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bPause                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Obj_EnvSound_Base_C::Pause(bool bPause, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_Obj_EnvSound_Base_C", "Pause");

	Params::ABP_Obj_EnvSound_Base_C_Pause_Params Parms{};

	Parms.bPause = bPause;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_Obj_EnvSound_Base.BP_Obj_EnvSound_Base_C.SetVolume
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Volume                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Obj_EnvSound_Base_C::SetVolume(float Volume, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_Obj_EnvSound_Base_C", "SetVolume");

	Params::ABP_Obj_EnvSound_Base_C_SetVolume_Params Parms{};

	Parms.Volume = Volume;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_Obj_EnvSound_Base.BP_Obj_EnvSound_Base_C.InitSound
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Obj_EnvSound_Base_C::InitSound(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_Obj_EnvSound_Base_C", "InitSound");

	Params::ABP_Obj_EnvSound_Base_C_InitSound_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_Obj_EnvSound_Base.BP_Obj_EnvSound_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Obj_EnvSound_Base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_Obj_EnvSound_Base_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Obj_EnvSound_Base.BP_Obj_EnvSound_Base_C.ExecuteUbergraph_BP_Obj_EnvSound_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Obj_EnvSound_Base_C::ExecuteUbergraph_BP_Obj_EnvSound_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_Obj_EnvSound_Base_C", "ExecuteUbergraph_BP_Obj_EnvSound_Base");

	Params::ABP_Obj_EnvSound_Base_C_ExecuteUbergraph_BP_Obj_EnvSound_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


