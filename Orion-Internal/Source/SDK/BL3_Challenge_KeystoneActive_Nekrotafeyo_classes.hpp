#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_KeystoneActive_Nekrotafeyo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_KeystoneActive_Nekrotafeyo.Challenge_KeystoneActive_Nekrotafeyo_C
// 0x0000 (0x02E8 - 0x02E8)
class UChallenge_KeystoneActive_Nekrotafeyo_C : public UChallenge_EridianWriting_Planet_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_KeystoneActive_Nekrotafeyo.Challenge_KeystoneActive_Nekrotafeyo_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
