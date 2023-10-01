#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWidget_IronBearEjectWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWidget_IronBearEjectWidget.BPWidget_IronBearEjectWidget_C
// 0x0000 (0x0640 - 0x0640)
class UBPWidget_IronBearEjectWidget_C : public UGFxIronbearEjectWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWidget_IronBearEjectWidget.BPWidget_IronBearEjectWidget_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
