#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass LibAccessor_EventManager.LibAccessor_EventManager_C
// (None)

class UClass* ULibAccessor_EventManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LibAccessor_EventManager_C");

	return Clss;
}


// LibAccessor_EventManager_C LibAccessor_EventManager.Default__LibAccessor_EventManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULibAccessor_EventManager_C* ULibAccessor_EventManager_C::GetDefaultObj()
{
	static class ULibAccessor_EventManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULibAccessor_EventManager_C*>(ULibAccessor_EventManager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LibAccessor_EventManager.LibAccessor_EventManager_C.GetEventManager
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEventManagerBP_C*           EventManager                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAccessor_EventManager_C::GetEventManager(class UObject* __WorldContext, class AEventManagerBP_C** EventManager)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAccessor_EventManager_C", "GetEventManager");

	Params::ULibAccessor_EventManager_C_GetEventManager_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (EventManager != nullptr)
		*EventManager = Parms.EventManager;

}

}


