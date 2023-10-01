#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_SkillScreen_Unlocked_Operative_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_SkillScreen_Unlocked_Operative.Action_SkillScreen_Unlocked_Operative_C
// 0x0000 (0x0218 - 0x0218)
class UAction_SkillScreen_Unlocked_Operative_C : public UOakAction_Anim
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_SkillScreen_Unlocked_Operative.Action_SkillScreen_Unlocked_Operative_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
