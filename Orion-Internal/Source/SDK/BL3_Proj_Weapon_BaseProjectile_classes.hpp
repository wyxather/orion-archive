#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Weapon_BaseProjectile_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C
// 0x00AA (0x078A - 0x06E0)
class AProj_Weapon_BaseProjectile_C : public AOakProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06E0(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        GrenadeMesh;                                              // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            SphereCollision;                                          // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxProjectileMovementComponent*             GbxProjectileMovement;                                    // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              FuseTime;                                                 // 0x0700(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // 0x0704(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGbxAttributeFloat                          DamageRadius;                                             // 0x0708(0x000C) (Edit, BlueprintVisible, Net)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0714(0x0004) MISSED OFFSET
	class UClass*                                      DamageType;                                               // 0x0718(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DamageSource;                                             // 0x0720(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ImpactForce;                                              // 0x0728(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x072C(0x0004) MISSED OFFSET
	TArray<class AActor*>                              IgnoredActors;                                            // 0x0730(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class AActor*                                      DamageCauser;                                             // 0x0740(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UDamageModifierComponent*                    Damage_Modifier;                                          // 0x0748(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class AOakCharacter*                               GbxCharacter;                                             // 0x0750(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              ExplosionImpactForce;                                     // 0x0758(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x075C(0x0004) MISSED OFFSET
	class UExplosionData*                              ExplosionDataOverride;                                    // 0x0760(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UImpactData*                                 ImpactDataOverride;                                       // 0x0768(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MyDamageData;                                             // 0x0770(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      OriginOverride;                                           // 0x0778(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UParticleSystemComponent*                    FX_ElementalTrail;                                        // 0x0780(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               AI_CanDisable;                                            // 0x0788(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ProjectileDetached;                                       // 0x0789(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Proj_Weapon_BaseProjectile.Proj_Weapon_BaseProjectile_C");
		return ptr;
	}


	void ProjectileDisarm(bool* Success);
	void ProjectileArm(bool* Success);
	void ProjectileDetonate(bool* Success);
	void StickToTarget(const struct FHitResult& Hit, bool* Attached, bool* StuckToActor);
	void AddElementalTrail(class UClass* Collection, class USceneComponent* AttachToComponent, const struct FName& AttachPointName, const struct FVector& NewScale);
	void CallExplode();
	void StickToWorld(const struct FHitResult& HitInfo);
	void StickToActor(const struct FHitResult& HitResult, bool* AttachedToActor);
	void WeaponProjectileExplode();
	void UserConstructionScript();
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void OnExplode();
	void ReceiveBeginPlay();
	void Destructible_Fractured(const struct FVector& HitPoint, const struct FVector& HitDetection);
	void Actor_Died();
	void OnHitWorld(struct FHitResult* Hit);
	void Fallback();
	void ExecuteUbergraph_Proj_Weapon_BaseProjectile(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
