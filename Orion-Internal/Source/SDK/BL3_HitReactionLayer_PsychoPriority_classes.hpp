#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_HitReactionLayer_PsychoPriority_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass HitReactionLayer_PsychoPriority.HitReactionLayer_PsychoPriority_C
// 0x0000 (0x0050 - 0x0050)
class UHitReactionLayer_PsychoPriority_C : public UHitReactionLayer_Priority
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HitReactionLayer_PsychoPriority.HitReactionLayer_PsychoPriority_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
