#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_HitReactionLayer_TinkTurret_FlinchOnly_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass HitReactionLayer_TinkTurret_FlinchOnly.HitReactionLayer_TinkTurret_FlinchOnly_C
// 0x0000 (0x0030 - 0x0030)
class UHitReactionLayer_TinkTurret_FlinchOnly_C : public UHitReactionLayer_Blueprint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HitReactionLayer_TinkTurret_FlinchOnly.HitReactionLayer_TinkTurret_FlinchOnly_C");
		return ptr;
	}


	class UHitReactionTag* EvaluateTag(class UDamageComponent** Receiver, class UDamageCauserComponent** Causer, float* DamageAmount, class UGbxDamageType** DamageType, class UDamageSource** DamageSource, class UHitRegionData** HitRegion, float* Force, class UHitReactionTag** PreviousTag);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
