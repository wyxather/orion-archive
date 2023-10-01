#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWidget_VehiclePartUnlocked_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWidget_VehiclePartUnlocked.BPWidget_VehiclePartUnlocked_C
// 0x0000 (0x06A0 - 0x06A0)
class UBPWidget_VehiclePartUnlocked_C : public UGFxVehiclePartUnlockedWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWidget_VehiclePartUnlocked.BPWidget_VehiclePartUnlocked_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
