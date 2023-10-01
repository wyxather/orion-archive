#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_BladesOfTerror_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proj_BladesOfTerror.Proj_BladesOfTerror_C
// 0x00F0 (0x07D0 - 0x06E0)
class AProj_BladesOfTerror_C : public AOakProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06E0(0x0008) (Transient, DuplicateTransient)
	class UWwiseAudioComponent*                        WwiseAudio;                                               // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Sparks;                                                   // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Saw;                                                      // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            Sphere;                                                   // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWalkingProjectileMovementComponent*         WalkingProjectileMovement;                                // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UProjectileHomingComponent*                  ProjectileHoming;                                         // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FEnvQueryParams                             Query;                                                    // 0x0718(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Proj_BladesOfTerror.Proj_BladesOfTerror_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_0_WalkingProjectileEvent__DelegateSignature_Proj_BladesOfTerror();
	void BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_1_WalkingProjectileEvent__DelegateSignature_Proj_BladesOfTerror();
	void OnHitEnemy(struct FHitResult* Hit);
	void BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_2_OnProjectilePostLastBounceDelegate__DelegateSignature_Proj_BladesOfTerror(const struct FHitResult& ImpactResult);
	void OnExplode();
	void BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_3_ProjectileHomingComponentEvent__DelegateSignature_Proj_BladesOfTerror();
	void ExecuteUbergraph_Proj_BladesOfTerror(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
