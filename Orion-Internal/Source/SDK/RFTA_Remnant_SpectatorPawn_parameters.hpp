#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Remnant_SpectatorPawn_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Remnant_SpectatorPawn.Remnant_SpectatorPawn_C.ShowJoinSpectateDialog
struct ARemnant_SpectatorPawn_C_ShowJoinSpectateDialog_Params
{
};

// Function Remnant_SpectatorPawn.Remnant_SpectatorPawn_C.GetJoinSpectateDialog
struct ARemnant_SpectatorPawn_C_GetJoinSpectateDialog_Params
{
	class ADialog_JoinSpectate_C*                      Dialog;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_SpectatorPawn.Remnant_SpectatorPawn_C.ShouldAutoSpectate
struct ARemnant_SpectatorPawn_C_ShouldAutoSpectate_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Remnant_SpectatorPawn.Remnant_SpectatorPawn_C.GetDeathScreen
struct ARemnant_SpectatorPawn_C_GetDeathScreen_Params
{
	class AUIActor*                                    Dialog;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_SpectatorPawn.Remnant_SpectatorPawn_C.ShowDeathScreen
struct ARemnant_SpectatorPawn_C_ShowDeathScreen_Params
{
};

// Function Remnant_SpectatorPawn.Remnant_SpectatorPawn_C.OnFinishTravel
struct ARemnant_SpectatorPawn_C_OnFinishTravel_Params
{
};

// Function Remnant_SpectatorPawn.Remnant_SpectatorPawn_C.ReceiveTick
struct ARemnant_SpectatorPawn_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Remnant_SpectatorPawn.Remnant_SpectatorPawn_C.OnInvalidTarget
struct ARemnant_SpectatorPawn_C_OnInvalidTarget_Params
{
};

// Function Remnant_SpectatorPawn.Remnant_SpectatorPawn_C.OnValidTarget
struct ARemnant_SpectatorPawn_C_OnValidTarget_Params
{
};

// Function Remnant_SpectatorPawn.Remnant_SpectatorPawn_C.ExecuteUbergraph_Remnant_SpectatorPawn
struct ARemnant_SpectatorPawn_C_ExecuteUbergraph_Remnant_SpectatorPawn_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
