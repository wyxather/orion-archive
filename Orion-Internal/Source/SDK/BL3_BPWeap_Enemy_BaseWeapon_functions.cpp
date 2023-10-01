// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_Enemy_BaseWeapon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeap_Enemy_BaseWeapon.BPWeap_Enemy_BaseWeapon_C.SetMuzzleFlash
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABPWeap_Enemy_BaseWeapon_C::SetMuzzleFlash()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_Enemy_BaseWeapon.BPWeap_Enemy_BaseWeapon_C.SetMuzzleFlash");

	ABPWeap_Enemy_BaseWeapon_C_SetMuzzleFlash_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_Enemy_BaseWeapon.BPWeap_Enemy_BaseWeapon_C.SetDamageType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  DamageType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_Enemy_BaseWeapon_C::SetDamageType(class UClass* DamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_Enemy_BaseWeapon.BPWeap_Enemy_BaseWeapon_C.SetDamageType");

	ABPWeap_Enemy_BaseWeapon_C_SetDamageType_Params params;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_Enemy_BaseWeapon.BPWeap_Enemy_BaseWeapon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPWeap_Enemy_BaseWeapon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_Enemy_BaseWeapon.BPWeap_Enemy_BaseWeapon_C.UserConstructionScript");

	ABPWeap_Enemy_BaseWeapon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_Enemy_BaseWeapon.BPWeap_Enemy_BaseWeapon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPWeap_Enemy_BaseWeapon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_Enemy_BaseWeapon.BPWeap_Enemy_BaseWeapon_C.ReceiveBeginPlay");

	ABPWeap_Enemy_BaseWeapon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_Enemy_BaseWeapon.BPWeap_Enemy_BaseWeapon_C.ExecuteUbergraph_BPWeap_Enemy_BaseWeapon
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_Enemy_BaseWeapon_C::ExecuteUbergraph_BPWeap_Enemy_BaseWeapon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_Enemy_BaseWeapon.BPWeap_Enemy_BaseWeapon_C.ExecuteUbergraph_BPWeap_Enemy_BaseWeapon");

	ABPWeap_Enemy_BaseWeapon_C_ExecuteUbergraph_BPWeap_Enemy_BaseWeapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
