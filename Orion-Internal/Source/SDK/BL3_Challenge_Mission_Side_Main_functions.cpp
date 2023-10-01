// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Mission_Side_Main_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Challenge_Mission_Side_Main.Challenge_Mission_Side_Main_C.CompletedChallenge
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGbxPlayerController**   CompletedPlayer                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_Mission_Side_Main_C::CompletedChallenge(class AGbxPlayerController** CompletedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_Mission_Side_Main.Challenge_Mission_Side_Main_C.CompletedChallenge");

	UChallenge_Mission_Side_Main_C_CompletedChallenge_Params params;
	params.CompletedPlayer = CompletedPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Challenge_Mission_Side_Main.Challenge_Mission_Side_Main_C.ExecuteUbergraph_Challenge_Mission_Side_Main
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_Mission_Side_Main_C::ExecuteUbergraph_Challenge_Mission_Side_Main(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_Mission_Side_Main.Challenge_Mission_Side_Main_C.ExecuteUbergraph_Challenge_Mission_Side_Main");

	UChallenge_Mission_Side_Main_C_ExecuteUbergraph_Challenge_Mission_Side_Main_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
