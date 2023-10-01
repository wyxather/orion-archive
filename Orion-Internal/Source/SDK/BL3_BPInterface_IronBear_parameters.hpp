#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPInterface_IronBear_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPInterface_IronBear.BPInterface_IronBear_C.IronBear_DoMeleeAttack
struct UBPInterface_IronBear_C_IronBear_DoMeleeAttack_Params
{
};

// Function BPInterface_IronBear.BPInterface_IronBear_C.ActivateNukeScreenIcons
struct UBPInterface_IronBear_C_ActivateNukeScreenIcons_Params
{
	EIronBearHardPointOrientation                      HardpointOrientation;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPInterface_IronBear.BPInterface_IronBear_C.SetBubbleShieldFXModOverrideEnabled
struct UBPInterface_IronBear_C_SetBubbleShieldFXModOverrideEnabled_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
