#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_AIPOIType_SleepGround_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AIPOIType_SleepGround.AIPOIType_SleepGround_C
// 0x0000 (0x0038 - 0x0038)
class UAIPOIType_SleepGround_C : public UAIPOIType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AIPOIType_SleepGround.AIPOIType_SleepGround_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
