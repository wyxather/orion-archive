#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BP_MJFogSheet.BP_MJFogSheet_C
// (Actor)

class UClass* ABP_MJFogSheet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MJFogSheet_C");

	return Clss;
}


// BP_MJFogSheet_C BP_MJFogSheet.Default__BP_MJFogSheet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MJFogSheet_C* ABP_MJFogSheet_C::GetDefaultObj()
{
	static class ABP_MJFogSheet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MJFogSheet_C*>(ABP_MJFogSheet_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MJFogSheet.BP_MJFogSheet_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MJFogSheet_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_MJFogSheet_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MJFogSheet.BP_MJFogSheet_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MJFogSheet_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_MJFogSheet_C", "ReceiveTick");

	Params::ABP_MJFogSheet_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MJFogSheet.BP_MJFogSheet_C.ExecuteUbergraph_BP_MJFogSheet
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MJFogSheet_C::ExecuteUbergraph_BP_MJFogSheet(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_MJFogSheet_C", "ExecuteUbergraph_BP_MJFogSheet");

	Params::ABP_MJFogSheet_C_ExecuteUbergraph_BP_MJFogSheet_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


