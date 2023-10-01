#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_HitReactionLayer_Enforcer_Cooldown_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass HitReactionLayer_Enforcer_Cooldown.HitReactionLayer_Enforcer_Cooldown_C
// 0x0000 (0x0048 - 0x0048)
class UHitReactionLayer_Enforcer_Cooldown_C : public UHitReactionLayer_Cooldown
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HitReactionLayer_Enforcer_Cooldown.HitReactionLayer_Enforcer_Cooldown_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
