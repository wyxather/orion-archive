#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Vehicle_SharedSettings_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Vehicle_SharedSettings.Action_Vehicle_SharedSettings_C
// 0x0000 (0x0220 - 0x0220)
class UAction_Vehicle_SharedSettings_C : public UOakAction_VehicleInteractionAnim
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Vehicle_SharedSettings.Action_Vehicle_SharedSettings_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
