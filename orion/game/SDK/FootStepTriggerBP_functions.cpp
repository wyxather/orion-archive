#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass FootStepTriggerBP.FootStepTriggerBP_C
// (Actor)

class UClass* AFootStepTriggerBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FootStepTriggerBP_C");

	return Clss;
}


// FootStepTriggerBP_C FootStepTriggerBP.Default__FootStepTriggerBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFootStepTriggerBP_C* AFootStepTriggerBP_C::GetDefaultObj()
{
	static class AFootStepTriggerBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFootStepTriggerBP_C*>(AFootStepTriggerBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FootStepTriggerBP.FootStepTriggerBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AFootStepTriggerBP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FootStepTriggerBP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FootStepTriggerBP.FootStepTriggerBP_C.ExecuteUbergraph_FootStepTriggerBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFootStepTriggerBP_C::ExecuteUbergraph_FootStepTriggerBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("FootStepTriggerBP_C", "ExecuteUbergraph_FootStepTriggerBP");

	Params::AFootStepTriggerBP_C_ExecuteUbergraph_FootStepTriggerBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


