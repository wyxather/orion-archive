#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_Pyroburst_Main_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_Pyroburst_Main.LightProjectile_Pyroburst_Main_C
// 0x00B8 (0x03F8 - 0x0340)
class ULightProjectile_Pyroburst_Main_C : public UOakLightProjectileData
{
public:
	struct FEnvQueryParams                             Query;                                                    // 0x0340(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_Pyroburst_Main.LightProjectile_Pyroburst_Main_C");
		return ptr;
	}


	void OnExplode(class ULightProjectile** Projectile);
	void OnBegin(class ULightProjectile** Projectile);
	void OnLifetimeExpired(class ULightProjectile** Projectile);
	void OnImpact(class ULightProjectile** Projectile, struct FHitResult* Hit);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
