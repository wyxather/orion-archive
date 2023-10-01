#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_Pyroburst_Child_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_Pyroburst_Child.LightProjectile_Pyroburst_Child_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_Pyroburst_Child_C : public UOakLightProjectileData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_Pyroburst_Child.LightProjectile_Pyroburst_Child_C");
		return ptr;
	}


	void OnBegin(class ULightProjectile** Projectile);
	void OnExplode(class ULightProjectile** Projectile);
	void OnLifetimeExpired(class ULightProjectile** Projectile);
	void OnImpact(class ULightProjectile** Projectile, struct FHitResult* Hit);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
