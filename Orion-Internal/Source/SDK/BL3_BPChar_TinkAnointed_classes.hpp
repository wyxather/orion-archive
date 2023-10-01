#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_TinkAnointed_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_TinkAnointed.BPChar_TinkAnointed_C
// 0x0067 (0x2488 - 0x2421)
class ABPChar_TinkAnointed_C : public ABPChar_Tink_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x2421(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2428(0x0008) (Transient, DuplicateTransient)
	class UCapsuleComponent*                           GiantCollision;                                           // 0x2430(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneBodySwitchComponent*                   Switch_GiantCollision;                                    // 0x2438(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    TeleportTrail;                                            // 0x2440(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      NewVar_0_1;                                               // 0x2448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FVector                                     WasHitLocation;                                           // 0x2450(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     WasHitDirection;                                          // 0x245C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class UDamageCauserComponent*                      WhoDamagedMe;                                             // 0x2468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	float                                              AnointedTink_DefaultScale;                                // 0x2470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x2474(0x0004) MISSED OFFSET
	class AActor*                                      ActorICollidedWith;                                       // 0x2478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      DeathAnnointedAnimAction;                                 // 0x2480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_TinkAnointed.BPChar_TinkAnointed_C");
		return ptr;
	}


	void UserConstructionScript();
	void ShrunktoGrow();
	void AnointedFakeDeath(class AActor* Instigator);
	void ReceiveBeginPlay();
	void CE_ShrinkFromGrown();
	void CE_GrowFromShrunk();
	void Shrink();
	void Grow();
	void Tink_Anointed_Death();
	void Normal();
	void BndEvt__AICloak_K2Node_ComponentBoundEvent_0_AICloakEvent__DelegateSignature_BPChar_PsychoAnointed();
	void BndEvt__AICloak_K2Node_ComponentBoundEvent_1_AICloakEvent__DelegateSignature_BPChar_PsychoAnointed();
	void CanLaunch();
	void CannotLaunch();
	void ADDHealth();
	void CanLaunchColliision(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void Gigantic();
	void GiganticToNormal();
	void BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_HitByFriendlyDelegate__DelegateSignature_BPChar_TinkAnointed(const struct FHitByFriendlyEventDetails& Details);
	void TroyDeathModeOpens();
	void BndEvt__AIBalanceState_K2Node_ComponentBoundEvent_1_AnointedDeathStateEvent__DelegateSignature_BPChar_PsychoAnointed(EAnointedDeathState DeathState);
	void ExecuteUbergraph_BPChar_TinkAnointed(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
