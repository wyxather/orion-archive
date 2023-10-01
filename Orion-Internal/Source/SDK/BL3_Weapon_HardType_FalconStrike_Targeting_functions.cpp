// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Weapon_HardType_FalconStrike_Targeting_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Weapon_HardType_FalconStrike_Targeting.Weapon_HardType_FalconStrike_Targeting_C.PlayFeedback
// (Public, BlueprintCallable, BlueprintEvent)

void AWeapon_HardType_FalconStrike_Targeting_C::PlayFeedback()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_HardType_FalconStrike_Targeting.Weapon_HardType_FalconStrike_Targeting_C.PlayFeedback");

	AWeapon_HardType_FalconStrike_Targeting_C_PlayFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_HardType_FalconStrike_Targeting.Weapon_HardType_FalconStrike_Targeting_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWeapon_HardType_FalconStrike_Targeting_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_HardType_FalconStrike_Targeting.Weapon_HardType_FalconStrike_Targeting_C.UserConstructionScript");

	AWeapon_HardType_FalconStrike_Targeting_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_HardType_FalconStrike_Targeting.Weapon_HardType_FalconStrike_Targeting_C.BndEvt__FalconStrikeTargeting_K2Node_ComponentBoundEvent_0_TargetingUpdateSignature__DelegateSignature_Weapon_HardType_FalconStrike_Targeting
// (BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeapon_HardType_FalconStrike_Targeting_C::BndEvt__FalconStrikeTargeting_K2Node_ComponentBoundEvent_0_TargetingUpdateSignature__DelegateSignature_Weapon_HardType_FalconStrike_Targeting(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_HardType_FalconStrike_Targeting.Weapon_HardType_FalconStrike_Targeting_C.BndEvt__FalconStrikeTargeting_K2Node_ComponentBoundEvent_0_TargetingUpdateSignature__DelegateSignature_Weapon_HardType_FalconStrike_Targeting");

	AWeapon_HardType_FalconStrike_Targeting_C_BndEvt__FalconStrikeTargeting_K2Node_ComponentBoundEvent_0_TargetingUpdateSignature__DelegateSignature_Weapon_HardType_FalconStrike_Targeting_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_HardType_FalconStrike_Targeting.Weapon_HardType_FalconStrike_Targeting_C.BndEvt__BPWeaponFireProjectile_Gunner_FalconStrike_K2Node_ComponentBoundEvent_0_WeaponUsedEvent__DelegateSignature_Weapon_Hardpoint_FalconStrike_DumbFire
// (BlueprintEvent)

void AWeapon_HardType_FalconStrike_Targeting_C::BndEvt__BPWeaponFireProjectile_Gunner_FalconStrike_K2Node_ComponentBoundEvent_0_WeaponUsedEvent__DelegateSignature_Weapon_Hardpoint_FalconStrike_DumbFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_HardType_FalconStrike_Targeting.Weapon_HardType_FalconStrike_Targeting_C.BndEvt__BPWeaponFireProjectile_Gunner_FalconStrike_K2Node_ComponentBoundEvent_0_WeaponUsedEvent__DelegateSignature_Weapon_Hardpoint_FalconStrike_DumbFire");

	AWeapon_HardType_FalconStrike_Targeting_C_BndEvt__BPWeaponFireProjectile_Gunner_FalconStrike_K2Node_ComponentBoundEvent_0_WeaponUsedEvent__DelegateSignature_Weapon_Hardpoint_FalconStrike_DumbFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_HardType_FalconStrike_Targeting.Weapon_HardType_FalconStrike_Targeting_C.ExecuteUbergraph_Weapon_HardType_FalconStrike_Targeting
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWeapon_HardType_FalconStrike_Targeting_C::ExecuteUbergraph_Weapon_HardType_FalconStrike_Targeting(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_HardType_FalconStrike_Targeting.Weapon_HardType_FalconStrike_Targeting_C.ExecuteUbergraph_Weapon_HardType_FalconStrike_Targeting");

	AWeapon_HardType_FalconStrike_Targeting_C_ExecuteUbergraph_Weapon_HardType_FalconStrike_Targeting_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
