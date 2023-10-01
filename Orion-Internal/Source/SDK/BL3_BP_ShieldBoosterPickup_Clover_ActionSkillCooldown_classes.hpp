#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_ShieldBoosterPickup_Clover_ActionSkillCooldown_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ShieldBoosterPickup_Clover_ActionSkillCooldown.BP_ShieldBoosterPickup_Clover_ActionSkillCooldown_C
// 0x0000 (0x050C - 0x050C)
class ABP_ShieldBoosterPickup_Clover_ActionSkillCooldown_C : public ABP_ShieldBoosterPickup_Clover_Luck_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ShieldBoosterPickup_Clover_ActionSkillCooldown.BP_ShieldBoosterPickup_Clover_ActionSkillCooldown_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
