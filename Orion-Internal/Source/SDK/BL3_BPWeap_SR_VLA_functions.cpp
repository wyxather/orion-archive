// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_SR_VLA_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeap_SR_VLA.BPWeap_SR_VLA_C.OnPutDown
// (Public, BlueprintCallable, BlueprintEvent)

void ABPWeap_SR_VLA_C::OnPutDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_SR_VLA.BPWeap_SR_VLA_C.OnPutDown");

	ABPWeap_SR_VLA_C_OnPutDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_SR_VLA.BPWeap_SR_VLA_C.OnSwitchedMode
// (Public, BlueprintCallable, BlueprintEvent)

void ABPWeap_SR_VLA_C::OnSwitchedMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_SR_VLA.BPWeap_SR_VLA_C.OnSwitchedMode");

	ABPWeap_SR_VLA_C_OnSwitchedMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_SR_VLA.BPWeap_SR_VLA_C.OnEquipped
// (Public, BlueprintCallable, BlueprintEvent)

void ABPWeap_SR_VLA_C::OnEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_SR_VLA.BPWeap_SR_VLA_C.OnEquipped");

	ABPWeap_SR_VLA_C_OnEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_SR_VLA.BPWeap_SR_VLA_C.UpdateResourceLocks
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_SR_VLA_C::UpdateResourceLocks(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_SR_VLA.BPWeap_SR_VLA_C.UpdateResourceLocks");

	ABPWeap_SR_VLA_C_UpdateResourceLocks_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_SR_VLA.BPWeap_SR_VLA_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPWeap_SR_VLA_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_SR_VLA.BPWeap_SR_VLA_C.UserConstructionScript");

	ABPWeap_SR_VLA_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_SR_VLA.BPWeap_SR_VLA_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPWeap_SR_VLA_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_SR_VLA.BPWeap_SR_VLA_C.ReceiveBeginPlay");

	ABPWeap_SR_VLA_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_SR_VLA.BPWeap_SR_VLA_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_SR_VLA_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_SR_VLA.BPWeap_SR_VLA_C.ReceiveEndPlay");

	ABPWeap_SR_VLA_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_SR_VLA.BPWeap_SR_VLA_C.Weapon_NotifyPutDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_SR_VLA_C::Weapon_NotifyPutDown(class AWeapon* EventWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_SR_VLA.BPWeap_SR_VLA_C.Weapon_NotifyPutDown");

	ABPWeap_SR_VLA_C_Weapon_NotifyPutDown_Params params;
	params.EventWeapon = EventWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_SR_VLA.BPWeap_SR_VLA_C.ExecuteUbergraph_BPWeap_SR_VLA
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_SR_VLA_C::ExecuteUbergraph_BPWeap_SR_VLA(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_SR_VLA.BPWeap_SR_VLA_C.ExecuteUbergraph_BPWeap_SR_VLA");

	ABPWeap_SR_VLA_C_ExecuteUbergraph_BPWeap_SR_VLA_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
