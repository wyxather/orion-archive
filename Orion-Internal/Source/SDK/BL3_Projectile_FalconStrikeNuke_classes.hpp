#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_FalconStrikeNuke_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Projectile_FalconStrikeNuke.Projectile_FalconStrikeNuke_C
// 0x005C (0x073C - 0x06E0)
class AProjectile_FalconStrikeNuke_C : public AOakProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06E0(0x0008) (Transient, DuplicateTransient)
	class UWwiseAudioComponent*                        WE_Char_Gunner_IronBear_FalconStrike_Projectile_Lp;       // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    PS_Rocket_Trail_Nuke;                                     // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           Capsule2;                                                 // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        SM_Ironbear_MiniMissle2;                                  // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxProjectileMovementComponent*             GbxProjectileMovement;                                    // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ProjectileLifetime;                                       // 0x0710(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartHomingDelay;                                         // 0x0714(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      FalconStrikeDamageType;                                   // 0x0718(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExplosionRadius;                                          // 0x0720(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0724(0x0004) MISSED OFFSET
	class UWwiseEvent*                                 SpawnAudio;                                               // 0x0728(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     EndLocation;                                              // 0x0730(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Projectile_FalconStrikeNuke.Projectile_FalconStrikeNuke_C");
		return ptr;
	}


	void InitMissile();
	void UserConstructionScript();
	void GbxAsyncRequest_Miss_FB153E514BCFA0D9652350A562778064(const struct FHitResult& Result);
	void GbxAsyncRequest_Hit_FB153E514BCFA0D9652350A562778064(const struct FHitResult& Result);
	void ReceiveBeginPlay();
	void OnExplode();
	void StartAsyncLineTrace();
	void ResumeBeginPlay();
	void ExecuteUbergraph_Projectile_FalconStrikeNuke(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
