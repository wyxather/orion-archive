#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_Siren_PhaseTrance_Transfer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C
// 0x0028 (0x0760 - 0x0738)
class AProjectile_Siren_PhaseTrance_Transfer_C : public AOakProjectile_PhaseTrance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0738(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    TransferParticle;                                         // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            Sphere;                                                   // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UProjectileHomingComponent*                  ProjectileHoming;                                         // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxProjectileMovementComponent*             GbxProjectileMovement;                                    // 0x0758(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Projectile_Siren_PhaseTrance_Transfer.Projectile_Siren_PhaseTrance_Transfer_C");
		return ptr;
	}


	void OnHomingTargetDied(class AActor* Receiver, class AActor* Causer);
	void AttachToNewHomingTarget();
	void DetachFromOldHomingTarget();
	void SetNewHomingTarget(class AActor* NewTarget);
	void GetGraspDuration(float* res);
	void SetTransferParticle();
	void PlayExplosionEffect();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnExplode();
	void BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_0_ProjectileHomingComponentEvent__DelegateSignature_Projectile_Siren_PhaseTrance_Transfer();
	void OnShutdownGracefully();
	void ExecuteUbergraph_Projectile_Siren_PhaseTrance_Transfer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
