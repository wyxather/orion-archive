#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass EffectManagerIF.EffectManagerIF_C
// (None)

class UClass* IEffectManagerIF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EffectManagerIF_C");

	return Clss;
}


// EffectManagerIF_C EffectManagerIF.Default__EffectManagerIF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IEffectManagerIF_C* IEffectManagerIF_C::GetDefaultObj()
{
	static class IEffectManagerIF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IEffectManagerIF_C*>(IEffectManagerIF_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EffectManagerIF.EffectManagerIF_C.IsReady
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IEffectManagerIF_C::IsReady(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EffectManagerIF_C", "IsReady");

	Params::IEffectManagerIF_C_IsReady_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}

}


