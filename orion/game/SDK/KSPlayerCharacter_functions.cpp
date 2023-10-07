#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass KSPlayerCharacter.KSPlayerCharacter_C
// (Actor, Pawn)

class UClass* AKSPlayerCharacter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KSPlayerCharacter_C");

	return Clss;
}


// KSPlayerCharacter_C KSPlayerCharacter.Default__KSPlayerCharacter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKSPlayerCharacter_C* AKSPlayerCharacter_C::GetDefaultObj()
{
	static class AKSPlayerCharacter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKSPlayerCharacter_C*>(AKSPlayerCharacter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function KSPlayerCharacter.KSPlayerCharacter_C.StopTransportEffectOnStartBattle
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSPlayerCharacter_C::StopTransportEffectOnStartBattle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "StopTransportEffectOnStartBattle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.UpdateFadeNpcVolume
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSPlayerCharacter_C::UpdateFadeNpcVolume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "UpdateFadeNpcVolume");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.InitFadeNpcVolume
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSPlayerCharacter_C::InitFadeNpcVolume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "InitFadeNpcVolume");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.MoveSpeedInHouse
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPlayerCharacter_C::MoveSpeedInHouse(float Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "MoveSpeedInHouse");

	Params::AKSPlayerCharacter_C_MoveSpeedInHouse_Params Parms{};

	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.SetUpMoveSpeedData
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMovementMode           EMovementMode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NMode                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPlayerCharacter_C::SetUpMoveSpeedData(enum class EMovementMode EMovementMode, int32 NMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "SetUpMoveSpeedData");

	Params::AKSPlayerCharacter_C_SetUpMoveSpeedData_Params Parms{};

	Parms.EMovementMode = EMovementMode;
	Parms.NMode = NMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.ClearActionReferenceObject
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSPlayerCharacter_C::ClearActionReferenceObject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "ClearActionReferenceObject");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.Debug_MoveFallingReturnLocation
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSPlayerCharacter_C::Debug_MoveFallingReturnLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "Debug_MoveFallingReturnLocation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.DebugShowUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSPlayerCharacter_C::DebugShowUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "DebugShowUpdate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.Debug_GetDebugFollowInfo
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString AKSPlayerCharacter_C::Debug_GetDebugFollowInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "Debug_GetDebugFollowInfo");

	Params::AKSPlayerCharacter_C_Debug_GetDebugFollowInfo_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.GetHunterPartnerFbComponent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UHunterPartnerFbComponent*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UHunterPartnerFbComponent* AKSPlayerCharacter_C::GetHunterPartnerFbComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "GetHunterPartnerFbComponent");

	Params::AKSPlayerCharacter_C_GetHunterPartnerFbComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.GetOperationPlayerCameraComponent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UOperationPlayerCameraComponentBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UOperationPlayerCameraComponentBase* AKSPlayerCharacter_C::GetOperationPlayerCameraComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "GetOperationPlayerCameraComponent");

	Params::AKSPlayerCharacter_C_GetOperationPlayerCameraComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.GetCharacterCollision
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCapsuleComponent*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UCapsuleComponent* AKSPlayerCharacter_C::GetCharacterCollision()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "GetCharacterCollision");

	Params::AKSPlayerCharacter_C_GetCharacterCollision_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.ResetCameraPosition
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSPlayerCharacter_C::ResetCameraPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "ResetCameraPosition");

	Params::AKSPlayerCharacter_C_ResetCameraPosition_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.SetCineCameraRelativeRotation
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    Rotator                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSPlayerCharacter_C::SetCineCameraRelativeRotation(struct FRotator& Rotator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "SetCineCameraRelativeRotation");

	Params::AKSPlayerCharacter_C_SetCineCameraRelativeRotation_Params Parms{};

	Parms.Rotator = Rotator;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.ActionSearch
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSPlayerCharacter_C::ActionSearch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "ActionSearch");

	Params::AKSPlayerCharacter_C_ActionSearch_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.OpenFieldCommandPopupWidget
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IgnoreEvent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSPlayerCharacter_C::OpenFieldCommandPopupWidget(bool IgnoreEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "OpenFieldCommandPopupWidget");

	Params::AKSPlayerCharacter_C_OpenFieldCommandPopupWidget_Params Parms{};

	Parms.IgnoreEvent = IgnoreEvent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.GetCineCameraRelativeTransform
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)

struct FTransform AKSPlayerCharacter_C::GetCineCameraRelativeTransform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "GetCineCameraRelativeTransform");

	Params::AKSPlayerCharacter_C_GetCineCameraRelativeTransform_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.SetResetCameraPos
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     ResetPos                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSPlayerCharacter_C::SetResetCameraPos(struct FVector& ResetPos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "SetResetCameraPos");

	Params::AKSPlayerCharacter_C_SetResetCameraPos_Params Parms{};

	Parms.ResetPos = ResetPos;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.SetCameraLockPos
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CameraLockPos                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSPlayerCharacter_C::SetCameraLockPos(struct FVector& CameraLockPos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "SetCameraLockPos");

	Params::AKSPlayerCharacter_C_SetCameraLockPos_Params Parms{};

	Parms.CameraLockPos = CameraLockPos;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.SetReturnCameraOffset
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               LockFlag                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSPlayerCharacter_C::SetReturnCameraOffset(bool LockFlag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "SetReturnCameraOffset");

	Params::AKSPlayerCharacter_C_SetReturnCameraOffset_Params Parms{};

	Parms.LockFlag = LockFlag;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.GetReturnCameraOffset
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSPlayerCharacter_C::GetReturnCameraOffset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "GetReturnCameraOffset");

	Params::AKSPlayerCharacter_C_GetReturnCameraOffset_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.ChangeTransport
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETRANSPORTATION_TYPE    Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSPlayerCharacter_C::ChangeTransport(enum class ETRANSPORTATION_TYPE Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "ChangeTransport");

	Params::AKSPlayerCharacter_C_ChangeTransport_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.OnComponentBeginOverlap
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPlayerCharacter_C::OnComponentBeginOverlap(class AActor* OtherActor, class UPrimitiveComponent* OtherComp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "OnComponentBeginOverlap");

	Params::AKSPlayerCharacter_C_OnComponentBeginOverlap_Params Parms{};

	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.SetupCameraLockPosDirectly
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CameraLockPos                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCapsuleComponent*           CharaCapsule                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSPlayerCharacter_C::SetupCameraLockPosDirectly(const struct FVector& CameraLockPos, class UCapsuleComponent* CharaCapsule)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "SetupCameraLockPosDirectly");

	Params::AKSPlayerCharacter_C_SetupCameraLockPosDirectly_Params Parms{};

	Parms.CameraLockPos = CameraLockPos;
	Parms.CharaCapsule = CharaCapsule;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.SetLevelLightParam
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEnable                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        LevelName                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSPlayerCharacter_C::SetLevelLightParam(bool bEnable, class FName LevelName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "SetLevelLightParam");

	Params::AKSPlayerCharacter_C_SetLevelLightParam_Params Parms{};

	Parms.bEnable = bEnable;
	Parms.LevelName = LevelName;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.SetLevelLightParam_InDebug
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Intencity                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              AttenuationRadius                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                LightColor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              SourceRadius                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSPlayerCharacter_C::SetLevelLightParam_InDebug(float Intencity, float AttenuationRadius, const struct FLinearColor& LightColor, float SourceRadius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "SetLevelLightParam_InDebug");

	Params::AKSPlayerCharacter_C_SetLevelLightParam_InDebug_Params Parms{};

	Parms.Intencity = Intencity;
	Parms.AttenuationRadius = AttenuationRadius;
	Parms.LightColor = LightColor;
	Parms.SourceRadius = SourceRadius;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.GetCameraInitOffset
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector AKSPlayerCharacter_C::GetCameraInitOffset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "GetCameraInitOffset");

	Params::AKSPlayerCharacter_C_GetCameraInitOffset_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.ResetCameraLock
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSPlayerCharacter_C::ResetCameraLock()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "ResetCameraLock");

	Params::AKSPlayerCharacter_C_ResetCameraLock_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.SetMapinPlayerLocation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterDir         CharaDir                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSPlayerCharacter_C::SetMapinPlayerLocation(const struct FVector& Location, enum class EKSCharacterDir CharaDir)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "SetMapinPlayerLocation");

	Params::AKSPlayerCharacter_C_SetMapinPlayerLocation_Params Parms{};

	Parms.Location = Location;
	Parms.CharaDir = CharaDir;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.GetCameraLockPos
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector AKSPlayerCharacter_C::GetCameraLockPos()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "GetCameraLockPos");

	Params::AKSPlayerCharacter_C_GetCameraLockPos_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.GetCineCameraWorldLocation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector AKSPlayerCharacter_C::GetCineCameraWorldLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "GetCineCameraWorldLocation");

	Params::AKSPlayerCharacter_C_GetCineCameraWorldLocation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.SetCameraDistanceRateToOperationCameraComp
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CameraDistanceRate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSPlayerCharacter_C::SetCameraDistanceRateToOperationCameraComp(float CameraDistanceRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "SetCameraDistanceRateToOperationCameraComp");

	Params::AKSPlayerCharacter_C_SetCameraDistanceRateToOperationCameraComp_Params Parms{};

	Parms.CameraDistanceRate = CameraDistanceRate;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.SetupCameraLock
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     LockPos                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bLock                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bUnlock                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bEnableX                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bEnableY                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bEnableZ                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bAfterLevelChange                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSPlayerCharacter_C::SetupCameraLock(const struct FVector& LockPos, bool bLock, bool bUnlock, bool bEnableX, bool bEnableY, bool bEnableZ, bool bAfterLevelChange)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "SetupCameraLock");

	Params::AKSPlayerCharacter_C_SetupCameraLock_Params Parms{};

	Parms.LockPos = LockPos;
	Parms.bLock = bLock;
	Parms.bUnlock = bUnlock;
	Parms.bEnableX = bEnableX;
	Parms.bEnableY = bEnableY;
	Parms.bEnableZ = bEnableZ;
	Parms.bAfterLevelChange = bAfterLevelChange;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.IsPlayerCharacter
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSPlayerCharacter_C::IsPlayerCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "IsPlayerCharacter");

	Params::AKSPlayerCharacter_C_IsPlayerCharacter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.GetPlayerPropertyComponent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPlayerPropertyComponent*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UPlayerPropertyComponent* AKSPlayerCharacter_C::GetPlayerPropertyComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "GetPlayerPropertyComponent");

	Params::AKSPlayerCharacter_C_GetPlayerPropertyComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.GetTextInfo
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName AKSPlayerCharacter_C::GetTextInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "GetTextInfo");

	Params::AKSPlayerCharacter_C_GetTextInfo_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.UpdateTransportDir
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSCharacterDir         CharaDir                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETRANSPORTATION_TYPE    TransportType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    Particle                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPlayerCharacter_C::UpdateTransportDir(enum class EKSCharacterDir CharaDir, enum class ETRANSPORTATION_TYPE TransportType, class UParticleSystemComponent* Particle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "UpdateTransportDir");

	Params::AKSPlayerCharacter_C_UpdateTransportDir_Params Parms{};

	Parms.CharaDir = CharaDir;
	Parms.TransportType = TransportType;
	Parms.Particle = Particle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.CalcTransportEffectArrayIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ETRANSPORTATION_TYPE    Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETRANSPORT_EFFECT       EffType                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPlayerCharacter_C::CalcTransportEffectArrayIndex(enum class ETRANSPORTATION_TYPE Type, enum class ETRANSPORT_EFFECT EffType, int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "CalcTransportEffectArrayIndex");

	Params::AKSPlayerCharacter_C_CalcTransportEffectArrayIndex_Params Parms{};

	Parms.Type = Type;
	Parms.EffType = EffType;

	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.GetTransportEffectName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ETRANSPORTATION_TYPE    Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETRANSPORT_EFFECT       EffType                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        EffName                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPlayerCharacter_C::GetTransportEffectName(enum class ETRANSPORTATION_TYPE Type, enum class ETRANSPORT_EFFECT EffType, class FName* EffName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "GetTransportEffectName");

	Params::AKSPlayerCharacter_C_GetTransportEffectName_Params Parms{};

	Parms.Type = Type;
	Parms.EffType = EffType;

	UObject::ProcessEvent(Func, &Parms);

	if (EffName != nullptr)
		*EffName = Parms.EffName;

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.GetTransformTransportEffect
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ETRANSPORTATION_TYPE    Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterDir         CharaDir                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Transform                                                        (Parm, OutParm, IsPlainOldData, NoDestructor)

void AKSPlayerCharacter_C::GetTransformTransportEffect(enum class ETRANSPORTATION_TYPE Type, enum class EKSCharacterDir CharaDir, struct FTransform* Transform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "GetTransformTransportEffect");

	Params::AKSPlayerCharacter_C_GetTransformTransportEffect_Params Parms{};

	Parms.Type = Type;
	Parms.CharaDir = CharaDir;

	UObject::ProcessEvent(Func, &Parms);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.StopAllTransportEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSPlayerCharacter_C::StopAllTransportEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "StopAllTransportEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.Stop Transport Effect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETRANSPORTATION_TYPE    Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETRANSPORT_EFFECT       EffType                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPlayerCharacter_C::Stop_Transport_Effect(enum class ETRANSPORTATION_TYPE Type, enum class ETRANSPORT_EFFECT EffType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "Stop Transport Effect");

	Params::AKSPlayerCharacter_C_Stop_Transport_Effect_Params Parms{};

	Parms.Type = Type;
	Parms.EffType = EffType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.PlayTransportEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETRANSPORTATION_TYPE    Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETRANSPORT_EFFECT       EffType                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPlayerCharacter_C::PlayTransportEffect(enum class ETRANSPORTATION_TYPE Type, enum class ETRANSPORT_EFFECT EffType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "PlayTransportEffect");

	Params::AKSPlayerCharacter_C_PlayTransportEffect_Params Parms{};

	Parms.Type = Type;
	Parms.EffType = EffType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.UpdateTransportEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETRANSPORTATION_TYPE    Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETRANSPORT_EFFECT       EffType                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPlayerCharacter_C::UpdateTransportEffect(enum class ETRANSPORTATION_TYPE Type, enum class ETRANSPORT_EFFECT EffType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "UpdateTransportEffect");

	Params::AKSPlayerCharacter_C_UpdateTransportEffect_Params Parms{};

	Parms.Type = Type;
	Parms.EffType = EffType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.Play Transport Effect by Move Mode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSCharacterMoveMode    MoveMode                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPlayerCharacter_C::Play_Transport_Effect_by_Move_Mode(enum class EKSCharacterMoveMode MoveMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "Play Transport Effect by Move Mode");

	Params::AKSPlayerCharacter_C_Play_Transport_Effect_by_Move_Mode_Params Parms{};

	Parms.MoveMode = MoveMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.InitTransportEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSPlayerCharacter_C::InitTransportEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "InitTransportEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.SetupTransportEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSPlayerCharacter_C::SetupTransportEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "SetupTransportEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.GetTransportType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ETRANSPORTATION_TYPE    Type                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPlayerCharacter_C::GetTransportType(enum class ETRANSPORTATION_TYPE* Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "GetTransportType");

	Params::AKSPlayerCharacter_C_GetTransportType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Type != nullptr)
		*Type = Parms.Type;

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.ResetIdleParam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSCharacterMoveMode    Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPlayerCharacter_C::ResetIdleParam(enum class EKSCharacterMoveMode Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "ResetIdleParam");

	Params::AKSPlayerCharacter_C_ResetIdleParam_Params Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.GetTalkingChara
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AKSCharacterBase*            Chara                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPlayerCharacter_C::GetTalkingChara(class AKSCharacterBase** Chara)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "GetTalkingChara");

	Params::AKSPlayerCharacter_C_GetTalkingChara_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Chara != nullptr)
		*Chara = Parms.Chara;

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.IsShopBar
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsShopBar                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSPlayerCharacter_C::IsShopBar(class UObject* Object, bool* IsShopBar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "IsShopBar");

	Params::AKSPlayerCharacter_C_IsShopBar_Params Parms{};

	Parms.Object = Object;

	UObject::ProcessEvent(Func, &Parms);

	if (IsShopBar != nullptr)
		*IsShopBar = Parms.IsShopBar;

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.SetEnableFCJudge
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               EnableFCJudge                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSPlayerCharacter_C::SetEnableFCJudge(bool EnableFCJudge)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "SetEnableFCJudge");

	Params::AKSPlayerCharacter_C_SetEnableFCJudge_Params Parms{};

	Parms.EnableFCJudge = EnableFCJudge;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.UpdateDitherMask
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSPlayerCharacter_C::UpdateDitherMask()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "UpdateDitherMask");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.SetLevelLightParam_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLevelInfoData              LevelData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void AKSPlayerCharacter_C::SetLevelLightParam_Internal(bool Enable, const struct FLevelInfoData& LevelData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "SetLevelLightParam_Internal");

	Params::AKSPlayerCharacter_C_SetLevelLightParam_Internal_Params Parms{};

	Parms.Enable = Enable;
	Parms.LevelData = LevelData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.IsTalk
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSPlayerCharacter_C::IsTalk()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "IsTalk");

	Params::AKSPlayerCharacter_C_IsTalk_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AKSPlayerCharacter_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AKSPlayerCharacter_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.BndEvt__KSPlayerCharacter_FadeNpcVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AKSPlayerCharacter_C::BndEvt__KSPlayerCharacter_FadeNpcVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "BndEvt__KSPlayerCharacter_FadeNpcVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::AKSPlayerCharacter_C_BndEvt__KSPlayerCharacter_FadeNpcVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.BndEvt__KSPlayerCharacter_FadeNpcVolume_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPlayerCharacter_C::BndEvt__KSPlayerCharacter_FadeNpcVolume_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "BndEvt__KSPlayerCharacter_FadeNpcVolume_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature");

	Params::AKSPlayerCharacter_C_BndEvt__KSPlayerCharacter_FadeNpcVolume_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.BndEvt__Trigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPlayerCharacter_C::BndEvt__Trigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "BndEvt__Trigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	Params::AKSPlayerCharacter_C_BndEvt__Trigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPlayerCharacter_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "ReceiveTick");

	Params::AKSPlayerCharacter_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AKSPlayerCharacter_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.SetDir
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSCharacterDir         EDir                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               SetIdle                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSPlayerCharacter_C::SetDir(enum class EKSCharacterDir EDir, bool SetIdle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "SetDir");

	Params::AKSPlayerCharacter_C_SetDir_Params Parms{};

	Parms.EDir = EDir;
	Parms.SetIdle = SetIdle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AKSPlayerCharacter_C::BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::AKSPlayerCharacter_C_BndEvt__Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.SetCharacterEnable
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSPlayerCharacter_C::SetCharacterEnable(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "SetCharacterEnable");

	Params::AKSPlayerCharacter_C_SetCharacterEnable_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.LadderOffset
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PartyIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterDir         NewDir                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPlayerCharacter_C::LadderOffset(int32 PartyIndex, enum class EKSCharacterDir NewDir)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "LadderOffset");

	Params::AKSPlayerCharacter_C_LadderOffset_Params Parms{};

	Parms.PartyIndex = PartyIndex;
	Parms.NewDir = NewDir;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.SetPartyLadderOffset
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EKSCharacterDir         NewDir                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPlayerCharacter_C::SetPartyLadderOffset(enum class EKSCharacterDir NewDir)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "SetPartyLadderOffset");

	Params::AKSPlayerCharacter_C_SetPartyLadderOffset_Params Parms{};

	Parms.NewDir = NewDir;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.StopCharacter
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSPlayerCharacter_C::StopCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "StopCharacter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.MoveBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     VMove                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPlayerCharacter_C::MoveBP(const struct FVector& VMove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "MoveBP");

	Params::AKSPlayerCharacter_C_MoveBP_Params Parms{};

	Parms.VMove = VMove;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.PlayEncountCamera
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSPlayerCharacter_C::PlayEncountCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "PlayEncountCamera");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSPlayerCharacter.KSPlayerCharacter_C.ExecuteUbergraph_KSPlayerCharacter
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSPlayerCharacter_C::ExecuteUbergraph_KSPlayerCharacter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSPlayerCharacter_C", "ExecuteUbergraph_KSPlayerCharacter");

	Params::AKSPlayerCharacter_C_ExecuteUbergraph_KSPlayerCharacter_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


