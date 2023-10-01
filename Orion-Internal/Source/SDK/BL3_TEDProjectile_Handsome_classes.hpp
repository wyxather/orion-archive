#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_TEDProjectile_Handsome_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TEDProjectile_Handsome.TEDProjectile_Handsome_C
// 0x0076 (0x08AE - 0x0838)
class ATEDProjectile_Handsome_C : public ATedioreProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0838(0x0008) (Transient, DuplicateTransient)
	class UOakDialogComponent*                         OakDialog;                                                // 0x0840(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWwiseEvent*                                 Stock_Booster;                                            // 0x0848(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      BehaviorCurrent;                                          // 0x0850(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HalfHeight;                                               // 0x0858(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x085C(0x0004) MISSED OFFSET
	struct FTransform                                  SpawnTransform;                                           // 0x0860(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               OnGround;                                                 // 0x0890(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Shooting;                                                 // 0x0891(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0892(0x0006) MISSED OFFSET
	class UParticleSystemComponent*                    FX_Stabilizer;                                            // 0x0898(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               Homing;                                                   // 0x08A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StickY;                                                   // 0x08A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Combo;                                                    // 0x08A2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AICanSteal;                                               // 0x08A3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MIRV;                                                     // 0x08A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Bouncy;                                                   // 0x08A5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Default;                                                  // 0x08A6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x08A7(0x0001) MISSED OFFSET
	float                                              FuseTime;                                                 // 0x08A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FuseTriggered;                                            // 0x08AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanWalk;                                                  // 0x08AD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TEDProjectile_Handsome.TEDProjectile_Handsome_C");
		return ptr;
	}


	void SetExplosionRadius();
	bool AIProjectile_CanBeStolen();
	void AIProjectileArm();
	void AIProjectileDisarm();
	float CalculateExplosionDamage(float* DamagePerShot, int* BulletsPerShot);
	void RemoveAmmo(int* ThrowType);
	void SpawnRotationandOffset(const struct FVector& Location, const struct FVector& HitNormal, const struct FVector& Normal, struct FTransform* Transform);
	void InitCombo();
	void StabilizerFXandAudio();
	void StabilizerBoostBouncy();
	void StabilizerBoost();
	void InitHoming();
	void InitRotation(int ThrowStyle);
	void InitStabilizer();
	void UserConstructionScript();
	void OnBehaviorInitialized(class UClass** BehaviorClass);
	void HomingThrust();
	void BndEvt__TedioreProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature_TEDProjectile_Base(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
	void AIProjectile_Arm();
	void ReceiveBeginPlay();
	void EnableDrunk();
	void AIProjectile_Disarm();
	void FuseExpired();
	void OnHitWorld(struct FHitResult* Hit);
	void BndEvt__TedioreProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectilePostLastBounceDelegate__DelegateSignature_TEDProjectile_Handsome(const struct FHitResult& ImpactResult);
	void ExecuteUbergraph_TEDProjectile_Handsome(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
