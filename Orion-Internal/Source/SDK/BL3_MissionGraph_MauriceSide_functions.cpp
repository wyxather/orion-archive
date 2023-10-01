// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_MissionGraph_MauriceSide_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MissionGraph_MauriceSide.MissionGraph_MauriceSide_C.[Saurian Not Saurian]
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// void*                          Unlocks                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// void*                          Next_Mission                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionGraph_MauriceSide_C::_Saurian_Not_Saurian_(void* Unlocks, void* Next_Mission)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionGraph_MauriceSide.MissionGraph_MauriceSide_C.[Saurian Not Saurian]");

	UMissionGraph_MauriceSide_C__Saurian_Not_Saurian__Params params;
	params.Unlocks = Unlocks;
	params.Next_Mission = Next_Mission;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MissionGraph_MauriceSide.MissionGraph_MauriceSide_C.ExecuteUbergraph_MissionGraph_MauriceSide
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMissionGraph_MauriceSide_C::ExecuteUbergraph_MissionGraph_MauriceSide(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MissionGraph_MauriceSide.MissionGraph_MauriceSide_C.ExecuteUbergraph_MissionGraph_MauriceSide");

	UMissionGraph_MauriceSide_C_ExecuteUbergraph_MissionGraph_MauriceSide_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
