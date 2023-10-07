#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass EventTarget.EventTarget_C
// (Actor, Pawn)

class UClass* AEventTarget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EventTarget_C");

	return Clss;
}


// EventTarget_C EventTarget.Default__EventTarget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEventTarget_C* AEventTarget_C::GetDefaultObj()
{
	static class AEventTarget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEventTarget_C*>(AEventTarget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EventTarget.EventTarget_C.ResetAttachCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEventTarget_C::ResetAttachCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventTarget_C", "ResetAttachCharacter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventTarget.EventTarget_C.SetAttachCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TargetIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEventTarget_C::SetAttachCharacter(int32 TargetIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventTarget_C", "SetAttachCharacter");

	Params::AEventTarget_C_SetAttachCharacter_Params Parms{};

	Parms.TargetIndex = TargetIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventTarget.EventTarget_C.SetCameraDistanceRate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DistanceRate                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEventTarget_C::SetCameraDistanceRate(float DistanceRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventTarget_C", "SetCameraDistanceRate");

	Params::AEventTarget_C_SetCameraDistanceRate_Params Parms{};

	Parms.DistanceRate = DistanceRate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventTarget.EventTarget_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AEventTarget_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventTarget_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventTarget.EventTarget_C.SwitchCamera
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               InHouse                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEventTarget_C::SwitchCamera(struct FEventData& RefEventData, bool InHouse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventTarget_C", "SwitchCamera");

	Params::AEventTarget_C_SwitchCamera_Params Parms{};

	Parms.RefEventData = RefEventData;
	Parms.InHouse = InHouse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventTarget.EventTarget_C.FollowingCamera
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventData                  RefEventData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AEventTarget_C::FollowingCamera(struct FEventData& RefEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventTarget_C", "FollowingCamera");

	Params::AEventTarget_C_FollowingCamera_Params Parms{};

	Parms.RefEventData = RefEventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventTarget.EventTarget_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEventTarget_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventTarget_C", "ReceiveTick");

	Params::AEventTarget_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventTarget.EventTarget_C.ExecuteUbergraph_EventTarget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEventTarget_C::ExecuteUbergraph_EventTarget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventTarget_C", "ExecuteUbergraph_EventTarget");

	Params::AEventTarget_C_ExecuteUbergraph_EventTarget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


