#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWidget_CrewChallengeCompleted_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWidget_CrewChallengeCompleted.BPWidget_CrewChallengeCompleted_C
// 0x0000 (0x05C0 - 0x05C0)
class UBPWidget_CrewChallengeCompleted_C : public UGFxCrewChallengeCompletedNotificationWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWidget_CrewChallengeCompleted.BPWidget_CrewChallengeCompleted_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
