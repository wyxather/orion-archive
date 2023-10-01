#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWidget_VehicleSpeedometer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWidget_VehicleSpeedometer.BPWidget_VehicleSpeedometer_C
// 0x0000 (0x0650 - 0x0650)
class UBPWidget_VehicleSpeedometer_C : public UGFxVehicleSpeedometer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWidget_VehicleSpeedometer.BPWidget_VehicleSpeedometer_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
