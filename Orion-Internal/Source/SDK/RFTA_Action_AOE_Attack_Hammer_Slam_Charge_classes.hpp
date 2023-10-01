#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_AOE_Attack_Hammer_Slam_Charge_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_AOE_Attack_Hammer_Slam_Charge.Action_AOE_Attack_Hammer_Slam_Charge_C
// 0x0000 (0x0290 - 0x0290)
class UAction_AOE_Attack_Hammer_Slam_Charge_C : public UAction_AOE_Attack_Hammer_Slam_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_AOE_Attack_Hammer_Slam_Charge.Action_AOE_Attack_Hammer_Slam_Charge_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
