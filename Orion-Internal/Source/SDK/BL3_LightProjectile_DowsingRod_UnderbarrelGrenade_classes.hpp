#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_DowsingRod_UnderbarrelGrenade_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_DowsingRod_UnderbarrelGrenade.LightProjectile_DowsingRod_UnderbarrelGrenade_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_DowsingRod_UnderbarrelGrenade_C : public UOakLightProjectileData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_DowsingRod_UnderbarrelGrenade.LightProjectile_DowsingRod_UnderbarrelGrenade_C");
		return ptr;
	}


	void OnLifetimeExpired(class ULightProjectile** Projectile);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
