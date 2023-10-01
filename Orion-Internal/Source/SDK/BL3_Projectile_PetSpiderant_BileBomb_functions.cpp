// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Projectile_PetSpiderant_BileBomb_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Projectile_PetSpiderant_BileBomb.Projectile_PetSpiderant_BileBomb_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProjectile_PetSpiderant_BileBomb_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_PetSpiderant_BileBomb.Projectile_PetSpiderant_BileBomb_C.UserConstructionScript");

	AProjectile_PetSpiderant_BileBomb_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_PetSpiderant_BileBomb.Projectile_PetSpiderant_BileBomb_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProjectile_PetSpiderant_BileBomb_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_PetSpiderant_BileBomb.Projectile_PetSpiderant_BileBomb_C.ReceiveBeginPlay");

	AProjectile_PetSpiderant_BileBomb_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_PetSpiderant_BileBomb.Projectile_PetSpiderant_BileBomb_C.OnHitDamagableObject
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectile_PetSpiderant_BileBomb_C::OnHitDamagableObject(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_PetSpiderant_BileBomb.Projectile_PetSpiderant_BileBomb_C.OnHitDamagableObject");

	AProjectile_PetSpiderant_BileBomb_C_OnHitDamagableObject_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_PetSpiderant_BileBomb.Projectile_PetSpiderant_BileBomb_C.OnHitWorld
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProjectile_PetSpiderant_BileBomb_C::OnHitWorld(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_PetSpiderant_BileBomb.Projectile_PetSpiderant_BileBomb_C.OnHitWorld");

	AProjectile_PetSpiderant_BileBomb_C_OnHitWorld_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_PetSpiderant_BileBomb.Projectile_PetSpiderant_BileBomb_C.OnExplode
// (Event, Protected, BlueprintEvent)

void AProjectile_PetSpiderant_BileBomb_C::OnExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_PetSpiderant_BileBomb.Projectile_PetSpiderant_BileBomb_C.OnExplode");

	AProjectile_PetSpiderant_BileBomb_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Projectile_PetSpiderant_BileBomb.Projectile_PetSpiderant_BileBomb_C.ExecuteUbergraph_Projectile_PetSpiderant_BileBomb
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProjectile_PetSpiderant_BileBomb_C::ExecuteUbergraph_Projectile_PetSpiderant_BileBomb(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_PetSpiderant_BileBomb.Projectile_PetSpiderant_BileBomb_C.ExecuteUbergraph_Projectile_PetSpiderant_BileBomb");

	AProjectile_PetSpiderant_BileBomb_C_ExecuteUbergraph_Projectile_PetSpiderant_BileBomb_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
