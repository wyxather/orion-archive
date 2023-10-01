// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxVehicle_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GbxVehicle.TurretMovementComponent.UpdateTurretControlDependency
// (Final, Native, Public, BlueprintCallable)

void UTurretMovementComponent::UpdateTurretControlDependency()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.TurretMovementComponent.UpdateTurretControlDependency");

	UTurretMovementComponent_UpdateTurretControlDependency_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxVehicle.TurretMovementComponent.UpdateParentInitialOffset
// (Final, Native, Public, BlueprintCallable)

void UTurretMovementComponent::UpdateParentInitialOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.TurretMovementComponent.UpdateParentInitialOffset");

	UTurretMovementComponent_UpdateParentInitialOffset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxVehicle.TurretMovementComponent.SetRotationInputs
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          XValue                         (Parm, ZeroConstructor, IsPlainOldData)
// float                          YValue                         (Parm, ZeroConstructor, IsPlainOldData)

void UTurretMovementComponent::SetRotationInputs(float XValue, float YValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.TurretMovementComponent.SetRotationInputs");

	UTurretMovementComponent_SetRotationInputs_Params params;
	params.XValue = XValue;
	params.YValue = YValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxVehicle.TurretMovementComponent.ServerSetRotationInputs
// (Net, Native, Event, Public, NetServer, HasDefaults, NetValidate)
// Parameters:
// struct FVector2D               InRotationInputs               (Parm, IsPlainOldData)

void UTurretMovementComponent::ServerSetRotationInputs(const struct FVector2D& InRotationInputs)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.TurretMovementComponent.ServerSetRotationInputs");

	UTurretMovementComponent_ServerSetRotationInputs_Params params;
	params.InRotationInputs = InRotationInputs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxVehicle.Vehicle.SetTeam
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UTeam*                   Team                           (Parm, ZeroConstructor, IsPlainOldData)

void AVehicle::SetTeam(class UTeam* Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.Vehicle.SetTeam");

	AVehicle_SetTeam_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxVehicle.Vehicle.RemoveVehiclePart
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVehiclePartData*        CharacterPart                  (Parm, ZeroConstructor, IsPlainOldData)

void AVehicle::RemoveVehiclePart(class UVehiclePartData* CharacterPart)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.Vehicle.RemoveVehiclePart");

	AVehicle_RemoveVehiclePart_Params params;
	params.CharacterPart = CharacterPart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxVehicle.Vehicle.OnRep_VehicleParts
// (Final, Native, Protected)

void AVehicle::OnRep_VehicleParts()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.Vehicle.OnRep_VehicleParts");

	AVehicle_OnRep_VehicleParts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxVehicle.Vehicle.IsPowerSliding
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AVehicle::IsPowerSliding()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.Vehicle.IsPowerSliding");

	AVehicle_IsPowerSliding_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxVehicle.Vehicle.IsInAir
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AVehicle::IsInAir()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.Vehicle.IsInAir");

	AVehicle_IsInAir_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxVehicle.Vehicle.GetTeamComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTeamComponent*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UTeamComponent* AVehicle::GetTeamComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.Vehicle.GetTeamComponent");

	AVehicle_GetTeamComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxVehicle.Vehicle.GetTeam
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTeam*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTeam* AVehicle::GetTeam()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.Vehicle.GetTeam");

	AVehicle_GetTeam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxVehicle.Vehicle.GetTargetingComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTargetingComponent*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UTargetingComponent* AVehicle::GetTargetingComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.Vehicle.GetTargetingComponent");

	AVehicle_GetTargetingComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxVehicle.Vehicle.GetTargetableComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTargetableComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UTargetableComponent* AVehicle::GetTargetableComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.Vehicle.GetTargetableComponent");

	AVehicle_GetTargetableComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxVehicle.Vehicle.GetNumWheelsInAir
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AVehicle::GetNumWheelsInAir()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.Vehicle.GetNumWheelsInAir");

	AVehicle_GetNumWheelsInAir_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxVehicle.Vehicle.GetEquipedParts
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UVehiclePartData*> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<class UVehiclePartData*> AVehicle::GetEquipedParts()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.Vehicle.GetEquipedParts");

	AVehicle_GetEquipedParts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxVehicle.Vehicle.AddVehiclePart
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVehiclePartData*        CharacterPart                  (Parm, ZeroConstructor, IsPlainOldData)

void AVehicle::AddVehiclePart(class UVehiclePartData* CharacterPart)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.Vehicle.AddVehiclePart");

	AVehicle_AddVehiclePart_Params params;
	params.CharacterPart = CharacterPart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction GbxVehicle.VehicleBoostComponent.VehicleBoostEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UVehicleBoostComponent::VehicleBoostEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction GbxVehicle.VehicleBoostComponent.VehicleBoostEvent__DelegateSignature");

	UVehicleBoostComponent_VehicleBoostEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxVehicle.VehicleBoostComponent.StopBoost
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleBoostComponent::StopBoost(bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleBoostComponent.StopBoost");

	UVehicleBoostComponent_StopBoost_Params params;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxVehicle.VehicleBoostComponent.StartBoost
// (Final, Native, Public, BlueprintCallable)

void UVehicleBoostComponent::StartBoost()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleBoostComponent.StartBoost");

	UVehicleBoostComponent_StartBoost_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxVehicle.VehicleBoostComponent.ResumeBoost
// (Final, Native, Public, BlueprintCallable)

void UVehicleBoostComponent::ResumeBoost()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleBoostComponent.ResumeBoost");

	UVehicleBoostComponent_ResumeBoost_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxVehicle.VehicleBoostComponent.RegisterBoostRegenerateEvent
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          BoostTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         BoostValueReachedDelegate      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UVehicleBoostComponent::RegisterBoostRegenerateEvent(float BoostTarget, const struct FScriptDelegate& BoostValueReachedDelegate)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleBoostComponent.RegisterBoostRegenerateEvent");

	UVehicleBoostComponent_RegisterBoostRegenerateEvent_Params params;
	params.BoostTarget = BoostTarget;
	params.BoostValueReachedDelegate = BoostValueReachedDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxVehicle.VehicleBoostComponent.PauseBoost
// (Final, Native, Public, BlueprintCallable)

void UVehicleBoostComponent::PauseBoost()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleBoostComponent.PauseBoost");

	UVehicleBoostComponent_PauseBoost_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxVehicle.VehicleBoostComponent.OnRep_IsBoosting
// (Final, Native, Protected)
// Parameters:
// bool                           bWasBoosting                   (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleBoostComponent::OnRep_IsBoosting(bool bWasBoosting)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleBoostComponent.OnRep_IsBoosting");

	UVehicleBoostComponent_OnRep_IsBoosting_Params params;
	params.bWasBoosting = bWasBoosting;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxVehicle.VehicleBoostComponent.K2_BoostStopped
// (Event, Protected, BlueprintEvent)

void UVehicleBoostComponent::K2_BoostStopped()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleBoostComponent.K2_BoostStopped");

	UVehicleBoostComponent_K2_BoostStopped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxVehicle.VehicleBoostComponent.K2_BoostStarted
// (Event, Protected, BlueprintEvent)

void UVehicleBoostComponent::K2_BoostStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleBoostComponent.K2_BoostStarted");

	UVehicleBoostComponent_K2_BoostStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxVehicle.VehicleBoostComponent.GetRelativeBoostSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVehicleBoostComponent::GetRelativeBoostSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleBoostComponent.GetRelativeBoostSpeed");

	UVehicleBoostComponent_GetRelativeBoostSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxVehicle.VehicleBoostComponent.GetMaxBoostPoolValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVehicleBoostComponent::GetMaxBoostPoolValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleBoostComponent.GetMaxBoostPoolValue");

	UVehicleBoostComponent_GetMaxBoostPoolValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxVehicle.VehicleBoostComponent.GetCurrentBoostPoolValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVehicleBoostComponent::GetCurrentBoostPoolValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleBoostComponent.GetCurrentBoostPoolValue");

	UVehicleBoostComponent_GetCurrentBoostPoolValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxVehicle.VehicleBoostComponent.GetCurrentBoostChargesCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UVehicleBoostComponent::GetCurrentBoostChargesCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleBoostComponent.GetCurrentBoostChargesCount");

	UVehicleBoostComponent_GetCurrentBoostChargesCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxVehicle.VehicleBoostComponent.GetBoostEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVehicleBoostComponent::GetBoostEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleBoostComponent.GetBoostEnabled");

	UVehicleBoostComponent_GetBoostEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxVehicle.VehicleBoostComponent.GetBoostDirection
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UVehicleBoostComponent::GetBoostDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleBoostComponent.GetBoostDirection");

	UVehicleBoostComponent_GetBoostDirection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxVehicle.VehicleDigiThrustComponent.SetTeleportDirection
// (Net, NetReliable, Native, Event, Public, NetServer, HasDefaults, BlueprintCallable, NetValidate)
// Parameters:
// struct FVector                 WantedDirection                (ConstParm, Parm, ReferenceParm, IsPlainOldData)

void UVehicleDigiThrustComponent::SetTeleportDirection(const struct FVector& WantedDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleDigiThrustComponent.SetTeleportDirection");

	UVehicleDigiThrustComponent_SetTeleportDirection_Params params;
	params.WantedDirection = WantedDirection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxVehicle.VehicleDigiThrustComponent.RequestTeleport
// (Final, Native, Public, BlueprintCallable)

void UVehicleDigiThrustComponent::RequestTeleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleDigiThrustComponent.RequestTeleport");

	UVehicleDigiThrustComponent_RequestTeleport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxVehicle.VehicleDigiThrustComponent.NetMulticast_OnDigiThrustStarted
// (Net, Native, Event, NetMulticast, Public)

void UVehicleDigiThrustComponent::NetMulticast_OnDigiThrustStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleDigiThrustComponent.NetMulticast_OnDigiThrustStarted");

	UVehicleDigiThrustComponent_NetMulticast_OnDigiThrustStarted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxVehicle.VehicleDigiThrustComponent.NetMulticast_OnDigiThrustEndFinished
// (Net, Native, Event, NetMulticast, Public)

void UVehicleDigiThrustComponent::NetMulticast_OnDigiThrustEndFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleDigiThrustComponent.NetMulticast_OnDigiThrustEndFinished");

	UVehicleDigiThrustComponent_NetMulticast_OnDigiThrustEndFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxVehicle.VehicleDigiThrustComponent.NetMulticast_OnDigiThrustEnd
// (Net, Native, Event, NetMulticast, Public)

void UVehicleDigiThrustComponent::NetMulticast_OnDigiThrustEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleDigiThrustComponent.NetMulticast_OnDigiThrustEnd");

	UVehicleDigiThrustComponent_NetMulticast_OnDigiThrustEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxVehicle.VehicleDigiThrustComponent.NetMulticast_OnDigiThrustCollision
// (Net, Native, Event, NetMulticast, Public)

void UVehicleDigiThrustComponent::NetMulticast_OnDigiThrustCollision()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleDigiThrustComponent.NetMulticast_OnDigiThrustCollision");

	UVehicleDigiThrustComponent_NetMulticast_OnDigiThrustCollision_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxVehicle.VehicleDigiThrustComponent.IsTeleporting
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVehicleDigiThrustComponent::IsTeleporting()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleDigiThrustComponent.IsTeleporting");

	UVehicleDigiThrustComponent_IsTeleporting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxVehicle.VehicleDigiThrustComponent.GetMaxBoostPoolValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVehicleDigiThrustComponent::GetMaxBoostPoolValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleDigiThrustComponent.GetMaxBoostPoolValue");

	UVehicleDigiThrustComponent_GetMaxBoostPoolValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxVehicle.VehicleDigiThrustComponent.GetCurrentBoostPoolValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVehicleDigiThrustComponent::GetCurrentBoostPoolValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleDigiThrustComponent.GetCurrentBoostPoolValue");

	UVehicleDigiThrustComponent_GetCurrentBoostPoolValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction GbxVehicle.VehicleDigiThrustComponent.DigiThrustEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UVehicleDigiThrustComponent::DigiThrustEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction GbxVehicle.VehicleDigiThrustComponent.DigiThrustEvent__DelegateSignature");

	UVehicleDigiThrustComponent_DigiThrustEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxVehicle.VehicleHitchAttachPtComponent.IsAttached
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVehicleHitchAttachPtComponent::IsAttached()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleHitchAttachPtComponent.IsAttached");

	UVehicleHitchAttachPtComponent_IsAttached_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction GbxVehicle.VehicleHitchAttachPtComponent.HitchAttachAction__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class AVehicle*                FromVehicle                    (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleHitchAttachPtComponent::HitchAttachAction__DelegateSignature(class AVehicle* FromVehicle)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction GbxVehicle.VehicleHitchAttachPtComponent.HitchAttachAction__DelegateSignature");

	UVehicleHitchAttachPtComponent_HitchAttachAction__DelegateSignature_Params params;
	params.FromVehicle = FromVehicle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxVehicle.VehicleHitchComponent.TeleportTrailerAndAttachToHitch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TrailerToAttach                (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleHitchComponent::TeleportTrailerAndAttachToHitch(class AActor* TrailerToAttach)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleHitchComponent.TeleportTrailerAndAttachToHitch");

	UVehicleHitchComponent_TeleportTrailerAndAttachToHitch_Params params;
	params.TrailerToAttach = TrailerToAttach;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction GbxVehicle.VehicleHitchComponent.HitchAttachAction__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class AVehicle*                FromVehicle                    (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleHitchComponent::HitchAttachAction__DelegateSignature(class AVehicle* FromVehicle)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction GbxVehicle.VehicleHitchComponent.HitchAttachAction__DelegateSignature");

	UVehicleHitchComponent_HitchAttachAction__DelegateSignature_Params params;
	params.FromVehicle = FromVehicle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxVehicle.VehicleHitchComponent.DetachFromHitch
// (Final, Native, Public, BlueprintCallable)

void UVehicleHitchComponent::DetachFromHitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleHitchComponent.DetachFromHitch");

	UVehicleHitchComponent_DetachFromHitch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxVehicle.VehicleHitchComponent.AttachToHitch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVehicleHitchAttachPtComponent* AttachPtToAttach               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UVehicleHitchComponent::AttachToHitch(class UVehicleHitchAttachPtComponent* AttachPtToAttach)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleHitchComponent.AttachToHitch");

	UVehicleHitchComponent_AttachToHitch_Params params;
	params.AttachPtToAttach = AttachPtToAttach;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction GbxVehicle.VehicleHoverComponent.VehicleHoverEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)

void UVehicleHoverComponent::VehicleHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction GbxVehicle.VehicleHoverComponent.VehicleHoverEvent__DelegateSignature");

	UVehicleHoverComponent_VehicleHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxVehicle.VehicleHoverComponent.ServerUpdateState
// (Final, Net, NetReliable, Native, Event, Private, NetServer, HasDefaults, NetValidate)
// Parameters:
// bool                           InbIsEnabled                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          InStrafeInput                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          InForwardInput                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                InTargetRotation               (Parm, IsPlainOldData)

void UVehicleHoverComponent::ServerUpdateState(bool InbIsEnabled, float InStrafeInput, float InForwardInput, const struct FRotator& InTargetRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleHoverComponent.ServerUpdateState");

	UVehicleHoverComponent_ServerUpdateState_Params params;
	params.InbIsEnabled = InbIsEnabled;
	params.InStrafeInput = InStrafeInput;
	params.InForwardInput = InForwardInput;
	params.InTargetRotation = InTargetRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxVehicle.VehicleHoverComponent.IsHoverEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVehicleHoverComponent::IsHoverEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleHoverComponent.IsHoverEnabled");

	UVehicleHoverComponent_IsHoverEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxVehicle.VehicleHoverComponent.EnableHover
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UVehicleHoverComponent::EnableHover(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleHoverComponent.EnableHover");

	UVehicleHoverComponent_EnableHover_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxVehicle.VehicleMovementInterface.GetDirectionBasedThrottleAndSteer
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               StickInput                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UVehicleMovementInterface::GetDirectionBasedThrottleAndSteer(const struct FVector2D& StickInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehicleMovementInterface.GetDirectionBasedThrottleAndSteer");

	UVehicleMovementInterface_GetDirectionBasedThrottleAndSteer_Params params;
	params.StickInput = StickInput;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxVehicle.VehiclePartActor.WeldActorToVehicle
// (Final, Native, Private)
// Parameters:
// class AActor*                  SpawnedPart                    (Parm, ZeroConstructor, IsPlainOldData)

void AVehiclePartActor::WeldActorToVehicle(class AActor* SpawnedPart)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehiclePartActor.WeldActorToVehicle");

	AVehiclePartActor_WeldActorToVehicle_Params params;
	params.SpawnedPart = SpawnedPart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxVehicle.VehiclePartActor.ReceiveParentVehicleBeginPlay
// (Event, Protected, BlueprintEvent)

void AVehiclePartActor::ReceiveParentVehicleBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehiclePartActor.ReceiveParentVehicleBeginPlay");

	AVehiclePartActor_ReceiveParentVehicleBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxVehicle.VehiclePartActor.OnRep_ParentSocket
// (Final, Native, Private)

void AVehiclePartActor::OnRep_ParentSocket()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehiclePartActor.OnRep_ParentSocket");

	AVehiclePartActor_OnRep_ParentSocket_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxVehicle.VehiclePartActor.OnRep_OwningVehicle
// (Final, Native, Private)

void AVehiclePartActor::OnRep_OwningVehicle()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehiclePartActor.OnRep_OwningVehicle");

	AVehiclePartActor_OnRep_OwningVehicle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxVehicle.VehiclePowerSlideComponent.SetPowerSlideEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UVehiclePowerSlideComponent::SetPowerSlideEnabled(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehiclePowerSlideComponent.SetPowerSlideEnabled");

	UVehiclePowerSlideComponent_SetPowerSlideEnabled_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxVehicle.VehiclePowerSlideComponent.ResumePowerSlide
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UVehiclePowerSlideComponent::ResumePowerSlide(const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehiclePowerSlideComponent.ResumePowerSlide");

	UVehiclePowerSlideComponent_ResumePowerSlide_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxVehicle.VehiclePowerSlideComponent.PausePowerSlide
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UVehiclePowerSlideComponent::PausePowerSlide(const struct FName& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehiclePowerSlideComponent.PausePowerSlide");

	UVehiclePowerSlideComponent_PausePowerSlide_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxVehicle.VehiclePowerSlideComponent.OnRep_IsPowerSliding
// (Final, Native, Private)
// Parameters:
// bool                           bWasPowerSliding               (Parm, ZeroConstructor, IsPlainOldData)

void UVehiclePowerSlideComponent::OnRep_IsPowerSliding(bool bWasPowerSliding)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehiclePowerSlideComponent.OnRep_IsPowerSliding");

	UVehiclePowerSlideComponent_OnRep_IsPowerSliding_Params params;
	params.bWasPowerSliding = bWasPowerSliding;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxVehicle.VehiclePowerSlideComponent.IsPowerSlidePaused
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVehiclePowerSlideComponent::IsPowerSlidePaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehiclePowerSlideComponent.IsPowerSlidePaused");

	UVehiclePowerSlideComponent_IsPowerSlidePaused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxVehicle.VehiclePowerSlideComponent.IsInPowerSlideBoost
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVehiclePowerSlideComponent::IsInPowerSlideBoost()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehiclePowerSlideComponent.IsInPowerSlideBoost");

	UVehiclePowerSlideComponent_IsInPowerSlideBoost_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxVehicle.VehiclePowerSlideComponent.GetPowerSlideEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVehiclePowerSlideComponent::GetPowerSlideEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehiclePowerSlideComponent.GetPowerSlideEnabled");

	UVehiclePowerSlideComponent_GetPowerSlideEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxVehicle.VehiclePowerSlideComponent.GetCurrentBoostRatio
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UVehiclePowerSlideComponent::GetCurrentBoostRatio()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehiclePowerSlideComponent.GetCurrentBoostRatio");

	UVehiclePowerSlideComponent_GetCurrentBoostRatio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxVehicle.VehiclePowerSlideComponent.CancelPowerSlide
// (Final, Native, Public, BlueprintCallable)

void UVehiclePowerSlideComponent::CancelPowerSlide()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.VehiclePowerSlideComponent.CancelPowerSlide");

	UVehiclePowerSlideComponent_CancelPowerSlide_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxVehicle.WheeledVehicleMovementComponentNW.SetToRestState
// (Final, Native, Public, BlueprintCallable)

void UWheeledVehicleMovementComponentNW::SetToRestState()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.WheeledVehicleMovementComponentNW.SetToRestState");

	UWheeledVehicleMovementComponentNW_SetToRestState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxVehicle.WheeledVehicleMovementComponentNW.SetSteerAngle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          SteerAngle                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)

void UWheeledVehicleMovementComponentNW::SetSteerAngle(float SteerAngle, int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.WheeledVehicleMovementComponentNW.SetSteerAngle");

	UWheeledVehicleMovementComponentNW_SetSteerAngle_Params params;
	params.SteerAngle = SteerAngle;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxVehicle.WheeledVehicleMovementComponentNW.SetSagittalBalancingEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UWheeledVehicleMovementComponentNW::SetSagittalBalancingEnabled(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.WheeledVehicleMovementComponentNW.SetSagittalBalancingEnabled");

	UWheeledVehicleMovementComponentNW_SetSagittalBalancingEnabled_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxVehicle.WheeledVehicleMovementComponentNW.SetOversteerFixupEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UWheeledVehicleMovementComponentNW::SetOversteerFixupEnabled(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.WheeledVehicleMovementComponentNW.SetOversteerFixupEnabled");

	UWheeledVehicleMovementComponentNW_SetOversteerFixupEnabled_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxVehicle.WheeledVehicleMovementComponentNW.SetNoDriveSteerAngle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          SteerAngle                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)

void UWheeledVehicleMovementComponentNW::SetNoDriveSteerAngle(float SteerAngle, int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.WheeledVehicleMovementComponentNW.SetNoDriveSteerAngle");

	UWheeledVehicleMovementComponentNW_SetNoDriveSteerAngle_Params params;
	params.SteerAngle = SteerAngle;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxVehicle.WheeledVehicleMovementComponentNW.SetNoDriveDriveTorque
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          DriveTorque                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)

void UWheeledVehicleMovementComponentNW::SetNoDriveDriveTorque(float DriveTorque, int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.WheeledVehicleMovementComponentNW.SetNoDriveDriveTorque");

	UWheeledVehicleMovementComponentNW_SetNoDriveDriveTorque_Params params;
	params.DriveTorque = DriveTorque;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxVehicle.WheeledVehicleMovementComponentNW.SetNoDriveBrakeTorque
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          BrakeTorque                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            WheelIndex                     (Parm, ZeroConstructor, IsPlainOldData)

void UWheeledVehicleMovementComponentNW::SetNoDriveBrakeTorque(float BrakeTorque, int WheelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.WheeledVehicleMovementComponentNW.SetNoDriveBrakeTorque");

	UWheeledVehicleMovementComponentNW_SetNoDriveBrakeTorque_Params params;
	params.BrakeTorque = BrakeTorque;
	params.WheelIndex = WheelIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxVehicle.WheeledVehicleMovementComponentNW.SetLateralToLongitudinalVelocityShiftEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UWheeledVehicleMovementComponentNW::SetLateralToLongitudinalVelocityShiftEnabled(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.WheeledVehicleMovementComponentNW.SetLateralToLongitudinalVelocityShiftEnabled");

	UWheeledVehicleMovementComponentNW_SetLateralToLongitudinalVelocityShiftEnabled_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxVehicle.WheeledVehicleMovementComponentNW.SetCustomGravityModifier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewModifier                    (Parm, ZeroConstructor, IsPlainOldData)

void UWheeledVehicleMovementComponentNW::SetCustomGravityModifier(float NewModifier)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.WheeledVehicleMovementComponentNW.SetCustomGravityModifier");

	UWheeledVehicleMovementComponentNW_SetCustomGravityModifier_Params params;
	params.NewModifier = NewModifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxVehicle.WheeledVehicleMovementComponentNW.SetCoronalBalancingEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UWheeledVehicleMovementComponentNW::SetCoronalBalancingEnabled(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.WheeledVehicleMovementComponentNW.SetCoronalBalancingEnabled");

	UWheeledVehicleMovementComponentNW_SetCoronalBalancingEnabled_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxVehicle.WheeledVehicleMovementComponentNW.SetAerialRotationalDampingEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void UWheeledVehicleMovementComponentNW::SetAerialRotationalDampingEnabled(bool bEnable)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.WheeledVehicleMovementComponentNW.SetAerialRotationalDampingEnabled");

	UWheeledVehicleMovementComponentNW_SetAerialRotationalDampingEnabled_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxVehicle.WheeledVehicleMovementComponentNW.ResetCustomGravityModifer
// (Final, Native, Public, BlueprintCallable)

void UWheeledVehicleMovementComponentNW::ResetCustomGravityModifer()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.WheeledVehicleMovementComponentNW.ResetCustomGravityModifer");

	UWheeledVehicleMovementComponentNW_ResetCustomGravityModifer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxVehicle.WheeledVehicleMovementComponentNW.IsInAir
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWheeledVehicleMovementComponentNW::IsInAir()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.WheeledVehicleMovementComponentNW.IsInAir");

	UWheeledVehicleMovementComponentNW_IsInAir_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxVehicle.WheeledVehicleMovementComponentNW.GetSagittalBalancingEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWheeledVehicleMovementComponentNW::GetSagittalBalancingEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.WheeledVehicleMovementComponentNW.GetSagittalBalancingEnabled");

	UWheeledVehicleMovementComponentNW_GetSagittalBalancingEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxVehicle.WheeledVehicleMovementComponentNW.GetOversteerFixupEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWheeledVehicleMovementComponentNW::GetOversteerFixupEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.WheeledVehicleMovementComponentNW.GetOversteerFixupEnabled");

	UWheeledVehicleMovementComponentNW_GetOversteerFixupEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxVehicle.WheeledVehicleMovementComponentNW.GetNumWheelsInAir
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UWheeledVehicleMovementComponentNW::GetNumWheelsInAir()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.WheeledVehicleMovementComponentNW.GetNumWheelsInAir");

	UWheeledVehicleMovementComponentNW_GetNumWheelsInAir_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxVehicle.WheeledVehicleMovementComponentNW.GetLateralToLongitudinalVelocityShiftEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWheeledVehicleMovementComponentNW::GetLateralToLongitudinalVelocityShiftEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.WheeledVehicleMovementComponentNW.GetLateralToLongitudinalVelocityShiftEnabled");

	UWheeledVehicleMovementComponentNW_GetLateralToLongitudinalVelocityShiftEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxVehicle.WheeledVehicleMovementComponentNW.GetDirectionBasedThrottleAndSteer
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               StickInput                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UWheeledVehicleMovementComponentNW::GetDirectionBasedThrottleAndSteer(const struct FVector2D& StickInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.WheeledVehicleMovementComponentNW.GetDirectionBasedThrottleAndSteer");

	UWheeledVehicleMovementComponentNW_GetDirectionBasedThrottleAndSteer_Params params;
	params.StickInput = StickInput;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxVehicle.WheeledVehicleMovementComponentNW.GetCustomGravityModifier
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UWheeledVehicleMovementComponentNW::GetCustomGravityModifier()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.WheeledVehicleMovementComponentNW.GetCustomGravityModifier");

	UWheeledVehicleMovementComponentNW_GetCustomGravityModifier_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxVehicle.WheeledVehicleMovementComponentNW.GetCoronalBalancingEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWheeledVehicleMovementComponentNW::GetCoronalBalancingEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.WheeledVehicleMovementComponentNW.GetCoronalBalancingEnabled");

	UWheeledVehicleMovementComponentNW_GetCoronalBalancingEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxVehicle.WheeledVehicleMovementComponentNW.GetCameraRelativeThrottleAndSteer
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               StickInput                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float                          WantedDirAngle                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// EVehicleCameraRelativeDrivingMode Mode                           (Parm, ZeroConstructor, IsPlainOldData)
// class UCurveFloat*             AngleToSteeringCurve           (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UWheeledVehicleMovementComponentNW::GetCameraRelativeThrottleAndSteer(const struct FVector2D& StickInput, EVehicleCameraRelativeDrivingMode Mode, class UCurveFloat* AngleToSteeringCurve, float* WantedDirAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.WheeledVehicleMovementComponentNW.GetCameraRelativeThrottleAndSteer");

	UWheeledVehicleMovementComponentNW_GetCameraRelativeThrottleAndSteer_Params params;
	params.StickInput = StickInput;
	params.Mode = Mode;
	params.AngleToSteeringCurve = AngleToSteeringCurve;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WantedDirAngle != nullptr)
		*WantedDirAngle = params.WantedDirAngle;

	return params.ReturnValue;
}


// Function GbxVehicle.WheeledVehicleMovementComponentNW.GetAerialRotationalDampingEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWheeledVehicleMovementComponentNW::GetAerialRotationalDampingEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.WheeledVehicleMovementComponentNW.GetAerialRotationalDampingEnabled");

	UWheeledVehicleMovementComponentNW_GetAerialRotationalDampingEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxVehicle.WheeledVehicleMovementComponentNW.ApplyAngularVelocityInfluence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxInfluence                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          Pitch                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Roll                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (Parm, ZeroConstructor, IsPlainOldData)

void UWheeledVehicleMovementComponentNW::ApplyAngularVelocityInfluence(float DeltaTime, float MaxInfluence, float Pitch, float Roll, float Yaw)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxVehicle.WheeledVehicleMovementComponentNW.ApplyAngularVelocityInfluence");

	UWheeledVehicleMovementComponentNW_ApplyAngularVelocityInfluence_Params params;
	params.DeltaTime = DeltaTime;
	params.MaxInfluence = MaxInfluence;
	params.Pitch = Pitch;
	params.Roll = Roll;
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
