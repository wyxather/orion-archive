#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Weapon_DakkaBear_Turret_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Weapon_DakkaBear_Turret.Weapon_DakkaBear_Turret_C
// 0x0038 (0x0998 - 0x0960)
class AWeapon_DakkaBear_Turret_C : public AOakWeapon
{
public:
	class UBPHeatComponent_Weapon_Base_C*              BPHeatComponent_Weapon_Base;                              // 0x0960(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0968(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWeaponAmmoPoolComponent*                    WeaponAmmoPool;                                           // 0x0970(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UOakWeaponAudioProviderComponent*            OakWeaponAudioProvider;                                   // 0x0978(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWeaponRecoilPatternComponent*               WeaponRecoilPattern;                                      // 0x0980(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWeaponZoomComponent*                        WeaponZoom;                                               // 0x0988(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWeaponFireProjectileComponent*              WeaponFireProjectile;                                     // 0x0990(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_DakkaBear_Turret.Weapon_DakkaBear_Turret_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
