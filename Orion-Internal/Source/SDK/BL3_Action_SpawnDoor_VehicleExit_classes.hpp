#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_SpawnDoor_VehicleExit_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_SpawnDoor_VehicleExit.Action_SpawnDoor_VehicleExit_C
// 0x0000 (0x0218 - 0x0218)
class UAction_SpawnDoor_VehicleExit_C : public UOakAction_Anim
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_SpawnDoor_VehicleExit.Action_SpawnDoor_VehicleExit_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
