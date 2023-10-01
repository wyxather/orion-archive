#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_AOE_Mod_ExplosiveShot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_AOE_Mod_ExplosiveShot.Action_AOE_Mod_ExplosiveShot_C
// 0x0000 (0x02A0 - 0x02A0)
class UAction_AOE_Mod_ExplosiveShot_C : public UAction_AOE_ForceImpulse_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_AOE_Mod_ExplosiveShot.Action_AOE_Mod_ExplosiveShot_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
