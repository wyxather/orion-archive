#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_IronBear_DakkaBear_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C.BootGunnersNestOccupant
struct ABPChar_IronBear_DakkaBear_C_BootGunnersNestOccupant_Params
{
	bool*                                              InputPin;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C.KickPlayerOutOfGunnersNest
struct ABPChar_IronBear_DakkaBear_C_KickPlayerOutOfGunnersNest_Params
{
	bool*                                              zKilled_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Delay;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C.UserConstructionScript
struct ABPChar_IronBear_DakkaBear_C_UserConstructionScript_Params
{
};

// Function BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C.OnRep_GunnersNestOccupied
struct ABPChar_IronBear_DakkaBear_C_OnRep_GunnersNestOccupied_Params
{
};

// Function BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C.OnAttachStateChanged_GunnersNest
struct ABPChar_IronBear_DakkaBear_C_OnAttachStateChanged_GunnersNest_Params
{
};

// Function BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C.StartGunnersNestBonus
struct ABPChar_IronBear_DakkaBear_C_StartGunnersNestBonus_Params
{
};

// Function BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C.StopGunnersNextBonus
struct ABPChar_IronBear_DakkaBear_C_StopGunnersNextBonus_Params
{
};

// Function BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C.CalculateAutoBearDuration
struct ABPChar_IronBear_DakkaBear_C_CalculateAutoBearDuration_Params
{
};

// Function BPChar_IronBear_DakkaBear.BPChar_IronBear_DakkaBear_C.ExecuteUbergraph_BPChar_IronBear_DakkaBear
struct ABPChar_IronBear_DakkaBear_C_ExecuteUbergraph_BPChar_IronBear_DakkaBear_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
