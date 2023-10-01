// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_MAL_SR_ASMD_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Projectile_MAL_SR_ASMD.Projectile_MAL_SR_ASMD_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProjectile_MAL_SR_ASMD_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_MAL_SR_ASMD.Projectile_MAL_SR_ASMD_C.UserConstructionScript");

	AProjectile_MAL_SR_ASMD_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
