#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_Boogeyman_Skull_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_Boogeyman_Skull.LightProjectile_Boogeyman_Skull_C
// 0x00B8 (0x03F8 - 0x0340)
class ULightProjectile_Boogeyman_Skull_C : public UOakLightProjectileData
{
public:
	struct FEnvQueryParams                             Query;                                                    // 0x0340(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_Boogeyman_Skull.LightProjectile_Boogeyman_Skull_C");
		return ptr;
	}


	void OnDamage(class ULightProjectile** Projectile, struct FHitResult* Hit, bool* bCritical);
	void HomeIn(class UOakLightProjectile* Projectile);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
