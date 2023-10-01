#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_VLA_PS_TaserTether_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C
// 0x00EA (0x0874 - 0x078A)
class AProj_VLA_PS_TaserTether_C : public AProj_Weapon_BaseProjectile_C
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x078A(0x0006) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0790(0x0008) (Transient, DuplicateTransient)
	class UOakTriggerComponent*                        OakTrigger;                                               // 0x0798(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            ProximityRadius;                                          // 0x07A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Shock_FX;                                                 // 0x07A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Attached;                                                 // 0x07B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x07B1(0x0007) MISSED OFFSET
	class AActor*                                      AttachedActor;                                            // 0x07B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AOakCharacter*                               OakCharacter;                                             // 0x07C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UOakStatusEffectManagerComponent*            HitEnemy_StatusEffectComp;                                // 0x07C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FHitResult                                  HitInfo_2;                                                // 0x07D0(0x0090) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              AttachedTargets;                                          // 0x0860(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                MaxTargets;                                               // 0x0870(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Proj_VLA_PS_TaserTether.Proj_VLA_PS_TaserTether_C");
		return ptr;
	}


	void TriggerElementalPuddles();
	void AttachBeam(class AActor* BeamTarget, class UClass* Data);
	void StopMovementEnableTrigger();
	void UserConstructionScript();
	void BPI_StartFuse();
	void BPI_Explode();
	void BPI_SetSimulatePhysics(bool PhysicsOn_);
	void BPI_ImpulseThrow(const struct FVector& ThrowVector, float Force, const struct FRotator& RotatorForSpin, float FuseSpeedScale, const struct FVector& AdditiveVector);
	void BPI_ResetHealth();
	void BPI_SetNavPainterEnabled(bool Enabled);
	void ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit);
	void ReceiveBeginPlay();
	void OnExplode();
	void BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Proj_VLA_PS_TaserTether(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
	void BndEvt__OakTrigger_K2Node_ComponentBoundEvent_2_OakUnTouchedTriggerDelegate__DelegateSignature_Proj_VLA_PS_TaserTether(class AActor* LeavingActor, bool bIsPlayer);
	void Destructible_Fractured(struct FVector* HitPoint, struct FVector* HitDetection);
	void BarrelExplode();
	void ExecuteUbergraph_Proj_VLA_PS_TaserTether(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
