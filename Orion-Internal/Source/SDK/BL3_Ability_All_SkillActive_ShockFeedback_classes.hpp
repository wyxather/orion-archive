#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_All_SkillActive_ShockFeedback_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_All_SkillActive_ShockFeedback.Ability_All_SkillActive_ShockFeedback_C
// 0x0000 (0x0212 - 0x0212)
class UAbility_All_SkillActive_ShockFeedback_C : public UAbility_AnointParent_SkillActive_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_All_SkillActive_ShockFeedback.Ability_All_SkillActive_ShockFeedback_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
