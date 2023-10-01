#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_GM_Payload_Bloodsucker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_GM_Payload_Bloodsucker.BP_GM_Payload_Bloodsucker_C.K2_GrenadeInitialized
struct UBP_GM_Payload_Bloodsucker_C_K2_GrenadeInitialized_Params
{
	class AGrenade**                                   Grenade;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AGrenadeMod**                                GrenadeMod;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPayloadInstanceData                        InstanceData;                                             // (BlueprintVisible, Parm, OutParm, ReferenceParm)
};

// Function BP_GM_Payload_Bloodsucker.BP_GM_Payload_Bloodsucker_C.K2_NativeDelayCallback
struct UBP_GM_Payload_Bloodsucker_C_K2_NativeDelayCallback_Params
{
	class AGrenade**                                   Grenade;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AGrenadeMod**                                GrenadeMod;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPayloadInstanceData                        InstanceData;                                             // (BlueprintVisible, Parm, OutParm, ReferenceParm)
	struct FName*                                      DelayName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GM_Payload_Bloodsucker.BP_GM_Payload_Bloodsucker_C.K2_GrenadeStuckTo
struct UBP_GM_Payload_Bloodsucker_C_K2_GrenadeStuckTo_Params
{
	class AGrenade**                                   Grenade;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AGrenadeMod**                                GrenadeMod;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     StickTarget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPayloadInstanceData                        InstanceData;                                             // (BlueprintVisible, Parm, OutParm, ReferenceParm)
	struct FHitResult*                                 HitResult;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
