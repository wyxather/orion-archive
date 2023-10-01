// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Challenge_CharacterSpecific_FinishGame_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Challenge_CharacterSpecific_FinishGame.BP_Challenge_CharacterSpecific_FinishGame_C.CompletedAllPlotMissions
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Challenge_CharacterSpecific_FinishGame_C::CompletedAllPlotMissions()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Challenge_CharacterSpecific_FinishGame.BP_Challenge_CharacterSpecific_FinishGame_C.CompletedAllPlotMissions");

	UBP_Challenge_CharacterSpecific_FinishGame_C_CompletedAllPlotMissions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Challenge_CharacterSpecific_FinishGame.BP_Challenge_CharacterSpecific_FinishGame_C.SetBinds
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter**          Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           BindSet                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_Challenge_CharacterSpecific_FinishGame_C::SetBinds(class AOakCharacter** Character, bool* BindSet)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Challenge_CharacterSpecific_FinishGame.BP_Challenge_CharacterSpecific_FinishGame_C.SetBinds");

	UBP_Challenge_CharacterSpecific_FinishGame_C_SetBinds_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BindSet != nullptr)
		*BindSet = params.BindSet;
}


// Function BP_Challenge_CharacterSpecific_FinishGame.BP_Challenge_CharacterSpecific_FinishGame_C.CompletedChallenge
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGbxPlayerController**   CompletedPlayer                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Challenge_CharacterSpecific_FinishGame_C::CompletedChallenge(class AGbxPlayerController** CompletedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Challenge_CharacterSpecific_FinishGame.BP_Challenge_CharacterSpecific_FinishGame_C.CompletedChallenge");

	UBP_Challenge_CharacterSpecific_FinishGame_C_CompletedChallenge_Params params;
	params.CompletedPlayer = CompletedPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Challenge_CharacterSpecific_FinishGame.BP_Challenge_CharacterSpecific_FinishGame_C.ExecuteUbergraph_BP_Challenge_CharacterSpecific_FinishGame
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Challenge_CharacterSpecific_FinishGame_C::ExecuteUbergraph_BP_Challenge_CharacterSpecific_FinishGame(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Challenge_CharacterSpecific_FinishGame.BP_Challenge_CharacterSpecific_FinishGame_C.ExecuteUbergraph_BP_Challenge_CharacterSpecific_FinishGame");

	UBP_Challenge_CharacterSpecific_FinishGame_C_ExecuteUbergraph_BP_Challenge_CharacterSpecific_FinishGame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
