// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Mission_Side_DLC2_WhereIBelong_LakeMail_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Challenge_Mission_Side_DLC2_WhereIBelong_LakeMail.Challenge_Mission_Side_DLC2_WhereIBelong_LakeMail_C.CompletedChallenge
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGbxPlayerController**   CompletedPlayer                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_Mission_Side_DLC2_WhereIBelong_LakeMail_C::CompletedChallenge(class AGbxPlayerController** CompletedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_Mission_Side_DLC2_WhereIBelong_LakeMail.Challenge_Mission_Side_DLC2_WhereIBelong_LakeMail_C.CompletedChallenge");

	UChallenge_Mission_Side_DLC2_WhereIBelong_LakeMail_C_CompletedChallenge_Params params;
	params.CompletedPlayer = CompletedPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Challenge_Mission_Side_DLC2_WhereIBelong_LakeMail.Challenge_Mission_Side_DLC2_WhereIBelong_LakeMail_C.ExecuteUbergraph_Challenge_Mission_Side_DLC2_WhereIBelong_LakeMail
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_Mission_Side_DLC2_WhereIBelong_LakeMail_C::ExecuteUbergraph_Challenge_Mission_Side_DLC2_WhereIBelong_LakeMail(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_Mission_Side_DLC2_WhereIBelong_LakeMail.Challenge_Mission_Side_DLC2_WhereIBelong_LakeMail_C.ExecuteUbergraph_Challenge_Mission_Side_DLC2_WhereIBelong_LakeMail");

	UChallenge_Mission_Side_DLC2_WhereIBelong_LakeMail_C_ExecuteUbergraph_Challenge_Mission_Side_DLC2_WhereIBelong_LakeMail_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
