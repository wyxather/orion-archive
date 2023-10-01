#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_Lightspeed_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_Lightspeed.LightProjectile_Lightspeed_C
// 0x00B8 (0x03F8 - 0x0340)
class ULightProjectile_Lightspeed_C : public UOakLightProjectileData
{
public:
	struct FEnvQueryParams                             EnvQuery;                                                 // 0x0340(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_Lightspeed.LightProjectile_Lightspeed_C");
		return ptr;
	}


	void OnBegin(class ULightProjectile** Projectile);
	void OnRicochet(class ULightProjectile** Projectile, struct FHitResult* Hit, struct FVector* ImpactVelocity);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
