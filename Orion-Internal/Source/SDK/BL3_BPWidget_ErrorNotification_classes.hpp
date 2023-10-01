#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWidget_ErrorNotification_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWidget_ErrorNotification.BPWidget_ErrorNotification_C
// 0x0000 (0x0590 - 0x0590)
class UBPWidget_ErrorNotification_C : public UGFxDisplayedNotificationWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWidget_ErrorNotification.BPWidget_ErrorNotification_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
