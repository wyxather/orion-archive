// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_JunkCarsStack_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_JunkCarsStack.BP_JunkCarsStack_C.CreateStackOfCars
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_JunkCarsStack_C::CreateStackOfCars()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JunkCarsStack.BP_JunkCarsStack_C.CreateStackOfCars");

	ABP_JunkCarsStack_C_CreateStackOfCars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_JunkCarsStack.BP_JunkCarsStack_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_JunkCarsStack_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_JunkCarsStack.BP_JunkCarsStack_C.UserConstructionScript");

	ABP_JunkCarsStack_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
