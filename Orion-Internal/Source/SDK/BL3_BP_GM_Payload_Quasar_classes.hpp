#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_GM_Payload_Quasar_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GM_Payload_Quasar.BP_GM_Payload_Quasar_C
// 0x00C0 (0x0188 - 0x00C8)
class UBP_GM_Payload_Quasar_C : public UGrenadeBehavior_PayloadLingering
{
public:
	struct FSingularityInitializationInfo              SingularityInfo;                                          // 0x00C8(0x00C0) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GM_Payload_Quasar.BP_GM_Payload_Quasar_C");
		return ptr;
	}


	void K2_GrenadeBeginPlay(class AGrenade** Grenade, class AGrenadeMod** GrenadeMod, struct FPayloadInstanceData* InstanceData);
	void K2_GrenadeInitialized(class AGrenade** Grenade, class AGrenadeMod** GrenadeMod, struct FPayloadInstanceData* InstanceData);
	void K2_GrenadeExplode(class AGrenade** Grenade, class AGrenadeMod** GrenadeMod, struct FPayloadInstanceData* InstanceData);
	void K2_NativeDelayCallback(class AGrenade** Grenade, class AGrenadeMod** GrenadeMod, struct FName* DelayName, struct FPayloadInstanceData* InstanceData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
