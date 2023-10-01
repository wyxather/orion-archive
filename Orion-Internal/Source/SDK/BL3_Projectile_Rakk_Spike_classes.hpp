#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_Rakk_Spike_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Projectile_Rakk_Spike.Projectile_Rakk_Spike_C
// 0x00C0 (0x07A0 - 0x06E0)
class AProjectile_Rakk_Spike_C : public AOakAIBalancedProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06E0(0x0008) (Transient, DuplicateTransient)
	class UWwiseAudioComponent*                        WwiseAudio;                                               // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    PS_Rakk_Spike_Trail_Default;                              // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            Sphere;                                                   // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxProjectileMovementComponent*             GbxProjectileMovement;                                    // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bHit;                                                     // 0x0708(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0709(0x0007) MISSED OFFSET
	struct FHitResult                                  HitInfo;                                                  // 0x0710(0x0090) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Projectile_Rakk_Spike.Projectile_Rakk_Spike_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnHitEnemy(struct FHitResult* Hit);
	void OnHitWorld(struct FHitResult* Hit);
	void OnHitFriendly(struct FHitResult* Hit);
	void OnHitNeutral(struct FHitResult* Hit);
	void ExecuteUbergraph_Projectile_Rakk_Spike(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
