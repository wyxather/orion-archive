// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectileComponent_Torgue_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeaponFireProjectileComponent_Torgue.BPWeaponFireProjectileComponent_Torgue_C.SelectProjectile
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UBPWeaponFireProjectileComponent_Torgue_C::SelectProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_Torgue.BPWeaponFireProjectileComponent_Torgue_C.SelectProjectile");

	UBPWeaponFireProjectileComponent_Torgue_C_SelectProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPWeaponFireProjectileComponent_Torgue.BPWeaponFireProjectileComponent_Torgue_C.K2_OnActivated
// (Event, Public, BlueprintEvent)

void UBPWeaponFireProjectileComponent_Torgue_C::K2_OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_Torgue.BPWeaponFireProjectileComponent_Torgue_C.K2_OnActivated");

	UBPWeaponFireProjectileComponent_Torgue_C_K2_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectileComponent_Torgue.BPWeaponFireProjectileComponent_Torgue_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_Torgue
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWeaponFireProjectileComponent_Torgue_C::ExecuteUbergraph_BPWeaponFireProjectileComponent_Torgue(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_Torgue.BPWeaponFireProjectileComponent_Torgue_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_Torgue");

	UBPWeaponFireProjectileComponent_Torgue_C_ExecuteUbergraph_BPWeaponFireProjectileComponent_Torgue_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
