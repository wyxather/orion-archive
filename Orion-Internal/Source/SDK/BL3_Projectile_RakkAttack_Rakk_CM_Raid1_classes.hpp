#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_RakkAttack_Rakk_CM_Raid1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C
// 0x0131 (0x0811 - 0x06E0)
class AProjectile_RakkAttack_Rakk_CM_Raid1_C : public AOakProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06E0(0x0008) (Transient, DuplicateTransient)
	class UGbxActionComponent*                         GbxAction;                                                // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakTriggerComponent*                        OakTrigger;                                               // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UProjectileHomingComponent*                  ProjectileHoming;                                         // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxProjectileMovementComponent*             GbxProjectileMovement;                                    // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWwiseAudioComponent*                        WwiseAudio1;                                              // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            Sphere2;                                                  // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            Sphere1;                                                  // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      HomingTarget;                                             // 0x0730(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FEnvQueryParams                             EQSSearch;                                                // 0x0738(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableValueHandle                       DamageScalar;                                             // 0x07F0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UOakActionAbility_RakkAttack*                RakkAttackActionSkill;                                    // 0x0808(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IceRakk;                                                  // 0x0810(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Projectile_RakkAttack_Rakk_CM_Raid1.Projectile_RakkAttack_Rakk_CM_Raid1_C");
		return ptr;
	}


	void OnRep_IceRakk();
	void ConfigureFX();
	void DoRakkDamage();
	void SetRakkHomingTarget();
	void UserConstructionScript();
	void StartHoming();
	void HomingTarget_OnDeath(class AActor* DamageReceiver, class AActor* DamageCauser);
	void OnHitDamagableObject(struct FHitResult* Hit);
	void OnHitEnemy(struct FHitResult* Hit);
	void BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Projectile_RakkAttack_Rakk_CM_Raid1(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
	void ReceiveBeginPlay();
	void OnExplode();
	void ExecuteUbergraph_Projectile_RakkAttack_Rakk_CM_Raid1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
