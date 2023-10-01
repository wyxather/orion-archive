#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Mod_FusionCannon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mod_FusionCannon.Mod_FusionCannon_C
// 0x00A0 (0x07B0 - 0x0710)
class AMod_FusionCannon_C : public ARangedWeapon_Mod_WeaponMode_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0710(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             SFX_Beam_Impact;                                          // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Beam_Start_Fire;                                          // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Beam_Fire_Loop;                                           // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URemnantEntitlement_C*                       RemnantEntitlement;                                       // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              WindupForceFeedback_Intensity_95A68D0C4236DEB3FFF487AC2D8A543A;// 0x0738(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    WindupForceFeedback__Direction_95A68D0C4236DEB3FFF487AC2D8A543A;// 0x073C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x3];                                       // 0x073D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          WindupForceFeedback;                                      // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Damage;                                                   // 0x0748(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               BeamFiring;                                               // 0x074C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	bool                                               HasCurrentBeamLocation;                                   // 0x074D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData01[0x2];                                       // 0x074E(0x0002) MISSED OFFSET
	struct FVector                                     CurrentBeamLocation;                                      // 0x0750(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Beam_Hit_Location_New;                                    // 0x075C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BeamDuration;                                             // 0x0768(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageFrequencyPerSecond;                                 // 0x076C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                DamageEventTimerHandle;                                   // 0x0770(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                              BeamRadius;                                               // 0x0778(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BeamLength;                                               // 0x077C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      DamageType;                                               // 0x0780(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackComponent*                     WindupFF;                                                 // 0x0788(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumChargesOnActivate;                                     // 0x0790(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IncrementDamagePercentPerCharge;                          // 0x0794(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BonusChargeBeamRadius;                                    // 0x0798(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x4];                                       // 0x079C(0x0004) MISSED OFFSET
	class UParticleSystem*                             ImpactVFX;                                                // 0x07A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AWeapon_Rural_FusionRifle_Beam_Endpoint_C*   BeamEndpoint;                                             // 0x07A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mod_FusionCannon.Mod_FusionCannon_C");
		return ptr;
	}


	void CheckStopActivation();
	void GetDamageForMultipleCharges(int* Charges, float* OutDamage);
	void DetermineStoppingPoint(struct FVector* Start, struct FVector* End, struct FVector* OutEndBeamLocation);
	void SweepDamage();
	void DamageActor(class AActor** Actor, struct FHitResult* Hit);
	void GetInterpolatedBeamLocation(struct FVector* End);
	void GetBeamStartStop(struct FVector* Start, struct FVector* Stop);
	void InterpolateBeamLocation(float* DeltaTime);
	void SetBeamLocation(struct FVector* Location);
	void OnEndBeamFX();
	void OnBeginBeamFX();
	void UpdateBeamVisibility();
	void OnRep_BeamFiring();
	void ModifyInspectInfo(class AActor** Actor, class UItemInstanceData** InInstanceData, struct FInspectInfo* Info, bool* Rtn);
	void ModifyDamage(struct FDamageInfo* Info, bool* Rtn);
	void WindupForceFeedback__FinishedFunc();
	void WindupForceFeedback__UpdateFunc();
	void SetBeamFiring_Server(bool* Firing);
	void SFXStartBeamLoops();
	void SFXEndBeamLoops();
	void ReceiveTick(float* DeltaSeconds);
	void StopFiringLaser();
	void DoDamage();
	void OnFire(struct FVector* from, struct FVector* to, float* WeaponSpread);
	void ServerApplyDamage(class AActor** Actor, struct FHitResult* Hit);
	void OnPreFireEnd();
	void OnActivateMod(EModActiveState* ActiveState);
	void OnPreFireBegin();
	void OnDetached();
	void OnDeactivate();
	void ExecuteUbergraph_Mod_FusionCannon(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
