#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AHitReact_PetLoader_Death_F_v2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AHitReact_PetLoader_Death_F_v2.AHitReact_PetLoader_Death_F_v2_C
// 0x0000 (0x0200 - 0x0200)
class UAHitReact_PetLoader_Death_F_v2_C : public UOakAction_PhysicalDeath
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AHitReact_PetLoader_Death_F_v2.AHitReact_PetLoader_Death_F_v2_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
