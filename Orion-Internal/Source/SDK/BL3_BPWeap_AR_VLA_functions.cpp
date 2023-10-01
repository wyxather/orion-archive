// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_AR_VLA_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeap_AR_VLA.BPWeap_AR_VLA_C.Update_Bipod_FX
// (Public, BlueprintCallable, BlueprintEvent)

void ABPWeap_AR_VLA_C::Update_Bipod_FX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_AR_VLA.BPWeap_AR_VLA_C.Update_Bipod_FX");

	ABPWeap_AR_VLA_C_Update_Bipod_FX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_AR_VLA.BPWeap_AR_VLA_C.UpdateResourceLocks
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_AR_VLA_C::UpdateResourceLocks(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_AR_VLA.BPWeap_AR_VLA_C.UpdateResourceLocks");

	ABPWeap_AR_VLA_C_UpdateResourceLocks_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_AR_VLA.BPWeap_AR_VLA_C.OnSwitchedMode
// (Public, BlueprintCallable, BlueprintEvent, Const)

void ABPWeap_AR_VLA_C::OnSwitchedMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_AR_VLA.BPWeap_AR_VLA_C.OnSwitchedMode");

	ABPWeap_AR_VLA_C_OnSwitchedMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_AR_VLA.BPWeap_AR_VLA_C.OnPutDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_AR_VLA_C::OnPutDown(class AWeapon* Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_AR_VLA.BPWeap_AR_VLA_C.OnPutDown");

	ABPWeap_AR_VLA_C_OnPutDown_Params params;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_AR_VLA.BPWeap_AR_VLA_C.OnEquipped
// (Public, BlueprintCallable, BlueprintEvent)

void ABPWeap_AR_VLA_C::OnEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_AR_VLA.BPWeap_AR_VLA_C.OnEquipped");

	ABPWeap_AR_VLA_C_OnEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_AR_VLA.BPWeap_AR_VLA_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPWeap_AR_VLA_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_AR_VLA.BPWeap_AR_VLA_C.UserConstructionScript");

	ABPWeap_AR_VLA_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_AR_VLA.BPWeap_AR_VLA_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPWeap_AR_VLA_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_AR_VLA.BPWeap_AR_VLA_C.ReceiveBeginPlay");

	ABPWeap_AR_VLA_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_AR_VLA.BPWeap_AR_VLA_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_AR_VLA_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_AR_VLA.BPWeap_AR_VLA_C.ReceiveEndPlay");

	ABPWeap_AR_VLA_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_AR_VLA.BPWeap_AR_VLA_C.ExecuteUbergraph_BPWeap_AR_VLA
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_AR_VLA_C::ExecuteUbergraph_BPWeap_AR_VLA(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_AR_VLA.BPWeap_AR_VLA_C.ExecuteUbergraph_BPWeap_AR_VLA");

	ABPWeap_AR_VLA_C_ExecuteUbergraph_BPWeap_AR_VLA_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
