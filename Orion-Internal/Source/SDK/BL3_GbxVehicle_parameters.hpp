#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxVehicle_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GbxVehicle.TurretMovementComponent.UpdateTurretControlDependency
struct UTurretMovementComponent_UpdateTurretControlDependency_Params
{
};

// Function GbxVehicle.TurretMovementComponent.UpdateParentInitialOffset
struct UTurretMovementComponent_UpdateParentInitialOffset_Params
{
};

// Function GbxVehicle.TurretMovementComponent.SetRotationInputs
struct UTurretMovementComponent_SetRotationInputs_Params
{
	float                                              XValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              YValue;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxVehicle.TurretMovementComponent.ServerSetRotationInputs
struct UTurretMovementComponent_ServerSetRotationInputs_Params
{
	struct FVector2D                                   InRotationInputs;                                         // (Parm, IsPlainOldData)
};

// Function GbxVehicle.Vehicle.SetTeam
struct AVehicle_SetTeam_Params
{
	class UTeam*                                       Team;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxVehicle.Vehicle.RemoveVehiclePart
struct AVehicle_RemoveVehiclePart_Params
{
	class UVehiclePartData*                            CharacterPart;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxVehicle.Vehicle.OnRep_VehicleParts
struct AVehicle_OnRep_VehicleParts_Params
{
};

// Function GbxVehicle.Vehicle.IsPowerSliding
struct AVehicle_IsPowerSliding_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxVehicle.Vehicle.IsInAir
struct AVehicle_IsInAir_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxVehicle.Vehicle.GetTeamComponent
struct AVehicle_GetTeamComponent_Params
{
	class UTeamComponent*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxVehicle.Vehicle.GetTeam
struct AVehicle_GetTeam_Params
{
	class UTeam*                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxVehicle.Vehicle.GetTargetingComponent
struct AVehicle_GetTargetingComponent_Params
{
	class UTargetingComponent*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxVehicle.Vehicle.GetTargetableComponent
struct AVehicle_GetTargetableComponent_Params
{
	class UTargetableComponent*                        ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function GbxVehicle.Vehicle.GetNumWheelsInAir
struct AVehicle_GetNumWheelsInAir_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxVehicle.Vehicle.GetEquipedParts
struct AVehicle_GetEquipedParts_Params
{
	TArray<class UVehiclePartData*>                    ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)
};

// Function GbxVehicle.Vehicle.AddVehiclePart
struct AVehicle_AddVehiclePart_Params
{
	class UVehiclePartData*                            CharacterPart;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction GbxVehicle.VehicleBoostComponent.VehicleBoostEvent__DelegateSignature
struct UVehicleBoostComponent_VehicleBoostEvent__DelegateSignature_Params
{
};

// Function GbxVehicle.VehicleBoostComponent.StopBoost
struct UVehicleBoostComponent_StopBoost_Params
{
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxVehicle.VehicleBoostComponent.StartBoost
struct UVehicleBoostComponent_StartBoost_Params
{
};

// Function GbxVehicle.VehicleBoostComponent.ResumeBoost
struct UVehicleBoostComponent_ResumeBoost_Params
{
};

// Function GbxVehicle.VehicleBoostComponent.RegisterBoostRegenerateEvent
struct UVehicleBoostComponent_RegisterBoostRegenerateEvent_Params
{
	float                                              BoostTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             BoostValueReachedDelegate;                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function GbxVehicle.VehicleBoostComponent.PauseBoost
struct UVehicleBoostComponent_PauseBoost_Params
{
};

// Function GbxVehicle.VehicleBoostComponent.OnRep_IsBoosting
struct UVehicleBoostComponent_OnRep_IsBoosting_Params
{
	bool                                               bWasBoosting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxVehicle.VehicleBoostComponent.K2_BoostStopped
struct UVehicleBoostComponent_K2_BoostStopped_Params
{
};

// Function GbxVehicle.VehicleBoostComponent.K2_BoostStarted
struct UVehicleBoostComponent_K2_BoostStarted_Params
{
};

// Function GbxVehicle.VehicleBoostComponent.GetRelativeBoostSpeed
struct UVehicleBoostComponent_GetRelativeBoostSpeed_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxVehicle.VehicleBoostComponent.GetMaxBoostPoolValue
struct UVehicleBoostComponent_GetMaxBoostPoolValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxVehicle.VehicleBoostComponent.GetCurrentBoostPoolValue
struct UVehicleBoostComponent_GetCurrentBoostPoolValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxVehicle.VehicleBoostComponent.GetCurrentBoostChargesCount
struct UVehicleBoostComponent_GetCurrentBoostChargesCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxVehicle.VehicleBoostComponent.GetBoostEnabled
struct UVehicleBoostComponent_GetBoostEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxVehicle.VehicleBoostComponent.GetBoostDirection
struct UVehicleBoostComponent_GetBoostDirection_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxVehicle.VehicleDigiThrustComponent.SetTeleportDirection
struct UVehicleDigiThrustComponent_SetTeleportDirection_Params
{
	struct FVector                                     WantedDirection;                                          // (ConstParm, Parm, ReferenceParm, IsPlainOldData)
};

// Function GbxVehicle.VehicleDigiThrustComponent.RequestTeleport
struct UVehicleDigiThrustComponent_RequestTeleport_Params
{
};

// Function GbxVehicle.VehicleDigiThrustComponent.NetMulticast_OnDigiThrustStarted
struct UVehicleDigiThrustComponent_NetMulticast_OnDigiThrustStarted_Params
{
};

// Function GbxVehicle.VehicleDigiThrustComponent.NetMulticast_OnDigiThrustEndFinished
struct UVehicleDigiThrustComponent_NetMulticast_OnDigiThrustEndFinished_Params
{
};

// Function GbxVehicle.VehicleDigiThrustComponent.NetMulticast_OnDigiThrustEnd
struct UVehicleDigiThrustComponent_NetMulticast_OnDigiThrustEnd_Params
{
};

// Function GbxVehicle.VehicleDigiThrustComponent.NetMulticast_OnDigiThrustCollision
struct UVehicleDigiThrustComponent_NetMulticast_OnDigiThrustCollision_Params
{
};

// Function GbxVehicle.VehicleDigiThrustComponent.IsTeleporting
struct UVehicleDigiThrustComponent_IsTeleporting_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxVehicle.VehicleDigiThrustComponent.GetMaxBoostPoolValue
struct UVehicleDigiThrustComponent_GetMaxBoostPoolValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxVehicle.VehicleDigiThrustComponent.GetCurrentBoostPoolValue
struct UVehicleDigiThrustComponent_GetCurrentBoostPoolValue_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction GbxVehicle.VehicleDigiThrustComponent.DigiThrustEvent__DelegateSignature
struct UVehicleDigiThrustComponent_DigiThrustEvent__DelegateSignature_Params
{
};

// Function GbxVehicle.VehicleHitchAttachPtComponent.IsAttached
struct UVehicleHitchAttachPtComponent_IsAttached_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction GbxVehicle.VehicleHitchAttachPtComponent.HitchAttachAction__DelegateSignature
struct UVehicleHitchAttachPtComponent_HitchAttachAction__DelegateSignature_Params
{
	class AVehicle*                                    FromVehicle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxVehicle.VehicleHitchComponent.TeleportTrailerAndAttachToHitch
struct UVehicleHitchComponent_TeleportTrailerAndAttachToHitch_Params
{
	class AActor*                                      TrailerToAttach;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// DelegateFunction GbxVehicle.VehicleHitchComponent.HitchAttachAction__DelegateSignature
struct UVehicleHitchComponent_HitchAttachAction__DelegateSignature_Params
{
	class AVehicle*                                    FromVehicle;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxVehicle.VehicleHitchComponent.DetachFromHitch
struct UVehicleHitchComponent_DetachFromHitch_Params
{
};

// Function GbxVehicle.VehicleHitchComponent.AttachToHitch
struct UVehicleHitchComponent_AttachToHitch_Params
{
	class UVehicleHitchAttachPtComponent*              AttachPtToAttach;                                         // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// DelegateFunction GbxVehicle.VehicleHoverComponent.VehicleHoverEvent__DelegateSignature
struct UVehicleHoverComponent_VehicleHoverEvent__DelegateSignature_Params
{
};

// Function GbxVehicle.VehicleHoverComponent.ServerUpdateState
struct UVehicleHoverComponent_ServerUpdateState_Params
{
	bool                                               InbIsEnabled;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InStrafeInput;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              InForwardInput;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    InTargetRotation;                                         // (Parm, IsPlainOldData)
};

// Function GbxVehicle.VehicleHoverComponent.IsHoverEnabled
struct UVehicleHoverComponent_IsHoverEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxVehicle.VehicleHoverComponent.EnableHover
struct UVehicleHoverComponent_EnableHover_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxVehicle.VehicleMovementInterface.GetDirectionBasedThrottleAndSteer
struct UVehicleMovementInterface_GetDirectionBasedThrottleAndSteer_Params
{
	struct FVector2D                                   StickInput;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxVehicle.VehiclePartActor.WeldActorToVehicle
struct AVehiclePartActor_WeldActorToVehicle_Params
{
	class AActor*                                      SpawnedPart;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxVehicle.VehiclePartActor.ReceiveParentVehicleBeginPlay
struct AVehiclePartActor_ReceiveParentVehicleBeginPlay_Params
{
};

// Function GbxVehicle.VehiclePartActor.OnRep_ParentSocket
struct AVehiclePartActor_OnRep_ParentSocket_Params
{
};

// Function GbxVehicle.VehiclePartActor.OnRep_OwningVehicle
struct AVehiclePartActor_OnRep_OwningVehicle_Params
{
};

// Function GbxVehicle.VehiclePowerSlideComponent.SetPowerSlideEnabled
struct UVehiclePowerSlideComponent_SetPowerSlideEnabled_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxVehicle.VehiclePowerSlideComponent.ResumePowerSlide
struct UVehiclePowerSlideComponent_ResumePowerSlide_Params
{
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxVehicle.VehiclePowerSlideComponent.PausePowerSlide
struct UVehiclePowerSlideComponent_PausePowerSlide_Params
{
	struct FName                                       Reason;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxVehicle.VehiclePowerSlideComponent.OnRep_IsPowerSliding
struct UVehiclePowerSlideComponent_OnRep_IsPowerSliding_Params
{
	bool                                               bWasPowerSliding;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxVehicle.VehiclePowerSlideComponent.IsPowerSlidePaused
struct UVehiclePowerSlideComponent_IsPowerSlidePaused_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxVehicle.VehiclePowerSlideComponent.IsInPowerSlideBoost
struct UVehiclePowerSlideComponent_IsInPowerSlideBoost_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxVehicle.VehiclePowerSlideComponent.GetPowerSlideEnabled
struct UVehiclePowerSlideComponent_GetPowerSlideEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxVehicle.VehiclePowerSlideComponent.GetCurrentBoostRatio
struct UVehiclePowerSlideComponent_GetCurrentBoostRatio_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxVehicle.VehiclePowerSlideComponent.CancelPowerSlide
struct UVehiclePowerSlideComponent_CancelPowerSlide_Params
{
};

// Function GbxVehicle.WheeledVehicleMovementComponentNW.SetToRestState
struct UWheeledVehicleMovementComponentNW_SetToRestState_Params
{
};

// Function GbxVehicle.WheeledVehicleMovementComponentNW.SetSteerAngle
struct UWheeledVehicleMovementComponentNW_SetSteerAngle_Params
{
	float                                              SteerAngle;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxVehicle.WheeledVehicleMovementComponentNW.SetSagittalBalancingEnabled
struct UWheeledVehicleMovementComponentNW_SetSagittalBalancingEnabled_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxVehicle.WheeledVehicleMovementComponentNW.SetOversteerFixupEnabled
struct UWheeledVehicleMovementComponentNW_SetOversteerFixupEnabled_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxVehicle.WheeledVehicleMovementComponentNW.SetNoDriveSteerAngle
struct UWheeledVehicleMovementComponentNW_SetNoDriveSteerAngle_Params
{
	float                                              SteerAngle;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxVehicle.WheeledVehicleMovementComponentNW.SetNoDriveDriveTorque
struct UWheeledVehicleMovementComponentNW_SetNoDriveDriveTorque_Params
{
	float                                              DriveTorque;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxVehicle.WheeledVehicleMovementComponentNW.SetNoDriveBrakeTorque
struct UWheeledVehicleMovementComponentNW_SetNoDriveBrakeTorque_Params
{
	float                                              BrakeTorque;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                WheelIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxVehicle.WheeledVehicleMovementComponentNW.SetLateralToLongitudinalVelocityShiftEnabled
struct UWheeledVehicleMovementComponentNW_SetLateralToLongitudinalVelocityShiftEnabled_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxVehicle.WheeledVehicleMovementComponentNW.SetCustomGravityModifier
struct UWheeledVehicleMovementComponentNW_SetCustomGravityModifier_Params
{
	float                                              NewModifier;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxVehicle.WheeledVehicleMovementComponentNW.SetCoronalBalancingEnabled
struct UWheeledVehicleMovementComponentNW_SetCoronalBalancingEnabled_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxVehicle.WheeledVehicleMovementComponentNW.SetAerialRotationalDampingEnabled
struct UWheeledVehicleMovementComponentNW_SetAerialRotationalDampingEnabled_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function GbxVehicle.WheeledVehicleMovementComponentNW.ResetCustomGravityModifer
struct UWheeledVehicleMovementComponentNW_ResetCustomGravityModifer_Params
{
};

// Function GbxVehicle.WheeledVehicleMovementComponentNW.IsInAir
struct UWheeledVehicleMovementComponentNW_IsInAir_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxVehicle.WheeledVehicleMovementComponentNW.GetSagittalBalancingEnabled
struct UWheeledVehicleMovementComponentNW_GetSagittalBalancingEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxVehicle.WheeledVehicleMovementComponentNW.GetOversteerFixupEnabled
struct UWheeledVehicleMovementComponentNW_GetOversteerFixupEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxVehicle.WheeledVehicleMovementComponentNW.GetNumWheelsInAir
struct UWheeledVehicleMovementComponentNW_GetNumWheelsInAir_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxVehicle.WheeledVehicleMovementComponentNW.GetLateralToLongitudinalVelocityShiftEnabled
struct UWheeledVehicleMovementComponentNW_GetLateralToLongitudinalVelocityShiftEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxVehicle.WheeledVehicleMovementComponentNW.GetDirectionBasedThrottleAndSteer
struct UWheeledVehicleMovementComponentNW_GetDirectionBasedThrottleAndSteer_Params
{
	struct FVector2D                                   StickInput;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxVehicle.WheeledVehicleMovementComponentNW.GetCustomGravityModifier
struct UWheeledVehicleMovementComponentNW_GetCustomGravityModifier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxVehicle.WheeledVehicleMovementComponentNW.GetCoronalBalancingEnabled
struct UWheeledVehicleMovementComponentNW_GetCoronalBalancingEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxVehicle.WheeledVehicleMovementComponentNW.GetCameraRelativeThrottleAndSteer
struct UWheeledVehicleMovementComponentNW_GetCameraRelativeThrottleAndSteer_Params
{
	struct FVector2D                                   StickInput;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float                                              WantedDirAngle;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	EVehicleCameraRelativeDrivingMode                  Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 AngleToSteeringCurve;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function GbxVehicle.WheeledVehicleMovementComponentNW.GetAerialRotationalDampingEnabled
struct UWheeledVehicleMovementComponentNW_GetAerialRotationalDampingEnabled_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function GbxVehicle.WheeledVehicleMovementComponentNW.ApplyAngularVelocityInfluence
struct UWheeledVehicleMovementComponentNW_ApplyAngularVelocityInfluence_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              MaxInfluence;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Pitch;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Roll;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Yaw;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
