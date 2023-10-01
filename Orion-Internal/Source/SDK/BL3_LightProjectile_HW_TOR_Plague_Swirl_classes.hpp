#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_HW_TOR_Plague_Swirl_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_HW_TOR_Plague_Swirl.LightProjectile_HW_TOR_Plague_Swirl_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_HW_TOR_Plague_Swirl_C : public UOakLightProjectileData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_HW_TOR_Plague_Swirl.LightProjectile_HW_TOR_Plague_Swirl_C");
		return ptr;
	}


	void OnLifetimeExpired(class ULightProjectile** Projectile);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
