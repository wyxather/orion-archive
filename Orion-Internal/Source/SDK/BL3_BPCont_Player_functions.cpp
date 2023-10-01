// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPCont_Player_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPCont_Player.BPCont_Player_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPCont_Player_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPCont_Player.BPCont_Player_C.UserConstructionScript");

	ABPCont_Player_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPCont_Player.BPCont_Player_C.OnJokeEULAClosedByPlayer
// (Event, Public, BlueprintEvent)

void ABPCont_Player_C::OnJokeEULAClosedByPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPCont_Player.BPCont_Player_C.OnJokeEULAClosedByPlayer");

	ABPCont_Player_C_OnJokeEULAClosedByPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPCont_Player.BPCont_Player_C.ExecuteUbergraph_BPCont_Player
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPCont_Player_C::ExecuteUbergraph_BPCont_Player(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPCont_Player.BPCont_Player_C.ExecuteUbergraph_BPCont_Player");

	ABPCont_Player_C_ExecuteUbergraph_BPCont_Player_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPCont_Player.BPCont_Player_C.OnJokeEulaClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABPCont_Player_C::OnJokeEulaClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPCont_Player.BPCont_Player_C.OnJokeEulaClosed__DelegateSignature");

	ABPCont_Player_C_OnJokeEulaClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
