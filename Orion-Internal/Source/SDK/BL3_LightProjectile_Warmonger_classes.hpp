#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_Warmonger_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_Warmonger.LightProjectile_Warmonger_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_Warmonger_C : public ULightProjectile_ATL_SmartBullet_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_Warmonger.LightProjectile_Warmonger_C");
		return ptr;
	}


	void HomeIn(class UOakLightProjectile* Projectile);
	void OnLifetimeExpired(class ULightProjectile** Projectile);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
