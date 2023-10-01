#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_Siren_Phasecast_Revised_Base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C
// 0x0088 (0x07C0 - 0x0738)
class AProjectile_Siren_Phasecast_Revised_Base_C : public AOakProjectile_PhaseTrance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0738(0x0008) (Transient, DuplicateTransient)
	class USphereComponent*                            OverlapCollision;                                         // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            WorldCollision;                                           // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxProjectileMovementComponent*             GbxProjectileMovement;                                    // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      BodyMesh;                                                 // 0x0758(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      HeadMesh;                                                 // 0x0760(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      GhostArms;                                                // 0x0768(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FDataTableValueHandle                       LifeSpan;                                                 // 0x0770(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bDoEnemyHitImpactEffect;                                  // 0x0788(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0789(0x0007) MISSED OFFSET
	class UExplosionData*                              ShockExplosionData;                                       // 0x0790(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UExplosionData*                              CorrosiveExplosionData;                                   // 0x0798(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UExplosionData*                              IncendiaryExplosionData;                                  // 0x07A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      CastDamageData;                                           // 0x07A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      WorldDamageData;                                          // 0x07B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UExplosionData*                              CryoExplosionData;                                        // 0x07B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Projectile_Siren_Phasecast_Revised_Base.Projectile_Siren_Phasecast_Revised_Base_C");
		return ptr;
	}


	void TryToAllure();
	void HandleWorldHit(struct FHitResult* HitResult);
	void DoDamageToWorld(const struct FVector& Location);
	class UPrimitiveComponent* GetOverlapComponent();
	void GetTargetedHitDirectionForDamage(class AActor* Enemy, struct FVector* res);
	void CalculateDamage(float* res);
	void DoDamageToEnemy(class AActor* Enemy);
	void HandleEnemyHit(struct FHitResult* HitResult);
	void GetImpactEffect(class UImpactData** res);
	void PlayImpactEffect(struct FHitResult* InHitInfo);
	void ConfigureSkeletalMesh();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnHitWorld(struct FHitResult* Hit);
	void OnHitEnemy(struct FHitResult* Hit);
	void OnOverlappedEnemy(struct FHitResult* HitResult);
	void OnOverlappedNeutral(struct FHitResult* HitResult);
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void ExecuteUbergraph_Projectile_Siren_Phasecast_Revised_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
