#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_HW_VLA_Shells_Barrel_CloudBurst_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_HW_VLA_Shells_Barrel_CloudBurst.LightProjectile_HW_VLA_Shells_Barrel_CloudBurst_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_HW_VLA_Shells_Barrel_CloudBurst_C : public UOakLightProjectileData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_HW_VLA_Shells_Barrel_CloudBurst.LightProjectile_HW_VLA_Shells_Barrel_CloudBurst_C");
		return ptr;
	}


	void OnLifetimeExpired(class ULightProjectile** Projectile);
	void OnImpact(class ULightProjectile** Projectile, struct FHitResult* Hit);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
