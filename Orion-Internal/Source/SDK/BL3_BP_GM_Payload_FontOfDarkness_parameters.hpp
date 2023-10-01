#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_GM_Payload_FontOfDarkness_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_GM_Payload_FontOfDarkness.BP_GM_Payload_FontOfDarkness_C.K2_GrenadeBeginPlay
struct UBP_GM_Payload_FontOfDarkness_C_K2_GrenadeBeginPlay_Params
{
	class AGrenade**                                   Grenade;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AGrenadeMod**                                GrenadeMod;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPayloadInstanceData                        InstanceData;                                             // (BlueprintVisible, Parm, OutParm, ReferenceParm)
};

// Function BP_GM_Payload_FontOfDarkness.BP_GM_Payload_FontOfDarkness_C.K2_NativeDelayCallback
struct UBP_GM_Payload_FontOfDarkness_C_K2_NativeDelayCallback_Params
{
	class AGrenade**                                   Grenade;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AGrenadeMod**                                GrenadeMod;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPayloadInstanceData                        InstanceData;                                             // (BlueprintVisible, Parm, OutParm, ReferenceParm)
	struct FName*                                      DelayName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GM_Payload_FontOfDarkness.BP_GM_Payload_FontOfDarkness_C.K2_GrenadeDamageDealt
struct UBP_GM_Payload_FontOfDarkness_C_K2_GrenadeDamageDealt_Params
{
	class AGrenade**                                   Grenade;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AGrenadeMod**                                GrenadeMod;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPayloadInstanceData                        InstanceData;                                             // (BlueprintVisible, Parm, OutParm, ReferenceParm)
	class AOakCharacter**                              Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageDataEventDetails*                    DamageEvent;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BP_GM_Payload_FontOfDarkness.BP_GM_Payload_FontOfDarkness_C.K2_GrenadeExplode
struct UBP_GM_Payload_FontOfDarkness_C_K2_GrenadeExplode_Params
{
	class AGrenade**                                   Grenade;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AGrenadeMod**                                GrenadeMod;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPayloadInstanceData                        InstanceData;                                             // (BlueprintVisible, Parm, OutParm, ReferenceParm)
};

// Function BP_GM_Payload_FontOfDarkness.BP_GM_Payload_FontOfDarkness_C.K2_GrenadeInitialized
struct UBP_GM_Payload_FontOfDarkness_C_K2_GrenadeInitialized_Params
{
	class AGrenade**                                   Grenade;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AGrenadeMod**                                GrenadeMod;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPayloadInstanceData                        InstanceData;                                             // (BlueprintVisible, Parm, OutParm, ReferenceParm)
};

// Function BP_GM_Payload_FontOfDarkness.BP_GM_Payload_FontOfDarkness_C.K2_UpdateChildGeneration
struct UBP_GM_Payload_FontOfDarkness_C_K2_UpdateChildGeneration_Params
{
	struct FGrenadeChildGenerationData*                InGenerationData;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGrenadeChildGenerationData                 GenerationData;                                           // (Parm, OutParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
