#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_Lightspeed_Child_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_Lightspeed_Child.LightProjectile_Lightspeed_Child_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_Lightspeed_Child_C : public ULightProjectile_ATL_SmartBullet_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_Lightspeed_Child.LightProjectile_Lightspeed_Child_C");
		return ptr;
	}


	void OnLifetimeExpired(class ULightProjectile** Projectile);
	void HomeIn(class UOakLightProjectile* Projectile);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
