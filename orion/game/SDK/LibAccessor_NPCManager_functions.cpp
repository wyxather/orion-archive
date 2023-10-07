#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass LibAccessor_NPCManager.LibAccessor_NPCManager_C
// (None)

class UClass* ULibAccessor_NPCManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LibAccessor_NPCManager_C");

	return Clss;
}


// LibAccessor_NPCManager_C LibAccessor_NPCManager.Default__LibAccessor_NPCManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULibAccessor_NPCManager_C* ULibAccessor_NPCManager_C::GetDefaultObj()
{
	static class ULibAccessor_NPCManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULibAccessor_NPCManager_C*>(ULibAccessor_NPCManager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LibAccessor_NPCManager.LibAccessor_NPCManager_C.GetNPCManager
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANPCManagerBP_C*             AsNPCManager_BP                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAccessor_NPCManager_C::GetNPCManager(class UObject* __WorldContext, class ANPCManagerBP_C** AsNPCManager_BP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAccessor_NPCManager_C", "GetNPCManager");

	Params::ULibAccessor_NPCManager_C_GetNPCManager_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (AsNPCManager_BP != nullptr)
		*AsNPCManager_BP = Parms.AsNPCManager_BP;

}


// Function LibAccessor_NPCManager.LibAccessor_NPCManager_C.GetVibrationManager
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AVibrationManagerBP_C*       VibrationManager                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAccessor_NPCManager_C::GetVibrationManager(class UObject* __WorldContext, class AVibrationManagerBP_C** VibrationManager)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAccessor_NPCManager_C", "GetVibrationManager");

	Params::ULibAccessor_NPCManager_C_GetVibrationManager_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (VibrationManager != nullptr)
		*VibrationManager = Parms.VibrationManager;

}

}


