// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_Rakk_Spit_Corrosive_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Projectile_Rakk_Spit_Corrosive.Projectile_Rakk_Spit_Corrosive_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProjectile_Rakk_Spit_Corrosive_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Rakk_Spit_Corrosive.Projectile_Rakk_Spit_Corrosive_C.UserConstructionScript");

	AProjectile_Rakk_Spit_Corrosive_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Rakk_Spit_Corrosive.Projectile_Rakk_Spit_Corrosive_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProjectile_Rakk_Spit_Corrosive_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Rakk_Spit_Corrosive.Projectile_Rakk_Spit_Corrosive_C.ReceiveBeginPlay");

	AProjectile_Rakk_Spit_Corrosive_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_Rakk_Spit_Corrosive.Projectile_Rakk_Spit_Corrosive_C.ExecuteUbergraph_Projectile_Rakk_Spit_Corrosive
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_Rakk_Spit_Corrosive_C::ExecuteUbergraph_Projectile_Rakk_Spit_Corrosive(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Rakk_Spit_Corrosive.Projectile_Rakk_Spit_Corrosive_C.ExecuteUbergraph_Projectile_Rakk_Spit_Corrosive");

	AProjectile_Rakk_Spit_Corrosive_C_ExecuteUbergraph_Projectile_Rakk_Spit_Corrosive_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
