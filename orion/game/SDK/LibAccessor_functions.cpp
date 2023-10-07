#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass LibAccessor.LibAccessor_C
// (None)

class UClass* ULibAccessor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LibAccessor_C");

	return Clss;
}


// LibAccessor_C LibAccessor.Default__LibAccessor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULibAccessor_C* ULibAccessor_C::GetDefaultObj()
{
	static class ULibAccessor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULibAccessor_C*>(ULibAccessor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LibAccessor.LibAccessor_C.GetKSPlayerController
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AKSPlayerControllerBP_C*     KSPlayerController                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAccessor_C::GetKSPlayerController(class UObject* __WorldContext, class AKSPlayerControllerBP_C** KSPlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAccessor_C", "GetKSPlayerController");

	Params::ULibAccessor_C_GetKSPlayerController_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (KSPlayerController != nullptr)
		*KSPlayerController = Parms.KSPlayerController;

}


// Function LibAccessor.LibAccessor_C.GetKSGameMode
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AKSGameModeBP_C*             KSGameMode                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAccessor_C::GetKSGameMode(class UObject* __WorldContext, class AKSGameModeBP_C** KSGameMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAccessor_C", "GetKSGameMode");

	Params::ULibAccessor_C_GetKSGameMode_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (KSGameMode != nullptr)
		*KSGameMode = Parms.KSGameMode;

}

}


