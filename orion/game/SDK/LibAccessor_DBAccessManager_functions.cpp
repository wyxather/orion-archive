#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass LibAccessor_DBAccessManager.LibAccessor_DBAccessManager_C
// (None)

class UClass* ULibAccessor_DBAccessManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LibAccessor_DBAccessManager_C");

	return Clss;
}


// LibAccessor_DBAccessManager_C LibAccessor_DBAccessManager.Default__LibAccessor_DBAccessManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULibAccessor_DBAccessManager_C* ULibAccessor_DBAccessManager_C::GetDefaultObj()
{
	static class ULibAccessor_DBAccessManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULibAccessor_DBAccessManager_C*>(ULibAccessor_DBAccessManager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LibAccessor_DBAccessManager.LibAccessor_DBAccessManager_C.GetDBAccessManager
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADBAccessManagerBP_C*        DBAccessManager                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAccessor_DBAccessManager_C::GetDBAccessManager(class UObject* __WorldContext, class ADBAccessManagerBP_C** DBAccessManager)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAccessor_DBAccessManager_C", "GetDBAccessManager");

	Params::ULibAccessor_DBAccessManager_C_GetDBAccessManager_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (DBAccessManager != nullptr)
		*DBAccessManager = Parms.DBAccessManager;

}

}


