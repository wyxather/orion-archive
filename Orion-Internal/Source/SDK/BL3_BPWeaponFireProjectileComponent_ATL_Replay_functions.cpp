// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectileComponent_ATL_Replay_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeaponFireProjectileComponent_ATL_Replay.BPWeaponFireProjectileComponent_ATL_Replay_C.GetLockedTarget
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UBPWeaponFireProjectileComponent_ATL_Replay_C::GetLockedTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_ATL_Replay.BPWeaponFireProjectileComponent_ATL_Replay_C.GetLockedTarget");

	UBPWeaponFireProjectileComponent_ATL_Replay_C_GetLockedTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPWeaponFireProjectileComponent_ATL_Replay.BPWeaponFireProjectileComponent_ATL_Replay_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPWeaponFireProjectileComponent_ATL_Replay_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_ATL_Replay.BPWeaponFireProjectileComponent_ATL_Replay_C.ReceiveBeginPlay");

	UBPWeaponFireProjectileComponent_ATL_Replay_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectileComponent_ATL_Replay.BPWeaponFireProjectileComponent_ATL_Replay_C.Notify_WeaponFired
// (BlueprintCallable, BlueprintEvent)

void UBPWeaponFireProjectileComponent_ATL_Replay_C::Notify_WeaponFired()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_ATL_Replay.BPWeaponFireProjectileComponent_ATL_Replay_C.Notify_WeaponFired");

	UBPWeaponFireProjectileComponent_ATL_Replay_C_Notify_WeaponFired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectileComponent_ATL_Replay.BPWeaponFireProjectileComponent_ATL_Replay_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_ATL_Replay
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWeaponFireProjectileComponent_ATL_Replay_C::ExecuteUbergraph_BPWeaponFireProjectileComponent_ATL_Replay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_ATL_Replay.BPWeaponFireProjectileComponent_ATL_Replay_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_ATL_Replay");

	UBPWeaponFireProjectileComponent_ATL_Replay_C_ExecuteUbergraph_BPWeaponFireProjectileComponent_ATL_Replay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
