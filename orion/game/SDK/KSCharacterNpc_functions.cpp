#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass KSCharacterNpc.KSCharacterNpc_C
// (None)

class UClass* IKSCharacterNpc_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KSCharacterNpc_C");

	return Clss;
}


// KSCharacterNpc_C KSCharacterNpc.Default__KSCharacterNpc_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IKSCharacterNpc_C* IKSCharacterNpc_C::GetDefaultObj()
{
	static class IKSCharacterNpc_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IKSCharacterNpc_C*>(IKSCharacterNpc_C::StaticClass()->DefaultObject);

	return Default;
}


// Function KSCharacterNpc.KSCharacterNpc_C.GetNpcLabel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FName                        Label                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IKSCharacterNpc_C::GetNpcLabel(class FName* Label)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSCharacterNpc_C", "GetNpcLabel");

	Params::IKSCharacterNpc_C_GetNpcLabel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Label != nullptr)
		*Label = Parms.Label;

}


// Function KSCharacterNpc.KSCharacterNpc_C.SetNpcLabel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Label                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IKSCharacterNpc_C::SetNpcLabel(class FName Label)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSCharacterNpc_C", "SetNpcLabel");

	Params::IKSCharacterNpc_C_SetNpcLabel_Params Parms{};

	Parms.Label = Label;

	UObject::ProcessEvent(Func, &Parms);

}

}


