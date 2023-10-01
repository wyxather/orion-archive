// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_TedioreTurret_PS_Sabre_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPChar_TedioreTurret_PS_Sabre.BPChar_TedioreTurret_PS_Sabre_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_TedioreTurret_PS_Sabre_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_TedioreTurret_PS_Sabre.BPChar_TedioreTurret_PS_Sabre_C.UserConstructionScript");

	ABPChar_TedioreTurret_PS_Sabre_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_TedioreTurret_PS_Sabre.BPChar_TedioreTurret_PS_Sabre_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPChar_TedioreTurret_PS_Sabre_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_TedioreTurret_PS_Sabre.BPChar_TedioreTurret_PS_Sabre_C.ReceiveBeginPlay");

	ABPChar_TedioreTurret_PS_Sabre_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_TedioreTurret_PS_Sabre.BPChar_TedioreTurret_PS_Sabre_C.Fired
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_TedioreTurret_PS_Sabre_C::Fired(class AWeapon* EventWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_TedioreTurret_PS_Sabre.BPChar_TedioreTurret_PS_Sabre_C.Fired");

	ABPChar_TedioreTurret_PS_Sabre_C_Fired_Params params;
	params.EventWeapon = EventWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_TedioreTurret_PS_Sabre.BPChar_TedioreTurret_PS_Sabre_C.Reload2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bAutoReload                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_TedioreTurret_PS_Sabre_C::Reload2(bool* bAutoReload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_TedioreTurret_PS_Sabre.BPChar_TedioreTurret_PS_Sabre_C.Reload2");

	ABPChar_TedioreTurret_PS_Sabre_C_Reload2_Params params;
	params.bAutoReload = bAutoReload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_TedioreTurret_PS_Sabre.BPChar_TedioreTurret_PS_Sabre_C.K2_OnMovementModeChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>*    NewMovementMode                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PrevCustomMode                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewCustomMode                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_TedioreTurret_PS_Sabre_C::K2_OnMovementModeChanged(TEnumAsByte<EMovementMode>* PrevMovementMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* PrevCustomMode, unsigned char* NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_TedioreTurret_PS_Sabre.BPChar_TedioreTurret_PS_Sabre_C.K2_OnMovementModeChanged");

	ABPChar_TedioreTurret_PS_Sabre_C_K2_OnMovementModeChanged_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.NewMovementMode = NewMovementMode;
	params.PrevCustomMode = PrevCustomMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_TedioreTurret_PS_Sabre.BPChar_TedioreTurret_PS_Sabre_C.ExecuteUbergraph_BPChar_TedioreTurret_PS_Sabre
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_TedioreTurret_PS_Sabre_C::ExecuteUbergraph_BPChar_TedioreTurret_PS_Sabre(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_TedioreTurret_PS_Sabre.BPChar_TedioreTurret_PS_Sabre_C.ExecuteUbergraph_BPChar_TedioreTurret_PS_Sabre");

	ABPChar_TedioreTurret_PS_Sabre_C_ExecuteUbergraph_BPChar_TedioreTurret_PS_Sabre_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
