#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Salvage_AtlasHQ_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_Salvage_AtlasHQ.Challenge_Salvage_AtlasHQ_C
// 0x0000 (0x0378 - 0x0378)
class UChallenge_Salvage_AtlasHQ_C : public UChallenge_Salvage_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Salvage_AtlasHQ.Challenge_Salvage_AtlasHQ_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
