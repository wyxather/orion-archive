#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_GM_Delivery_HunterSeeker_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GM_Delivery_HunterSeeker.BP_GM_Delivery_HunterSeeker_C
// 0x00B8 (0x0290 - 0x01D8)
class UBP_GM_Delivery_HunterSeeker_C : public UGrenadeBehavior_DeliveryHoming
{
public:
	struct FEnvQueryParams                             ReSearch;                                                 // 0x01D8(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GM_Delivery_HunterSeeker.BP_GM_Delivery_HunterSeeker_C");
		return ptr;
	}


	void K2_GrenadeImpact(class AGrenade** Grenade, class AGrenadeMod** GrenadeMod, struct FHitResult* HitResult);
	void K2_GrenadeBeginPlay(class AGrenade** Grenade, class AGrenadeMod** GrenadeMod);
	void K2_NativeDelayCallback(class AGrenade** Grenade, class AGrenadeMod** GrenadeMod, struct FName* DelayName);
	void K2_GrenadeInitialized(class AGrenade** Grenade, class AGrenadeMod** GrenadeMod);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
