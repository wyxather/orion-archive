#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass KSCharacterManagerIF.KSCharacterManagerIF_C
// (None)

class UClass* IKSCharacterManagerIF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KSCharacterManagerIF_C");

	return Clss;
}


// KSCharacterManagerIF_C KSCharacterManagerIF.Default__KSCharacterManagerIF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IKSCharacterManagerIF_C* IKSCharacterManagerIF_C::GetDefaultObj()
{
	static class IKSCharacterManagerIF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IKSCharacterManagerIF_C*>(IKSCharacterManagerIF_C::StaticClass()->DefaultObject);

	return Default;
}


// Function KSCharacterManagerIF.KSCharacterManagerIF_C.IsReady
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IKSCharacterManagerIF_C::IsReady(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSCharacterManagerIF_C", "IsReady");

	Params::IKSCharacterManagerIF_C_IsReady_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}

}


