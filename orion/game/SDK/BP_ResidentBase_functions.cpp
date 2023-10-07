#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BP_ResidentBase.BP_ResidentBase_C
// (Actor)

class UClass* ABP_ResidentBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ResidentBase_C");

	return Clss;
}


// BP_ResidentBase_C BP_ResidentBase.Default__BP_ResidentBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ResidentBase_C* ABP_ResidentBase_C::GetDefaultObj()
{
	static class ABP_ResidentBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ResidentBase_C*>(ABP_ResidentBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ResidentBase.BP_ResidentBase_C.InitManager_UltraFirst
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Complete                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ResidentBase_C::InitManager_UltraFirst(bool* Complete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ResidentBase_C", "InitManager_UltraFirst");

	Params::ABP_ResidentBase_C_InitManager_UltraFirst_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Complete != nullptr)
		*Complete = Parms.Complete;

}


// Function BP_ResidentBase.BP_ResidentBase_C.CheckFCv2
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ResidentBase_C::CheckFCv2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ResidentBase_C", "CheckFCv2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ResidentBase.BP_ResidentBase_C.OnLoadedSystemData
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SlotName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              UserIndex                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UKSSaveSystem*               SystemData                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ResidentBase_C::OnLoadedSystemData(const class FString& SlotName, int32 UserIndex, class UKSSaveSystem* SystemData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ResidentBase_C", "OnLoadedSystemData");

	Params::ABP_ResidentBase_C_OnLoadedSystemData_Params Parms{};

	Parms.SlotName = SlotName;
	Parms.UserIndex = UserIndex;
	Parms.SystemData = SystemData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ResidentBase.BP_ResidentBase_C.SetInitManagerDelegate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ResidentBase_C::SetInitManagerDelegate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ResidentBase_C", "SetInitManagerDelegate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ResidentBase.BP_ResidentBase_C.InitManager
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bCompleted                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ResidentBase_C::InitManager(bool* bCompleted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ResidentBase_C", "InitManager");

	Params::ABP_ResidentBase_C_InitManager_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bCompleted != nullptr)
		*bCompleted = Parms.bCompleted;

}


// Function BP_ResidentBase.BP_ResidentBase_C.OnLevelLoaded_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ResidentBase_C::OnLevelLoaded_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ResidentBase_C", "OnLevelLoaded_Event");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ResidentBase.BP_ResidentBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ResidentBase_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ResidentBase_C", "ReceiveTick");

	Params::ABP_ResidentBase_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ResidentBase.BP_ResidentBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ResidentBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ResidentBase_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ResidentBase.BP_ResidentBase_C.ExecuteUbergraph_BP_ResidentBase
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ResidentBase_C::ExecuteUbergraph_BP_ResidentBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_ResidentBase_C", "ExecuteUbergraph_BP_ResidentBase");

	Params::ABP_ResidentBase_C_ExecuteUbergraph_BP_ResidentBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


