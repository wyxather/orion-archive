#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectile_MAL_SG_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeaponFireProjectile_MAL_SG.BPWeaponFireProjectile_MAL_SG_C
// 0x0000 (0x0958 - 0x0958)
class UBPWeaponFireProjectile_MAL_SG_C : public UWeaponFireProjectileComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeaponFireProjectile_MAL_SG.BPWeaponFireProjectile_MAL_SG_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
