// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectileComponent_JAK_Rose_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeaponFireProjectileComponent_JAK_Rose.BPWeaponFireProjectileComponent_JAK_Rose_C.GetShotLightProjectileData
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UBPWeaponFireProjectileComponent_JAK_Rose_C::GetShotLightProjectileData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_JAK_Rose.BPWeaponFireProjectileComponent_JAK_Rose_C.GetShotLightProjectileData");

	UBPWeaponFireProjectileComponent_JAK_Rose_C_GetShotLightProjectileData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPWeaponFireProjectileComponent_JAK_Rose.BPWeaponFireProjectileComponent_JAK_Rose_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBPWeaponFireProjectileComponent_JAK_Rose_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_JAK_Rose.BPWeaponFireProjectileComponent_JAK_Rose_C.ReceiveBeginPlay");

	UBPWeaponFireProjectileComponent_JAK_Rose_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectileComponent_JAK_Rose.BPWeaponFireProjectileComponent_JAK_Rose_C.NotifyUsedStarted_Event
// (BlueprintCallable, BlueprintEvent)

void UBPWeaponFireProjectileComponent_JAK_Rose_C::NotifyUsedStarted_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_JAK_Rose.BPWeaponFireProjectileComponent_JAK_Rose_C.NotifyUsedStarted_Event");

	UBPWeaponFireProjectileComponent_JAK_Rose_C_NotifyUsedStarted_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectileComponent_JAK_Rose.BPWeaponFireProjectileComponent_JAK_Rose_C.NotifyUsedFinished_Event
// (BlueprintCallable, BlueprintEvent)

void UBPWeaponFireProjectileComponent_JAK_Rose_C::NotifyUsedFinished_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_JAK_Rose.BPWeaponFireProjectileComponent_JAK_Rose_C.NotifyUsedFinished_Event");

	UBPWeaponFireProjectileComponent_JAK_Rose_C_NotifyUsedFinished_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectileComponent_JAK_Rose.BPWeaponFireProjectileComponent_JAK_Rose_C.IncrementBurst
// (BlueprintCallable, BlueprintEvent)

void UBPWeaponFireProjectileComponent_JAK_Rose_C::IncrementBurst()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_JAK_Rose.BPWeaponFireProjectileComponent_JAK_Rose_C.IncrementBurst");

	UBPWeaponFireProjectileComponent_JAK_Rose_C_IncrementBurst_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectileComponent_JAK_Rose.BPWeaponFireProjectileComponent_JAK_Rose_C.ResetGate
// (BlueprintCallable, BlueprintEvent)

void UBPWeaponFireProjectileComponent_JAK_Rose_C::ResetGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_JAK_Rose.BPWeaponFireProjectileComponent_JAK_Rose_C.ResetGate");

	UBPWeaponFireProjectileComponent_JAK_Rose_C_ResetGate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeaponFireProjectileComponent_JAK_Rose.BPWeaponFireProjectileComponent_JAK_Rose_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_JAK_Rose
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPWeaponFireProjectileComponent_JAK_Rose_C::ExecuteUbergraph_BPWeaponFireProjectileComponent_JAK_Rose(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeaponFireProjectileComponent_JAK_Rose.BPWeaponFireProjectileComponent_JAK_Rose_C.ExecuteUbergraph_BPWeaponFireProjectileComponent_JAK_Rose");

	UBPWeaponFireProjectileComponent_JAK_Rose_C_ExecuteUbergraph_BPWeaponFireProjectileComponent_JAK_Rose_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
