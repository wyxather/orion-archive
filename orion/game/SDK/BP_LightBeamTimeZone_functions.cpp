#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BP_LightBeamTimeZone.BP_LightBeamTimeZone_C
// (Actor)

class UClass* ABP_LightBeamTimeZone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LightBeamTimeZone_C");

	return Clss;
}


// BP_LightBeamTimeZone_C BP_LightBeamTimeZone.Default__BP_LightBeamTimeZone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LightBeamTimeZone_C* ABP_LightBeamTimeZone_C::GetDefaultObj()
{
	static class ABP_LightBeamTimeZone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LightBeamTimeZone_C*>(ABP_LightBeamTimeZone_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_LightBeamTimeZone.BP_LightBeamTimeZone_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_LightBeamTimeZone_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_LightBeamTimeZone_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LightBeamTimeZone.BP_LightBeamTimeZone_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LightBeamTimeZone_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_LightBeamTimeZone_C", "ReceiveTick");

	Params::ABP_LightBeamTimeZone_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_LightBeamTimeZone.BP_LightBeamTimeZone_C.ExecuteUbergraph_BP_LightBeamTimeZone
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LightBeamTimeZone_C::ExecuteUbergraph_BP_LightBeamTimeZone(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_LightBeamTimeZone_C", "ExecuteUbergraph_BP_LightBeamTimeZone");

	Params::ABP_LightBeamTimeZone_C_ExecuteUbergraph_BP_LightBeamTimeZone_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


