#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass KSFieldNPCCharacter.KSFieldNPCCharacter_C
// (Actor, Pawn)

class UClass* AKSFieldNPCCharacter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KSFieldNPCCharacter_C");

	return Clss;
}


// KSFieldNPCCharacter_C KSFieldNPCCharacter.Default__KSFieldNPCCharacter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKSFieldNPCCharacter_C* AKSFieldNPCCharacter_C::GetDefaultObj()
{
	static class AKSFieldNPCCharacter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKSFieldNPCCharacter_C*>(AKSFieldNPCCharacter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.Check Character Movement Disable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSFieldNPCCharacter_C::Check_Character_Movement_Disable(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "Check Character Movement Disable");

	Params::AKSFieldNPCCharacter_C_Check_Character_Movement_Disable_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.GetPlacementFadeComponent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPlacementFadeComponent*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UPlacementFadeComponent* AKSFieldNPCCharacter_C::GetPlacementFadeComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "GetPlacementFadeComponent");

	Params::AKSFieldNPCCharacter_C_GetPlacementFadeComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.UpdateTalkEmotion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSFieldNPCCharacter_C::UpdateTalkEmotion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "UpdateTalkEmotion");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.SetIgnoreGravity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSFieldNPCCharacter_C::SetIgnoreGravity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "SetIgnoreGravity");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.Set Capsule Collision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECollisionResponse      CollisionType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSFieldNPCCharacter_C::Set_Capsule_Collision(enum class ECollisionResponse CollisionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "Set Capsule Collision");

	Params::AKSFieldNPCCharacter_C_Set_Capsule_Collision_Params Parms{};

	Parms.CollisionType = CollisionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.UpdateStateEmotion
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MoveComplete                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               EnableTalk                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               EnableFC                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECollisionResponse      EnableCollision                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSFieldNPCCharacter_C::UpdateStateEmotion(bool MoveComplete, bool* EnableTalk, bool* EnableFC, enum class ECollisionResponse* EnableCollision)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "UpdateStateEmotion");

	Params::AKSFieldNPCCharacter_C_UpdateStateEmotion_Params Parms{};

	Parms.MoveComplete = MoveComplete;

	UObject::ProcessEvent(Func, &Parms);

	if (EnableTalk != nullptr)
		*EnableTalk = Parms.EnableTalk;

	if (EnableFC != nullptr)
		*EnableFC = Parms.EnableFC;

	if (EnableCollision != nullptr)
		*EnableCollision = Parms.EnableCollision;

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.Is Move Enable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsMoveEnable                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSFieldNPCCharacter_C::Is_Move_Enable(bool* IsMoveEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "Is Move Enable");

	Params::AKSFieldNPCCharacter_C_Is_Move_Enable_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsMoveEnable != nullptr)
		*IsMoveEnable = Parms.IsMoveEnable;

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.IsFieldNpcCharacter
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSFieldNPCCharacter_C::IsFieldNpcCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "IsFieldNpcCharacter");

	Params::AKSFieldNPCCharacter_C_IsFieldNpcCharacter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.RefreshFadeMaterial
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bClearMaterialParam                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSFieldNPCCharacter_C::RefreshFadeMaterial(bool bClearMaterialParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "RefreshFadeMaterial");

	Params::AKSFieldNPCCharacter_C_RefreshFadeMaterial_Params Parms{};

	Parms.bClearMaterialParam = bClearMaterialParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.SetActorHiddenInGameBP
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bNewHidden                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSFieldNPCCharacter_C::SetActorHiddenInGameBP(bool bNewHidden)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "SetActorHiddenInGameBP");

	Params::AKSFieldNPCCharacter_C_SetActorHiddenInGameBP_Params Parms{};

	Parms.bNewHidden = bNewHidden;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.OnFinishAutoBalloon
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSFieldNPCCharacter_C::OnFinishAutoBalloon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "OnFinishAutoBalloon");

	Params::AKSFieldNPCCharacter_C_OnFinishAutoBalloon_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.CanOpenAutoBalloon
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSFieldNPCCharacter_C::CanOpenAutoBalloon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "CanOpenAutoBalloon");

	Params::AKSFieldNPCCharacter_C_CanOpenAutoBalloon_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.CanShowGuildIcon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               CamShow                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSFieldNPCCharacter_C::CanShowGuildIcon(bool* CamShow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "CanShowGuildIcon");

	Params::AKSFieldNPCCharacter_C_CanShowGuildIcon_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CamShow != nullptr)
		*CamShow = Parms.CamShow;

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.CanPlayEmotionAnimation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               CanPlay                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSFieldNPCCharacter_C::CanPlayEmotionAnimation(bool* CanPlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "CanPlayEmotionAnimation");

	Params::AKSFieldNPCCharacter_C_CanPlayEmotionAnimation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CanPlay != nullptr)
		*CanPlay = Parms.CanPlay;

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.SpawnPlacementEmotion_Old
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSFieldNPCCharacter_C::SpawnPlacementEmotion_Old()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "SpawnPlacementEmotion_Old");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.CalcEmotionOffset
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector AKSFieldNPCCharacter_C::CalcEmotionOffset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "CalcEmotionOffset");

	Params::AKSFieldNPCCharacter_C_CalcEmotionOffset_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.SetIsFadeChara
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFadeChara                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSFieldNPCCharacter_C::SetIsFadeChara(bool IsFadeChara)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "SetIsFadeChara");

	Params::AKSFieldNPCCharacter_C_SetIsFadeChara_Params Parms{};

	Parms.IsFadeChara = IsFadeChara;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.SetIsForceSpawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsForceSpawn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSFieldNPCCharacter_C::SetIsForceSpawn(bool IsForceSpawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "SetIsForceSpawn");

	Params::AKSFieldNPCCharacter_C_SetIsForceSpawn_Params Parms{};

	Parms.IsForceSpawn = IsForceSpawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.GetSplineObject
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USplineMoveComponent*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USplineMoveComponent* AKSFieldNPCCharacter_C::GetSplineObject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "GetSplineObject");

	Params::AKSFieldNPCCharacter_C_GetSplineObject_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.ReplacePlacementData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlacementData              PlacementData                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPlacementData              NewPlacementData                                                 (Parm, OutParm)

void AKSFieldNPCCharacter_C::ReplacePlacementData(const struct FPlacementData& PlacementData, struct FPlacementData* NewPlacementData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "ReplacePlacementData");

	Params::AKSFieldNPCCharacter_C_ReplacePlacementData_Params Parms{};

	Parms.PlacementData = PlacementData;

	UObject::ProcessEvent(Func, &Parms);

	if (NewPlacementData != nullptr)
		*NewPlacementData = std::move(Parms.NewPlacementData);

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.RefreshCurrentInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ForceSpawnEmotion                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SkipSpawnEmotion                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSFieldNPCCharacter_C::RefreshCurrentInfo(bool ForceSpawnEmotion, bool SkipSpawnEmotion)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "RefreshCurrentInfo");

	Params::AKSFieldNPCCharacter_C_RefreshCurrentInfo_Params Parms{};

	Parms.ForceSpawnEmotion = ForceSpawnEmotion;
	Parms.SkipSpawnEmotion = SkipSpawnEmotion;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.CallTalkEvent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSFieldNPCCharacter_C::CallTalkEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "CallTalkEvent");

	Params::AKSFieldNPCCharacter_C_CallTalkEvent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.ChangeSwoonState
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     SwoonOffsetPos                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EKSCharacterAction      SwoonAction                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ENpcSwoonType           SwoonType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSFieldNPCCharacter_C::ChangeSwoonState(struct FVector& SwoonOffsetPos, enum class EKSCharacterAction SwoonAction, enum class ENpcSwoonType SwoonType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "ChangeSwoonState");

	Params::AKSFieldNPCCharacter_C_ChangeSwoonState_Params Parms{};

	Parms.SwoonOffsetPos = SwoonOffsetPos;
	Parms.SwoonAction = SwoonAction;
	Parms.SwoonType = SwoonType;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.GetTextInfo
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName AKSFieldNPCCharacter_C::GetTextInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "GetTextInfo");

	Params::AKSFieldNPCCharacter_C_GetTextInfo_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.SequenceRequestCallback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EREQUEST_RESULT         Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSFieldNPCCharacter_C::SequenceRequestCallback(enum class EREQUEST_RESULT Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "SequenceRequestCallback");

	Params::AKSFieldNPCCharacter_C_SequenceRequestCallback_Params Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.SpawnedInitialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSFieldNPCCharacter_C::SpawnedInitialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "SpawnedInitialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.Idle
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Force                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AKSFieldNPCCharacter_C::Idle(bool Force)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "Idle");

	Params::AKSFieldNPCCharacter_C_Idle_Params Parms{};

	Parms.Force = Force;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.SpawnEmotionEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSFieldNPCCharacter_C::SpawnEmotionEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "SpawnEmotionEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.UpdateToRequest
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSFieldNPCCharacter_C::UpdateToRequest(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "UpdateToRequest");

	Params::AKSFieldNPCCharacter_C_UpdateToRequest_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.ResetSequence
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSFieldNPCCharacter_C::ResetSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "ResetSequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.RequestStateFaintRevival
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSFieldNPCCharacter_C::RequestStateFaintRevival()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "RequestStateFaintRevival");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.RequestStateDestroy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSFieldNPCCharacter_C::RequestStateDestroy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "RequestStateDestroy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.UpdateFadeMaterial
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSFieldNPCCharacter_C::UpdateFadeMaterial(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "UpdateFadeMaterial");

	Params::AKSFieldNPCCharacter_C_UpdateFadeMaterial_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.SetUpFadeMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSFieldNPCCharacter_C::SetUpFadeMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "SetUpFadeMaterial");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.CheckMoveEnable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              FDeltaSecond                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               EnableMoving                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSFieldNPCCharacter_C::CheckMoveEnable(float FDeltaSecond, bool* EnableMoving)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "CheckMoveEnable");

	Params::AKSFieldNPCCharacter_C_CheckMoveEnable_Params Parms{};

	Parms.FDeltaSecond = FDeltaSecond;

	UObject::ProcessEvent(Func, &Parms);

	if (EnableMoving != nullptr)
		*EnableMoving = Parms.EnableMoving;

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.Check Talk Enable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               EnableTalk                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSFieldNPCCharacter_C::Check_Talk_Enable(bool* EnableTalk)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "Check Talk Enable");

	Params::AKSFieldNPCCharacter_C_Check_Talk_Enable_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EnableTalk != nullptr)
		*EnableTalk = Parms.EnableTalk;

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.UpdateEmotionAndAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               MoveComplete                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSFieldNPCCharacter_C::UpdateEmotionAndAction(bool MoveComplete)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "UpdateEmotionAndAction");

	Params::AKSFieldNPCCharacter_C_UpdateEmotionAndAction_Params Parms{};

	Parms.MoveComplete = MoveComplete;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.GetPlayerCollisionEnable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECollisionResponse      CollisionEnable                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSFieldNPCCharacter_C::GetPlayerCollisionEnable(enum class ECollisionResponse* CollisionEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "GetPlayerCollisionEnable");

	Params::AKSFieldNPCCharacter_C_GetPlayerCollisionEnable_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CollisionEnable != nullptr)
		*CollisionEnable = Parms.CollisionEnable;

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.SetDeliveryItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ENPCEVENT_TYPE          NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        NewParam1                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        NewParam2                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        NewParam3                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        NewParam4                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        NewParam5                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        NewParam6                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        NewParam7                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        NewParam8                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        NewParam9                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        NewParam10                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSFieldNPCCharacter_C::SetDeliveryItem(enum class ENPCEVENT_TYPE NewParam, class FName NewParam1, class FName NewParam2, class FName NewParam3, class FName NewParam4, class FName NewParam5, class FName NewParam6, class FName NewParam7, class FName NewParam8, class FName NewParam9, class FName NewParam10)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "SetDeliveryItem");

	Params::AKSFieldNPCCharacter_C_SetDeliveryItem_Params Parms{};

	Parms.NewParam = NewParam;
	Parms.NewParam1 = NewParam1;
	Parms.NewParam2 = NewParam2;
	Parms.NewParam3 = NewParam3;
	Parms.NewParam4 = NewParam4;
	Parms.NewParam5 = NewParam5;
	Parms.NewParam6 = NewParam6;
	Parms.NewParam7 = NewParam7;
	Parms.NewParam8 = NewParam8;
	Parms.NewParam9 = NewParam9;
	Parms.NewParam10 = NewParam10;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.SubDeliveryItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSFieldNPCCharacter_C::SubDeliveryItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "SubDeliveryItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.Debug Show Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSFieldNPCCharacter_C::Debug_Show_Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "Debug Show Update");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.SetPlacementAndCollision
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSFieldNPCCharacter_C::SetPlacementAndCollision()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "SetPlacementAndCollision");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.SpawnPlacementEmotion
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ForceSpawnEmotion                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSFieldNPCCharacter_C::SpawnPlacementEmotion(bool ForceSpawnEmotion)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "SpawnPlacementEmotion");

	Params::AKSFieldNPCCharacter_C_SpawnPlacementEmotion_Params Parms{};

	Parms.ForceSpawnEmotion = ForceSpawnEmotion;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.TalkEventFinish_CB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSFieldNPCCharacter_C::TalkEventFinish_CB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "TalkEventFinish_CB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.EventTalk
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsTalk                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      TalkEventName                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void AKSFieldNPCCharacter_C::EventTalk(bool* IsTalk, class FString* TalkEventName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "EventTalk");

	Params::AKSFieldNPCCharacter_C_EventTalk_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsTalk != nullptr)
		*IsTalk = Parms.IsTalk;

	if (TalkEventName != nullptr)
		*TalkEventName = std::move(Parms.TalkEventName);

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.ChangeDefaultDir
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSFieldNPCCharacter_C::ChangeDefaultDir()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "ChangeDefaultDir");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSFieldNPCCharacter_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "ReceiveTick");

	Params::AKSFieldNPCCharacter_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AKSFieldNPCCharacter_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void AKSFieldNPCCharacter_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.FinishMove
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSFieldNPCCharacter_C::FinishMove()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "FinishMove");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.SetVisibleHouseChange
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bEnable                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AKSFieldNPCCharacter_C::SetVisibleHouseChange(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "SetVisibleHouseChange");

	Params::AKSFieldNPCCharacter_C_SetVisibleHouseChange_Params Parms{};

	Parms.bEnable = bEnable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.OnBeginOverlapFromPlayerChara
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSFieldNPCCharacter_C::OnBeginOverlapFromPlayerChara()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "OnBeginOverlapFromPlayerChara");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.OnEndOverlapFromPlayerChara
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSFieldNPCCharacter_C::OnEndOverlapFromPlayerChara()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "OnEndOverlapFromPlayerChara");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.PlayEmotionAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSFieldNPCCharacter_C::PlayEmotionAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "PlayEmotionAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.StopEmotionAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AKSFieldNPCCharacter_C::StopEmotionAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "StopEmotionAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.UpdateMove
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSFieldNPCCharacter_C::UpdateMove(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "UpdateMove");

	Params::AKSFieldNPCCharacter_C_UpdateMove_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.BndEvt__KSFieldNPCCharacter_CharaForm_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         HitComponent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     NormalImpulse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AKSFieldNPCCharacter_C::BndEvt__KSFieldNPCCharacter_CharaForm_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "BndEvt__KSFieldNPCCharacter_CharaForm_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature");

	Params::AKSFieldNPCCharacter_C_BndEvt__KSFieldNPCCharacter_CharaForm_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = NormalImpulse;
	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.DebugShowInfoUpdate
// (Event, Public, BlueprintEvent)
// Parameters:

void AKSFieldNPCCharacter_C::DebugShowInfoUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "DebugShowInfoUpdate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function KSFieldNPCCharacter.KSFieldNPCCharacter_C.ExecuteUbergraph_KSFieldNPCCharacter
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AKSFieldNPCCharacter_C::ExecuteUbergraph_KSFieldNPCCharacter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("KSFieldNPCCharacter_C", "ExecuteUbergraph_KSFieldNPCCharacter");

	Params::AKSFieldNPCCharacter_C_ExecuteUbergraph_KSFieldNPCCharacter_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


