#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ChallengeIxora2Mission_AvaPodcast_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ChallengeIxora2Mission_AvaPodcast.ChallengeIxora2Mission_AvaPodcast_C
// 0x0000 (0x0260 - 0x0260)
class UChallengeIxora2Mission_AvaPodcast_C : public UOakChallenge
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ChallengeIxora2Mission_AvaPodcast.ChallengeIxora2Mission_AvaPodcast_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
