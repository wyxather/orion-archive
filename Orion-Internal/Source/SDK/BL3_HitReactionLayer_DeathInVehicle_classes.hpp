#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_HitReactionLayer_DeathInVehicle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass HitReactionLayer_DeathInVehicle.HitReactionLayer_DeathInVehicle_C
// 0x0004 (0x0034 - 0x0030)
class UHitReactionLayer_DeathInVehicle_C : public UHitReactionLayer_Blueprint
{
public:
	float                                              OverkillThresholdPercent;                                 // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HitReactionLayer_DeathInVehicle.HitReactionLayer_DeathInVehicle_C");
		return ptr;
	}


	void CalcHealthPercent(class UOakDamageComponent* Receiver, float Damage_Amount, float* Damage_Percent);
	class UHitReactionTag* EvaluateTag(class UDamageComponent** Receiver, class UDamageCauserComponent** Causer, float* DamageAmount, class UGbxDamageType** DamageType, class UDamageSource** DamageSource, class UHitRegionData** HitRegion, float* Force, class UHitReactionTag** PreviousTag);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
