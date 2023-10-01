#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Character_Root_Frog_Fire_Projectile_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Character_Root_Frog_Fire_Projectile.Action_Character_Root_Frog_Fire_Projectile_C
// 0x0000 (0x0260 - 0x0260)
class UAction_Character_Root_Frog_Fire_Projectile_C : public UAction_Fire_Projectile_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Character_Root_Frog_Fire_Projectile.Action_Character_Root_Frog_Fire_Projectile_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
