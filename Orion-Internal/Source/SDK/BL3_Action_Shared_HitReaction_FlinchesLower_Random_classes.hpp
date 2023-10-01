#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Shared_HitReaction_FlinchesLower_Random_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Shared_HitReaction_FlinchesLower_Random.Action_Shared_HitReaction_FlinchesLower_Random_C
// 0x0000 (0x0238 - 0x0238)
class UAction_Shared_HitReaction_FlinchesLower_Random_C : public UOakAction_RandomAnim
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Shared_HitReaction_FlinchesLower_Random.Action_Shared_HitReaction_FlinchesLower_Random_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
