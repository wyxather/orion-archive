#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_APhys_Varkid_VehicleBump_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass APhys_Varkid_VehicleBump.APhys_Varkid_VehicleBump_C
// 0x0000 (0x0188 - 0x0188)
class UAPhys_Varkid_VehicleBump_C : public UAPhys_Enemy_VehicleBump_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass APhys_Varkid_VehicleBump.APhys_Varkid_VehicleBump_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
