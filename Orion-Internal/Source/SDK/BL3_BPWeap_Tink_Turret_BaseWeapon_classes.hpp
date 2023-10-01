#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_Tink_Turret_BaseWeapon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeap_Tink_Turret_BaseWeapon.BPWeap_Tink_Turret_BaseWeapon_C
// 0x0000 (0x09B4 - 0x09B4)
class ABPWeap_Tink_Turret_BaseWeapon_C : public ABPWeap_Enemy_BaseWeapon_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeap_Tink_Turret_BaseWeapon.BPWeap_Tink_Turret_BaseWeapon_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
