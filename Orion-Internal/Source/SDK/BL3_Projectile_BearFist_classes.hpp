#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_BearFist_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Projectile_BearFist.Projectile_BearFist_C
// 0x0138 (0x0818 - 0x06E0)
class AProjectile_BearFist_C : public AOakProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06E0(0x0008) (Transient, DuplicateTransient)
	class UOakTriggerComponent*                        DamageTrigger;                                            // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            DMGCollision;                                             // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USocketComponent*                            Fist_Projectile;                                          // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Hardpoint_Fist_Projectile;                             // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UProjectileHomingComponent*                  ProjectileHoming;                                         // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UExplosionComponent*                         Explosion;                                                // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxProjectileMovementComponent*             GbxProjectileMovement;                                    // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           Capsule;                                                  // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      DamagedTarget;                                            // 0x0728(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AOakCharacter_IronBear*                      OwningActor;                                              // 0x0730(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FEnvQueryParams                             TargetAroundReticule;                                     // 0x0738(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              LifeTime;                                                 // 0x07F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x07F4(0x0004) MISSED OFFSET
	class AOakWeapon_IronBearHardPoint*                OwningHardpoint;                                          // 0x07F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TempHitLocation;                                          // 0x0800(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               HitFriendly;                                              // 0x080C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x080D(0x0003) MISSED OFFSET
	class APlayerController*                           OwningHardpointController;                                // 0x0810(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Projectile_BearFist.Projectile_BearFist_C");
		return ptr;
	}


	void CreateBearFistLightBeam(class UClass* LightBeamData);
	void PullEnemyToIronBear();
	void GetIronBearArmAction(class AActor* Target, class UClass** NewAction);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnExplode();
	void OnHitWorld(struct FHitResult* Hit);
	void OnHitDamagableObject(struct FHitResult* Hit);
	void DoProjectilePreCleanup();
	void DoProjectilePostCleanup();
	void AttachNewChain();
	void BndEvt__DamageTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Projectile_BearFist(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
	void ExecuteUbergraph_Projectile_BearFist(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
