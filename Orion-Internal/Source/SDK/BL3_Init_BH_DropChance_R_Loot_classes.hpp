#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Init_BH_DropChance_R_Loot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Init_BH_DropChance_R_Loot.Init_BH_DropChance_R_Loot_C
// 0x0000 (0x0050 - 0x0050)
class UInit_BH_DropChance_R_Loot_C : public UInit_Season01_MissionDropCondition_Repeatable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Init_BH_DropChance_R_Loot.Init_BH_DropChance_R_Loot_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
