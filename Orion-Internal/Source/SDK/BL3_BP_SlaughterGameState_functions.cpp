// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_SlaughterGameState_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SlaughterGameState.BP_SlaughterGameState_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SlaughterGameState_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SlaughterGameState.BP_SlaughterGameState_C.UserConstructionScript");

	ABP_SlaughterGameState_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SlaughterGameState.BP_SlaughterGameState_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SlaughterGameState_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SlaughterGameState.BP_SlaughterGameState_C.ReceiveBeginPlay");

	ABP_SlaughterGameState_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SlaughterGameState.BP_SlaughterGameState_C.OnAllPlayersDied_Event_1
// (BlueprintCallable, BlueprintEvent)

void ABP_SlaughterGameState_C::OnAllPlayersDied_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SlaughterGameState.BP_SlaughterGameState_C.OnAllPlayersDied_Event_1");

	ABP_SlaughterGameState_C_OnAllPlayersDied_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SlaughterGameState.BP_SlaughterGameState_C.OnNewRound_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RoundNumber                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SlaughterGameState_C::OnNewRound_Event_1(int RoundNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SlaughterGameState.BP_SlaughterGameState_C.OnNewRound_Event_1");

	ABP_SlaughterGameState_C_OnNewRound_Event_1_Params params;
	params.RoundNumber = RoundNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SlaughterGameState.BP_SlaughterGameState_C.OnNewWave_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bBossWave                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            CountdownDuration              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SlaughterGameState_C::OnNewWave_Event_1(bool bBossWave, int CountdownDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SlaughterGameState.BP_SlaughterGameState_C.OnNewWave_Event_1");

	ABP_SlaughterGameState_C_OnNewWave_Event_1_Params params;
	params.bBossWave = bBossWave;
	params.CountdownDuration = CountdownDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SlaughterGameState.BP_SlaughterGameState_C.OnPlayerDied_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakPlayerState*         PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SlaughterGameState_C::OnPlayerDied_Event_1(class AOakPlayerState* PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SlaughterGameState.BP_SlaughterGameState_C.OnPlayerDied_Event_1");

	ABP_SlaughterGameState_C_OnPlayerDied_Event_1_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SlaughterGameState.BP_SlaughterGameState_C.OnRoundComplete_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RoundNumber                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SlaughterGameState_C::OnRoundComplete_Event_1(int RoundNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SlaughterGameState.BP_SlaughterGameState_C.OnRoundComplete_Event_1");

	ABP_SlaughterGameState_C_OnRoundComplete_Event_1_Params params;
	params.RoundNumber = RoundNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SlaughterGameState.BP_SlaughterGameState_C.ExecuteUbergraph_BP_SlaughterGameState
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SlaughterGameState_C::ExecuteUbergraph_BP_SlaughterGameState(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SlaughterGameState.BP_SlaughterGameState_C.ExecuteUbergraph_BP_SlaughterGameState");

	ABP_SlaughterGameState_C_ExecuteUbergraph_BP_SlaughterGameState_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
