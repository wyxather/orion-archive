// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Character_Root_Priest_Projectile_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Character_Root_Priest_Projectile.Character_Root_Priest_Projectile_C.GetCharacter
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire*       AsCharacter_Gunfire            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Root_Priest_Projectile_C::GetCharacter(class ACharacterGunfire** AsCharacter_Gunfire)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Priest_Projectile.Character_Root_Priest_Projectile_C.GetCharacter");

	ACharacter_Root_Priest_Projectile_C_GetCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsCharacter_Gunfire != nullptr)
		*AsCharacter_Gunfire = params.AsCharacter_Gunfire;
}


// Function Character_Root_Priest_Projectile.Character_Root_Priest_Projectile_C.OnHitGround
// 00007FF6F8B35350
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult*             Impact                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector*                GroundLocation                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Root_Priest_Projectile_C::OnHitGround(struct FHitResult* Impact, struct FVector* GroundLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Priest_Projectile.Character_Root_Priest_Projectile_C.OnHitGround");

	ACharacter_Root_Priest_Projectile_C_OnHitGround_Params params;
	params.Impact = Impact;
	params.GroundLocation = GroundLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Character_Root_Priest_Projectile.Character_Root_Priest_Projectile_C.ExecuteUbergraph_Character_Root_Priest_Projectile
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacter_Root_Priest_Projectile_C::ExecuteUbergraph_Character_Root_Priest_Projectile(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Priest_Projectile.Character_Root_Priest_Projectile_C.ExecuteUbergraph_Character_Root_Priest_Projectile");

	ACharacter_Root_Priest_Projectile_C_ExecuteUbergraph_Character_Root_Priest_Projectile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
