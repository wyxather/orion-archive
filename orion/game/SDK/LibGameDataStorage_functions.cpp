#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass LibGameDataStorage.LibGameDataStorage_C
// (None)

class UClass* ULibGameDataStorage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LibGameDataStorage_C");

	return Clss;
}


// LibGameDataStorage_C LibGameDataStorage.Default__LibGameDataStorage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULibGameDataStorage_C* ULibGameDataStorage_C::GetDefaultObj()
{
	static class ULibGameDataStorage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULibGameDataStorage_C*>(ULibGameDataStorage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LibGameDataStorage.LibGameDataStorage_C.CreateMainMemberCharaFormArray
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<uint8>                      CharaForm                                                        (Parm, OutParm)

void ULibGameDataStorage_C::CreateMainMemberCharaFormArray(class UObject* __WorldContext, TArray<uint8>* CharaForm)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibGameDataStorage_C", "CreateMainMemberCharaFormArray");

	Params::ULibGameDataStorage_C_CreateMainMemberCharaFormArray_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (CharaForm != nullptr)
		*CharaForm = std::move(Parms.CharaForm);

}


// Function LibGameDataStorage.LibGameDataStorage_C.CreateMainMemberArrayForSaveData
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CharacterIDs                                                     (Parm, OutParm)
// TArray<int32>                      JobIDs                                                           (Parm, OutParm)

void ULibGameDataStorage_C::CreateMainMemberArrayForSaveData(class UObject* __WorldContext, TArray<int32>* CharacterIDs, TArray<int32>* JobIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibGameDataStorage_C", "CreateMainMemberArrayForSaveData");

	Params::ULibGameDataStorage_C_CreateMainMemberArrayForSaveData_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (CharacterIDs != nullptr)
		*CharacterIDs = std::move(Parms.CharacterIDs);

	if (JobIDs != nullptr)
		*JobIDs = std::move(Parms.JobIDs);

}


// Function LibGameDataStorage.LibGameDataStorage_C.UpdateSaveDataPlayerLocation
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibGameDataStorage_C::UpdateSaveDataPlayerLocation(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibGameDataStorage_C", "UpdateSaveDataPlayerLocation");

	Params::ULibGameDataStorage_C_UpdateSaveDataPlayerLocation_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LibGameDataStorage.LibGameDataStorage_C.MakeMainMissionClearFlag
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ClearFlag                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibGameDataStorage_C::MakeMainMissionClearFlag(class UObject* __WorldContext, int32* ClearFlag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibGameDataStorage_C", "MakeMainMissionClearFlag");

	Params::ULibGameDataStorage_C_MakeMainMissionClearFlag_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (ClearFlag != nullptr)
		*ClearFlag = Parms.ClearFlag;

}


// Function LibGameDataStorage.LibGameDataStorage_C.GetCurrentPlayTime
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PlayTime                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULibGameDataStorage_C::GetCurrentPlayTime(class UObject* __WorldContext, int32* PlayTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LibGameDataStorage_C", "GetCurrentPlayTime");

	Params::ULibGameDataStorage_C_GetCurrentPlayTime_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (PlayTime != nullptr)
		*PlayTime = Parms.PlayTime;

}

}


