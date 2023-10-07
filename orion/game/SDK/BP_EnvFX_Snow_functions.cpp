#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BP_EnvFX_Snow.BP_EnvFX_Snow_C
// (Actor)

class UClass* ABP_EnvFX_Snow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_EnvFX_Snow_C");

	return Clss;
}


// BP_EnvFX_Snow_C BP_EnvFX_Snow.Default__BP_EnvFX_Snow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_EnvFX_Snow_C* ABP_EnvFX_Snow_C::GetDefaultObj()
{
	static class ABP_EnvFX_Snow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_EnvFX_Snow_C*>(ABP_EnvFX_Snow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_EnvFX_Snow.BP_EnvFX_Snow_C.OnHidden
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_EnvFX_Snow_C::OnHidden()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_EnvFX_Snow_C", "OnHidden");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EnvFX_Snow.BP_EnvFX_Snow_C.OnShown
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_EnvFX_Snow_C::OnShown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_EnvFX_Snow_C", "OnShown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EnvFX_Snow.BP_EnvFX_Snow_C.ExecuteUbergraph_BP_EnvFX_Snow
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EnvFX_Snow_C::ExecuteUbergraph_BP_EnvFX_Snow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_EnvFX_Snow_C", "ExecuteUbergraph_BP_EnvFX_Snow");

	Params::ABP_EnvFX_Snow_C_ExecuteUbergraph_BP_EnvFX_Snow_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


