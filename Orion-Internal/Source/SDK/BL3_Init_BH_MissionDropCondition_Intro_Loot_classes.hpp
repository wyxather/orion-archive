#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Init_BH_MissionDropCondition_Intro_Loot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Init_BH_MissionDropCondition_Intro_Loot.Init_BH_MissionDropCondition_Intro_Loot_C
// 0x0000 (0x0058 - 0x0058)
class UInit_BH_MissionDropCondition_Intro_Loot_C : public UInit_BH_MissionDropCondition_Intro_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Init_BH_MissionDropCondition_Intro_Loot.Init_BH_MissionDropCondition_Intro_Loot_C");
		return ptr;
	}


	float CalculateAttributeInitialValue(class UObject** Context);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
