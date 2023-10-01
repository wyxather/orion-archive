#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_GM_Payload_AcidBurn_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_GM_Payload_AcidBurn.BP_GM_Payload_AcidBurn_C.K2_GrenadeDamageDealt
struct UBP_GM_Payload_AcidBurn_C_K2_GrenadeDamageDealt_Params
{
	class AGrenade**                                   Grenade;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AGrenadeMod**                                GrenadeMod;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPayloadInstanceData                        InstanceData;                                             // (BlueprintVisible, Parm, OutParm, ReferenceParm)
	class AOakCharacter**                              Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageDataEventDetails*                    DamageEvent;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
