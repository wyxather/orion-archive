#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_HitReactionLayer_LevelDowngrade_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass HitReactionLayer_LevelDowngrade.HitReactionLayer_LevelDowngrade_C
// 0x0000 (0x0050 - 0x0050)
class UHitReactionLayer_LevelDowngrade_C : public UHitReactionLayer_Condition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HitReactionLayer_LevelDowngrade.HitReactionLayer_LevelDowngrade_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
