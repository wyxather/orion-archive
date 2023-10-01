#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPClass_PlayerWeaponMeleeData_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPClass_PlayerWeaponMeleeData.BPClass_PlayerWeaponMeleeData_C
// 0x0000 (0x0140 - 0x0140)
class UBPClass_PlayerWeaponMeleeData_C : public UBPClass_PlayerMeleeData_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPClass_PlayerWeaponMeleeData.BPClass_PlayerWeaponMeleeData_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
