#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_OpCannon_EquipFire_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass A_OpCannon_EquipFire.A_OpCannon_EquipFire_C
// 0x0000 (0x0220 - 0x0220)
class UA_OpCannon_EquipFire_C : public UA_OpCannon_Fire_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass A_OpCannon_EquipFire.A_OpCannon_EquipFire_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
