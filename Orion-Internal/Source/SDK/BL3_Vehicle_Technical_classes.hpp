#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Vehicle_Technical_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Vehicle_Technical.Vehicle_Technical_C
// 0x016C (0x1544 - 0x13D8)
class AVehicle_Technical_C : public ABP_OakVehicle_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x13D8(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        SM_Veh_Technical_UCXQ;                                    // 0x13E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakVehicleBoostComponent*                   OakVehicleBoost;                                          // 0x13E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        Tech_FrontPointLight_L;                                   // 0x13F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        Tech_FrontPointLight_R;                                   // 0x13F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpotLightComponent*                         Tech_FrontSpotLight;                                      // 0x1400(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVehicleHitchComponent*                      VehicleHitch;                                             // 0x1408(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakHitRegionComponent*                      HitRegion;                                                // 0x1410(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               NavPainterBox;                                            // 0x1418(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxNavMeshPainterComponent*                 GbxNavMeshPainter;                                        // 0x1420(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_R_L_Wheel;                                             // 0x1428(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_R_R_Wheel;                                             // 0x1430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_F_R_Wheel;                                             // 0x1438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_F_L_Wheel;                                             // 0x1440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_OakAttributeComponent_C*                 BP_OakAttributeComponent;                                 // 0x1448(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAIUsableComponent*                          AIUsable;                                                 // 0x1450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USmartObjectComponent*                       SmartObject_GetInDriver;                                  // 0x1458(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAIUseSlotComponent*                         AIUseSlot_GetInDriver;                                    // 0x1460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVehicleSeatComponent*                       VehicleSeat_AllyTurretSide;                               // 0x1468(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVehicleSeatComponent*                       VehicleSeat_AllyDriverSide;                               // 0x1470(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVehicleSeatComponent*                       VehicleSeat_BanditHood2;                                  // 0x1478(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVehicleSeatComponent*                       VehicleSeat_BanditHood1;                                  // 0x1480(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWwiseAudioComponent*                        DamageAudioComponent;                                     // 0x1488(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVehicleTrailComponent*                      VehicleTrail;                                             // 0x1490(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxActionComponent*                         GbxAction;                                                // 0x1498(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UVehicleAirControlComponent*                 VehicleAirControl;                                        // 0x14A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDodgeTriggerZoneComponent*                  DodgeTriggerZone;                                         // 0x14A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCollisionDamageComponent*                   CollisionDamage;                                          // 0x14B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWwiseAudioComponent*                        ExhaustAudioComponent;                                    // 0x14B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWwiseAudioComponent*                        EngineAudioComponent;                                     // 0x14C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTurretMovementComponent*                    TurretMovement;                                           // 0x14C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UUsableComponent*                            FlipUsable;                                               // 0x14D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWheeledVehicleMovementComponentNW*          WheeledVehicleMovementComponentNW;                        // 0x14D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UActiveWeaponsComponent*                     ActiveWeapons;                                            // 0x14E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Interact_Driver;                                          // 0x14E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Intensity_Ramp_Down_Intensity_Scale_8EB26A0B4652377865B6F287CFAE10E8;// 0x14F0(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Intensity_Ramp_Down__Direction_8EB26A0B4652377865B6F287CFAE10E8;// 0x14F4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x14F5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Intensity_Ramp_Down;                                      // 0x14F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Intensity_Ramp_up_Intensity_Scale_5DA12EEF45EDF9B020EF7C9C89655EF9;// 0x1500(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Intensity_Ramp_up__Direction_5DA12EEF45EDF9B020EF7C9C89655EF9;// 0x1504(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x1505(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Intensity_Ramp_up;                                        // 0x1508(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      TurretSeatClass;                                          // 0x1510(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeSpentInAir;                                           // 0x1518(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Spot_Intensity;                                           // 0x151C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Point_Intensity;                                          // 0x1520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Multikill_Count;                                          // 0x1524(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDamageComponent*                            DamagedReceiver;                                          // 0x1528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class APawn*                                       DamageInstigator;                                         // 0x1530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ImpactForce;                                              // 0x1538(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Vehicle_Technical.Vehicle_Technical_C");
		return ptr;
	}


	void VehicleTutorial(class AController* NewController);
	void UserConstructionScript();
	void Intensity_Ramp_up__FinishedFunc();
	void Intensity_Ramp_up__UpdateFunc();
	void Intensity_Ramp_Down__FinishedFunc();
	void Intensity_Ramp_Down__UpdateFunc();
	void BndEvt__WheeledVehicleMovementComponentNW_K2Node_ComponentBoundEvent_0_OnBecameAirborn__DelegateSignature_Vehicle_Technical();
	void BndEvt__WheeledVehicleMovementComponentNW_K2Node_ComponentBoundEvent_1_OnLanded__DelegateSignature_Vehicle_Technical(float TimeSpentInAir, float LandAngle, int NumWheelsOnGround, bool bAllWheelsLanded);
	void Try_Airborn_Callout();
	void BndEvt__VehicleEffectsComponent_K2Node_ComponentBoundEvent_0_OnImpactDetectedSignature__DelegateSignature_Vehicle_Technical(class AActor* HitActor, const struct FHitResult& Hit, EVehicleImpactForce ImpactForce);
	void BndEvt__VehicleEffectsComponent_K2Node_ComponentBoundEvent_1_OnGrindingStopped__DelegateSignature_Vehicle_Technical();
	void BndEvt__DamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_Vehicle_Technical(class AActor* DamageReceiver, class AActor* DamageCauser);
	void Reset_Grinding();
	void BndEvt__DamageCauserComponent_K2Node_ComponentBoundEvent_1_CauseDeathDelegate__DelegateSignature_BPChar_Player(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void BndEvt__DamageComponent_K2Node_ComponentBoundEvent_3_HealthTypeEvent__DelegateSignature_Vehicle_Technical(const struct FHealthType& HealthType, int Index);
	void BndEvt__DamageComponent_K2Node_ComponentBoundEvent_4_HealthTypeEvent__DelegateSignature_Vehicle_Technical(const struct FHealthType& HealthType, int Index);
	void ReceiveOnPlayerHijacksVehicle(class UVehicleSeatComponent** Seat, class AOakCharacter** Character);
	void Bind_Dialog_Events();
	void OnLeapDetachReaction(class APawn* Pawn, class AController* Controller);
	void Multikill_Reset();
	void BndEvt__CollisionDamage_K2Node_ComponentBoundEvent_0_ActorComponentActorHitSignature__DelegateSignature_Vehicle_Technical(class UCollisionDamageComponent* Component, class AActor* ActorHit, const struct FVector& ImpactForce);
	void BndEvt__VehicleSeat_BanditHood1_K2Node_ComponentBoundEvent_2_PawnSlotAttachDelegate__DelegateSignature_Vehicle_Technical(class APawn* Pawn, class AController* Controller);
	void BndEvt__VehicleSeat_BanditHood2_K2Node_ComponentBoundEvent_5_PawnSlotAttachDelegate__DelegateSignature_Vehicle_Technical(class APawn* Pawn, class AController* Controller);
	void EnemyHit();
	void BndEvt__VehicleEffectsComponent_K2Node_ComponentBoundEvent_40_OnEngineStart__DelegateSignature_Vehicle_Technical();
	void BndEvt__VehicleEffectsComponent_K2Node_ComponentBoundEvent_50_OnEngineStart__DelegateSignature_Vehicle_Technical();
	void BndEvt__VehicleEffectsComponent_K2Node_ComponentBoundEvent_0_OnRestartEffectsAfterTravel__DelegateSignature_Vehicle_Technical();
	void BndEvt__FlipUsable_K2Node_ComponentBoundEvent_4_UsableUsedOnChannelSignature__DelegateSignature_Vehicle_Outrunner(class AController* UserController, class UPrimitiveComponent* UsedComponent);
	void K2_InitializeSeats();
	void ReceiveBeginPlay();
	void ReceivePossessed(class AController** NewController);
	void ReceiveUnpossessed(class AController** OldController);
	void BndEvt__SmartObject_GetInDriver_K2Node_ComponentBoundEvent_0_SmartObjectUsageResultEvent__DelegateSignature_Vehicle_Technical(class AController* Controller, const struct FGameplayTag& ActionTag, ESmartActionResult Result);
	void BndEvt__SmartObject_GetInDriver_K2Node_ComponentBoundEvent_1_SmartObjectUsageEvent__DelegateSignature_Vehicle_Technical(class AController* Controller, const struct FGameplayTag& ActionTag);
	void Landing_Feedback();
	void BndEvt__DamageComponent_K2Node_ComponentBoundEvent_0_PlayerMeleeHitDelegate__DelegateSignature_Vehicle_Technical(class AController* InstigatedBy);
	void ExecuteUbergraph_Vehicle_Technical(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
