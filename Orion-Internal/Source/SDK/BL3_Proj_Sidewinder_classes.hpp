#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Sidewinder_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proj_Sidewinder.Proj_Sidewinder_C
// 0x0140 (0x0820 - 0x06E0)
class AProj_Sidewinder_C : public AOakAIBalancedProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06E0(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    TrailFX;                                                  // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPointLightComponent*                        PrimedLight;                                              // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UProjectileHomingComponent*                  ProjectileHoming;                                         // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            SphereCollision;                                          // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWwiseAudioComponent*                        WwiseAudio;                                               // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTargetableComponent*                        Targetable;                                               // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxProjectileMovementComponent*             GbxProjectileMovement;                                    // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      MyDamageData;                                             // 0x0720(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UExplosionData*                              MyExplosionData;                                          // 0x0728(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ElementalDamageType;                                      // 0x0730(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GrenadeDamage;                                            // 0x0738(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GrenadeRadius;                                            // 0x073C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FEnvQueryParams                             EnvQuery;                                                 // 0x0740(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                FuseTimerHandle;                                          // 0x07F8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class AActor*>                              Targets;                                                  // 0x0800(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class AActor*                                      TargetActor;                                              // 0x0810(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class APawn*                                       GrenadeInstigator;                                        // 0x0818(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Proj_Sidewinder.Proj_Sidewinder_C");
		return ptr;
	}


	void UserConstructionScript();
	void InitializeElement(EOakElementalType ElementType);
	void TinkSuicideBomb_SetFuseTimer(float NewFuseTime);
	void TinkSuicideBomb_SetCurrentHealth(float NewCurrentHealth);
	void TinkSuicideBomb_StartSuicide();
	void HNT_Prime();
	void HNT_Drop();
	void HNT_Throw();
	void OnExplode();
	void ReceiveBeginPlay();
	void FuseTimerExpired();
	void ReceiveActorBeginOverlap(class AActor** OtherActor);
	void FindHomingTarget();
	void DeploySticky();
	void ExecuteUbergraph_Proj_Sidewinder(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
