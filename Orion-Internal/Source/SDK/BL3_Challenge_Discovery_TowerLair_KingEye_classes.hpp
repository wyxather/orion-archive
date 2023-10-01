#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Discovery_TowerLair_KingEye_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_Discovery_TowerLair_KingEye.Challenge_Discovery_TowerLair_KingEye_C
// 0x0000 (0x0260 - 0x0260)
class UChallenge_Discovery_TowerLair_KingEye_C : public UChallenge_Discovery_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Discovery_TowerLair_KingEye.Challenge_Discovery_TowerLair_KingEye_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
