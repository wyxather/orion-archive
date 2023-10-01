// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_PetJabbermon_Rocket_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Projectile_PetJabbermon_Rocket.Projectile_PetJabbermon_Rocket_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProjectile_PetJabbermon_Rocket_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_PetJabbermon_Rocket.Projectile_PetJabbermon_Rocket_C.UserConstructionScript");

	AProjectile_PetJabbermon_Rocket_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_PetJabbermon_Rocket.Projectile_PetJabbermon_Rocket_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProjectile_PetJabbermon_Rocket_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_PetJabbermon_Rocket.Projectile_PetJabbermon_Rocket_C.ReceiveBeginPlay");

	AProjectile_PetJabbermon_Rocket_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_PetJabbermon_Rocket.Projectile_PetJabbermon_Rocket_C.OnHitDamagableObject
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectile_PetJabbermon_Rocket_C::OnHitDamagableObject(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_PetJabbermon_Rocket.Projectile_PetJabbermon_Rocket_C.OnHitDamagableObject");

	AProjectile_PetJabbermon_Rocket_C_OnHitDamagableObject_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_PetJabbermon_Rocket.Projectile_PetJabbermon_Rocket_C.OnHitWorld
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectile_PetJabbermon_Rocket_C::OnHitWorld(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_PetJabbermon_Rocket.Projectile_PetJabbermon_Rocket_C.OnHitWorld");

	AProjectile_PetJabbermon_Rocket_C_OnHitWorld_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_PetJabbermon_Rocket.Projectile_PetJabbermon_Rocket_C.OnExplode
// (Event, Protected, BlueprintEvent)

void AProjectile_PetJabbermon_Rocket_C::OnExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_PetJabbermon_Rocket.Projectile_PetJabbermon_Rocket_C.OnExplode");

	AProjectile_PetJabbermon_Rocket_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_PetJabbermon_Rocket.Projectile_PetJabbermon_Rocket_C.ExecuteUbergraph_Projectile_PetJabbermon_Rocket
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_PetJabbermon_Rocket_C::ExecuteUbergraph_Projectile_PetJabbermon_Rocket(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_PetJabbermon_Rocket.Projectile_PetJabbermon_Rocket_C.ExecuteUbergraph_Projectile_PetJabbermon_Rocket");

	AProjectile_PetJabbermon_Rocket_C_ExecuteUbergraph_Projectile_PetJabbermon_Rocket_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
