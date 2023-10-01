#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_BloodyHarvest_10_Rare_Rakkman_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_BloodyHarvest_10_Rare_Rakkman.Challenge_BloodyHarvest_10_Rare_Rakkman_C
// 0x0000 (0x0298 - 0x0298)
class UChallenge_BloodyHarvest_10_Rare_Rakkman_C : public UChallenge_BloodyHarvest_Rare_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_BloodyHarvest_10_Rare_Rakkman.Challenge_BloodyHarvest_10_Rare_Rakkman_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
