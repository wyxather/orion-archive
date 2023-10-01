#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_GM_Payload_EMP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GM_Payload_EMP.BP_GM_Payload_EMP_C
// 0x0000 (0x0048 - 0x0048)
class UBP_GM_Payload_EMP_C : public UGrenadeBehavior_PayloadBlueprint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GM_Payload_EMP.BP_GM_Payload_EMP_C");
		return ptr;
	}


	void K2_GrenadeExplode(class AGrenade** Grenade, class AGrenadeMod** GrenadeMod, struct FPayloadInstanceData* InstanceData);
	void K2_GrenadeDamageDealt(class AGrenade** Grenade, class AGrenadeMod** GrenadeMod, class AOakCharacter** Character, struct FDamageDataEventDetails* DamageEvent, struct FPayloadInstanceData* InstanceData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
