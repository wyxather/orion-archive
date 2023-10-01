#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_SM_Wall_Console_V2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SM_Wall_Console_V2.BP_SM_Wall_Console_V2_C
// 0x0000 (0x05F9 - 0x05F9)
class ABP_SM_Wall_Console_V2_C : public ABP_Screen_Actor_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SM_Wall_Console_V2.BP_SM_Wall_Console_V2_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
