#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_AnointParent_SkillEnd_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_AnointParent_SkillEnd.Ability_AnointParent_SkillEnd_C
// 0x0000 (0x01C1 - 0x01C1)
class UAbility_AnointParent_SkillEnd_C : public UAbility_AnointParent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_AnointParent_SkillEnd.Ability_AnointParent_SkillEnd_C");
		return ptr;
	}


	void AnointOnActionSkillCoolingDown(class UOakActionAbility** ActionAbility, bool* res);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
