#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Challenge_CharacterSpecific_FinishGame_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Challenge_CharacterSpecific_FinishGame.BP_Challenge_CharacterSpecific_FinishGame_C.CompletedAllPlotMissions
struct UBP_Challenge_CharacterSpecific_FinishGame_C_CompletedAllPlotMissions_Params
{
};

// Function BP_Challenge_CharacterSpecific_FinishGame.BP_Challenge_CharacterSpecific_FinishGame_C.SetBinds
struct UBP_Challenge_CharacterSpecific_FinishGame_C_SetBinds_Params
{
	class AOakCharacter**                              Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               BindSet;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Challenge_CharacterSpecific_FinishGame.BP_Challenge_CharacterSpecific_FinishGame_C.CompletedChallenge
struct UBP_Challenge_CharacterSpecific_FinishGame_C_CompletedChallenge_Params
{
	class AGbxPlayerController**                       CompletedPlayer;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Challenge_CharacterSpecific_FinishGame.BP_Challenge_CharacterSpecific_FinishGame_C.ExecuteUbergraph_BP_Challenge_CharacterSpecific_FinishGame
struct UBP_Challenge_CharacterSpecific_FinishGame_C_ExecuteUbergraph_BP_Challenge_CharacterSpecific_FinishGame_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
