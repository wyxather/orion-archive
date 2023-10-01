#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Weapon_Reload_Master_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Weapon_Reload_Master.Action_Weapon_Reload_Master_C
// 0x0000 (0x0220 - 0x0220)
class UAction_Weapon_Reload_Master_C : public UOakAction_Anim_WeaponReload
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Weapon_Reload_Master.Action_Weapon_Reload_Master_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
