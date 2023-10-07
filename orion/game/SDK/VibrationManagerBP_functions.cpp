#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass VibrationManagerBP.VibrationManagerBP_C
// (Actor)

class UClass* AVibrationManagerBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VibrationManagerBP_C");

	return Clss;
}


// VibrationManagerBP_C VibrationManagerBP.Default__VibrationManagerBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AVibrationManagerBP_C* AVibrationManagerBP_C::GetDefaultObj()
{
	static class AVibrationManagerBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AVibrationManagerBP_C*>(AVibrationManagerBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function VibrationManagerBP.VibrationManagerBP_C.ForcePlayVibrationByLabel
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        VibLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Power                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Loop                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              LoopInterval                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AVibrationManagerBP_C::ForcePlayVibrationByLabel(class FName VibLabel, float Power, bool Loop, int32 LoopInterval)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("VibrationManagerBP_C", "ForcePlayVibrationByLabel");

	Params::AVibrationManagerBP_C_ForcePlayVibrationByLabel_Params Parms{};

	Parms.VibLabel = VibLabel;
	Parms.Power = Power;
	Parms.Loop = Loop;
	Parms.LoopInterval = LoopInterval;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VibrationManagerBP.VibrationManagerBP_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AVibrationManagerBP_C::Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("VibrationManagerBP_C", "Init");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VibrationManagerBP.VibrationManagerBP_C.PlayVibration2ByLabel
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        VibLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVibrationPower         Power                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Loop                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              LoopInterval                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AVibrationManagerBP_C::PlayVibration2ByLabel(class FName VibLabel, enum class EVibrationPower Power, bool Loop, int32 LoopInterval)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("VibrationManagerBP_C", "PlayVibration2ByLabel");

	Params::AVibrationManagerBP_C_PlayVibration2ByLabel_Params Parms{};

	Parms.VibLabel = VibLabel;
	Parms.Power = Power;
	Parms.Loop = Loop;
	Parms.LoopInterval = LoopInterval;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VibrationManagerBP.VibrationManagerBP_C.PlayVibrationByLabel
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        VibLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Power                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Loop                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              LoopInterval                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AVibrationManagerBP_C::PlayVibrationByLabel(class FName VibLabel, float Power, bool Loop, int32 LoopInterval)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("VibrationManagerBP_C", "PlayVibrationByLabel");

	Params::AVibrationManagerBP_C_PlayVibrationByLabel_Params Parms{};

	Parms.VibLabel = VibLabel;
	Parms.Power = Power;
	Parms.Loop = Loop;
	Parms.LoopInterval = LoopInterval;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VibrationManagerBP.VibrationManagerBP_C.OnBeginPlay
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AVibrationManagerBP_C::OnBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("VibrationManagerBP_C", "OnBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VibrationManagerBP.VibrationManagerBP_C.ExecuteUbergraph_VibrationManagerBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AVibrationManagerBP_C::ExecuteUbergraph_VibrationManagerBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("VibrationManagerBP_C", "ExecuteUbergraph_VibrationManagerBP");

	Params::AVibrationManagerBP_C_ExecuteUbergraph_VibrationManagerBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


