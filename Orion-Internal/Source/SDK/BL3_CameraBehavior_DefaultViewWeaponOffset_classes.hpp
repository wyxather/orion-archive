#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_CameraBehavior_DefaultViewWeaponOffset_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CameraBehavior_DefaultViewWeaponOffset.CameraBehavior_DefaultViewWeaponOffset_C
// 0x0000 (0x0080 - 0x0080)
class UCameraBehavior_DefaultViewWeaponOffset_C : public UCameraBehavior_ViewWeaponOffset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CameraBehavior_DefaultViewWeaponOffset.CameraBehavior_DefaultViewWeaponOffset_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
