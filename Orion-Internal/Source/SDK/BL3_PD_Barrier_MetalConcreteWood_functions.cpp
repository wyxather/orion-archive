// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PD_Barrier_MetalConcreteWood_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PD_Barrier_MetalConcreteWood.PD_Barrier_MetalConcreteWood_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APD_Barrier_MetalConcreteWood_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PD_Barrier_MetalConcreteWood.PD_Barrier_MetalConcreteWood_C.UserConstructionScript");

	APD_Barrier_MetalConcreteWood_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
