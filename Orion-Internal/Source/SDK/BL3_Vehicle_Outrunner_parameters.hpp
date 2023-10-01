#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Vehicle_Outrunner_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Vehicle_Outrunner.Vehicle_Outrunner_C.VehicleTutorial
struct AVehicle_Outrunner_C_VehicleTutorial_Params
{
	class AController*                                 NewController;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vehicle_Outrunner.Vehicle_Outrunner_C.UserConstructionScript
struct AVehicle_Outrunner_C_UserConstructionScript_Params
{
};

// Function Vehicle_Outrunner.Vehicle_Outrunner_C.Intensity Ramp__FinishedFunc
struct AVehicle_Outrunner_C_Intensity_Ramp__FinishedFunc_Params
{
};

// Function Vehicle_Outrunner.Vehicle_Outrunner_C.Intensity Ramp__UpdateFunc
struct AVehicle_Outrunner_C_Intensity_Ramp__UpdateFunc_Params
{
};

// Function Vehicle_Outrunner.Vehicle_Outrunner_C.Intensity Ramp Down__FinishedFunc
struct AVehicle_Outrunner_C_Intensity_Ramp_Down__FinishedFunc_Params
{
};

// Function Vehicle_Outrunner.Vehicle_Outrunner_C.Intensity Ramp Down__UpdateFunc
struct AVehicle_Outrunner_C_Intensity_Ramp_Down__UpdateFunc_Params
{
};

// Function Vehicle_Outrunner.Vehicle_Outrunner_C.BndEvt__VehicleEffectsComponent_K2Node_ComponentBoundEvent_40_OnEngineStart__DelegateSignature_Vehicle_Technical
struct AVehicle_Outrunner_C_BndEvt__VehicleEffectsComponent_K2Node_ComponentBoundEvent_40_OnEngineStart__DelegateSignature_Vehicle_Technical_Params
{
};

// Function Vehicle_Outrunner.Vehicle_Outrunner_C.BndEvt__VehicleEffectsComponent_K2Node_ComponentBoundEvent_50_OnEngineStart__DelegateSignature_Vehicle_Technical
struct AVehicle_Outrunner_C_BndEvt__VehicleEffectsComponent_K2Node_ComponentBoundEvent_50_OnEngineStart__DelegateSignature_Vehicle_Technical_Params
{
};

// Function Vehicle_Outrunner.Vehicle_Outrunner_C.BndEvt__VehicleEffectsComponent_K2Node_ComponentBoundEvent_0_OnRestartEffectsAfterTravel__DelegateSignature_Vehicle_Outrunner
struct AVehicle_Outrunner_C_BndEvt__VehicleEffectsComponent_K2Node_ComponentBoundEvent_0_OnRestartEffectsAfterTravel__DelegateSignature_Vehicle_Outrunner_Params
{
};

// Function Vehicle_Outrunner.Vehicle_Outrunner_C.BndEvt__VehicleEffectsComponent_K2Node_ComponentBoundEvent_0_OnImpactDetectedSignature__DelegateSignature_Vehicle_Technical
struct AVehicle_Outrunner_C_BndEvt__VehicleEffectsComponent_K2Node_ComponentBoundEvent_0_OnImpactDetectedSignature__DelegateSignature_Vehicle_Technical_Params
{
	class AActor*                                      HitActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	EVehicleImpactForce                                ImpactForce;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vehicle_Outrunner.Vehicle_Outrunner_C.BndEvt__VehicleEffectsComponent_K2Node_ComponentBoundEvent_1_OnGrindingStopped__DelegateSignature_Vehicle_Technical
struct AVehicle_Outrunner_C_BndEvt__VehicleEffectsComponent_K2Node_ComponentBoundEvent_1_OnGrindingStopped__DelegateSignature_Vehicle_Technical_Params
{
};

// Function Vehicle_Outrunner.Vehicle_Outrunner_C.Reset Grinding
struct AVehicle_Outrunner_C_Reset_Grinding_Params
{
};

// Function Vehicle_Outrunner.Vehicle_Outrunner_C.BndEvt__DamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_Vehicle_Technical
struct AVehicle_Outrunner_C_BndEvt__DamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_Vehicle_Technical_Params
{
	class AActor*                                      DamageReceiver;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vehicle_Outrunner.Vehicle_Outrunner_C.BndEvt__WheeledVehicleMovementComponentNW_K2Node_ComponentBoundEvent_0_OnBecameAirborn__DelegateSignature_Vehicle_Technical
struct AVehicle_Outrunner_C_BndEvt__WheeledVehicleMovementComponentNW_K2Node_ComponentBoundEvent_0_OnBecameAirborn__DelegateSignature_Vehicle_Technical_Params
{
};

// Function Vehicle_Outrunner.Vehicle_Outrunner_C.BndEvt__WheeledVehicleMovementComponentNW_K2Node_ComponentBoundEvent_1_OnLanded__DelegateSignature_Vehicle_Technical
struct AVehicle_Outrunner_C_BndEvt__WheeledVehicleMovementComponentNW_K2Node_ComponentBoundEvent_1_OnLanded__DelegateSignature_Vehicle_Technical_Params
{
	float                                              TimeSpentInAir;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LandAngle;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumWheelsOnGround;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllWheelsLanded;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vehicle_Outrunner.Vehicle_Outrunner_C.Try Airborn Callout
struct AVehicle_Outrunner_C_Try_Airborn_Callout_Params
{
};

// Function Vehicle_Outrunner.Vehicle_Outrunner_C.BndEvt__CollisionDamage_K2Node_ComponentBoundEvent_0_ActorComponentActorHitSignature__DelegateSignature_Vehicle_Technical
struct AVehicle_Outrunner_C_BndEvt__CollisionDamage_K2Node_ComponentBoundEvent_0_ActorComponentActorHitSignature__DelegateSignature_Vehicle_Technical_Params
{
	class UCollisionDamageComponent*                   Component;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      ActorHit;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ImpactForce;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Vehicle_Outrunner.Vehicle_Outrunner_C.BndEvt__DamageComponent_K2Node_ComponentBoundEvent_3_HealthTypeEvent__DelegateSignature_Vehicle_Technical
struct AVehicle_Outrunner_C_BndEvt__DamageComponent_K2Node_ComponentBoundEvent_3_HealthTypeEvent__DelegateSignature_Vehicle_Technical_Params
{
	struct FHealthType                                 HealthType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vehicle_Outrunner.Vehicle_Outrunner_C.BndEvt__DamageComponent_K2Node_ComponentBoundEvent_4_HealthTypeEvent__DelegateSignature_Vehicle_Technical
struct AVehicle_Outrunner_C_BndEvt__DamageComponent_K2Node_ComponentBoundEvent_4_HealthTypeEvent__DelegateSignature_Vehicle_Technical_Params
{
	struct FHealthType                                 HealthType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vehicle_Outrunner.Vehicle_Outrunner_C.ReceiveOnPlayerHijacksVehicle
struct AVehicle_Outrunner_C_ReceiveOnPlayerHijacksVehicle_Params
{
	class UVehicleSeatComponent**                      Seat;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AOakCharacter**                              Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vehicle_Outrunner.Vehicle_Outrunner_C.BndEvt__DamageCauserComponent_K2Node_ComponentBoundEvent_1_CauseDeathDelegate__DelegateSignature_BPChar_Player
struct AVehicle_Outrunner_C_BndEvt__DamageCauserComponent_K2Node_ComponentBoundEvent_1_CauseDeathDelegate__DelegateSignature_BPChar_Player_Params
{
	class UDamageComponent*                            Damaged;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCausedDeathDetails                         Details;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Vehicle_Outrunner.Vehicle_Outrunner_C.Multikill Reset
struct AVehicle_Outrunner_C_Multikill_Reset_Params
{
};

// Function Vehicle_Outrunner.Vehicle_Outrunner_C.BndEvt__VehicleSeat_LeapFront_K2Node_ComponentBoundEvent_6_PawnSlotAttachDelegate__DelegateSignature_Vehicle_Outrunner
struct AVehicle_Outrunner_C_BndEvt__VehicleSeat_LeapFront_K2Node_ComponentBoundEvent_6_PawnSlotAttachDelegate__DelegateSignature_Vehicle_Outrunner_Params
{
	class APawn*                                       Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vehicle_Outrunner.Vehicle_Outrunner_C.BndEvt__VehicleSeat_LeapBack_K2Node_ComponentBoundEvent_8_PawnSlotAttachDelegate__DelegateSignature_Vehicle_Outrunner
struct AVehicle_Outrunner_C_BndEvt__VehicleSeat_LeapBack_K2Node_ComponentBoundEvent_8_PawnSlotAttachDelegate__DelegateSignature_Vehicle_Outrunner_Params
{
	class APawn*                                       Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vehicle_Outrunner.Vehicle_Outrunner_C.Bind Dialog Events
struct AVehicle_Outrunner_C_Bind_Dialog_Events_Params
{
};

// Function Vehicle_Outrunner.Vehicle_Outrunner_C.OnLeapDetachReaction
struct AVehicle_Outrunner_C_OnLeapDetachReaction_Params
{
	class APawn*                                       Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 Controller;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vehicle_Outrunner.Vehicle_Outrunner_C.EnemyHit
struct AVehicle_Outrunner_C_EnemyHit_Params
{
};

// Function Vehicle_Outrunner.Vehicle_Outrunner_C.BndEvt__FlipUsable_K2Node_ComponentBoundEvent_4_UsableUsedOnChannelSignature__DelegateSignature_Vehicle_Outrunner
struct AVehicle_Outrunner_C_BndEvt__FlipUsable_K2Node_ComponentBoundEvent_4_UsableUsedOnChannelSignature__DelegateSignature_Vehicle_Outrunner_Params
{
	class AController*                                 UserController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         UsedComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function Vehicle_Outrunner.Vehicle_Outrunner_C.ReceiveBeginPlay
struct AVehicle_Outrunner_C_ReceiveBeginPlay_Params
{
};

// Function Vehicle_Outrunner.Vehicle_Outrunner_C.K2_InitializeSeats
struct AVehicle_Outrunner_C_K2_InitializeSeats_Params
{
};

// Function Vehicle_Outrunner.Vehicle_Outrunner_C.ReceivePossessed
struct AVehicle_Outrunner_C_ReceivePossessed_Params
{
	class AController**                                NewController;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vehicle_Outrunner.Vehicle_Outrunner_C.ReceiveUnpossessed
struct AVehicle_Outrunner_C_ReceiveUnpossessed_Params
{
	class AController**                                OldController;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vehicle_Outrunner.Vehicle_Outrunner_C.Landing Feedback
struct AVehicle_Outrunner_C_Landing_Feedback_Params
{
};

// Function Vehicle_Outrunner.Vehicle_Outrunner_C.BndEvt__DamageComponent_K2Node_ComponentBoundEvent_0_PlayerMeleeHitDelegate__DelegateSignature_Vehicle_Outrunner
struct AVehicle_Outrunner_C_BndEvt__DamageComponent_K2Node_ComponentBoundEvent_0_PlayerMeleeHitDelegate__DelegateSignature_Vehicle_Outrunner_Params
{
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Vehicle_Outrunner.Vehicle_Outrunner_C.ExecuteUbergraph_Vehicle_Outrunner
struct AVehicle_Outrunner_C_ExecuteUbergraph_Vehicle_Outrunner_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
