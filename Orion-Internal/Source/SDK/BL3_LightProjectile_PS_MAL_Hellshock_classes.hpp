#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_PS_MAL_Hellshock_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_PS_MAL_Hellshock.LightProjectile_PS_MAL_Hellshock_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_PS_MAL_Hellshock_C : public UOakLightProjectileData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_PS_MAL_Hellshock.LightProjectile_PS_MAL_Hellshock_C");
		return ptr;
	}


	void OnLifetimeExpired(class ULightProjectile** Projectile);
	void OnRicochet(class ULightProjectile** Projectile, struct FHitResult* Hit, struct FVector* ImpactVelocity);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
