#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_GM_Payload_Bloodsucker_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GM_Payload_Bloodsucker.BP_GM_Payload_Bloodsucker_C
// 0x0000 (0x00A0 - 0x00A0)
class UBP_GM_Payload_Bloodsucker_C : public UGrenadeBehavior_PayloadSticky
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GM_Payload_Bloodsucker.BP_GM_Payload_Bloodsucker_C");
		return ptr;
	}


	void K2_GrenadeInitialized(class AGrenade** Grenade, class AGrenadeMod** GrenadeMod, struct FPayloadInstanceData* InstanceData);
	void K2_NativeDelayCallback(class AGrenade** Grenade, class AGrenadeMod** GrenadeMod, struct FName* DelayName, struct FPayloadInstanceData* InstanceData);
	void K2_GrenadeStuckTo(class AGrenade** Grenade, class AGrenadeMod** GrenadeMod, class AActor** StickTarget, struct FHitResult* HitResult, struct FPayloadInstanceData* InstanceData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
