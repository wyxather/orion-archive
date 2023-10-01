#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_VehicleWheel_Outrunner_Twitchy_B_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass VehicleWheel_Outrunner_Twitchy_B.VehicleWheel_Outrunner_Twitchy_B_C
// 0x0000 (0x0130 - 0x0130)
class UVehicleWheel_Outrunner_Twitchy_B_C : public UVehicleWheel_Outrunner_Normal_B_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VehicleWheel_Outrunner_Twitchy_B.VehicleWheel_Outrunner_Twitchy_B_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
