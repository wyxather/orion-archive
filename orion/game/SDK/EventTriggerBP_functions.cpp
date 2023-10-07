#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass EventTriggerBP.EventTriggerBP_C
// (Actor)

class UClass* AEventTriggerBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EventTriggerBP_C");

	return Clss;
}


// EventTriggerBP_C EventTriggerBP.Default__EventTriggerBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEventTriggerBP_C* AEventTriggerBP_C::GetDefaultObj()
{
	static class AEventTriggerBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEventTriggerBP_C*>(AEventTriggerBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EventTriggerBP.EventTriggerBP_C.Is Block Collision Disable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// uint8                              EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventTriggerBP_C::Is_Block_Collision_Disable(uint8 EventType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventTriggerBP_C", "Is Block Collision Disable");

	Params::AEventTriggerBP_C_Is_Block_Collision_Disable_Params Parms{};

	Parms.EventType = EventType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventTriggerBP.EventTriggerBP_C.SetupBlockCollision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEventTriggerBP_C::SetupBlockCollision()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventTriggerBP_C", "SetupBlockCollision");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventTriggerBP.EventTriggerBP_C.IsCheckTalkInvoke
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// uint8                              EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Enable                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEventTriggerBP_C::IsCheckTalkInvoke(uint8 EventType, bool* Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventTriggerBP_C", "IsCheckTalkInvoke");

	Params::AEventTriggerBP_C_IsCheckTalkInvoke_Params Parms{};

	Parms.EventType = EventType;

	UObject::ProcessEvent(Func, &Parms);

	if (Enable != nullptr)
		*Enable = Parms.Enable;

}


// Function EventTriggerBP.EventTriggerBP_C.PlayEvent
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      TalkEventName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventTriggerBP_C::PlayEvent(const class FString& TalkEventName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventTriggerBP_C", "PlayEvent");

	Params::AEventTriggerBP_C_PlayEvent_Params Parms{};

	Parms.TalkEventName = TalkEventName;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EventTriggerBP.EventTriggerBP_C.IsTalkEventCheck
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      TalkEventName                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEventTriggerBP_C::IsTalkEventCheck(class FString* TalkEventName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventTriggerBP_C", "IsTalkEventCheck");

	Params::AEventTriggerBP_C_IsTalkEventCheck_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TalkEventName != nullptr)
		*TalkEventName = std::move(Parms.TalkEventName);

	return Parms.ReturnValue;

}


// Function EventTriggerBP.EventTriggerBP_C.SequenceRequestCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EREQUEST_RESULT         Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEventTriggerBP_C::SequenceRequestCallback(enum class EREQUEST_RESULT Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventTriggerBP_C", "SequenceRequestCallback");

	Params::AEventTriggerBP_C_SequenceRequestCallback_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventTriggerBP.EventTriggerBP_C.PostInit
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlacementData              PlacementData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                      EventLabel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AEventTriggerBP_C::PostInit(struct FPlacementData& PlacementData, const class FString& EventLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventTriggerBP_C", "PostInit");

	Params::AEventTriggerBP_C_PostInit_Params Parms{};

	Parms.PlacementData = PlacementData;
	Parms.EventLabel = EventLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventTriggerBP.EventTriggerBP_C.Is Event Check
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CheckTalk                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsTalk                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      TalkEventName                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// uint8                              EventType                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEventTriggerBP_C::Is_Event_Check(bool CheckTalk, bool* IsTalk, class FString* TalkEventName, uint8* EventType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventTriggerBP_C", "Is Event Check");

	Params::AEventTriggerBP_C_Is_Event_Check_Params Parms{};

	Parms.CheckTalk = CheckTalk;

	UObject::ProcessEvent(Func, &Parms);

	if (IsTalk != nullptr)
		*IsTalk = Parms.IsTalk;

	if (TalkEventName != nullptr)
		*TalkEventName = std::move(Parms.TalkEventName);

	if (EventType != nullptr)
		*EventType = Parms.EventType;

}


// Function EventTriggerBP.EventTriggerBP_C.IsRequiredItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsEnable                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEventTriggerBP_C::IsRequiredItem(class FName ItemLabel, bool* IsEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventTriggerBP_C", "IsRequiredItem");

	Params::AEventTriggerBP_C_IsRequiredItem_Params Parms{};

	Parms.ItemLabel = ItemLabel;

	UObject::ProcessEvent(Func, &Parms);

	if (IsEnable != nullptr)
		*IsEnable = Parms.IsEnable;

}


// Function EventTriggerBP.EventTriggerBP_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEventTriggerBP_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventTriggerBP_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventTriggerBP.EventTriggerBP_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEventTriggerBP_C::BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventTriggerBP_C", "BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature");

	Params::AEventTriggerBP_C_BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventTriggerBP.EventTriggerBP_C.BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AEventTriggerBP_C::BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventTriggerBP_C", "BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");

	Params::AEventTriggerBP_C_BndEvt__CollisionComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventTriggerBP.EventTriggerBP_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void AEventTriggerBP_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventTriggerBP_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventTriggerBP.EventTriggerBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AEventTriggerBP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventTriggerBP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventTriggerBP.EventTriggerBP_C.ExecuteUbergraph_EventTriggerBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEventTriggerBP_C::ExecuteUbergraph_EventTriggerBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("EventTriggerBP_C", "ExecuteUbergraph_EventTriggerBP");

	Params::AEventTriggerBP_C_ExecuteUbergraph_EventTriggerBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


