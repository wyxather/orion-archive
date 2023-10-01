#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_CM_Gunner_StickyBomb_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_CM_Gunner_StickyBomb.LightProjectile_CM_Gunner_StickyBomb_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_CM_Gunner_StickyBomb_C : public ULightProjectile_AssaultRifle_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_CM_Gunner_StickyBomb.LightProjectile_CM_Gunner_StickyBomb_C");
		return ptr;
	}


	void OnLifetimeExpired(class ULightProjectile** Projectile);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
