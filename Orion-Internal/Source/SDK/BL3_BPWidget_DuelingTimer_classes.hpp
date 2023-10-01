#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWidget_DuelingTimer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWidget_DuelingTimer.BPWidget_DuelingTimer_C
// 0x0000 (0x0670 - 0x0670)
class UBPWidget_DuelingTimer_C : public UGFxDuelingTimerWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWidget_DuelingTimer.BPWidget_DuelingTimer_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
