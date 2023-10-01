// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Actor_PetJabb_FakeLauncher_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Actor_PetJabb_FakeLauncher.Actor_PetJabb_FakeLauncher_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AActor_PetJabb_FakeLauncher_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Actor_PetJabb_FakeLauncher.Actor_PetJabb_FakeLauncher_C.UserConstructionScript");

	AActor_PetJabb_FakeLauncher_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
