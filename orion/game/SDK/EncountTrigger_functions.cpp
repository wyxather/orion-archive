#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass EncountTrigger.EncountTrigger_C
// (Actor)

class UClass* AEncountTrigger_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EncountTrigger_C");

	return Clss;
}


// EncountTrigger_C EncountTrigger.Default__EncountTrigger_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEncountTrigger_C* AEncountTrigger_C::GetDefaultObj()
{
	static class AEncountTrigger_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEncountTrigger_C*>(AEncountTrigger_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EncountTrigger.EncountTrigger_C.SetDisableTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEncountTrigger_C::SetDisableTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountTrigger_C", "SetDisableTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EncountTrigger.EncountTrigger_C.Debug_GetDebugInfo_BP
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString AEncountTrigger_C::Debug_GetDebugInfo_BP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountTrigger_C", "Debug_GetDebugInfo_BP");

	Params::AEncountTrigger_C_Debug_GetDebugInfo_BP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EncountTrigger.EncountTrigger_C.SetEncountVolume
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEncountTrigger_C::SetEncountVolume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountTrigger_C", "SetEncountVolume");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EncountTrigger.EncountTrigger_C.GetReplaceEncountTriggerLabel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEncountTrigger_C::GetReplaceEncountTriggerLabel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountTrigger_C", "GetReplaceEncountTriggerLabel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EncountTrigger.EncountTrigger_C.Set Encount Volume OLD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEncountTrigger_C::Set_Encount_Volume_OLD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountTrigger_C", "Set Encount Volume OLD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EncountTrigger.EncountTrigger_C.CheckTriggerActive
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsActive                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEncountTrigger_C::CheckTriggerActive(bool* IsActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountTrigger_C", "CheckTriggerActive");

	Params::AEncountTrigger_C_CheckTriggerActive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsActive != nullptr)
		*IsActive = Parms.IsActive;

}


// Function EncountTrigger.EncountTrigger_C.CanActivateTrigger
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEncountTrigger_C::CanActivateTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountTrigger_C", "CanActivateTrigger");

	Params::AEncountTrigger_C_CanActivateTrigger_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EncountTrigger.EncountTrigger_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEncountTrigger_C::BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountTrigger_C", "BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature");

	Params::AEncountTrigger_C_BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EncountTrigger.EncountTrigger_C.ExecuteUbergraph_EncountTrigger
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEncountTrigger_C::ExecuteUbergraph_EncountTrigger(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EncountTrigger_C", "ExecuteUbergraph_EncountTrigger");

	Params::AEncountTrigger_C_ExecuteUbergraph_EncountTrigger_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


