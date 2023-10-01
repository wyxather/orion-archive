#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_COV_HW_POOP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_COV_HW_POOP.LightProjectile_COV_HW_POOP_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_COV_HW_POOP_C : public ULightProjectile_Heavy_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_COV_HW_POOP.LightProjectile_COV_HW_POOP_C");
		return ptr;
	}


	void OnExplode(class ULightProjectile** Projectile);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
