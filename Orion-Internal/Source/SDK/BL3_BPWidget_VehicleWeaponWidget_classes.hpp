#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWidget_VehicleWeaponWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWidget_VehicleWeaponWidget.BPWidget_VehicleWeaponWidget_C
// 0x0000 (0x0660 - 0x0660)
class UBPWidget_VehicleWeaponWidget_C : public UGFxVehicleWeaponContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWidget_VehicleWeaponWidget.BPWidget_VehicleWeaponWidget_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
