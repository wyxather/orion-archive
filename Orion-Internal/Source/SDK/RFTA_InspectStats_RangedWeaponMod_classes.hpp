#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_InspectStats_RangedWeaponMod_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass InspectStats_RangedWeaponMod.InspectStats_RangedWeaponMod_C
// 0x0000 (0x0038 - 0x0038)
class UInspectStats_RangedWeaponMod_C : public UStats
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass InspectStats_RangedWeaponMod.InspectStats_RangedWeaponMod_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
