// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_MissionGraph_Takedown2_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionGraph_Takedown2.MissionGraph_Takedown2_C.[Takedown at the Guardian Breach]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// void*                          Unlocks                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// void*                          Next_Mission                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionGraph_Takedown2_C::_Takedown_at_the_Guardian_Breach_(void* Unlocks, void* Next_Mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionGraph_Takedown2.MissionGraph_Takedown2_C.[Takedown at the Guardian Breach]");

	UMissionGraph_Takedown2_C__Takedown_at_the_Guardian_Breach__Params params;
	params.Unlocks = Unlocks;
	params.Next_Mission = Next_Mission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionGraph_Takedown2.MissionGraph_Takedown2_C.[Discovery: Takedown at the Guardian Breach]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// void*                          Unlocks                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// void*                          Next_Mission                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionGraph_Takedown2_C::_Discovery__Takedown_at_the_Guardian_Breach_(void* Unlocks, void* Next_Mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionGraph_Takedown2.MissionGraph_Takedown2_C.[Discovery: Takedown at the Guardian Breach]");

	UMissionGraph_Takedown2_C__Discovery__Takedown_at_the_Guardian_Breach__Params params;
	params.Unlocks = Unlocks;
	params.Next_Mission = Next_Mission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionGraph_Takedown2.MissionGraph_Takedown2_C.ExecuteUbergraph_MissionGraph_Takedown2
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionGraph_Takedown2_C::ExecuteUbergraph_MissionGraph_Takedown2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionGraph_Takedown2.MissionGraph_Takedown2_C.ExecuteUbergraph_MissionGraph_Takedown2");

	UMissionGraph_Takedown2_C_ExecuteUbergraph_MissionGraph_Takedown2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
