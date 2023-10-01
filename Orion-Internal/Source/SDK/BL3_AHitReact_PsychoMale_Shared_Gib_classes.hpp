#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AHitReact_PsychoMale_Shared_Gib_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AHitReact_PsychoMale_Shared_Gib.AHitReact_PsychoMale_Shared_Gib_C
// 0x0000 (0x08F0 - 0x08F0)
class UAHitReact_PsychoMale_Shared_Gib_C : public UOakAction_Gib
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AHitReact_PsychoMale_Shared_Gib.AHitReact_PsychoMale_Shared_Gib_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
