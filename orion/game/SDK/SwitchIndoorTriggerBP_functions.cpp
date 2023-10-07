#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass SwitchIndoorTriggerBP.SwitchIndoorTriggerBP_C
// (Actor)

class UClass* ASwitchIndoorTriggerBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SwitchIndoorTriggerBP_C");

	return Clss;
}


// SwitchIndoorTriggerBP_C SwitchIndoorTriggerBP.Default__SwitchIndoorTriggerBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASwitchIndoorTriggerBP_C* ASwitchIndoorTriggerBP_C::GetDefaultObj()
{
	static class ASwitchIndoorTriggerBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASwitchIndoorTriggerBP_C*>(ASwitchIndoorTriggerBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SwitchIndoorTriggerBP.SwitchIndoorTriggerBP_C.DrawLinkLine
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASwitchIndoorTriggerBP_C::DrawLinkLine()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SwitchIndoorTriggerBP_C", "DrawLinkLine");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SwitchIndoorTriggerBP.SwitchIndoorTriggerBP_C.SetTemplate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASwitchIndoorTriggerBP_C::SetTemplate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SwitchIndoorTriggerBP_C", "SetTemplate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SwitchIndoorTriggerBP.SwitchIndoorTriggerBP_C.CanActivateTrigger
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ASwitchIndoorTriggerBP_C::CanActivateTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SwitchIndoorTriggerBP_C", "CanActivateTrigger");

	Params::ASwitchIndoorTriggerBP_C_CanActivateTrigger_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SwitchIndoorTriggerBP.SwitchIndoorTriggerBP_C.DefaultOutsideSetting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASwitchIndoorTriggerBP_C::DefaultOutsideSetting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SwitchIndoorTriggerBP_C", "DefaultOutsideSetting");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SwitchIndoorTriggerBP.SwitchIndoorTriggerBP_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASwitchIndoorTriggerBP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SwitchIndoorTriggerBP_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SwitchIndoorTriggerBP.SwitchIndoorTriggerBP_C.Reset
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASwitchIndoorTriggerBP_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SwitchIndoorTriggerBP_C", "Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SwitchIndoorTriggerBP.SwitchIndoorTriggerBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ASwitchIndoorTriggerBP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SwitchIndoorTriggerBP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SwitchIndoorTriggerBP.SwitchIndoorTriggerBP_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASwitchIndoorTriggerBP_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SwitchIndoorTriggerBP_C", "ReceiveEndPlay");

	Params::ASwitchIndoorTriggerBP_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SwitchIndoorTriggerBP.SwitchIndoorTriggerBP_C.BndEvt__SwitchIndoorTriggerBP_GeateKeeperCheck_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ASwitchIndoorTriggerBP_C::BndEvt__SwitchIndoorTriggerBP_GeateKeeperCheck_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SwitchIndoorTriggerBP_C", "BndEvt__SwitchIndoorTriggerBP_GeateKeeperCheck_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::ASwitchIndoorTriggerBP_C_BndEvt__SwitchIndoorTriggerBP_GeateKeeperCheck_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SwitchIndoorTriggerBP.SwitchIndoorTriggerBP_C.BndEvt__SwitchIndoorTriggerBP_GeateKeeperCheck_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASwitchIndoorTriggerBP_C::BndEvt__SwitchIndoorTriggerBP_GeateKeeperCheck_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SwitchIndoorTriggerBP_C", "BndEvt__SwitchIndoorTriggerBP_GeateKeeperCheck_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	Params::ASwitchIndoorTriggerBP_C_BndEvt__SwitchIndoorTriggerBP_GeateKeeperCheck_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SwitchIndoorTriggerBP.SwitchIndoorTriggerBP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASwitchIndoorTriggerBP_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SwitchIndoorTriggerBP_C", "ReceiveTick");

	Params::ASwitchIndoorTriggerBP_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SwitchIndoorTriggerBP.SwitchIndoorTriggerBP_C.ExecuteUbergraph_SwitchIndoorTriggerBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASwitchIndoorTriggerBP_C::ExecuteUbergraph_SwitchIndoorTriggerBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SwitchIndoorTriggerBP_C", "ExecuteUbergraph_SwitchIndoorTriggerBP");

	Params::ASwitchIndoorTriggerBP_C_ExecuteUbergraph_SwitchIndoorTriggerBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


