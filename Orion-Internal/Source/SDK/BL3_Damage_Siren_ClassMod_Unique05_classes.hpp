#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Damage_Siren_ClassMod_Unique05_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Damage_Siren_ClassMod_Unique05.Damage_Siren_ClassMod_Unique05_C
// 0x0000 (0x0310 - 0x0310)
class UDamage_Siren_ClassMod_Unique05_C : public UDamage_WeaponProjectile_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Damage_Siren_ClassMod_Unique05.Damage_Siren_ClassMod_Unique05_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
