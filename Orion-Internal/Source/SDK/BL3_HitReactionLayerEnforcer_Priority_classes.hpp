#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_HitReactionLayerEnforcer_Priority_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass HitReactionLayerEnforcer_Priority.HitReactionLayerEnforcer_Priority_C
// 0x0000 (0x0050 - 0x0050)
class UHitReactionLayerEnforcer_Priority_C : public UHitReactionLayer_Priority
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HitReactionLayerEnforcer_Priority.HitReactionLayerEnforcer_Priority_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
