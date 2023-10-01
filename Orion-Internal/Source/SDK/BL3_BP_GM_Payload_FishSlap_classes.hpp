#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_GM_Payload_FishSlap_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GM_Payload_FishSlap.BP_GM_Payload_FishSlap_C
// 0x0000 (0x0048 - 0x0048)
class UBP_GM_Payload_FishSlap_C : public UGrenadeBehavior_PayloadBlueprint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GM_Payload_FishSlap.BP_GM_Payload_FishSlap_C");
		return ptr;
	}


	void K2_GrenadeBounce(class AGrenade** Grenade, class AGrenadeMod** GrenadeMod, struct FPayloadInstanceData* InstanceData);
	void K2_GrenadeInitialized(class AGrenade** Grenade, class AGrenadeMod** GrenadeMod, struct FPayloadInstanceData* InstanceData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
