#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass LibStartupUtil.LibStartupUtil_C
// (None)

class UClass* ULibStartupUtil_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LibStartupUtil_C");

	return Clss;
}


// LibStartupUtil_C LibStartupUtil.Default__LibStartupUtil_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULibStartupUtil_C* ULibStartupUtil_C::GetDefaultObj()
{
	static class ULibStartupUtil_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULibStartupUtil_C*>(ULibStartupUtil_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LibStartupUtil.LibStartupUtil_C.ExistAvailableSaveData
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Exist                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULibStartupUtil_C::ExistAvailableSaveData(class UObject* __WorldContext, bool* Exist)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibStartupUtil_C", "ExistAvailableSaveData");

	Params::ULibStartupUtil_C_ExistAvailableSaveData_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Exist != nullptr)
		*Exist = Parms.Exist;

}


// Function LibStartupUtil.LibStartupUtil_C.InitSaveDataOnNewGame
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibStartupUtil_C::InitSaveDataOnNewGame(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibStartupUtil_C", "InitSaveDataOnNewGame");

	Params::ULibStartupUtil_C_InitSaveDataOnNewGame_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}

}


