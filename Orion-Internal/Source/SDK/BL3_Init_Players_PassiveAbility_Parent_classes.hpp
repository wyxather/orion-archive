#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Init_Players_PassiveAbility_Parent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Init_Players_PassiveAbility_Parent.Init_Players_PassiveAbility_Parent_C
// 0x0000 (0x0030 - 0x0030)
class UInit_Players_PassiveAbility_Parent_C : public UAttributeInitializer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Init_Players_PassiveAbility_Parent.Init_Players_PassiveAbility_Parent_C");
		return ptr;
	}


	void GetPassiveSkillGrade(class AActor* Context, class UClass* Skill, int* Grade);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
