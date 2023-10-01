#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_VehicleKill_Emperor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_VehicleKill_Emperor.Challenge_VehicleKill_Emperor_C
// 0x0000 (0x0260 - 0x0260)
class UChallenge_VehicleKill_Emperor_C : public UChallenge_VehicleKill_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_VehicleKill_Emperor.Challenge_VehicleKill_Emperor_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
