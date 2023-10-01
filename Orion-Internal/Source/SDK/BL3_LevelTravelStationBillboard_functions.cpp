// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LevelTravelStationBillboard_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LevelTravelStationBillboard.LevelTravelStationBillboard_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULevelTravelStationBillboard_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelTravelStationBillboard.LevelTravelStationBillboard_C.ReceiveTick");

	ULevelTravelStationBillboard_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LevelTravelStationBillboard.LevelTravelStationBillboard_C.ExecuteUbergraph_LevelTravelStationBillboard
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULevelTravelStationBillboard_C::ExecuteUbergraph_LevelTravelStationBillboard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LevelTravelStationBillboard.LevelTravelStationBillboard_C.ExecuteUbergraph_LevelTravelStationBillboard");

	ULevelTravelStationBillboard_C_ExecuteUbergraph_LevelTravelStationBillboard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
