#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_GrenadeLauncher_Grenade_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_GrenadeLauncher_Grenade.LightProjectile_GrenadeLauncher_Grenade_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_GrenadeLauncher_Grenade_C : public UOakLightProjectileData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_GrenadeLauncher_Grenade.LightProjectile_GrenadeLauncher_Grenade_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
