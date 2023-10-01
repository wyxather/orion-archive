#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_MissionScripted_BrokenVendingMachine_Weapon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IO_MissionScripted_BrokenVendingMachine_Weapon.IO_MissionScripted_BrokenVendingMachine_Weapon_C
// 0x0000 (0x0749 - 0x0749)
class AIO_MissionScripted_BrokenVendingMachine_Weapon_C : public AIO_MissionScripted_BrokenVendingMachine_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IO_MissionScripted_BrokenVendingMachine_Weapon.IO_MissionScripted_BrokenVendingMachine_Weapon_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
