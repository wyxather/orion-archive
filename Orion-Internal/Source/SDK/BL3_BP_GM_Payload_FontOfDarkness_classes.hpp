#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_GM_Payload_FontOfDarkness_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_GM_Payload_FontOfDarkness.BP_GM_Payload_FontOfDarkness_C
// 0x00BC (0x0104 - 0x0048)
class UBP_GM_Payload_FontOfDarkness_C : public UGrenadeBehavior_PayloadBlueprint
{
public:
	struct FEnvQueryParams                             HomingQuery;                                              // 0x0048(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                Flags;                                                    // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GM_Payload_FontOfDarkness.BP_GM_Payload_FontOfDarkness_C");
		return ptr;
	}


	void K2_GrenadeBeginPlay(class AGrenade** Grenade, class AGrenadeMod** GrenadeMod, struct FPayloadInstanceData* InstanceData);
	void K2_NativeDelayCallback(class AGrenade** Grenade, class AGrenadeMod** GrenadeMod, struct FName* DelayName, struct FPayloadInstanceData* InstanceData);
	void K2_GrenadeDamageDealt(class AGrenade** Grenade, class AGrenadeMod** GrenadeMod, class AOakCharacter** Character, struct FDamageDataEventDetails* DamageEvent, struct FPayloadInstanceData* InstanceData);
	void K2_GrenadeExplode(class AGrenade** Grenade, class AGrenadeMod** GrenadeMod, struct FPayloadInstanceData* InstanceData);
	void K2_GrenadeInitialized(class AGrenade** Grenade, class AGrenadeMod** GrenadeMod, struct FPayloadInstanceData* InstanceData);
	void K2_UpdateChildGeneration(struct FGrenadeChildGenerationData* InGenerationData, struct FGrenadeChildGenerationData* GenerationData);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
