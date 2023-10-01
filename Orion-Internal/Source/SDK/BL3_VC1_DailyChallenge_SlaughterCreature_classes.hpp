#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_VC1_DailyChallenge_SlaughterCreature_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass VC1_DailyChallenge_SlaughterCreature.VC1_DailyChallenge_SlaughterCreature_C
// 0x0000 (0x0260 - 0x0260)
class UVC1_DailyChallenge_SlaughterCreature_C : public UVC1_DailyChallenge_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VC1_DailyChallenge_SlaughterCreature.VC1_DailyChallenge_SlaughterCreature_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
