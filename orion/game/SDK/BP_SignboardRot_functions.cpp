#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BP_SignboardRot.BP_SignboardRot_C
// (Actor)

class UClass* ABP_SignboardRot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SignboardRot_C");

	return Clss;
}


// BP_SignboardRot_C BP_SignboardRot.Default__BP_SignboardRot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SignboardRot_C* ABP_SignboardRot_C::GetDefaultObj()
{
	static class ABP_SignboardRot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SignboardRot_C*>(ABP_SignboardRot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SignboardRot.BP_SignboardRot_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SignboardRot_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_SignboardRot_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SignboardRot.BP_SignboardRot_C.¿¤àé¤ó_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_SignboardRot_C::_______0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_SignboardRot_C", "¿¤àé¤ó_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SignboardRot.BP_SignboardRot_C.¿¤àé¤ó_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_SignboardRot_C::_______0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_SignboardRot_C", "¿¤àé¤ó_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SignboardRot.BP_SignboardRot_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_SignboardRot_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_SignboardRot_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SignboardRot.BP_SignboardRot_C.ExecuteUbergraph_BP_SignboardRot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SignboardRot_C::ExecuteUbergraph_BP_SignboardRot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_SignboardRot_C", "ExecuteUbergraph_BP_SignboardRot");

	Params::ABP_SignboardRot_C_ExecuteUbergraph_BP_SignboardRot_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


