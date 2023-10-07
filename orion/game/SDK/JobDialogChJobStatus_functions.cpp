#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass JobDialogChJobStatus.JobDialogChJobStatus_C
// (None)

class UClass* UJobDialogChJobStatus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("JobDialogChJobStatus_C");

	return Clss;
}


// JobDialogChJobStatus_C JobDialogChJobStatus.Default__JobDialogChJobStatus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UJobDialogChJobStatus_C* UJobDialogChJobStatus_C::GetDefaultObj()
{
	static class UJobDialogChJobStatus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UJobDialogChJobStatus_C*>(UJobDialogChJobStatus_C::StaticClass()->DefaultObject);

	return Default;
}


// Function JobDialogChJobStatus.JobDialogChJobStatus_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PlayerID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              JobID                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJobDialogChJobStatus_C::Setup(int32 PlayerID, int32 JobID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobDialogChJobStatus_C", "Setup");

	Params::UJobDialogChJobStatus_C_Setup_Params Parms{};

	Parms.PlayerID = PlayerID;
	Parms.JobID = JobID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JobDialogChJobStatus.JobDialogChJobStatus_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UJobDialogChJobStatus_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobDialogChJobStatus_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JobDialogChJobStatus.JobDialogChJobStatus_C.ExecuteUbergraph_JobDialogChJobStatus
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJobDialogChJobStatus_C::ExecuteUbergraph_JobDialogChJobStatus(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("JobDialogChJobStatus_C", "ExecuteUbergraph_JobDialogChJobStatus");

	Params::UJobDialogChJobStatus_C_ExecuteUbergraph_JobDialogChJobStatus_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


