#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_BloodyHarvest_Ghost_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C
// 0x00E1 (0x07C1 - 0x06E0)
class AProjectile_BloodyHarvest_Ghost_C : public AOakAIBalancedProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06E0(0x0008) (Transient, DuplicateTransient)
	class USphereComponent*                            PawnSphere;                                               // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakMinimapIconComponent*                    OakMinimapIcon;                                           // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGameplayTagContainerComponent*              GameplayTagContainer;                                     // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_OakAttributeComponent_C*                 BP_OakAttributeComponent;                                 // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWwiseAudioComponent*                        WwiseAudio;                                               // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakDamageComponent*                         OakDamage;                                                // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDrunkenRandomMovementComponent*             DrunkenRandomMovement;                                    // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UProjectileHomingComponent*                  ProjectileHoming;                                         // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxProjectileMovementComponent*             GbxProjectileMovement;                                    // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USocketComponent*                            SnapZoom;                                                 // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTargetableComponent*                        Targetable;                                               // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            Sphere;                                                   // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    GhostFX;                                                  // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    HauntedGroundFX;                                          // 0x0750(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               ForceInstantSpawn;                                        // 0x0758(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0759(0x0003) MISSED OFFSET
	float                                              HomingDelay;                                              // 0x075C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWasKilledByDamage;                                       // 0x0760(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0761(0x0007) MISSED OFFSET
	class UDamageComponent*                            SecondWindReceivers;                                      // 0x0768(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	TArray<class AActor*>                              SecondWindDamageCausers;                                  // 0x0770(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UParticleSystem*                             StartSpawnFX;                                             // 0x0780(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             EndSpawnFX;                                               // 0x0788(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UExplosionData*                              GhostExplosionData;                                       // 0x0790(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AOakCharacter*                               NewPlayerTarget;                                          // 0x0798(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              LifeTime;                                                 // 0x07A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x07A4(0x0004) MISSED OFFSET
	struct FDataTableValueHandle                       DataTableDamageScale;                                     // 0x07A8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bCanDoCollisionCleanup;                                   // 0x07C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Projectile_BloodyHarvest_Ghost.Projectile_BloodyHarvest_Ghost_C");
		return ptr;
	}


	void TryFindNextValidTarget(class AOakCharacter* SourcePlayer, class AOakCharacter** NewTarget);
	void CauseDamageGhost();
	void TrySecondWind();
	void SpawnLoot();
	void DoStartSpawnPresentation(bool ForceInstantSpawn_);
	void InitGhost();
	void DoSpawnInPresentation();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SetPlayerTargets();
	void OnExplode();
	void OnHitDamagableObject(struct FHitResult* Hit);
	void OnHitWorld(struct FHitResult* Hit);
	void BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_Projectile_BloodyHarvest_Ghost(class UDamageComponent* DamageReceiver, class UDamageCauserComponent* DamageCauser);
	void DoEndSpawnPresentation(bool ForceInstantSpawn_);
	void BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_TakeAnyPipelineDamageDelegate__DelegateSignature_DroneProj_TED_TenGallon(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details);
	void CheckPerceivableByAI();
	void ExecuteUbergraph_Projectile_BloodyHarvest_Ghost(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
