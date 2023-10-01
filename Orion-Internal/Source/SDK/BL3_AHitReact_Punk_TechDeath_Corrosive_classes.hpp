#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AHitReact_Punk_TechDeath_Corrosive_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AHitReact_Punk_TechDeath_Corrosive.AHitReact_Punk_TechDeath_Corrosive_C
// 0x0000 (0x0200 - 0x0200)
class UAHitReact_Punk_TechDeath_Corrosive_C : public UAPhys_Ragdoll_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AHitReact_Punk_TechDeath_Corrosive.AHitReact_Punk_TechDeath_Corrosive_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
