#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_KillTarget_02_Sacrifice_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_KillTarget_02_Sacrifice.Challenge_KillTarget_02_Sacrifice_C
// 0x0000 (0x0350 - 0x0350)
class UChallenge_KillTarget_02_Sacrifice_C : public UChallenge_KillTarget_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_KillTarget_02_Sacrifice.Challenge_KillTarget_02_Sacrifice_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
