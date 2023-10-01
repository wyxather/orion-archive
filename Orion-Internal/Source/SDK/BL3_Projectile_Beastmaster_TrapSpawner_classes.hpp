#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_Beastmaster_TrapSpawner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C
// 0x0030 (0x0738 - 0x0708)
class AProjectile_Beastmaster_TrapSpawner_C : public AOakProjectile_ActionAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0708(0x0008) (Transient, DuplicateTransient)
	class USkeletalMeshComponent*                      SK_AntigravTrap;                                          // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            Sphere;                                                   // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxProjectileMovementComponent*             GbxProjectileMovement;                                    // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      TrapIO;                                                   // 0x0728(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AIO_Beastmaster_AntiGravityTrap_C*           SpawnedTrap;                                              // 0x0730(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Projectile_Beastmaster_TrapSpawner.Projectile_Beastmaster_TrapSpawner_C");
		return ptr;
	}


	void GetBarrierPlacementTransform(struct FTransform* res);
	void UserConstructionScript();
	void BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature_Projectile_Operative_BarrierSpawner(const struct FHitResult& ImpactResult);
	void SpawnBarrier();
	void OnExplode();
	void OnHitWorld(struct FHitResult* Hit);
	void OpenHitWorldGate();
	void ReceiveBeginPlay();
	void StartWobble();
	void DidTrapSpawn();
	void ReceiveDestroyed();
	void ExecuteUbergraph_Projectile_Beastmaster_TrapSpawner(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
