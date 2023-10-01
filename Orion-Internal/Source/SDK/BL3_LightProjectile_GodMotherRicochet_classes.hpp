#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_GodMotherRicochet_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_GodMotherRicochet.LightProjectile_GodMotherRicochet_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_GodMotherRicochet_C : public UOakLightProjectileData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_GodMotherRicochet.LightProjectile_GodMotherRicochet_C");
		return ptr;
	}


	void HomeIn(class UOakLightProjectile* Projectile);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
