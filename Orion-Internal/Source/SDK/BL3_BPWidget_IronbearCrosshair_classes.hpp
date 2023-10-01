#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWidget_IronbearCrosshair_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWidget_IronbearCrosshair.BPWidget_IronbearCrosshair_C
// 0x0000 (0x0870 - 0x0870)
class UBPWidget_IronbearCrosshair_C : public UGFxCrosshairWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWidget_IronbearCrosshair.BPWidget_IronbearCrosshair_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
