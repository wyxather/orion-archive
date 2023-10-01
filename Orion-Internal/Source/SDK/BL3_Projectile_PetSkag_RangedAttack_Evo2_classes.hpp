#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_PetSkag_RangedAttack_Evo2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Projectile_PetSkag_RangedAttack_Evo2.Projectile_PetSkag_RangedAttack_Evo2_C
// 0x0000 (0x0720 - 0x0720)
class AProjectile_PetSkag_RangedAttack_Evo2_C : public AProjectile_PetSkag_RangedAttack_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Projectile_PetSkag_RangedAttack_Evo2.Projectile_PetSkag_RangedAttack_Evo2_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
