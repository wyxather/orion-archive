#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPCont_Player_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPCont_Player.BPCont_Player_C.UserConstructionScript
struct ABPCont_Player_C_UserConstructionScript_Params
{
};

// Function BPCont_Player.BPCont_Player_C.OnJokeEULAClosedByPlayer
struct ABPCont_Player_C_OnJokeEULAClosedByPlayer_Params
{
};

// Function BPCont_Player.BPCont_Player_C.ExecuteUbergraph_BPCont_Player
struct ABPCont_Player_C_ExecuteUbergraph_BPCont_Player_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPCont_Player.BPCont_Player_C.OnJokeEulaClosed__DelegateSignature
struct ABPCont_Player_C_OnJokeEulaClosed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
