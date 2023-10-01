#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_GM_Payload_ToiletBombs_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GM_Payload_ToiletBombs.BP_GM_Payload_ToiletBombs_C
// 0x0000 (0x00C8 - 0x00C8)
class UBP_GM_Payload_ToiletBombs_C : public UGrenadeBehavior_PayloadLingering
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GM_Payload_ToiletBombs.BP_GM_Payload_ToiletBombs_C");
		return ptr;
	}


	void K2_GrenadeExplode(class AGrenade** Grenade, class AGrenadeMod** GrenadeMod, struct FPayloadInstanceData* InstanceData);
	void K2_GrenadeInitialized(class AGrenade** Grenade, class AGrenadeMod** GrenadeMod, struct FPayloadInstanceData* InstanceData);
	void K2_UpdateChildGeneration(struct FGrenadeChildGenerationData* InGenerationData, struct FGrenadeChildGenerationData* GenerationData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
