#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_Sidewinder_Sticky_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_Sidewinder_Sticky.LightProjectile_Sidewinder_Sticky_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_Sidewinder_Sticky_C : public UOakLightProjectileData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_Sidewinder_Sticky.LightProjectile_Sidewinder_Sticky_C");
		return ptr;
	}


	void OnImpact(class ULightProjectile** Projectile, struct FHitResult* Hit);
	void OnLifetimeExpired(class ULightProjectile** Projectile);
	void OnBegin(class ULightProjectile** Projectile);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
