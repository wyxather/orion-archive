#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass LibAccessor_EffectManager.LibAccessor_EffectManager_C
// (None)

class UClass* ULibAccessor_EffectManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LibAccessor_EffectManager_C");

	return Clss;
}


// LibAccessor_EffectManager_C LibAccessor_EffectManager.Default__LibAccessor_EffectManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULibAccessor_EffectManager_C* ULibAccessor_EffectManager_C::GetDefaultObj()
{
	static class ULibAccessor_EffectManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULibAccessor_EffectManager_C*>(ULibAccessor_EffectManager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LibAccessor_EffectManager.LibAccessor_EffectManager_C.GetEffectManager
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEffectManagerBP_C*          EffectManager                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAccessor_EffectManager_C::GetEffectManager(class UObject* __WorldContext, class AEffectManagerBP_C** EffectManager)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAccessor_EffectManager_C", "GetEffectManager");

	Params::ULibAccessor_EffectManager_C_GetEffectManager_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (EffectManager != nullptr)
		*EffectManager = Parms.EffectManager;

}

}


