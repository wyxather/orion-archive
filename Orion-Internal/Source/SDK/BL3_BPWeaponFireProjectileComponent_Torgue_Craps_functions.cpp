// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectileComponent_Torgue_Craps_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeaponFireProjectileComponent_Torgue_Craps.BPWeaponFireProjectileComponent_Torgue_Craps_C.GetShotLightProjectileData
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UBPWeaponFireProjectileComponent_Torgue_Craps_C::GetShotLightProjectileData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_Torgue_Craps.BPWeaponFireProjectileComponent_Torgue_Craps_C.GetShotLightProjectileData");

	UBPWeaponFireProjectileComponent_Torgue_Craps_C_GetShotLightProjectileData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPWeaponFireProjectileComponent_Torgue_Craps.BPWeaponFireProjectileComponent_Torgue_Craps_C.ReloadComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCompleted                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWeaponFireProjectileComponent_Torgue_Craps_C::ReloadComplete(class AWeapon* EventWeapon, bool bCompleted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_Torgue_Craps.BPWeaponFireProjectileComponent_Torgue_Craps_C.ReloadComplete");

	UBPWeaponFireProjectileComponent_Torgue_Craps_C_ReloadComplete_Params params;
	params.EventWeapon = EventWeapon;
	params.bCompleted = bCompleted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectileComponent_Torgue_Craps.BPWeaponFireProjectileComponent_Torgue_Craps_C.WeaponUsed
// (BlueprintCallable, BlueprintEvent)

void UBPWeaponFireProjectileComponent_Torgue_Craps_C::WeaponUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_Torgue_Craps.BPWeaponFireProjectileComponent_Torgue_Craps_C.WeaponUsed");

	UBPWeaponFireProjectileComponent_Torgue_Craps_C_WeaponUsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectileComponent_Torgue_Craps.BPWeaponFireProjectileComponent_Torgue_Craps_C.ChooseCrapsNumber
// (BlueprintCallable, BlueprintEvent)

void UBPWeaponFireProjectileComponent_Torgue_Craps_C::ChooseCrapsNumber()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_Torgue_Craps.BPWeaponFireProjectileComponent_Torgue_Craps_C.ChooseCrapsNumber");

	UBPWeaponFireProjectileComponent_Torgue_Craps_C_ChooseCrapsNumber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectileComponent_Torgue_Craps.BPWeaponFireProjectileComponent_Torgue_Craps_C.CheckCrapsShot
// (BlueprintCallable, BlueprintEvent)

void UBPWeaponFireProjectileComponent_Torgue_Craps_C::CheckCrapsShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_Torgue_Craps.BPWeaponFireProjectileComponent_Torgue_Craps_C.CheckCrapsShot");

	UBPWeaponFireProjectileComponent_Torgue_Craps_C_CheckCrapsShot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectileComponent_Torgue_Craps.BPWeaponFireProjectileComponent_Torgue_Craps_C.K2_OnActivated
// (Event, Public, BlueprintEvent)

void UBPWeaponFireProjectileComponent_Torgue_Craps_C::K2_OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_Torgue_Craps.BPWeaponFireProjectileComponent_Torgue_Craps_C.K2_OnActivated");

	UBPWeaponFireProjectileComponent_Torgue_Craps_C_K2_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectileComponent_Torgue_Craps.BPWeaponFireProjectileComponent_Torgue_Craps_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_Torgue_Craps
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWeaponFireProjectileComponent_Torgue_Craps_C::ExecuteUbergraph_BPWeaponFireProjectileComponent_Torgue_Craps(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_Torgue_Craps.BPWeaponFireProjectileComponent_Torgue_Craps_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_Torgue_Craps");

	UBPWeaponFireProjectileComponent_Torgue_Craps_C_ExecuteUbergraph_BPWeaponFireProjectileComponent_Torgue_Craps_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
