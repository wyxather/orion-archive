#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_HostileLeapOnVehicle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass A_HostileLeapOnVehicle.A_HostileLeapOnVehicle_C
// 0x0000 (0x0310 - 0x0310)
class UA_HostileLeapOnVehicle_C : public UOakAction_LeapOnVehicle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass A_HostileLeapOnVehicle.A_HostileLeapOnVehicle_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
