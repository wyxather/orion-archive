#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Siren_SkillEnd_AttunedBonusDamage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Siren_SkillEnd_AttunedBonusDamage.Ability_Siren_SkillEnd_AttunedBonusDamage_C
// 0x0000 (0x01C1 - 0x01C1)
class UAbility_Siren_SkillEnd_AttunedBonusDamage_C : public UAbility_AnointParent_SkillEnd_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Siren_SkillEnd_AttunedBonusDamage.Ability_Siren_SkillEnd_AttunedBonusDamage_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
