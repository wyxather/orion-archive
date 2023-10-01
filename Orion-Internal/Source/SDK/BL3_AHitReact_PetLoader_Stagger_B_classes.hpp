#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AHitReact_PetLoader_Stagger_B_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AHitReact_PetLoader_Stagger_B.AHitReact_PetLoader_Stagger_B_C
// 0x0000 (0x0218 - 0x0218)
class UAHitReact_PetLoader_Stagger_B_C : public UOakAction_Anim
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AHitReact_PetLoader_Stagger_B.AHitReact_PetLoader_Stagger_B_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
