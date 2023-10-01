#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWidget_MissionCompleted_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWidget_MissionCompleted.BPWidget_MissionCompleted_C
// 0x0000 (0x05C0 - 0x05C0)
class UBPWidget_MissionCompleted_C : public UGFxMissionCompletedNotificationWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWidget_MissionCompleted.BPWidget_MissionCompleted_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
