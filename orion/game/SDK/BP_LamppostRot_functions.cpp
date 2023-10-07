#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BP_LamppostRot.BP_LamppostRot_C
// (Actor)

class UClass* ABP_LamppostRot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LamppostRot_C");

	return Clss;
}


// BP_LamppostRot_C BP_LamppostRot.Default__BP_LamppostRot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LamppostRot_C* ABP_LamppostRot_C::GetDefaultObj()
{
	static class ABP_LamppostRot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LamppostRot_C*>(ABP_LamppostRot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_LamppostRot.BP_LamppostRot_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_LamppostRot_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_LamppostRot_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LamppostRot.BP_LamppostRot_C.¿¤àé¤ó_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_LamppostRot_C::_______0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_LamppostRot_C", "¿¤àé¤ó_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LamppostRot.BP_LamppostRot_C.¿¤àé¤ó_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_LamppostRot_C::_______0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_LamppostRot_C", "¿¤àé¤ó_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LamppostRot.BP_LamppostRot_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_LamppostRot_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_LamppostRot_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_LamppostRot.BP_LamppostRot_C.ExecuteUbergraph_BP_LamppostRot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LamppostRot_C::ExecuteUbergraph_BP_LamppostRot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_LamppostRot_C", "ExecuteUbergraph_BP_LamppostRot");

	Params::ABP_LamppostRot_C_ExecuteUbergraph_BP_LamppostRot_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


