#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_HitReactionLayer_PlayerMelee_NPC_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass HitReactionLayer_PlayerMelee_NPC.HitReactionLayer_PlayerMelee_NPC_C
// 0x0000 (0x0050 - 0x0050)
class UHitReactionLayer_PlayerMelee_NPC_C : public UHitReactionLayer_Condition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HitReactionLayer_PlayerMelee_NPC.HitReactionLayer_PlayerMelee_NPC_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
