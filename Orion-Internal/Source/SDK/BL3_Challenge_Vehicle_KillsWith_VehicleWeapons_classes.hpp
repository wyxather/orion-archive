#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Vehicle_KillsWith_VehicleWeapons_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_Vehicle_KillsWith_VehicleWeapons.Challenge_Vehicle_KillsWith_VehicleWeapons_C
// 0x0000 (0x0260 - 0x0260)
class UChallenge_Vehicle_KillsWith_VehicleWeapons_C : public UOakChallenge
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Vehicle_KillsWith_VehicleWeapons.Challenge_Vehicle_KillsWith_VehicleWeapons_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
