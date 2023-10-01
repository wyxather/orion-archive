#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_TOR_SG_Boring_Child_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proj_TOR_SG_Boring_Child.Proj_TOR_SG_Boring_Child_C
// 0x0060 (0x0740 - 0x06E0)
class AProj_TOR_SG_Boring_Child_C : public AOakProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06E0(0x0008) (Transient, DuplicateTransient)
	class UWwiseAudioComponent*                        BladeAudio;                                               // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDrunkenWaveMovementComponent*               DrunkenWaveMovement;                                      // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            Sphere;                                                   // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem2;                                          // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Trail;                                                    // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWalkingProjectileMovementComponent*         WalkingProjectileMovement;                                // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ImpactForce;                                              // 0x0718(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGbxAttributeFloat                          DamageRadius;                                             // 0x071C(0x000C) (Edit, BlueprintVisible)
	float                                              Damage;                                                   // 0x0728(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x072C(0x0004) MISSED OFFSET
	class UClass*                                      DamageType;                                               // 0x0730(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageSource;                                             // 0x0738(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Proj_TOR_SG_Boring_Child.Proj_TOR_SG_Boring_Child_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnExplode();
	void BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_2_OnProjectilePostLastBounceDelegate__DelegateSignature_Proj_TOR_SG_Boring_Child(const struct FHitResult& ImpactResult);
	void BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_3_OnProjectileStopDelegate__DelegateSignature_Proj_TOR_SG_Boring_Child(const struct FHitResult& ImpactResult);
	void BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_4_OnWalkingProjectileHitUnwalkableSurface__DelegateSignature_Proj_TOR_SG_Boring_Child(const struct FHitResult& ImpactResult);
	void OnHitDamagableObject(struct FHitResult* Hit);
	void BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_5_WalkingProjectileEvent__DelegateSignature_Proj_TOR_SG_Boring_Child();
	void BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_6_WalkingProjectileEvent__DelegateSignature_Proj_TOR_SG_Boring_Child();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Proj_TOR_SG_Boring_Child(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
