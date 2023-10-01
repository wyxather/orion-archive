#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Gore_LightBlueBlood_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Gore_LightBlueBlood.BP_Gore_LightBlueBlood_C
// 0x0000 (0x0470 - 0x0470)
class ABP_Gore_LightBlueBlood_C : public ABP_Gore_GibParent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Gore_LightBlueBlood.BP_Gore_LightBlueBlood_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
