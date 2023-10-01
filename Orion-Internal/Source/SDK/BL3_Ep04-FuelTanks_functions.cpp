// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ep04-FuelTanks_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ep04-FuelTanks.Ep04-FuelTanks_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AEp04_FuelTanks_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ep04-FuelTanks.Ep04-FuelTanks_C.UserConstructionScript");

	AEp04_FuelTanks_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
