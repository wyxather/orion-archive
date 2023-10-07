#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass LibAccessor_CharacterManager.LibAccessor_CharacterManager_C
// (None)

class UClass* ULibAccessor_CharacterManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LibAccessor_CharacterManager_C");

	return Clss;
}


// LibAccessor_CharacterManager_C LibAccessor_CharacterManager.Default__LibAccessor_CharacterManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULibAccessor_CharacterManager_C* ULibAccessor_CharacterManager_C::GetDefaultObj()
{
	static class ULibAccessor_CharacterManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULibAccessor_CharacterManager_C*>(ULibAccessor_CharacterManager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LibAccessor_CharacterManager.LibAccessor_CharacterManager_C.GetCharacterManager
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AKSCharacterManagerBP_C*     CharacterManager                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAccessor_CharacterManager_C::GetCharacterManager(class UObject* __WorldContext, class AKSCharacterManagerBP_C** CharacterManager)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAccessor_CharacterManager_C", "GetCharacterManager");

	Params::ULibAccessor_CharacterManager_C_GetCharacterManager_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (CharacterManager != nullptr)
		*CharacterManager = Parms.CharacterManager;

}

}


