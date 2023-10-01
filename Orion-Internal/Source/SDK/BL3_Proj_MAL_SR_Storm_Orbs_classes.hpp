#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_MAL_SR_Storm_Orbs_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C
// 0x0036 (0x07C0 - 0x078A)
class AProj_MAL_SR_Storm_Orbs_C : public AProj_Weapon_BaseProjectile_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x078A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0790(0x0008) (Transient, DuplicateTransient)
	class USphereComponent*                            TriggerCollision;                                         // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    PS_MAL_SMG_Plasma_Shock;                                  // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakTriggerComponent*                        OakTrigger;                                               // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class AActor*>                              AttachedTargets;                                          // 0x07B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Proj_MAL_SR_Storm_Orbs.Proj_MAL_SR_Storm_Orbs_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__OakTrigger_K2Node_ComponentBoundEvent_0_OakTouchedTriggerDelegate__DelegateSignature_Proj_MAL_SR_Storm_Orbs(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
	void ReceiveDestroyed();
	void WeaponProjectileExplode();
	void BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakUnTouchedTriggerDelegate__DelegateSignature_Proj_MAL_SR_Storm_Orbs(class AActor* LeavingActor, bool bIsPlayer);
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void Bobble();
	void ExecuteUbergraph_Proj_MAL_SR_Storm_Orbs(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
