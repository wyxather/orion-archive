#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BP_Obj_EnvSound_Gaya.BP_Obj_EnvSound_Gaya_C
// (Actor)

class UClass* ABP_Obj_EnvSound_Gaya_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Obj_EnvSound_Gaya_C");

	return Clss;
}


// BP_Obj_EnvSound_Gaya_C BP_Obj_EnvSound_Gaya.Default__BP_Obj_EnvSound_Gaya_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Obj_EnvSound_Gaya_C* ABP_Obj_EnvSound_Gaya_C::GetDefaultObj()
{
	static class ABP_Obj_EnvSound_Gaya_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Obj_EnvSound_Gaya_C*>(ABP_Obj_EnvSound_Gaya_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Obj_EnvSound_Gaya.BP_Obj_EnvSound_Gaya_C.StopEnvSound
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Obj_EnvSound_Gaya_C::StopEnvSound(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_Obj_EnvSound_Gaya_C", "StopEnvSound");

	Params::ABP_Obj_EnvSound_Gaya_C_StopEnvSound_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_Obj_EnvSound_Gaya.BP_Obj_EnvSound_Gaya_C.Pause
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bPause                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Obj_EnvSound_Gaya_C::Pause(bool bPause, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_Obj_EnvSound_Gaya_C", "Pause");

	Params::ABP_Obj_EnvSound_Gaya_C_Pause_Params Parms{};

	Parms.bPause = bPause;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_Obj_EnvSound_Gaya.BP_Obj_EnvSound_Gaya_C.SetVolume
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Volume                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Obj_EnvSound_Gaya_C::SetVolume(float Volume, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_Obj_EnvSound_Gaya_C", "SetVolume");

	Params::ABP_Obj_EnvSound_Gaya_C_SetVolume_Params Parms{};

	Parms.Volume = Volume;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_Obj_EnvSound_Gaya.BP_Obj_EnvSound_Gaya_C.InitSound
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Obj_EnvSound_Gaya_C::InitSound(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_Obj_EnvSound_Gaya_C", "InitSound");

	Params::ABP_Obj_EnvSound_Gaya_C_InitSound_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_Obj_EnvSound_Gaya.BP_Obj_EnvSound_Gaya_C.GetAtomComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAtomComponent*              AtomComponent                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Obj_EnvSound_Gaya_C::GetAtomComponent(class UAtomComponent** AtomComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_Obj_EnvSound_Gaya_C", "GetAtomComponent");

	Params::ABP_Obj_EnvSound_Gaya_C_GetAtomComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AtomComponent != nullptr)
		*AtomComponent = Parms.AtomComponent;

}


// Function BP_Obj_EnvSound_Gaya.BP_Obj_EnvSound_Gaya_C.PlayGaya
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPlay                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Obj_EnvSound_Gaya_C::PlayGaya(bool* IsPlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_Obj_EnvSound_Gaya_C", "PlayGaya");

	Params::ABP_Obj_EnvSound_Gaya_C_PlayGaya_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsPlay != nullptr)
		*IsPlay = Parms.IsPlay;

}


// Function BP_Obj_EnvSound_Gaya.BP_Obj_EnvSound_Gaya_C.SetupBox
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Obj_EnvSound_Gaya_C::SetupBox()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_Obj_EnvSound_Gaya_C", "SetupBox");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Obj_EnvSound_Gaya.BP_Obj_EnvSound_Gaya_C.SetupSphere
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Obj_EnvSound_Gaya_C::SetupSphere()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_Obj_EnvSound_Gaya_C", "SetupSphere");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Obj_EnvSound_Gaya.BP_Obj_EnvSound_Gaya_C.Setup Gaya Voice 
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Obj_EnvSound_Gaya_C::Setup_Gaya_Voice_()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_Obj_EnvSound_Gaya_C", "Setup Gaya Voice ");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Obj_EnvSound_Gaya.BP_Obj_EnvSound_Gaya_C.SetObjectEnable
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Obj_EnvSound_Gaya_C::SetObjectEnable(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_Obj_EnvSound_Gaya_C", "SetObjectEnable");

	Params::ABP_Obj_EnvSound_Gaya_C_SetObjectEnable_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Obj_EnvSound_Gaya.BP_Obj_EnvSound_Gaya_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Obj_EnvSound_Gaya_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_Obj_EnvSound_Gaya_C", "ReceiveTick");

	Params::ABP_Obj_EnvSound_Gaya_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Obj_EnvSound_Gaya.BP_Obj_EnvSound_Gaya_C.ExecuteUbergraph_BP_Obj_EnvSound_Gaya
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Obj_EnvSound_Gaya_C::ExecuteUbergraph_BP_Obj_EnvSound_Gaya(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_Obj_EnvSound_Gaya_C", "ExecuteUbergraph_BP_Obj_EnvSound_Gaya");

	Params::ABP_Obj_EnvSound_Gaya_C_ExecuteUbergraph_BP_Obj_EnvSound_Gaya_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


