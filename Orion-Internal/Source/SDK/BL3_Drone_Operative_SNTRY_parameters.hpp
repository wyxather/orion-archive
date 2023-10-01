#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Drone_Operative_SNTRY_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.HasValidDroneTarget
struct ADrone_Operative_SNTRY_C_HasValidDroneTarget_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.ConfigureDigistruct
struct ADrone_Operative_SNTRY_C_ConfigureDigistruct_Params
{
};

// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.ConfigureCryoEmitter
struct ADrone_Operative_SNTRY_C_ConfigureCryoEmitter_Params
{
};

// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.OnSimCalledShotRelease
struct ADrone_Operative_SNTRY_C_OnSimCalledShotRelease_Params
{
};

// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.RegisterDelegates
struct ADrone_Operative_SNTRY_C_RegisterDelegates_Params
{
};

// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.DispatchCalledShotRestorationParticles
struct ADrone_Operative_SNTRY_C_DispatchCalledShotRestorationParticles_Params
{
	class AActor*                                      KilledTarget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.RefundDuration
struct ADrone_Operative_SNTRY_C_RefundDuration_Params
{
	float                                              Val;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.AdvanceCalledShotCount
struct ADrone_Operative_SNTRY_C_AdvanceCalledShotCount_Params
{
	bool                                               bIsValid;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.SetupCalledShot
struct ADrone_Operative_SNTRY_C_SetupCalledShot_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.ApplyShieldDamageRefund
struct ADrone_Operative_SNTRY_C_ApplyShieldDamageRefund_Params
{
	class AActor**                                     CurrentTarget;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    LastDamageLocation;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             TotalRefund;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.CreateStaticFieldBeamToTarget
struct ADrone_Operative_SNTRY_C_CreateStaticFieldBeamToTarget_Params
{
	class AActor**                                     TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BeamName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.CreateBadDoseBeamToTarget
struct ADrone_Operative_SNTRY_C_CreateBadDoseBeamToTarget_Params
{
	class AActor**                                     TargetActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      BeamName;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.SetupStaticField
struct ADrone_Operative_SNTRY_C_SetupStaticField_Params
{
};

// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.SetupCryoBullets
struct ADrone_Operative_SNTRY_C_SetupCryoBullets_Params
{
};

// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.CauseCollisionDamageToEnemy
struct ADrone_Operative_SNTRY_C_CauseCollisionDamageToEnemy_Params
{
	class AActor*                                      Enemy;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.GetMoveDelayForTarget
struct ADrone_Operative_SNTRY_C_GetMoveDelayForTarget_Params
{
	float                                              res;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.FindNewTargetAutonomous
struct ADrone_Operative_SNTRY_C_FindNewTargetAutonomous_Params
{
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.SetExhaustFXEnabled
struct ADrone_Operative_SNTRY_C_SetExhaustFXEnabled_Params
{
	bool                                               bIsEnabled;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.DropPayload
struct ADrone_Operative_SNTRY_C_DropPayload_Params
{
};

// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.UserConstructionScript
struct ADrone_Operative_SNTRY_C_UserConstructionScript_Params
{
};

// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.DigistructOut__FinishedFunc
struct ADrone_Operative_SNTRY_C_DigistructOut__FinishedFunc_Params
{
};

// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.DigistructOut__UpdateFunc
struct ADrone_Operative_SNTRY_C_DigistructOut__UpdateFunc_Params
{
};

// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.DronePhase__FinishedFunc
struct ADrone_Operative_SNTRY_C_DronePhase__FinishedFunc_Params
{
};

// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.DronePhase__UpdateFunc
struct ADrone_Operative_SNTRY_C_DronePhase__UpdateFunc_Params
{
};

// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.BndEvt__DroneMovement_K2Node_ComponentBoundEvent_0_SimpleDroneMovementComponentSignature__DelegateSignature_Drone_Operative_SNTRY
struct ADrone_Operative_SNTRY_C_BndEvt__DroneMovement_K2Node_ComponentBoundEvent_0_SimpleDroneMovementComponentSignature__DelegateSignature_Drone_Operative_SNTRY_Params
{
	bool                                               bIsBoosting;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.StartDigistructOut
struct ADrone_Operative_SNTRY_C_StartDigistructOut_Params
{
};

// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.ApplyCollisionDamageToTarget
struct ADrone_Operative_SNTRY_C_ApplyCollisionDamageToTarget_Params
{
	class AActor**                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.ReceiveBeginPlay
struct ADrone_Operative_SNTRY_C_ReceiveBeginPlay_Params
{
};

// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.SetupMods
struct ADrone_Operative_SNTRY_C_SetupMods_Params
{
};

// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.OnShutdownGracefully
struct ADrone_Operative_SNTRY_C_OnShutdownGracefully_Params
{
};

// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.DoGracefulShutdown
struct ADrone_Operative_SNTRY_C_DoGracefulShutdown_Params
{
};

// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.DoDroneDelivery
struct ADrone_Operative_SNTRY_C_DoDroneDelivery_Params
{
};

// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.OnCalledShotActivated
struct ADrone_Operative_SNTRY_C_OnCalledShotActivated_Params
{
	struct FVector*                                    Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.DoNextCalledShot
struct ADrone_Operative_SNTRY_C_DoNextCalledShot_Params
{
};

// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.OnCalledShotKill
struct ADrone_Operative_SNTRY_C_OnCalledShotKill_Params
{
	class AActor**                                     KilledActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.SetDronePhasing
struct ADrone_Operative_SNTRY_C_SetDronePhasing_Params
{
	bool*                                              bPhasing;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.HaltDronePhase
struct ADrone_Operative_SNTRY_C_HaltDronePhase_Params
{
};

// Function Drone_Operative_SNTRY.Drone_Operative_SNTRY_C.ExecuteUbergraph_Drone_Operative_SNTRY
struct ADrone_Operative_SNTRY_C_ExecuteUbergraph_Drone_Operative_SNTRY_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
