#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPDuelTotem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPDuelTotem.BPDuelTotem_C.FinalizeCombatants
struct ABPDuelTotem_C_FinalizeCombatants_Params
{
};

// Function BPDuelTotem.BPDuelTotem_C.SetCombatant
struct ABPDuelTotem_C_SetCombatant_Params
{
	class AOakCharacter_Player*                        Combatant;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxSkeletalMeshComponent*                   SceneSkMesh;                                              // (BlueprintVisible, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)
};

// Function BPDuelTotem.BPDuelTotem_C.UserConstructionScript
struct ABPDuelTotem_C_UserConstructionScript_Params
{
};

// Function BPDuelTotem.BPDuelTotem_C.Timeline_0__FinishedFunc
struct ABPDuelTotem_C_Timeline_0__FinishedFunc_Params
{
};

// Function BPDuelTotem.BPDuelTotem_C.Timeline_0__UpdateFunc
struct ABPDuelTotem_C_Timeline_0__UpdateFunc_Params
{
};

// Function BPDuelTotem.BPDuelTotem_C.OnDuelStateChanged
struct ABPDuelTotem_C_OnDuelStateChanged_Params
{
	EPotentialDuelState*                               NewDuelState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPDuelTotem.BPDuelTotem_C.UpdateCombatants
struct ABPDuelTotem_C_UpdateCombatants_Params
{
	TArray<class AOakCharacter_Player*>                Players;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BPDuelTotem.BPDuelTotem_C.OnDestroyTotem
struct ABPDuelTotem_C_OnDestroyTotem_Params
{
	EDuelTotemDestroyReason*                           TheDestroyReason;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPDuelTotem.BPDuelTotem_C.ReceiveBeginPlay
struct ABPDuelTotem_C_ReceiveBeginPlay_Params
{
};

// Function BPDuelTotem.BPDuelTotem_C.OnAcceptedPlayersChanged
struct ABPDuelTotem_C_OnAcceptedPlayersChanged_Params
{
};

// Function BPDuelTotem.BPDuelTotem_C.ExecuteUbergraph_BPDuelTotem
struct ABPDuelTotem_C_ExecuteUbergraph_BPDuelTotem_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
