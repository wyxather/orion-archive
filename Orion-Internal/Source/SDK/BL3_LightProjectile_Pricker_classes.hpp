#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_Pricker_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_Pricker.LightProjectile_Pricker_C
// 0x00B8 (0x03F8 - 0x0340)
class ULightProjectile_Pricker_C : public UWeapon_Default_LightProjectile_C
{
public:
	struct FEnvQueryParams                             Query;                                                    // 0x0340(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_Pricker.LightProjectile_Pricker_C");
		return ptr;
	}


	void HomeIn(class ULightProjectile* Projectile);
	void OnLifetimeExpired(class ULightProjectile** Projectile);
	void OnDamage(class ULightProjectile** Projectile, struct FHitResult* Hit, bool* bCritical);
	void OnBegin(class ULightProjectile** Projectile);
	void OnAttached(class ULightProjectile** Projectile, class AActor** AttachedActor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
