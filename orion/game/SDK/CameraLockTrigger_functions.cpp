#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass CameraLockTrigger.CameraLockTrigger_C
// (Actor)

class UClass* ACameraLockTrigger_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraLockTrigger_C");

	return Clss;
}


// CameraLockTrigger_C CameraLockTrigger.Default__CameraLockTrigger_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACameraLockTrigger_C* ACameraLockTrigger_C::GetDefaultObj()
{
	static class ACameraLockTrigger_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACameraLockTrigger_C*>(ACameraLockTrigger_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CameraLockTrigger.CameraLockTrigger_C.GetCollision
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBoxComponent*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UBoxComponent* ACameraLockTrigger_C::GetCollision()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CameraLockTrigger_C", "GetCollision");

	Params::ACameraLockTrigger_C_GetCollision_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CameraLockTrigger.CameraLockTrigger_C.DebugSetup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ACameraLockTrigger_C::DebugSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CameraLockTrigger_C", "DebugSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CameraLockTrigger.CameraLockTrigger_C.Reset
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ACameraLockTrigger_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CameraLockTrigger_C", "Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CameraLockTrigger.CameraLockTrigger_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ACameraLockTrigger_C::BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CameraLockTrigger_C", "BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::ACameraLockTrigger_C_BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CameraLockTrigger.CameraLockTrigger_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ACameraLockTrigger_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CameraLockTrigger_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CameraLockTrigger.CameraLockTrigger_C.ExecuteUbergraph_CameraLockTrigger
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACameraLockTrigger_C::ExecuteUbergraph_CameraLockTrigger(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("CameraLockTrigger_C", "ExecuteUbergraph_CameraLockTrigger");

	Params::ACameraLockTrigger_C_ExecuteUbergraph_CameraLockTrigger_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


