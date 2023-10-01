#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Init_Operative_KillSkill_Parent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Init_Operative_KillSkill_Parent.Init_Operative_KillSkill_Parent_C
// 0x0000 (0x0030 - 0x0030)
class UInit_Operative_KillSkill_Parent_C : public UInit_Players_PassiveAbility_Parent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Init_Operative_KillSkill_Parent.Init_Operative_KillSkill_Parent_C");
		return ptr;
	}


	void Get_Death_Follows_Close_Bonus(class UObject* Object, float* Ability_Mod_Bonus);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
