#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWidget_CircleOfSlaughter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWidget_CircleOfSlaughter.BPWidget_CircleOfSlaughter_C
// 0x0000 (0x05E0 - 0x05E0)
class UBPWidget_CircleOfSlaughter_C : public UGFxGameModeNotificationWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWidget_CircleOfSlaughter.BPWidget_CircleOfSlaughter_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
