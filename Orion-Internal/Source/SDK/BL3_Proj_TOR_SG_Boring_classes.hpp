#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_TOR_SG_Boring_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proj_TOR_SG_Boring.Proj_TOR_SG_Boring_C
// 0x001E (0x07A8 - 0x078A)
class AProj_TOR_SG_Boring_C : public AProj_Weapon_BaseProjectile_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x078A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0790(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    Trail;                                                    // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Spark;                                                    // 0x07A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Proj_TOR_SG_Boring.Proj_TOR_SG_Boring_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void OnHitWorld(struct FHitResult* Hit);
	void OnHitDamagableObject(struct FHitResult* Hit);
	void BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature_Proj_TOR_SG_Boring(const struct FHitResult& ImpactResult);
	void OnLastBounce(struct FHitResult* ImpactResult);
	void ReceiveBeginPlay();
	void BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectilePostLastBounceDelegate__DelegateSignature_Proj_TOR_SG_Boring(const struct FHitResult& ImpactResult);
	void ExecuteUbergraph_Proj_TOR_SG_Boring(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
