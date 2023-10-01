#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_GM_Payload_Pyroburst_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GM_Payload_Pyroburst.BP_GM_Payload_Pyroburst_C
// 0x0004 (0x007C - 0x0078)
class UBP_GM_Payload_Pyroburst_C : public UGrenadeBehavior_PayloadSpring
{
public:
	float                                              SpeedIncrease;                                            // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GM_Payload_Pyroburst.BP_GM_Payload_Pyroburst_C");
		return ptr;
	}


	void K2_GrenadeBeginPlay(class AGrenade** Grenade, class AGrenadeMod** GrenadeMod, struct FPayloadInstanceData* InstanceData);
	void K2_NativeDelayCallback(class AGrenade** Grenade, class AGrenadeMod** GrenadeMod, struct FName* DelayName, struct FPayloadInstanceData* InstanceData);
	void K2_GrenadeExplode(class AGrenade** Grenade, class AGrenadeMod** GrenadeMod, struct FPayloadInstanceData* InstanceData);
	void K2_GrenadeBounce(class AGrenade** Grenade, class AGrenadeMod** GrenadeMod, struct FPayloadInstanceData* InstanceData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
