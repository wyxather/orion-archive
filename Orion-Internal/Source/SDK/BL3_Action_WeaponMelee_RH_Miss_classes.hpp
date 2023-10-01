#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_WeaponMelee_RH_Miss_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_WeaponMelee_RH_Miss.Action_WeaponMelee_RH_Miss_C
// 0x0000 (0x0220 - 0x0220)
class UAction_WeaponMelee_RH_Miss_C : public UAction_WeaponMelee_Base_Miss_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_WeaponMelee_RH_Miss.Action_WeaponMelee_RH_Miss_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
