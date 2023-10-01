#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPInterface_PlayerInputActions_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPInterface_PlayerInputActions.BPInterface_PlayerInputActions_C.DoMelee
struct UBPInterface_PlayerInputActions_C_DoMelee_Params
{
};

// Function BPInterface_PlayerInputActions.BPInterface_PlayerInputActions_C.GroundSlam_End
struct UBPInterface_PlayerInputActions_C_GroundSlam_End_Params
{
	float                                              Distance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
