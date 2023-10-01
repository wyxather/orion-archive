#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_Operative_BarrierSpawner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Projectile_Operative_BarrierSpawner.Projectile_Operative_BarrierSpawner_C
// 0x0020 (0x0728 - 0x0708)
class AProjectile_Operative_BarrierSpawner_C : public AOakProjectile_ActionAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0708(0x0008) (Transient, DuplicateTransient)
	class UGbxSkeletalMeshComponent*                   GbxSkeletalMesh;                                          // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            Sphere;                                                   // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxProjectileMovementComponent*             GbxProjectileMovement;                                    // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Projectile_Operative_BarrierSpawner.Projectile_Operative_BarrierSpawner_C");
		return ptr;
	}


	void GetBarrierPlacementTransform(struct FTransform* res);
	void UserConstructionScript();
	void BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature_Projectile_Operative_BarrierSpawner(const struct FHitResult& ImpactResult);
	void SpawnBarrier();
	void OnExplode();
	void OnHitWorld(struct FHitResult* Hit);
	void OpenHitWorldGate();
	void ExecuteUbergraph_Projectile_Operative_BarrierSpawner(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
