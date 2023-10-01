#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Mod_BreathOfTheDesert_AOE_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Mod_BreathOfTheDesert_AOE.Action_Mod_BreathOfTheDesert_AOE_C
// 0x0000 (0x027E - 0x027E)
class UAction_Mod_BreathOfTheDesert_AOE_C : public UAction_AOE_Attack_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Mod_BreathOfTheDesert_AOE.Action_Mod_BreathOfTheDesert_AOE_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
