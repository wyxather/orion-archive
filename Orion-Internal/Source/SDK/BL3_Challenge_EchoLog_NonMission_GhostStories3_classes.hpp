#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_EchoLog_NonMission_GhostStories3_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_EchoLog_NonMission_GhostStories3.Challenge_EchoLog_NonMission_GhostStories3_C
// 0x0000 (0x0260 - 0x0260)
class UChallenge_EchoLog_NonMission_GhostStories3_C : public UChallenge_Discovery_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_EchoLog_NonMission_GhostStories3.Challenge_EchoLog_NonMission_GhostStories3_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
