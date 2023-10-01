#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_Peashooter_Ricochet_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_Peashooter_Ricochet.LightProjectile_Peashooter_Ricochet_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_Peashooter_Ricochet_C : public UOakLightProjectileData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_Peashooter_Ricochet.LightProjectile_Peashooter_Ricochet_C");
		return ptr;
	}


	void OnRicochet(class ULightProjectile** Projectile, struct FHitResult* Hit, struct FVector* ImpactVelocity);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
