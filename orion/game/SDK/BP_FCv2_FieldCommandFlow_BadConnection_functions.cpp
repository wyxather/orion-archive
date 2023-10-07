#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BP_FCv2_FieldCommandFlow_BadConnection.BP_FCv2_FieldCommandFlow_BadConnection_C
// (Actor)

class UClass* ABP_FCv2_FieldCommandFlow_BadConnection_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FCv2_FieldCommandFlow_BadConnection_C");

	return Clss;
}


// BP_FCv2_FieldCommandFlow_BadConnection_C BP_FCv2_FieldCommandFlow_BadConnection.Default__BP_FCv2_FieldCommandFlow_BadConnection_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FCv2_FieldCommandFlow_BadConnection_C* ABP_FCv2_FieldCommandFlow_BadConnection_C::GetDefaultObj()
{
	static class ABP_FCv2_FieldCommandFlow_BadConnection_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FCv2_FieldCommandFlow_BadConnection_C*>(ABP_FCv2_FieldCommandFlow_BadConnection_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_FCv2_FieldCommandFlow_BadConnection.BP_FCv2_FieldCommandFlow_BadConnection_C.UpdateFlow
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsInterruptPlay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESequenceResult         Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FCv2_FieldCommandFlow_BadConnection_C::UpdateFlow(bool IsInterruptPlay, enum class ESequenceResult* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlow_BadConnection_C", "UpdateFlow");

	Params::ABP_FCv2_FieldCommandFlow_BadConnection_C_UpdateFlow_Params Parms{};

	Parms.IsInterruptPlay = IsInterruptPlay;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}

}


