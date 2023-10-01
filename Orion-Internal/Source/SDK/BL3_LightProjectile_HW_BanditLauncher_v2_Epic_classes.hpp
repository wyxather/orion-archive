#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_HW_BanditLauncher_v2_Epic_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_HW_BanditLauncher_v2_Epic.LightProjectile_HW_BanditLauncher_v2_Epic_C
// 0x00B8 (0x03F8 - 0x0340)
class ULightProjectile_HW_BanditLauncher_v2_Epic_C : public ULightProjectile_GM_Master_C
{
public:
	struct FEnvQueryParams                             EnvQuery;                                                 // 0x0340(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_HW_BanditLauncher_v2_Epic.LightProjectile_HW_BanditLauncher_v2_Epic_C");
		return ptr;
	}


	void OnDamage(class ULightProjectile** Projectile, struct FHitResult* Hit, bool* bCritical);
	void OnAttached(class ULightProjectile** Projectile, class AActor** AttachedActor);
	void OnLifetimeExpired(class ULightProjectile** Projectile);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
