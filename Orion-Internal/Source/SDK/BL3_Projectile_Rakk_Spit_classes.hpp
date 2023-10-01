#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_Rakk_Spit_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Projectile_Rakk_Spit.Projectile_Rakk_Spit_C
// 0x0100 (0x07E0 - 0x06E0)
class AProjectile_Rakk_Spit_C : public AOakAIBalancedProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06E0(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    PS_Projectile;                                            // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            Sphere;                                                   // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxProjectileMovementComponent*             GbxProjectileMovement;                                    // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      HitActor;                                                 // 0x0700(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	EOakElementalType                                  ElementalType;                                            // 0x0708(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0709(0x0007) MISSED OFFSET
	struct FTransform                                  SplatSpawnTransform;                                      // 0x0710(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class USplatData*                                  SplatData;                                                // 0x0740(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSpawnSplat;                                              // 0x0748(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0749(0x0007) MISSED OFFSET
	struct FHitResult                                  HitResult;                                                // 0x0750(0x0090) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Projectile_Rakk_Spit.Projectile_Rakk_Spit_C");
		return ptr;
	}


	void SetElement(EOakElementalType Index);
	void UserConstructionScript();
	void GbxAsyncRequest_Failed_77AF8B354EBDD4149196169054932447(class AActor* Actor, int InstanceIndex);
	void GbxAsyncRequest_Spawned_77AF8B354EBDD4149196169054932447(class AActor* Actor, int InstanceIndex);
	void ReceiveBeginPlay();
	void OnHitWorld(struct FHitResult* Hit);
	void OnHitEnemy(struct FHitResult* Hit);
	void OnHitNeutral(struct FHitResult* Hit);
	void OnExplode();
	void ExecuteUbergraph_Projectile_Rakk_Spit(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
