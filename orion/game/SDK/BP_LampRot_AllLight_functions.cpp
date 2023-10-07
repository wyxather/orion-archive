#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BP_LampRot_AllLight.BP_LampRot_AllLight_C
// (Actor)

class UClass* ABP_LampRot_AllLight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LampRot_AllLight_C");

	return Clss;
}


// BP_LampRot_AllLight_C BP_LampRot_AllLight.Default__BP_LampRot_AllLight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LampRot_AllLight_C* ABP_LampRot_AllLight_C::GetDefaultObj()
{
	static class ABP_LampRot_AllLight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LampRot_AllLight_C*>(ABP_LampRot_AllLight_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_LampRot_AllLight.BP_LampRot_AllLight_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_LampRot_AllLight_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_LampRot_AllLight_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LampRot_AllLight.BP_LampRot_AllLight_C.¿¤àé¤ó_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_LampRot_AllLight_C::_______0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_LampRot_AllLight_C", "¿¤àé¤ó_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LampRot_AllLight.BP_LampRot_AllLight_C.¿¤àé¤ó_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_LampRot_AllLight_C::_______0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_LampRot_AllLight_C", "¿¤àé¤ó_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LampRot_AllLight.BP_LampRot_AllLight_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_LampRot_AllLight_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_LampRot_AllLight_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LampRot_AllLight.BP_LampRot_AllLight_C.ExecuteUbergraph_BP_LampRot_AllLight
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LampRot_AllLight_C::ExecuteUbergraph_BP_LampRot_AllLight(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_LampRot_AllLight_C", "ExecuteUbergraph_BP_LampRot_AllLight");

	Params::ABP_LampRot_AllLight_C_ExecuteUbergraph_BP_LampRot_AllLight_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


