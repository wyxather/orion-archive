#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass KSFieldCharacter.KSFieldCharacter_C
// (Actor, Pawn)

class UClass* AKSFieldCharacter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KSFieldCharacter_C");

	return Clss;
}


// KSFieldCharacter_C KSFieldCharacter.Default__KSFieldCharacter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKSFieldCharacter_C* AKSFieldCharacter_C::GetDefaultObj()
{
	static class AKSFieldCharacter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKSFieldCharacter_C*>(AKSFieldCharacter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function KSFieldCharacter.KSFieldCharacter_C.GetNpcLabel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FName                        Label                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSFieldCharacter_C::GetNpcLabel(class FName* Label)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldCharacter_C", "GetNpcLabel");

	Params::AKSFieldCharacter_C_GetNpcLabel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Label != nullptr)
		*Label = Parms.Label;

}


// Function KSFieldCharacter.KSFieldCharacter_C.IsSavePointNpc
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsSavePoint                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSFieldCharacter_C::IsSavePointNpc(bool* IsSavePoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldCharacter_C", "IsSavePointNpc");

	Params::AKSFieldCharacter_C_IsSavePointNpc_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsSavePoint != nullptr)
		*IsSavePoint = Parms.IsSavePoint;

}


// Function KSFieldCharacter.KSFieldCharacter_C.MoveSpeedInHouse
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSFieldCharacter_C::MoveSpeedInHouse(float Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldCharacter_C", "MoveSpeedInHouse");

	Params::AKSFieldCharacter_C_MoveSpeedInHouse_Params Parms{};

	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSFieldCharacter.KSFieldCharacter_C.CallTalkEvent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSFieldCharacter_C::CallTalkEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldCharacter_C", "CallTalkEvent");

	Params::AKSFieldCharacter_C_CallTalkEvent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSFieldCharacter.KSFieldCharacter_C.GetNpcPropertyComponent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UNpcPropertyComponent*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UNpcPropertyComponent* AKSFieldCharacter_C::GetNpcPropertyComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldCharacter_C", "GetNpcPropertyComponent");

	Params::AKSFieldCharacter_C_GetNpcPropertyComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSFieldCharacter.KSFieldCharacter_C.GetTextInfo
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName AKSFieldCharacter_C::GetTextInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldCharacter_C", "GetTextInfo");

	Params::AKSFieldCharacter_C_GetTextInfo_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSFieldCharacter.KSFieldCharacter_C.SequenceRequestCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EREQUEST_RESULT         Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSFieldCharacter_C::SequenceRequestCallback(enum class EREQUEST_RESULT Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldCharacter_C", "SequenceRequestCallback");

	Params::AKSFieldCharacter_C_SequenceRequestCallback_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSFieldCharacter.KSFieldCharacter_C.GetMode
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ECHARACTER_MODE         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ECHARACTER_MODE AKSFieldCharacter_C::GetMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldCharacter_C", "GetMode");

	Params::AKSFieldCharacter_C_GetMode_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSFieldCharacter.KSFieldCharacter_C.UpdateFootstepTrigger
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Trigger                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsBegin                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsFootstepTrigger                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSFieldCharacter_C::UpdateFootstepTrigger(class AActor* Trigger, bool IsBegin, bool* IsFootstepTrigger)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldCharacter_C", "UpdateFootstepTrigger");

	Params::AKSFieldCharacter_C_UpdateFootstepTrigger_Params Parms{};

	Parms.Trigger = Trigger;
	Parms.IsBegin = IsBegin;

	UObject::ProcessEvent(Func, &Parms);

	if (IsFootstepTrigger != nullptr)
		*IsFootstepTrigger = Parms.IsFootstepTrigger;

}


// Function KSFieldCharacter.KSFieldCharacter_C.GetMoveAction
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EKSCharacterAction      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EKSCharacterAction AKSFieldCharacter_C::GetMoveAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldCharacter_C", "GetMoveAction");

	Params::AKSFieldCharacter_C_GetMoveAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSFieldCharacter.KSFieldCharacter_C.GetIdleAction
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EKSCharacterAction      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EKSCharacterAction AKSFieldCharacter_C::GetIdleAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldCharacter_C", "GetIdleAction");

	Params::AKSFieldCharacter_C_GetIdleAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSFieldCharacter.KSFieldCharacter_C.SetHouseIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              OffsetHeight                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSFieldCharacter_C::SetHouseIn(bool Visible, float Scale, float OffsetHeight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldCharacter_C", "SetHouseIn");

	Params::AKSFieldCharacter_C_SetHouseIn_Params Parms{};

	Parms.Visible = Visible;
	Parms.Scale = Scale;
	Parms.OffsetHeight = OffsetHeight;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSFieldCharacter.KSFieldCharacter_C.Event
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSFieldCharacter_C::Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldCharacter_C", "Event");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSFieldCharacter.KSFieldCharacter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSFieldCharacter_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldCharacter_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSFieldCharacter.KSFieldCharacter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AKSFieldCharacter_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldCharacter_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSFieldCharacter.KSFieldCharacter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSFieldCharacter_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldCharacter_C", "ReceiveTick");

	Params::AKSFieldCharacter_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSFieldCharacter.KSFieldCharacter_C.FinishMove
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSFieldCharacter_C::FinishMove()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldCharacter_C", "FinishMove");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSFieldCharacter.KSFieldCharacter_C.ForceMovePoint
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     InLocation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSFieldCharacter_C::ForceMovePoint(const struct FVector& InLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldCharacter_C", "ForceMovePoint");

	Params::AKSFieldCharacter_C_ForceMovePoint_Params Parms{};

	Parms.InLocation = InLocation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSFieldCharacter.KSFieldCharacter_C.SetCharacterCollision
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSFieldCharacter_C::SetCharacterCollision(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldCharacter_C", "SetCharacterCollision");

	Params::AKSFieldCharacter_C_SetCharacterCollision_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSFieldCharacter.KSFieldCharacter_C.BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AKSFieldCharacter_C::BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldCharacter_C", "BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::AKSFieldCharacter_C_BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSFieldCharacter.KSFieldCharacter_C.BndEvt__Trigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSFieldCharacter_C::BndEvt__Trigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldCharacter_C", "BndEvt__Trigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	Params::AKSFieldCharacter_C_BndEvt__Trigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSFieldCharacter.KSFieldCharacter_C.SetNpcLabel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Label                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSFieldCharacter_C::SetNpcLabel(class FName Label)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldCharacter_C", "SetNpcLabel");

	Params::AKSFieldCharacter_C_SetNpcLabel_Params Parms{};

	Parms.Label = Label;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSFieldCharacter.KSFieldCharacter_C.ExecuteUbergraph_KSFieldCharacter
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSFieldCharacter_C::ExecuteUbergraph_KSFieldCharacter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldCharacter_C", "ExecuteUbergraph_KSFieldCharacter");

	Params::AKSFieldCharacter_C_ExecuteUbergraph_KSFieldCharacter_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


