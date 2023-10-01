#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_HitReactionLayer_Spiderant_CarpaceHitDowngrade_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass HitReactionLayer_Spiderant_CarpaceHitDowngrade.HitReactionLayer_Spiderant_CarpaceHitDowngrade_C
// 0x0000 (0x0030 - 0x0030)
class UHitReactionLayer_Spiderant_CarpaceHitDowngrade_C : public UHitReactionLayer_Blueprint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HitReactionLayer_Spiderant_CarpaceHitDowngrade.HitReactionLayer_Spiderant_CarpaceHitDowngrade_C");
		return ptr;
	}


	class UHitReactionTag* EvaluateTag(class UDamageComponent** Receiver, class UDamageCauserComponent** Causer, float* DamageAmount, class UGbxDamageType** DamageType, class UDamageSource** DamageSource, class UHitRegionData** HitRegion, float* Force, class UHitReactionTag** PreviousTag);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
