#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AKey_TakeThenGive_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AKey_TakeThenGive.AKey_TakeThenGive_C
// 0x0000 (0x0068 - 0x0068)
class UAKey_TakeThenGive_C : public UGbxAction_KeyedContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AKey_TakeThenGive.AKey_TakeThenGive_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
