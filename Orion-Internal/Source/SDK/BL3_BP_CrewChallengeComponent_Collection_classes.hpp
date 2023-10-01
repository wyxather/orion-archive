#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_CrewChallengeComponent_Collection_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_CrewChallengeComponent_Collection.BP_CrewChallengeComponent_Collection_C
// 0x0000 (0x07D0 - 0x07D0)
class UBP_CrewChallengeComponent_Collection_C : public UChallengeLevelActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CrewChallengeComponent_Collection.BP_CrewChallengeComponent_Collection_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
