#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_Rakk_Egg_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Projectile_Rakk_Egg.Projectile_Rakk_Egg_C
// 0x0098 (0x0778 - 0x06E0)
class AProjectile_Rakk_Egg_C : public AOakAIBalancedProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06E0(0x0008) (Transient, DuplicateTransient)
	class UWwiseAudioComponent*                        WwiseAudio;                                               // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        EggMesh;                                                  // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakSpawnPointComponent*                     SpawnPoint;                                               // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class URotatingMovementComponent*                  RotatingMovement;                                         // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            Sphere;                                                   // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxProjectileMovementComponent*             GbxProjectileMovement;                                    // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              EggGrow_Scale_EC0C254441BE555670574A9CEBEFF79F;           // 0x0718(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    EggGrow__Direction_EC0C254441BE555670574A9CEBEFF79F;      // 0x071C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x071D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          EggGrow;                                                  // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bHit;                                                     // 0x0728(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0729(0x0007) MISSED OFFSET
	struct FDataTableValueHandle                       MaxAliveChildActors;                                      // 0x0730(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableValueHandle                       TotalSpawnedChildActors;                                  // 0x0748(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UBlackboardComponent*                        MyBlackboard;                                             // 0x0760(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class AActor*                                      MyOwner;                                                  // 0x0768(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AGbxAIController*                            MyAIController;                                           // 0x0770(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Projectile_Rakk_Egg.Projectile_Rakk_Egg_C");
		return ptr;
	}


	void UserConstructionScript();
	void EggGrow__FinishedFunc();
	void EggGrow__UpdateFunc();
	void GbxAsyncRequest_Failed_3BCF79D24632D514162059875F138F2C(class AActor* Actor);
	void GbxAsyncRequest_Spawned_3BCF79D24632D514162059875F138F2C(class AActor* Actor);
	void ReceiveBeginPlay();
	void OnHitEnemy(struct FHitResult* Hit);
	void SpawnRakklesnake();
	void BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_Projectile_Rakk_Egg(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
	void ExecuteUbergraph_Projectile_Rakk_Egg(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
