#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_ClassModStat_DAHL_WeaponCriticalDamage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_ClassModStat_DAHL_WeaponCriticalDamage.Ability_ClassModStat_DAHL_WeaponCriticalDamage_C
// 0x0000 (0x011A - 0x011A)
class UAbility_ClassModStat_DAHL_WeaponCriticalDamage_C : public UBP_InventoryAbility_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_ClassModStat_DAHL_WeaponCriticalDamage.Ability_ClassModStat_DAHL_WeaponCriticalDamage_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
