#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_BloodyHarvest_04_KillGhosts_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_BloodyHarvest_04_KillGhosts.Challenge_BloodyHarvest_04_KillGhosts_C
// 0x0000 (0x0260 - 0x0260)
class UChallenge_BloodyHarvest_04_KillGhosts_C : public UBP_Challenge_BloodyHarvest_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_BloodyHarvest_04_KillGhosts.Challenge_BloodyHarvest_04_KillGhosts_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
