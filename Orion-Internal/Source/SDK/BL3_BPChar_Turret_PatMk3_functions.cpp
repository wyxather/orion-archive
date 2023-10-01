// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_Turret_PatMk3_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPChar_Turret_PatMk3.BPChar_Turret_PatMk3_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Turret_PatMk3_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Turret_PatMk3.BPChar_Turret_PatMk3_C.UserConstructionScript");

	ABPChar_Turret_PatMk3_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Turret_PatMk3.BPChar_Turret_PatMk3_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPChar_Turret_PatMk3_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Turret_PatMk3.BPChar_Turret_PatMk3_C.ReceiveBeginPlay");

	ABPChar_Turret_PatMk3_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Turret_PatMk3.BPChar_Turret_PatMk3_C.Fired
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Turret_PatMk3_C::Fired(class AWeapon* EventWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Turret_PatMk3.BPChar_Turret_PatMk3_C.Fired");

	ABPChar_Turret_PatMk3_C_Fired_Params params;
	params.EventWeapon = EventWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Turret_PatMk3.BPChar_Turret_PatMk3_C.ExecuteUbergraph_BPChar_Turret_PatMk3
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Turret_PatMk3_C::ExecuteUbergraph_BPChar_Turret_PatMk3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Turret_PatMk3.BPChar_Turret_PatMk3_C.ExecuteUbergraph_BPChar_Turret_PatMk3");

	ABPChar_Turret_PatMk3_C_ExecuteUbergraph_BPChar_Turret_PatMk3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
