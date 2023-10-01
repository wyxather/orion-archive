// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_MissionGraph_CitizenScience_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionGraph_CitizenScience.MissionGraph_CitizenScience_C.[Borderlands Science!]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// void*                          Unlocks                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// void*                          Next_Mission                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionGraph_CitizenScience_C::_Borderlands_Science!_(void* Unlocks, void* Next_Mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionGraph_CitizenScience.MissionGraph_CitizenScience_C.[Borderlands Science!]");

	UMissionGraph_CitizenScience_C__Borderlands_Science!__Params params;
	params.Unlocks = Unlocks;
	params.Next_Mission = Next_Mission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionGraph_CitizenScience.MissionGraph_CitizenScience_C.ExecuteUbergraph_MissionGraph_CitizenScience
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionGraph_CitizenScience_C::ExecuteUbergraph_MissionGraph_CitizenScience(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionGraph_CitizenScience.MissionGraph_CitizenScience_C.ExecuteUbergraph_MissionGraph_CitizenScience");

	UMissionGraph_CitizenScience_C_ExecuteUbergraph_MissionGraph_CitizenScience_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
