// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_Rural_FusionRifle_AnimsBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Weapon_Rural_FusionRifle_AnimsBP.Weapon_Rural_FusionRifle_AnimsBP_C.GetFireRate
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AWeapon_Rural_FusionRifle_C** WeaponReference                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UWeapon_Rural_FusionRifle_AnimsBP_C::GetFireRate(class AWeapon_Rural_FusionRifle_C** WeaponReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Rural_FusionRifle_AnimsBP.Weapon_Rural_FusionRifle_AnimsBP_C.GetFireRate");

	UWeapon_Rural_FusionRifle_AnimsBP_C_GetFireRate_Params params;
	params.WeaponReference = WeaponReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Weapon_Rural_FusionRifle_AnimsBP.Weapon_Rural_FusionRifle_AnimsBP_C.BlueprintUpdateAnimation
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeapon_Rural_FusionRifle_AnimsBP_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Rural_FusionRifle_AnimsBP.Weapon_Rural_FusionRifle_AnimsBP_C.BlueprintUpdateAnimation");

	UWeapon_Rural_FusionRifle_AnimsBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Rural_FusionRifle_AnimsBP.Weapon_Rural_FusionRifle_AnimsBP_C.BlueprintBeginPlay
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UWeapon_Rural_FusionRifle_AnimsBP_C::BlueprintBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Rural_FusionRifle_AnimsBP.Weapon_Rural_FusionRifle_AnimsBP_C.BlueprintBeginPlay");

	UWeapon_Rural_FusionRifle_AnimsBP_C_BlueprintBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Rural_FusionRifle_AnimsBP.Weapon_Rural_FusionRifle_AnimsBP_C.FireStart_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWeapon_Rural_FusionRifle_AnimsBP_C::FireStart_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Rural_FusionRifle_AnimsBP.Weapon_Rural_FusionRifle_AnimsBP_C.FireStart_Event_1");

	UWeapon_Rural_FusionRifle_AnimsBP_C_FireStart_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Rural_FusionRifle_AnimsBP.Weapon_Rural_FusionRifle_AnimsBP_C.FireEnd_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UWeapon_Rural_FusionRifle_AnimsBP_C::FireEnd_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Rural_FusionRifle_AnimsBP.Weapon_Rural_FusionRifle_AnimsBP_C.FireEnd_Event_1");

	UWeapon_Rural_FusionRifle_AnimsBP_C_FireEnd_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Rural_FusionRifle_AnimsBP.Weapon_Rural_FusionRifle_AnimsBP_C.ExecuteUbergraph_Weapon_Rural_FusionRifle_AnimsBP
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeapon_Rural_FusionRifle_AnimsBP_C::ExecuteUbergraph_Weapon_Rural_FusionRifle_AnimsBP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Rural_FusionRifle_AnimsBP.Weapon_Rural_FusionRifle_AnimsBP_C.ExecuteUbergraph_Weapon_Rural_FusionRifle_AnimsBP");

	UWeapon_Rural_FusionRifle_AnimsBP_C_ExecuteUbergraph_Weapon_Rural_FusionRifle_AnimsBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
