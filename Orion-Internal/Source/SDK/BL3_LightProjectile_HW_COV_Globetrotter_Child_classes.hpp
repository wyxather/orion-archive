#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_HW_COV_Globetrotter_Child_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_HW_COV_Globetrotter_Child.LightProjectile_HW_COV_Globetrotter_Child_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_HW_COV_Globetrotter_Child_C : public UOakLightProjectileData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_HW_COV_Globetrotter_Child.LightProjectile_HW_COV_Globetrotter_Child_C");
		return ptr;
	}


	void OnRicochet(class ULightProjectile** Projectile, struct FHitResult* Hit, struct FVector* ImpactVelocity);
	void OnImpact(class ULightProjectile** Projectile, struct FHitResult* Hit);
	void OnLifetimeExpired(class ULightProjectile** Projectile);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
