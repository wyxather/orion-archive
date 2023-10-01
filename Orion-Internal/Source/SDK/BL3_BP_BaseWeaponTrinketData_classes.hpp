#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_BaseWeaponTrinketData_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_BaseWeaponTrinketData.BP_BaseWeaponTrinketData_C
// 0x0000 (0x01F0 - 0x01F0)
class UBP_BaseWeaponTrinketData_C : public UWeaponTrinketPartData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BaseWeaponTrinketData.BP_BaseWeaponTrinketData_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
