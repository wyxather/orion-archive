#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_PsychoMale_BadassRockSlam_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proj_PsychoMale_BadassRockSlam.Proj_PsychoMale_BadassRockSlam_C
// 0x0060 (0x0740 - 0x06E0)
class AProj_PsychoMale_BadassRockSlam_C : public AOakAIBalancedProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06E0(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               DamageCollision;                                          // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWalkingProjectileMovementComponent*         WalkingProjectileMovement;                                // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    RockChunks;                                               // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWwiseAudioComponent*                        WwiseAudio;                                               // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            MovementCollision;                                        // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              WalkingSpeed;                                             // 0x0710(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistance;                                              // 0x0714(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              HitActorList;                                             // 0x0718(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FWwisePlaybackInstance                      NewVar_1;                                                 // 0x0728(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Proj_PsychoMale_BadassRockSlam.Proj_PsychoMale_BadassRockSlam_C");
		return ptr;
	}


	void EvaluateValidForDamage(class AActor* Actor, bool* ValidActor, class AActor** ValidActorForDamage);
	void UserConstructionScript();
	void OnExplode();
	void BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectilePostLastBounceDelegate__DelegateSignature_Proj_PsychoMale_BadassRockSlam(const struct FHitResult& ImpactResult);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Proj_PsychoMale_BadassRockSlam(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_Proj_PsychoMale_BadassRockSlam(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
