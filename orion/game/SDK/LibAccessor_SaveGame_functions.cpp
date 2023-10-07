#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass LibAccessor_SaveGame.LibAccessor_SaveGame_C
// (None)

class UClass* ULibAccessor_SaveGame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LibAccessor_SaveGame_C");

	return Clss;
}


// LibAccessor_SaveGame_C LibAccessor_SaveGame.Default__LibAccessor_SaveGame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULibAccessor_SaveGame_C* ULibAccessor_SaveGame_C::GetDefaultObj()
{
	static class ULibAccessor_SaveGame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULibAccessor_SaveGame_C*>(ULibAccessor_SaveGame_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LibAccessor_SaveGame.LibAccessor_SaveGame_C.GetSaveDataManager
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AKSSaveDataManagerBP_C*      SaveDataManager                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAccessor_SaveGame_C::GetSaveDataManager(class UObject* __WorldContext, class AKSSaveDataManagerBP_C** SaveDataManager)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAccessor_SaveGame_C", "GetSaveDataManager");

	Params::ULibAccessor_SaveGame_C_GetSaveDataManager_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (SaveDataManager != nullptr)
		*SaveDataManager = Parms.SaveDataManager;

}


// Function LibAccessor_SaveGame.LibAccessor_SaveGame_C.GetSaveData
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UKSSaveGameBP_C*             KSSaveGame                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibAccessor_SaveGame_C::GetSaveData(class UObject* __WorldContext, class UKSSaveGameBP_C** KSSaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibAccessor_SaveGame_C", "GetSaveData");

	Params::ULibAccessor_SaveGame_C_GetSaveData_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (KSSaveGame != nullptr)
		*KSSaveGame = Parms.KSSaveGame;

}

}


