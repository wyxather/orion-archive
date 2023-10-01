#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_WeaponType_Hardpoint_Railgun_Mod3_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeaponType_Hardpoint_Railgun_Mod3.WeaponType_Hardpoint_Railgun_Mod3_C
// 0x0000 (0x0B00 - 0x0B00)
class AWeaponType_Hardpoint_Railgun_Mod3_C : public AWeaponType_Hardpoint_Railgun_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeaponType_Hardpoint_Railgun_Mod3.WeaponType_Hardpoint_Railgun_Mod3_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
