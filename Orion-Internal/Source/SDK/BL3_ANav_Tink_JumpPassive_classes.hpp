#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ANav_Tink_JumpPassive_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ANav_Tink_JumpPassive.ANav_Tink_JumpPassive_C
// 0x0000 (0x02E8 - 0x02E8)
class UANav_Tink_JumpPassive_C : public UGbxAction_NavJump
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ANav_Tink_JumpPassive.ANav_Tink_JumpPassive_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
