#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Vehicle_Outrunner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Vehicle_Outrunner.Vehicle_Outrunner_C
// 0x0134 (0x150C - 0x13D8)
class AVehicle_Outrunner_C : public ABP_OakVehicle_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x13D8(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Veh_Outrunner_UCXQ;                                       // 0x13E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVehicleSeatComponent*                       VehicleSeat_LeapBack;                                     // 0x13E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVehicleSeatComponent*                       VehicleSeat_LeapFront;                                    // 0x13F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDodgeTriggerZoneComponent*                  DodgeTriggerZone;                                         // 0x13F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakVehicleBoostComponent*                   OakVehicleBoost;                                          // 0x1400(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        Outrun_Front_PointLight;                                  // 0x1408(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         Outrun_Front_SpotLight;                                   // 0x1410(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Outrunner_Tire_DuneBuggy;                              // 0x1418(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakHitRegionComponent*                      HitRegion;                                                // 0x1420(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxNavMeshPainterComponent*                 GbxNavMeshPainter;                                        // 0x1428(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               NavPainterBox;                                            // 0x1430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_R_R_Wheel;                                             // 0x1438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_R_L_Wheel;                                             // 0x1440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_F_R_Wheel;                                             // 0x1448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_F_L_Wheel;                                             // 0x1450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_OakAttributeComponent_C*                 BP_OakAttributeComponent;                                 // 0x1458(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCollisionDamageComponent*                   CollisionDamage;                                          // 0x1460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWwiseAudioComponent*                        DamageAudioComponent;                                     // 0x1468(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVehicleTrailComponent*                      VehicleTrail;                                             // 0x1470(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxActionComponent*                         GbxAction;                                                // 0x1478(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWwiseAudioComponent*                        ExhaustAudioComponent;                                    // 0x1480(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWwiseAudioComponent*                        EngineAudioComponent;                                     // 0x1488(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTurretMovementComponent*                    TurretMovement;                                           // 0x1490(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UActiveWeaponsComponent*                     ActiveWeapons;                                            // 0x1498(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVehicleAirControlComponent*                 VehicleAirControl;                                        // 0x14A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUsableComponent*                            FlipUsable;                                               // 0x14A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWheeledVehicleMovementComponentNW*          WheeledVehicleMovementComponentNW;                        // 0x14B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Interact_Driver;                                          // 0x14B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Intensity_Ramp_Down_Intensity_Scale_1C84B5E64A45933F086DC3BDCFC28AF2;// 0x14C0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Intensity_Ramp_Down__Direction_1C84B5E64A45933F086DC3BDCFC28AF2;// 0x14C4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x14C5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Intensity_Ramp_Down;                                      // 0x14C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Intensity_Ramp_Intensity_Scale_C583FDA440CEED9EF120A997C04D1F82;// 0x14D0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Intensity_Ramp__Direction_C583FDA440CEED9EF120A997C04D1F82;// 0x14D4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x14D5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Intensity_Ramp;                                           // 0x14D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Spot_Intensity;                                           // 0x14E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Point_Intensity;                                          // 0x14E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeSpentInAir;                                           // 0x14E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Multikill_Count;                                          // 0x14EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDamageComponent*                            DamagedReceiver;                                          // 0x14F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class APawn*                                       DamageInstigator;                                         // 0x14F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ImpactForce;                                              // 0x1500(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Vehicle_Outrunner.Vehicle_Outrunner_C");
		return ptr;
	}


	void VehicleTutorial(class AController* NewController);
	void UserConstructionScript();
	void Intensity_Ramp__FinishedFunc();
	void Intensity_Ramp__UpdateFunc();
	void Intensity_Ramp_Down__FinishedFunc();
	void Intensity_Ramp_Down__UpdateFunc();
	void BndEvt__VehicleEffectsComponent_K2Node_ComponentBoundEvent_40_OnEngineStart__DelegateSignature_Vehicle_Technical();
	void BndEvt__VehicleEffectsComponent_K2Node_ComponentBoundEvent_50_OnEngineStart__DelegateSignature_Vehicle_Technical();
	void BndEvt__VehicleEffectsComponent_K2Node_ComponentBoundEvent_0_OnRestartEffectsAfterTravel__DelegateSignature_Vehicle_Outrunner();
	void BndEvt__VehicleEffectsComponent_K2Node_ComponentBoundEvent_0_OnImpactDetectedSignature__DelegateSignature_Vehicle_Technical(class AActor* HitActor, const struct FHitResult& Hit, EVehicleImpactForce ImpactForce);
	void BndEvt__VehicleEffectsComponent_K2Node_ComponentBoundEvent_1_OnGrindingStopped__DelegateSignature_Vehicle_Technical();
	void Reset_Grinding();
	void BndEvt__DamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_Vehicle_Technical(class AActor* DamageReceiver, class AActor* DamageCauser);
	void BndEvt__WheeledVehicleMovementComponentNW_K2Node_ComponentBoundEvent_0_OnBecameAirborn__DelegateSignature_Vehicle_Technical();
	void BndEvt__WheeledVehicleMovementComponentNW_K2Node_ComponentBoundEvent_1_OnLanded__DelegateSignature_Vehicle_Technical(float TimeSpentInAir, float LandAngle, int NumWheelsOnGround, bool bAllWheelsLanded);
	void Try_Airborn_Callout();
	void BndEvt__CollisionDamage_K2Node_ComponentBoundEvent_0_ActorComponentActorHitSignature__DelegateSignature_Vehicle_Technical(class UCollisionDamageComponent* Component, class AActor* ActorHit, const struct FVector& ImpactForce);
	void BndEvt__DamageComponent_K2Node_ComponentBoundEvent_3_HealthTypeEvent__DelegateSignature_Vehicle_Technical(const struct FHealthType& HealthType, int Index);
	void BndEvt__DamageComponent_K2Node_ComponentBoundEvent_4_HealthTypeEvent__DelegateSignature_Vehicle_Technical(const struct FHealthType& HealthType, int Index);
	void ReceiveOnPlayerHijacksVehicle(class UVehicleSeatComponent** Seat, class AOakCharacter** Character);
	void BndEvt__DamageCauserComponent_K2Node_ComponentBoundEvent_1_CauseDeathDelegate__DelegateSignature_BPChar_Player(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void Multikill_Reset();
	void BndEvt__VehicleSeat_LeapFront_K2Node_ComponentBoundEvent_6_PawnSlotAttachDelegate__DelegateSignature_Vehicle_Outrunner(class APawn* Pawn, class AController* Controller);
	void BndEvt__VehicleSeat_LeapBack_K2Node_ComponentBoundEvent_8_PawnSlotAttachDelegate__DelegateSignature_Vehicle_Outrunner(class APawn* Pawn, class AController* Controller);
	void Bind_Dialog_Events();
	void OnLeapDetachReaction(class APawn* Pawn, class AController* Controller);
	void EnemyHit();
	void BndEvt__FlipUsable_K2Node_ComponentBoundEvent_4_UsableUsedOnChannelSignature__DelegateSignature_Vehicle_Outrunner(class AController* UserController, class UPrimitiveComponent* UsedComponent);
	void ReceiveBeginPlay();
	void K2_InitializeSeats();
	void ReceivePossessed(class AController** NewController);
	void ReceiveUnpossessed(class AController** OldController);
	void Landing_Feedback();
	void BndEvt__DamageComponent_K2Node_ComponentBoundEvent_0_PlayerMeleeHitDelegate__DelegateSignature_Vehicle_Outrunner(class AController* InstigatedBy);
	void ExecuteUbergraph_Vehicle_Outrunner(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
