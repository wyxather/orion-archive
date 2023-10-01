#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_EG_SkillEndBonusEleDamage_Radiation_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_EG_SkillEndBonusEleDamage_Radiation.Ability_EG_SkillEndBonusEleDamage_Radiation_C
// 0x0000 (0x01C1 - 0x01C1)
class UAbility_EG_SkillEndBonusEleDamage_Radiation_C : public UAbility_EG_SkillEndBonusEleDamage_Raid1Parent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_EG_SkillEndBonusEleDamage_Radiation.Ability_EG_SkillEndBonusEleDamage_Radiation_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
