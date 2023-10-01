#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_DroneProj_TED_DarkArmy_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C
// 0x0110 (0x0840 - 0x0730)
class ADroneProj_TED_DarkArmy_C : public AOakDroneProjectile
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
	float                                              BulletDamage;                                             // 0x0770(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FireRate;                                                 // 0x0774(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ABPWeap_Tediore_BaseWeapon_C*                Weapon;                                                   // 0x0778(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               ReloadPowerActive;                                        // 0x0780(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0781(0x0007) MISSED OFFSET
	struct FEnvQueryParams                             LOSQuery;                                                 // 0x0788(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DroneProj_TED_DarkArmy.DroneProj_TED_DarkArmy_C");
		return ptr;
	}


	void DistanceCHeck();
	void DestroyDrone();
	void FireWeapon();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void PutDownNotify(class AWeapon* EventWeapon);
	void OnBeginExplode();
	void ReloadStarted(class AWeapon* EventWeapon, bool bAutoReload);
	void ExecuteUbergraph_DroneProj_TED_DarkArmy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
