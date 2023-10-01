#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWidget_ConnectionWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWidget_ConnectionWidget.BPWidget_ConnectionWidget_C
// 0x0000 (0x0630 - 0x0630)
class UBPWidget_ConnectionWidget_C : public UGbxGFXConnectionWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWidget_ConnectionWidget.BPWidget_ConnectionWidget_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
