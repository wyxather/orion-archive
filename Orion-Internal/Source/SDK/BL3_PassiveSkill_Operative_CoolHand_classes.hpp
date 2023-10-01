#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Operative_CoolHand_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PassiveSkill_Operative_CoolHand.PassiveSkill_Operative_CoolHand_C
// 0x0000 (0x01E0 - 0x01E0)
class UPassiveSkill_Operative_CoolHand_C : public UPassiveSkill_Operative_KillSkillParent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Operative_CoolHand.PassiveSkill_Operative_CoolHand_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
