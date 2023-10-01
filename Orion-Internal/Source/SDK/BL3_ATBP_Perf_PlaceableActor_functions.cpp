// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ATBP_Perf_PlaceableActor_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ATBP_Perf_PlaceableActor.ATBP_Perf_PlaceableActor_C.bugitgo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AATBP_Perf_PlaceableActor_C::bugitgo()
{
	static auto fn = UObject::FindObject<UFunction>("Function ATBP_Perf_PlaceableActor.ATBP_Perf_PlaceableActor_C.bugitgo");

	AATBP_Perf_PlaceableActor_C_bugitgo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ATBP_Perf_PlaceableActor.ATBP_Perf_PlaceableActor_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AATBP_Perf_PlaceableActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ATBP_Perf_PlaceableActor.ATBP_Perf_PlaceableActor_C.UserConstructionScript");

	AATBP_Perf_PlaceableActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
