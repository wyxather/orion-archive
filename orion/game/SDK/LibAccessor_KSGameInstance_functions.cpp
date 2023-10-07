#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass LibAccessor_KSGameInstance.LibAccessor_KSGameInstance_C
// (None)

class UClass* ULibAccessor_KSGameInstance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LibAccessor_KSGameInstance_C");

	return Clss;
}


// LibAccessor_KSGameInstance_C LibAccessor_KSGameInstance.Default__LibAccessor_KSGameInstance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULibAccessor_KSGameInstance_C* ULibAccessor_KSGameInstance_C::GetDefaultObj()
{
	static class ULibAccessor_KSGameInstance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULibAccessor_KSGameInstance_C*>(ULibAccessor_KSGameInstance_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LibAccessor_KSGameInstance.LibAccessor_KSGameInstance_C.GetKSGameInstance
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UKSGameInstanceBP_C*         KSGameInstance                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAccessor_KSGameInstance_C::GetKSGameInstance(class UObject* __WorldContext, class UKSGameInstanceBP_C** KSGameInstance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAccessor_KSGameInstance_C", "GetKSGameInstance");

	Params::ULibAccessor_KSGameInstance_C_GetKSGameInstance_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (KSGameInstance != nullptr)
		*KSGameInstance = Parms.KSGameInstance;

}

}


