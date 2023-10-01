// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectile_Smog_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeaponFireProjectile_Smog.BPWeaponFireProjectile_Smog_C.GetShotLightProjectileData
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UBPWeaponFireProjectile_Smog_C::GetShotLightProjectileData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_Smog.BPWeaponFireProjectile_Smog_C.GetShotLightProjectileData");

	UBPWeaponFireProjectile_Smog_C_GetShotLightProjectileData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPWeaponFireProjectile_Smog.BPWeaponFireProjectile_Smog_C.OnCausedDeath_Event
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBPWeaponFireProjectile_Smog_C::OnCausedDeath_Event(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_Smog.BPWeaponFireProjectile_Smog_C.OnCausedDeath_Event");

	UBPWeaponFireProjectile_Smog_C_OnCausedDeath_Event_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectile_Smog.BPWeaponFireProjectile_Smog_C.K2_OnActivated
// (Event, Public, BlueprintEvent)

void UBPWeaponFireProjectile_Smog_C::K2_OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_Smog.BPWeaponFireProjectile_Smog_C.K2_OnActivated");

	UBPWeaponFireProjectile_Smog_C_K2_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectile_Smog.BPWeaponFireProjectile_Smog_C.K2_OnDeactivated
// (Event, Public, BlueprintEvent)

void UBPWeaponFireProjectile_Smog_C::K2_OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_Smog.BPWeaponFireProjectile_Smog_C.K2_OnDeactivated");

	UBPWeaponFireProjectile_Smog_C_K2_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectile_Smog.BPWeaponFireProjectile_Smog_C.ExecuteUbergraph_BPWeaponFireProjectile_Smog
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWeaponFireProjectile_Smog_C::ExecuteUbergraph_BPWeaponFireProjectile_Smog(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_Smog.BPWeaponFireProjectile_Smog_C.ExecuteUbergraph_BPWeaponFireProjectile_Smog");

	UBPWeaponFireProjectile_Smog_C_ExecuteUbergraph_BPWeaponFireProjectile_Smog_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
