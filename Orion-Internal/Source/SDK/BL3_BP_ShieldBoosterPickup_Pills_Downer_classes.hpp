#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_ShieldBoosterPickup_Pills_Downer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ShieldBoosterPickup_Pills_Downer.BP_ShieldBoosterPickup_Pills_Downer_C
// 0x0000 (0x0508 - 0x0508)
class ABP_ShieldBoosterPickup_Pills_Downer_C : public ABP_ShieldBoosterPickup_Pills_Upper_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ShieldBoosterPickup_Pills_Downer.BP_ShieldBoosterPickup_Pills_Downer_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
