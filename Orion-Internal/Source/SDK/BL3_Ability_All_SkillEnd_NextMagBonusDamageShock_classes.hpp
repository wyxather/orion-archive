#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_All_SkillEnd_NextMagBonusDamageShock_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_All_SkillEnd_NextMagBonusDamageShock.Ability_All_SkillEnd_NextMagBonusDamageShock_C
// 0x0000 (0x0240 - 0x0240)
class UAbility_All_SkillEnd_NextMagBonusDamageShock_C : public UAbility_All_SkillEnd_NextMagBonus_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_All_SkillEnd_NextMagBonusDamageShock.Ability_All_SkillEnd_NextMagBonusDamageShock_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
