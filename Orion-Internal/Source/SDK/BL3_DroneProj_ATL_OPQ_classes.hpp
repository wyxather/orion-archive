#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_DroneProj_ATL_OPQ_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DroneProj_ATL_OPQ.DroneProj_ATL_OPQ_C
// 0x0070 (0x07A0 - 0x0730)
class ADroneProj_ATL_OPQ_C : public AOakDroneProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0730(0x0008) (Transient, DuplicateTransient)
	class UWwiseAudioComponent*                        audio_drone_lp;                                           // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USocketComponent*                            Muzzle;                                                   // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    Booster_FX;                                               // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        MyBody;                                                   // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWwiseEvent*                                 CachedWeaponFireWwiseEvent;                               // 0x0758(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageType;                                               // 0x0760(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DamageSource;                                             // 0x0768(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TargetLocation;                                           // 0x0770(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              BulletDamage;                                             // 0x077C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FireRate;                                                 // 0x0780(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0784(0x0004) MISSED OFFSET
	class ABPWeap_Tediore_BaseWeapon_C*                Weapon;                                                   // 0x0788(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              LoadedAmmo;                                               // 0x0790(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxAmmo;                                                  // 0x0794(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABPWeap_ATL_BaseWeapon_C*                    OPQWeap;                                                  // 0x0798(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DroneProj_ATL_OPQ.DroneProj_ATL_OPQ_C");
		return ptr;
	}


	void DistanceCHeck();
	void NoFriends();
	void StopFire();
	void StartFire();
	void FireWeapon();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__DroneMovement_K2Node_ComponentBoundEvent_0_OakDroneProjectileFacingTargetChangedDelegate__DelegateSignature_DroneProj_TED_TenGallon(class AOakDroneProjectile* Drone);
	void PutDownNotify(class AWeapon* EventWeapon);
	void OnBeginExplode();
	void ExecuteUbergraph_DroneProj_ATL_OPQ(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
