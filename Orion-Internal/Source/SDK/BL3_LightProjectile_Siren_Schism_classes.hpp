#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_Siren_Schism_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_Siren_Schism.LightProjectile_Siren_Schism_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_Siren_Schism_C : public UOakLightProjectileData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_Siren_Schism.LightProjectile_Siren_Schism_C");
		return ptr;
	}


	void OnDamage(class ULightProjectile** Projectile, struct FHitResult* Hit, bool* bCritical);
	void OnLifetimeExpired(class ULightProjectile** Projectile);
	void TryEnableProjectileHoming(class UOakLightProjectile* Projectile);
	void EnableProjectileHoming(class UOakLightProjectile* Projectile);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
