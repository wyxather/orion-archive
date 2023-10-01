#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_Boss_ComputedStats_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Weapon_Boss_ComputedStats.Weapon_Boss_ComputedStats_C
// 0x0000 (0x003C - 0x003C)
class UWeapon_Boss_ComputedStats_C : public UWeapon_ComputedStats_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Boss_ComputedStats.Weapon_Boss_ComputedStats_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
