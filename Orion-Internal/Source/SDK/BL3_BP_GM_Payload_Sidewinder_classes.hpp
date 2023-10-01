#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_GM_Payload_Sidewinder_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GM_Payload_Sidewinder.BP_GM_Payload_Sidewinder_C
// 0x0000 (0x0058 - 0x0058)
class UBP_GM_Payload_Sidewinder_C : public UGrenadeBehavior_PayloadForce
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GM_Payload_Sidewinder.BP_GM_Payload_Sidewinder_C");
		return ptr;
	}


	void K2_GrenadeBeginPlay(class AGrenade** Grenade, class AGrenadeMod** GrenadeMod, struct FPayloadInstanceData* InstanceData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
