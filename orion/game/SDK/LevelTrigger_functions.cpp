#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass LevelTrigger.LevelTrigger_C
// (Actor)

class UClass* ALevelTrigger_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LevelTrigger_C");

	return Clss;
}


// LevelTrigger_C LevelTrigger.Default__LevelTrigger_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALevelTrigger_C* ALevelTrigger_C::GetDefaultObj()
{
	static class ALevelTrigger_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALevelTrigger_C*>(ALevelTrigger_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LevelTrigger.LevelTrigger_C.OnFinishAutoSave
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SlotName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              UserIndex                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsSuccesss                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ALevelTrigger_C::OnFinishAutoSave(const class FString& SlotName, int32 UserIndex, bool IsSuccesss)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LevelTrigger_C", "OnFinishAutoSave");

	Params::ALevelTrigger_C_OnFinishAutoSave_Params Parms{};

	Parms.SlotName = SlotName;
	Parms.UserIndex = UserIndex;
	Parms.IsSuccesss = IsSuccesss;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LevelTrigger.LevelTrigger_C.ExecLevelTransition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ALevelTrigger_C::ExecLevelTransition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LevelTrigger_C", "ExecLevelTransition");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LevelTrigger.LevelTrigger_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ALevelTrigger_C::Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LevelTrigger_C", "Init");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LevelTrigger.LevelTrigger_C.AutoSavePreProcess
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ALevelTrigger_C::AutoSavePreProcess()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LevelTrigger_C", "AutoSavePreProcess");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LevelTrigger.LevelTrigger_C.SetAttachLadderPlayer
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ALevelTrigger_C::SetAttachLadderPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LevelTrigger_C", "SetAttachLadderPlayer");

	Params::ALevelTrigger_C_SetAttachLadderPlayer_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LevelTrigger.LevelTrigger_C.IsIgnoreShowOnRadarMap
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ALevelTrigger_C::IsIgnoreShowOnRadarMap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LevelTrigger_C", "IsIgnoreShowOnRadarMap");

	Params::ALevelTrigger_C_IsIgnoreShowOnRadarMap_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LevelTrigger.LevelTrigger_C.GetTriggerCollisionLocation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector ALevelTrigger_C::GetTriggerCollisionLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LevelTrigger_C", "GetTriggerCollisionLocation");

	Params::ALevelTrigger_C_GetTriggerCollisionLocation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LevelTrigger.LevelTrigger_C.GetSpawnLocation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector ALevelTrigger_C::GetSpawnLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LevelTrigger_C", "GetSpawnLocation");

	Params::ALevelTrigger_C_GetSpawnLocation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LevelTrigger.LevelTrigger_C.OnSequenceRequestCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EREQUEST_RESULT         Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALevelTrigger_C::OnSequenceRequestCallback(enum class EREQUEST_RESULT Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LevelTrigger_C", "OnSequenceRequestCallback");

	Params::ALevelTrigger_C_OnSequenceRequestCallback_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LevelTrigger.LevelTrigger_C.IsNotifiCationEnable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsNotifiCationEnable                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ALevelTrigger_C::IsNotifiCationEnable(bool* IsNotifiCationEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LevelTrigger_C", "IsNotifiCationEnable");

	Params::ALevelTrigger_C_IsNotifiCationEnable_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsNotifiCationEnable != nullptr)
		*IsNotifiCationEnable = Parms.IsNotifiCationEnable;

}


// Function LevelTrigger.LevelTrigger_C.Is Debug Enable Trigger
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsEnable                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ALevelTrigger_C::Is_Debug_Enable_Trigger(bool* IsEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LevelTrigger_C", "Is Debug Enable Trigger");

	Params::ALevelTrigger_C_Is_Debug_Enable_Trigger_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsEnable != nullptr)
		*IsEnable = Parms.IsEnable;

}


// Function LevelTrigger.LevelTrigger_C.Enable Level Trigger Check
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ALevelTrigger_C::Enable_Level_Trigger_Check()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LevelTrigger_C", "Enable Level Trigger Check");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LevelTrigger.LevelTrigger_C.Is Disable Trigger
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsDisable                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ALevelTrigger_C::Is_Disable_Trigger(bool* IsDisable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LevelTrigger_C", "Is Disable Trigger");

	Params::ALevelTrigger_C_Is_Disable_Trigger_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsDisable != nullptr)
		*IsDisable = Parms.IsDisable;

}


// Function LevelTrigger.LevelTrigger_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ALevelTrigger_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LevelTrigger_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LevelTrigger.LevelTrigger_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALevelTrigger_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LevelTrigger_C", "ReceiveEndPlay");

	Params::ALevelTrigger_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LevelTrigger.LevelTrigger_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ALevelTrigger_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LevelTrigger_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LevelTrigger.LevelTrigger_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALevelTrigger_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LevelTrigger_C", "ReceiveTick");

	Params::ALevelTrigger_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LevelTrigger.LevelTrigger_C.BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALevelTrigger_C::BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LevelTrigger_C", "BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature");

	Params::ALevelTrigger_C_BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LevelTrigger.LevelTrigger_C.BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ALevelTrigger_C::BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LevelTrigger_C", "BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::ALevelTrigger_C_BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LevelTrigger.LevelTrigger_C.ExecuteUbergraph_LevelTrigger
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALevelTrigger_C::ExecuteUbergraph_LevelTrigger(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("LevelTrigger_C", "ExecuteUbergraph_LevelTrigger");

	Params::ALevelTrigger_C_ExecuteUbergraph_LevelTrigger_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


