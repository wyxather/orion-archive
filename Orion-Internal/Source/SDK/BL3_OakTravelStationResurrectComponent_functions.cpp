// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakTravelStationResurrectComponent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OakTravelStationResurrectComponent.OakTravelStationResurrectComponent_C.ResurrectedAtStation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   ResurrectedActor               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakTravelStationResurrectComponent_C::ResurrectedAtStation(class APawn* ResurrectedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakTravelStationResurrectComponent.OakTravelStationResurrectComponent_C.ResurrectedAtStation");

	UOakTravelStationResurrectComponent_C_ResurrectedAtStation_Params params;
	params.ResurrectedActor = ResurrectedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakTravelStationResurrectComponent.OakTravelStationResurrectComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UOakTravelStationResurrectComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OakTravelStationResurrectComponent.OakTravelStationResurrectComponent_C.ReceiveBeginPlay");

	UOakTravelStationResurrectComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OakTravelStationResurrectComponent.OakTravelStationResurrectComponent_C.ExecuteUbergraph_OakTravelStationResurrectComponent
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UOakTravelStationResurrectComponent_C::ExecuteUbergraph_OakTravelStationResurrectComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OakTravelStationResurrectComponent.OakTravelStationResurrectComponent_C.ExecuteUbergraph_OakTravelStationResurrectComponent");

	UOakTravelStationResurrectComponent_C_ExecuteUbergraph_OakTravelStationResurrectComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
