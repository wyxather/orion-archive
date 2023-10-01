#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ChallengeIxora2_HiddenEridium_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ChallengeIxora2_HiddenEridium.ChallengeIxora2_HiddenEridium_C
// 0x0000 (0x0260 - 0x0260)
class UChallengeIxora2_HiddenEridium_C : public UOakChallenge
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ChallengeIxora2_HiddenEridium.ChallengeIxora2_HiddenEridium_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
