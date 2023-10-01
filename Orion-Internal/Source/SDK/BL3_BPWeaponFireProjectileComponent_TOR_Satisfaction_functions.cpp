// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectileComponent_TOR_Satisfaction_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeaponFireProjectileComponent_TOR_Satisfaction.BPWeaponFireProjectileComponent_TOR_Satisfaction_C.GetLockedTarget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UBPWeaponFireProjectileComponent_TOR_Satisfaction_C::GetLockedTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_TOR_Satisfaction.BPWeaponFireProjectileComponent_TOR_Satisfaction_C.GetLockedTarget");

	UBPWeaponFireProjectileComponent_TOR_Satisfaction_C_GetLockedTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPWeaponFireProjectileComponent_TOR_Satisfaction.BPWeaponFireProjectileComponent_TOR_Satisfaction_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPWeaponFireProjectileComponent_TOR_Satisfaction_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_TOR_Satisfaction.BPWeaponFireProjectileComponent_TOR_Satisfaction_C.ReceiveBeginPlay");

	UBPWeaponFireProjectileComponent_TOR_Satisfaction_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectileComponent_TOR_Satisfaction.BPWeaponFireProjectileComponent_TOR_Satisfaction_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_TOR_Satisfaction
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWeaponFireProjectileComponent_TOR_Satisfaction_C::ExecuteUbergraph_BPWeaponFireProjectileComponent_TOR_Satisfaction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_TOR_Satisfaction.BPWeaponFireProjectileComponent_TOR_Satisfaction_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_TOR_Satisfaction");

	UBPWeaponFireProjectileComponent_TOR_Satisfaction_C_ExecuteUbergraph_BPWeaponFireProjectileComponent_TOR_Satisfaction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
