#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_PetSpiderant_Ranged_Fire_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Projectile_PetSpiderant_Ranged_Fire.Projectile_PetSpiderant_Ranged_Fire_C
// 0x0000 (0x0720 - 0x0720)
class AProjectile_PetSpiderant_Ranged_Fire_C : public AProjectile_PetSpiderant_BileBomb_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Projectile_PetSpiderant_Ranged_Fire.Projectile_PetSpiderant_Ranged_Fire_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
