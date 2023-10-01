#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_PS_MAL_HotGreaseShot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_PS_MAL_HotGreaseShot.LightProjectile_PS_MAL_HotGreaseShot_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_PS_MAL_HotGreaseShot_C : public UOakLightProjectileData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_PS_MAL_HotGreaseShot.LightProjectile_PS_MAL_HotGreaseShot_C");
		return ptr;
	}


	void OnBegin(class ULightProjectile** Projectile);
	void OnDamage(class ULightProjectile** Projectile, struct FHitResult* Hit, bool* bCritical);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
