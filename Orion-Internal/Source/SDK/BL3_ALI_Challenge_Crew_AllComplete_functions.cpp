// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ALI_Challenge_Crew_AllComplete_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ALI_Challenge_Crew_AllComplete.ALI_Challenge_Crew_AllComplete_C.CompletedChallenge
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGbxPlayerController**   CompletedPlayer                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UALI_Challenge_Crew_AllComplete_C::CompletedChallenge(class AGbxPlayerController** CompletedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function ALI_Challenge_Crew_AllComplete.ALI_Challenge_Crew_AllComplete_C.CompletedChallenge");

	UALI_Challenge_Crew_AllComplete_C_CompletedChallenge_Params params;
	params.CompletedPlayer = CompletedPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ALI_Challenge_Crew_AllComplete.ALI_Challenge_Crew_AllComplete_C.ExecuteUbergraph_ALI_Challenge_Crew_AllComplete
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UALI_Challenge_Crew_AllComplete_C::ExecuteUbergraph_ALI_Challenge_Crew_AllComplete(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ALI_Challenge_Crew_AllComplete.ALI_Challenge_Crew_AllComplete_C.ExecuteUbergraph_ALI_Challenge_Crew_AllComplete");

	UALI_Challenge_Crew_AllComplete_C_ExecuteUbergraph_ALI_Challenge_Crew_AllComplete_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
