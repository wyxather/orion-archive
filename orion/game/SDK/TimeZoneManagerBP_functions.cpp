#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass TimeZoneManagerBP.TimeZoneManagerBP_C
// (Actor)

class UClass* ATimeZoneManagerBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TimeZoneManagerBP_C");

	return Clss;
}


// TimeZoneManagerBP_C TimeZoneManagerBP.Default__TimeZoneManagerBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATimeZoneManagerBP_C* ATimeZoneManagerBP_C::GetDefaultObj()
{
	static class ATimeZoneManagerBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATimeZoneManagerBP_C*>(ATimeZoneManagerBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TimeZoneManagerBP.TimeZoneManagerBP_C.OnBeginPlay
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ATimeZoneManagerBP_C::OnBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TimeZoneManagerBP_C", "OnBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TimeZoneManagerBP.TimeZoneManagerBP_C.ExecuteUbergraph_TimeZoneManagerBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATimeZoneManagerBP_C::ExecuteUbergraph_TimeZoneManagerBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("TimeZoneManagerBP_C", "ExecuteUbergraph_TimeZoneManagerBP");

	Params::ATimeZoneManagerBP_C_ExecuteUbergraph_TimeZoneManagerBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


