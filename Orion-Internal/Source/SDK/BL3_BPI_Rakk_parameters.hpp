#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_Rakk_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPI_Rakk.BPI_Rakk_C.StopAttackLoopAudio
struct UBPI_Rakk_C_StopAttackLoopAudio_Params
{
};

// Function BPI_Rakk.BPI_Rakk_C.StartAttackLoopAudio
struct UBPI_Rakk_C_StartAttackLoopAudio_Params
{
};

// Function BPI_Rakk.BPI_Rakk_C.StopAttackAction
struct UBPI_Rakk_C_StopAttackAction_Params
{
};

// Function BPI_Rakk.BPI_Rakk_C.StartAttackAction
struct UBPI_Rakk_C_StartAttackAction_Params
{
	class UClass*                                      ActionClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_Rakk.BPI_Rakk_C.ChromaticSwitchCooldown
struct UBPI_Rakk_C_ChromaticSwitchCooldown_Params
{
};

// Function BPI_Rakk.BPI_Rakk_C.ChromaticSwitchWarmup
struct UBPI_Rakk_C_ChromaticSwitchWarmup_Params
{
};

// Function BPI_Rakk.BPI_Rakk_C.SetBreathFXSwitch
struct UBPI_Rakk_C_SetBreathFXSwitch_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_Rakk.BPI_Rakk_C.TryChromaticSwitch
struct UBPI_Rakk_C_TryChromaticSwitch_Params
{
};

// Function BPI_Rakk.BPI_Rakk_C.SpreadDamageAura
struct UBPI_Rakk_C_SpreadDamageAura_Params
{
	class AActor*                                      SpreadToActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_Rakk.BPI_Rakk_C.SetDamageAuraActive
struct UBPI_Rakk_C_SetDamageAuraActive_Params
{
	bool                                               Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_Rakk.BPI_Rakk_C.ImbueWithElement
struct UBPI_Rakk_C_ImbueWithElement_Params
{
	EOakElementalType                                  ElementalType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_Rakk.BPI_Rakk_C.OnKilled
struct UBPI_Rakk_C_OnKilled_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
