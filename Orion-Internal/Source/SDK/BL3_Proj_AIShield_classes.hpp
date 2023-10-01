#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_AIShield_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proj_AIShield.Proj_AIShield_C
// 0x0038 (0x0718 - 0x06E0)
class AProj_AIShield_C : public AOakAIBalancedProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06E0(0x0008) (Transient, DuplicateTransient)
	class URotatingMovementComponent*                  RotatingMovement;                                         // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    TrailFX;                                                  // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        ShieldMesh;                                               // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxProjectileMovementComponent*             GbxProjectileMovement;                                    // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      MyDamageData;                                             // 0x0708(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EOakElementalType                                  ElementalType;                                            // 0x0710(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InFlight;                                                 // 0x0711(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0712(0x0002) MISSED OFFSET
	float                                              DelayBeforeDestruction;                                   // 0x0714(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Proj_AIShield.Proj_AIShield_C");
		return ptr;
	}


	void AIMelee_GetElementalTypeFromMeleeWeapon(EOakElementalType* MeleeWeaponElement);
	void CauseDamageOnImpact(struct FHitResult* Hit);
	void UserConstructionScript();
	void AIMelee_Spawn();
	void AIMelee_Drop(bool RequestNewMeleeWeapon);
	void AIMelee_ThrowAtTarget(float ThrowSpeed, float ThrowAnglePercent, const struct FName& TargetSocket, const struct FVector& TargetOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewMeleeWeapon, bool SpawnIfDoesntExist);
	void AIMelee_ThrowAtActor(class AActor* ActorToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, const struct FName& ActorSocket, const struct FVector& ActorOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewMeleeWeapon, bool SpawnIfDoesntExist);
	void AIMelee_ThrowAtLocation(const struct FVector& LocationToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, bool RequestNewMeleeWeapon, bool SpawnIfDoesntExist);
	void AIMelee_SetNewMeleeWeaponClass(class UClass* NewMeleeWeaponClass);
	void HNT_Prime();
	void BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature_Proj_PsychoMale_Shared_ThrownMelee(const struct FHitResult& ImpactResult);
	void HNT_Throw();
	void OnHitWorld(struct FHitResult* Hit);
	void BndEvt__MeleeMesh_K2Node_ComponentBoundEvent_11_ComponentSleepSignature__DelegateSignature_Proj_Melee(class UPrimitiveComponent* SleepingComponent, const struct FName& BoneName);
	void HNT_Drop();
	void OnHitEnemy(struct FHitResult* Hit);
	void OnHitFriendly(struct FHitResult* Hit);
	void OnHitNeutral(struct FHitResult* Hit);
	void ExecuteUbergraph_Proj_AIShield(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
