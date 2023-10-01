#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_Mod_FrozenMist_Actions_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Weapon_Mod_FrozenMist_Actions.Weapon_Mod_FrozenMist_Actions_C
// 0x0000 (0x0250 - 0x0250)
class UWeapon_Mod_FrozenMist_Actions_C : public UAction_List_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Mod_FrozenMist_Actions.Weapon_Mod_FrozenMist_Actions_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
