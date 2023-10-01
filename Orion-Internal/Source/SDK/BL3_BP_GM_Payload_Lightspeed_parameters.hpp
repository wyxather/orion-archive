#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_GM_Payload_Lightspeed_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_GM_Payload_Lightspeed.BP_GM_Payload_Lightspeed_C.K2_GrenadeBeginPlay
struct UBP_GM_Payload_Lightspeed_C_K2_GrenadeBeginPlay_Params
{
	class AGrenade**                                   Grenade;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AGrenadeMod**                                GrenadeMod;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPayloadInstanceData                        InstanceData;                                             // (BlueprintVisible, Parm, OutParm, ReferenceParm)
};

// Function BP_GM_Payload_Lightspeed.BP_GM_Payload_Lightspeed_C.K2_GrenadeImpact
struct UBP_GM_Payload_Lightspeed_C_K2_GrenadeImpact_Params
{
	class AGrenade**                                   Grenade;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AGrenadeMod**                                GrenadeMod;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 HitResult;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FPayloadInstanceData                        InstanceData;                                             // (BlueprintVisible, Parm, OutParm, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
