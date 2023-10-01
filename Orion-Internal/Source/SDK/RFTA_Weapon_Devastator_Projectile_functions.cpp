// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_Devastator_Projectile_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Weapon_Devastator_Projectile.Weapon_Devastator_Projectile_C.IsSprayHit
// 00007FF6F8B35350
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AWeapon_Devastator_Projectile_C::IsSprayHit(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Devastator_Projectile.Weapon_Devastator_Projectile_C.IsSprayHit");

	AWeapon_Devastator_Projectile_C_IsSprayHit_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Weapon_Devastator_Projectile.Weapon_Devastator_Projectile_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void AWeapon_Devastator_Projectile_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Devastator_Projectile.Weapon_Devastator_Projectile_C.ReceiveBeginPlay");

	AWeapon_Devastator_Projectile_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Devastator_Projectile.Weapon_Devastator_Projectile_C.ExecuteUbergraph_Weapon_Devastator_Projectile
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeapon_Devastator_Projectile_C::ExecuteUbergraph_Weapon_Devastator_Projectile(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Devastator_Projectile.Weapon_Devastator_Projectile_C.ExecuteUbergraph_Weapon_Devastator_Projectile");

	AWeapon_Devastator_Projectile_C_ExecuteUbergraph_Weapon_Devastator_Projectile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
