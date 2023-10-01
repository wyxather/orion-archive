// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectile_Gunner_FalconStrike_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeaponFireProjectile_Gunner_FalconStrike.BPWeaponFireProjectile_Gunner_FalconStrike_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPWeaponFireProjectile_Gunner_FalconStrike_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_Gunner_FalconStrike.BPWeaponFireProjectile_Gunner_FalconStrike_C.ReceiveBeginPlay");

	UBPWeaponFireProjectile_Gunner_FalconStrike_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectile_Gunner_FalconStrike.BPWeaponFireProjectile_Gunner_FalconStrike_C.K2_OnActivated
// (Event, Public, BlueprintEvent)

void UBPWeaponFireProjectile_Gunner_FalconStrike_C::K2_OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_Gunner_FalconStrike.BPWeaponFireProjectile_Gunner_FalconStrike_C.K2_OnActivated");

	UBPWeaponFireProjectile_Gunner_FalconStrike_C_K2_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectile_Gunner_FalconStrike.BPWeaponFireProjectile_Gunner_FalconStrike_C.ExecuteUbergraph_BPWeaponFireProjectile_Gunner_FalconStrike
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWeaponFireProjectile_Gunner_FalconStrike_C::ExecuteUbergraph_BPWeaponFireProjectile_Gunner_FalconStrike(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectile_Gunner_FalconStrike.BPWeaponFireProjectile_Gunner_FalconStrike_C.ExecuteUbergraph_BPWeaponFireProjectile_Gunner_FalconStrike");

	UBPWeaponFireProjectile_Gunner_FalconStrike_C_ExecuteUbergraph_BPWeaponFireProjectile_Gunner_FalconStrike_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
