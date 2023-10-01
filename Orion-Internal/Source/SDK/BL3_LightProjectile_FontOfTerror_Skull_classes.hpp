#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_FontOfTerror_Skull_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_FontOfTerror_Skull.LightProjectile_FontOfTerror_Skull_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_FontOfTerror_Skull_C : public UOakLightProjectileData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_FontOfTerror_Skull.LightProjectile_FontOfTerror_Skull_C");
		return ptr;
	}


	void HomeIn(class UOakLightProjectile* Projectile);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
