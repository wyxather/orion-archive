#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Beast_BonusRadiationDamage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Beast_BonusRadiationDamage.Ability_Beast_BonusRadiationDamage_C
// 0x0000 (0x020A - 0x020A)
class UAbility_Beast_BonusRadiationDamage_C : public UAbility_AnointParent_Beastmaster_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Beast_BonusRadiationDamage.Ability_Beast_BonusRadiationDamage_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
