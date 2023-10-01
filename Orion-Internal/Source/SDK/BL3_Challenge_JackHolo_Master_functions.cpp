// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_JackHolo_Master_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Challenge_JackHolo_Master.Challenge_JackHolo_Master_C.CompletedChallenge
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGbxPlayerController**   CompletedPlayer                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_JackHolo_Master_C::CompletedChallenge(class AGbxPlayerController** CompletedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_JackHolo_Master.Challenge_JackHolo_Master_C.CompletedChallenge");

	UChallenge_JackHolo_Master_C_CompletedChallenge_Params params;
	params.CompletedPlayer = CompletedPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Challenge_JackHolo_Master.Challenge_JackHolo_Master_C.ExecuteUbergraph_Challenge_JackHolo_Master
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_JackHolo_Master_C::ExecuteUbergraph_Challenge_JackHolo_Master(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_JackHolo_Master.Challenge_JackHolo_Master_C.ExecuteUbergraph_Challenge_JackHolo_Master");

	UChallenge_JackHolo_Master_C_ExecuteUbergraph_Challenge_JackHolo_Master_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
