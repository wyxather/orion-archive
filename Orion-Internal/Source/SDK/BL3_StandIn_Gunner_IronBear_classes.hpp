#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_StandIn_Gunner_IronBear_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StandIn_Gunner_IronBear.StandIn_Gunner_IronBear_C
// 0x0000 (0x06A0 - 0x06A0)
class AStandIn_Gunner_IronBear_C : public AStandInAuxiliaryActor_IronBear
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StandIn_Gunner_IronBear.StandIn_Gunner_IronBear_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
