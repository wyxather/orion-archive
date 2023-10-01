#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_All_SkillEnd_WeaponDamage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_All_SkillEnd_WeaponDamage.Ability_All_SkillEnd_WeaponDamage_C
// 0x0000 (0x01C1 - 0x01C1)
class UAbility_All_SkillEnd_WeaponDamage_C : public UAbility_AnointParent_SkillEnd_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_All_SkillEnd_WeaponDamage.Ability_All_SkillEnd_WeaponDamage_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
