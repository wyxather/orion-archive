#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_GM_Payload_AcidBurn_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GM_Payload_AcidBurn.BP_GM_Payload_AcidBurn_C
// 0x0000 (0x0048 - 0x0048)
class UBP_GM_Payload_AcidBurn_C : public UGrenadeBehavior_PayloadBlueprint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GM_Payload_AcidBurn.BP_GM_Payload_AcidBurn_C");
		return ptr;
	}


	void K2_GrenadeDamageDealt(class AGrenade** Grenade, class AGrenadeMod** GrenadeMod, class AOakCharacter** Character, struct FDamageDataEventDetails* DamageEvent, struct FPayloadInstanceData* InstanceData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
