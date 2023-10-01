// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Crew_Geranium_TreasureMap_Open_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Challenge_Crew_Geranium_TreasureMap_Open.Challenge_Crew_Geranium_TreasureMap_Open_C.OnChallengeActivated
// (Event, Public, BlueprintEvent)

void UChallenge_Crew_Geranium_TreasureMap_Open_C::OnChallengeActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_Crew_Geranium_TreasureMap_Open.Challenge_Crew_Geranium_TreasureMap_Open_C.OnChallengeActivated");

	UChallenge_Crew_Geranium_TreasureMap_Open_C_OnChallengeActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Challenge_Crew_Geranium_TreasureMap_Open.Challenge_Crew_Geranium_TreasureMap_Open_C.ExecuteUbergraph_Challenge_Crew_Geranium_TreasureMap_Open
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_Crew_Geranium_TreasureMap_Open_C::ExecuteUbergraph_Challenge_Crew_Geranium_TreasureMap_Open(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_Crew_Geranium_TreasureMap_Open.Challenge_Crew_Geranium_TreasureMap_Open_C.ExecuteUbergraph_Challenge_Crew_Geranium_TreasureMap_Open");

	UChallenge_Crew_Geranium_TreasureMap_Open_C_ExecuteUbergraph_Challenge_Crew_Geranium_TreasureMap_Open_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
