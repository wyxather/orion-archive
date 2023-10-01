#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_Rakk_Spit_Radiation_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Projectile_Rakk_Spit_Radiation.Projectile_Rakk_Spit_Radiation_C
// 0x0000 (0x07E0 - 0x07E0)
class AProjectile_Rakk_Spit_Radiation_C : public AProjectile_Rakk_Spit_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Projectile_Rakk_Spit_Radiation.Projectile_Rakk_Spit_Radiation_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
