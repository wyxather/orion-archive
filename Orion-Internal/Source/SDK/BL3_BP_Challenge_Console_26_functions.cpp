// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Challenge_Console_26_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Challenge_Console_26.BP_Challenge_Console_25_C.CompletedChallenge
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGbxPlayerController**   CompletedPlayer                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Challenge_Console_25_C::CompletedChallenge(class AGbxPlayerController** CompletedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Challenge_Console_26.BP_Challenge_Console_25_C.CompletedChallenge");

	UBP_Challenge_Console_25_C_CompletedChallenge_Params params;
	params.CompletedPlayer = CompletedPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Challenge_Console_26.BP_Challenge_Console_25_C.ExecuteUbergraph_BP_Challenge_Console_26
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Challenge_Console_25_C::ExecuteUbergraph_BP_Challenge_Console_26(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Challenge_Console_26.BP_Challenge_Console_25_C.ExecuteUbergraph_BP_Challenge_Console_26");

	UBP_Challenge_Console_25_C_ExecuteUbergraph_BP_Challenge_Console_26_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
