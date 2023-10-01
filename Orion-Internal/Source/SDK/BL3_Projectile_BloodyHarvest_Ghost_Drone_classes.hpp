#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_BloodyHarvest_Ghost_Drone_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C
// 0x00DC (0x080C - 0x0730)
class AProjectile_BloodyHarvest_Ghost_Drone_C : public AOakDroneProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0730(0x0008) (Transient, DuplicateTransient)
	class USphereComponent*                            PawnSphere;                                               // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakMinimapIconComponent*                    OakMinimapIcon;                                           // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGameplayTagContainerComponent*              GameplayTagContainer;                                     // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakTriggerComponent*                        OakTrigger;                                               // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_OakAttributeComponent_C*                 BP_OakAttributeComponent;                                 // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWwiseAudioComponent*                        WwiseAudio;                                               // 0x0760(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USocketComponent*                            Muzzle;                                                   // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USocketComponent*                            SnapZoom;                                                 // 0x0770(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               ForceInstantSpawn;                                        // 0x0780(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0781(0x0003) MISSED OFFSET
	float                                              HomingDelay;                                              // 0x0784(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bReadyForLifetimeCleanup;                                 // 0x0788(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0789(0x0007) MISSED OFFSET
	struct FTimerHandle                                TimerHandle;                                              // 0x0790(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              FiringDelay;                                              // 0x0798(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x079C(0x0004) MISSED OFFSET
	class AOakCharacter*                               NewPlayerTarget;                                          // 0x07A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWasKilledByDamage;                                       // 0x07A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x07A9(0x0007) MISSED OFFSET
	TArray<class AActor*>                              SecondWindDamageCausers;                                  // 0x07B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UParticleSystem*                             StartSpawnFX_Drone;                                       // 0x07C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             EndSpawnFX_Drone;                                         // 0x07C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UExplosionData*                              ExplosionData_Drone;                                      // 0x07D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDataTableValueHandle                       HealthMultiplier_Drone;                                   // 0x07D8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Ghost_MaxRadius;                                          // 0x07F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LoadedAmmo;                                               // 0x07F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bReadyForSpawnCleanup;                                    // 0x07F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x07F9(0x0007) MISSED OFFSET
	struct FTimerHandle                                RetargetingTimer;                                         // 0x0800(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              WeaponDamage;                                             // 0x0808(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Projectile_BloodyHarvest_Ghost_Drone.Projectile_BloodyHarvest_Ghost_Drone_C");
		return ptr;
	}


	void TryFindNextValidTarget(class AOakCharacter* Source_Player, class AOakCharacter** NewTarget);
	void StartFiring();
	void StopFiring(bool NoReload);
	void FireWeapon();
	void IncrementStats(bool* Out);
	void TrySecondWindBadass();
	void SpawnLootBadass();
	void SetDroneMovementTypeWithTargets(EOakDroneMovementMode NewMovementMode);
	void DoSpawnInPresentation();
	void DoStartSpawnPresentation(bool ForceInstantSpawn_);
	void InitGhostBadass();
	void UserConstructionScript();
	void DoEndSpawnPresentation(bool ForceInstantSpawn_);
	void ReceiveBeginPlay();
	void OnHitDamagableObject(struct FHitResult* Hit);
	void OnHitWorld(struct FHitResult* Hit);
	void BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_Projectile_BloodyHarvest_Ghost(class UDamageComponent* DamageReceiver, class UDamageCauserComponent* DamageCauser);
	void OnExplode();
	void TargetOnDied_Bind();
	void SkullTarget_OnDied(class AActor* DamageReceiver, class AActor* DamageCauser);
	void TargetOnDied_Unbind();
	void BeginBadassChargeAndDie();
	void BeginReloading();
	void BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_TakeAnyPipelineDamageDelegate__DelegateSignature_DroneProj_TED_TenGallon(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details);
	void CheckPerceivableByAI();
	void ResetShooting();
	void ExecuteUbergraph_Projectile_BloodyHarvest_Ghost_Drone(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
