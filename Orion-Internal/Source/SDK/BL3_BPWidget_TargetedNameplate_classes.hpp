#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWidget_TargetedNameplate_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWidget_TargetedNameplate.BPWidget_TargetedNameplate_C
// 0x0000 (0x0650 - 0x0650)
class UBPWidget_TargetedNameplate_C : public UGFxTargetedNameplate
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWidget_TargetedNameplate.BPWidget_TargetedNameplate_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
