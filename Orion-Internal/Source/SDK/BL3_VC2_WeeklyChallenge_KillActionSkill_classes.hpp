#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_VC2_WeeklyChallenge_KillActionSkill_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass VC2_WeeklyChallenge_KillActionSkill.VC2_WeeklyChallenge_KillActionSkill_C
// 0x0000 (0x0260 - 0x0260)
class UVC2_WeeklyChallenge_KillActionSkill_C : public UVC1_WeeklyChallenge_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VC2_WeeklyChallenge_KillActionSkill.VC2_WeeklyChallenge_KillActionSkill_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
