#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass KSGameInstanceBP.KSGameInstanceBP_C
// (None)

class UClass* UKSGameInstanceBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KSGameInstanceBP_C");

	return Clss;
}


// KSGameInstanceBP_C KSGameInstanceBP.Default__KSGameInstanceBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UKSGameInstanceBP_C* UKSGameInstanceBP_C::GetDefaultObj()
{
	static class UKSGameInstanceBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UKSGameInstanceBP_C*>(UKSGameInstanceBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function KSGameInstanceBP.KSGameInstanceBP_C.GetStartLevel
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName UKSGameInstanceBP_C::GetStartLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSGameInstanceBP_C", "GetStartLevel");

	Params::UKSGameInstanceBP_C_GetStartLevel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSGameInstanceBP.KSGameInstanceBP_C.GetIsDebugLoadLevel
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UKSGameInstanceBP_C::GetIsDebugLoadLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSGameInstanceBP_C", "GetIsDebugLoadLevel");

	Params::UKSGameInstanceBP_C_GetIsDebugLoadLevel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSGameInstanceBP.KSGameInstanceBP_C.GetFirstSpawn
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UKSGameInstanceBP_C::GetFirstSpawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSGameInstanceBP_C", "GetFirstSpawn");

	Params::UKSGameInstanceBP_C_GetFirstSpawn_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSGameInstanceBP.KSGameInstanceBP_C.ReceiveInit
// (Event, Public, BlueprintEvent)
// Parameters:

void UKSGameInstanceBP_C::ReceiveInit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSGameInstanceBP_C", "ReceiveInit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSGameInstanceBP.KSGameInstanceBP_C.SetDebugMode
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsDebug                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKSGameInstanceBP_C::SetDebugMode(bool IsDebug)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSGameInstanceBP_C", "SetDebugMode");

	Params::UKSGameInstanceBP_C_SetDebugMode_Params Parms{};

	Parms.IsDebug = IsDebug;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSGameInstanceBP.KSGameInstanceBP_C.SetFirstSpawn
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               FirstSpawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKSGameInstanceBP_C::SetFirstSpawn(bool FirstSpawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSGameInstanceBP_C", "SetFirstSpawn");

	Params::UKSGameInstanceBP_C_SetFirstSpawn_Params Parms{};

	Parms.FirstSpawn = FirstSpawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSGameInstanceBP.KSGameInstanceBP_C.SetDebugLoadLevel
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DebugLoadLebel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UKSGameInstanceBP_C::SetDebugLoadLevel(bool DebugLoadLebel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSGameInstanceBP_C", "SetDebugLoadLevel");

	Params::UKSGameInstanceBP_C_SetDebugLoadLevel_Params Parms{};

	Parms.DebugLoadLebel = DebugLoadLebel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSGameInstanceBP.KSGameInstanceBP_C.SetStartLevel
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        LevelName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKSGameInstanceBP_C::SetStartLevel(class FName LevelName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSGameInstanceBP_C", "SetStartLevel");

	Params::UKSGameInstanceBP_C_SetStartLevel_Params Parms{};

	Parms.LevelName = LevelName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSGameInstanceBP.KSGameInstanceBP_C.ExecuteUbergraph_KSGameInstanceBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKSGameInstanceBP_C::ExecuteUbergraph_KSGameInstanceBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSGameInstanceBP_C", "ExecuteUbergraph_KSGameInstanceBP");

	Params::UKSGameInstanceBP_C_ExecuteUbergraph_KSGameInstanceBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


