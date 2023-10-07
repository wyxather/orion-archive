#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BP_EnvObjMD_Chair_Rocking_A.BP_EnvObjMD_Chair_Rocking_A_C
// (Actor)

class UClass* ABP_EnvObjMD_Chair_Rocking_A_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_EnvObjMD_Chair_Rocking_A_C");

	return Clss;
}


// BP_EnvObjMD_Chair_Rocking_A_C BP_EnvObjMD_Chair_Rocking_A.Default__BP_EnvObjMD_Chair_Rocking_A_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_EnvObjMD_Chair_Rocking_A_C* ABP_EnvObjMD_Chair_Rocking_A_C::GetDefaultObj()
{
	static class ABP_EnvObjMD_Chair_Rocking_A_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_EnvObjMD_Chair_Rocking_A_C*>(ABP_EnvObjMD_Chair_Rocking_A_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_EnvObjMD_Chair_Rocking_A.BP_EnvObjMD_Chair_Rocking_A_C.¿¤àé¤ó_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_EnvObjMD_Chair_Rocking_A_C::_______0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_EnvObjMD_Chair_Rocking_A_C", "¿¤àé¤ó_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EnvObjMD_Chair_Rocking_A.BP_EnvObjMD_Chair_Rocking_A_C.¿¤àé¤ó_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_EnvObjMD_Chair_Rocking_A_C::_______0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_EnvObjMD_Chair_Rocking_A_C", "¿¤àé¤ó_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EnvObjMD_Chair_Rocking_A.BP_EnvObjMD_Chair_Rocking_A_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_EnvObjMD_Chair_Rocking_A_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_EnvObjMD_Chair_Rocking_A_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EnvObjMD_Chair_Rocking_A.BP_EnvObjMD_Chair_Rocking_A_C.ExecuteUbergraph_BP_EnvObjMD_Chair_Rocking_A
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EnvObjMD_Chair_Rocking_A_C::ExecuteUbergraph_BP_EnvObjMD_Chair_Rocking_A(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_EnvObjMD_Chair_Rocking_A_C", "ExecuteUbergraph_BP_EnvObjMD_Chair_Rocking_A");

	Params::ABP_EnvObjMD_Chair_Rocking_A_C_ExecuteUbergraph_BP_EnvObjMD_Chair_Rocking_A_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


