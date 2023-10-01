#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Siren_HelpingHands_Activate_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Siren_HelpingHands_Activate.Action_Siren_HelpingHands_Activate_C
// 0x0000 (0x0238 - 0x0238)
class UAction_Siren_HelpingHands_Activate_C : public UActionParent_Siren_SkillArms_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Siren_HelpingHands_Activate.Action_Siren_HelpingHands_Activate_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
