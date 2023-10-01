#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_GM_WidowMaker_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_GM_WidowMaker.LightProjectile_GM_WidowMaker_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_GM_WidowMaker_C : public ULightProjectile_GM_Master_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_GM_WidowMaker.LightProjectile_GM_WidowMaker_C");
		return ptr;
	}


	void Home(class UOakLightProjectile* Projectile);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
