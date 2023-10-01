#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Weapon_Hardpoint_Minigun_Mod3_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Weapon_Hardpoint_Minigun_Mod3.Weapon_Hardpoint_Minigun_Mod3_C
// 0x0000 (0x0C00 - 0x0C00)
class AWeapon_Hardpoint_Minigun_Mod3_C : public AWeapon_Hardpoint_Minigun_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Hardpoint_Minigun_Mod3.Weapon_Hardpoint_Minigun_Mod3_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
