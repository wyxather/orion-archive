#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_AnimTechDeath_Shock_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_AnimTechDeath_Shock.Action_AnimTechDeath_Shock_C
// 0x0000 (0x0200 - 0x0200)
class UAction_AnimTechDeath_Shock_C : public UAPhys_Ragdoll_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_AnimTechDeath_Shock.Action_AnimTechDeath_Shock_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
