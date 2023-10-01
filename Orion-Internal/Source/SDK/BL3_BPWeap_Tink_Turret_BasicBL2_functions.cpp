// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_Tink_Turret_BasicBL2_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeap_Tink_Turret_BasicBL2.BPWeap_Tink_Turret_BasicBL2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPWeap_Tink_Turret_BasicBL2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_Tink_Turret_BasicBL2.BPWeap_Tink_Turret_BasicBL2_C.UserConstructionScript");

	ABPWeap_Tink_Turret_BasicBL2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_Tink_Turret_BasicBL2.BPWeap_Tink_Turret_BasicBL2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPWeap_Tink_Turret_BasicBL2_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_Tink_Turret_BasicBL2.BPWeap_Tink_Turret_BasicBL2_C.ReceiveBeginPlay");

	ABPWeap_Tink_Turret_BasicBL2_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_Tink_Turret_BasicBL2.BPWeap_Tink_Turret_BasicBL2_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_Tink_Turret_BasicBL2_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_Tink_Turret_BasicBL2.BPWeap_Tink_Turret_BasicBL2_C.ReceiveTick");

	ABPWeap_Tink_Turret_BasicBL2_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_Tink_Turret_BasicBL2.BPWeap_Tink_Turret_BasicBL2_C.BndEvt__WeaponFireProjectile_K2Node_ComponentBoundEvent_3_WeaponUsedEvent__DelegateSignature_BPWeap_Tink_Turret_BasicBL2
// (BlueprintEvent)

void ABPWeap_Tink_Turret_BasicBL2_C::BndEvt__WeaponFireProjectile_K2Node_ComponentBoundEvent_3_WeaponUsedEvent__DelegateSignature_BPWeap_Tink_Turret_BasicBL2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_Tink_Turret_BasicBL2.BPWeap_Tink_Turret_BasicBL2_C.BndEvt__WeaponFireProjectile_K2Node_ComponentBoundEvent_3_WeaponUsedEvent__DelegateSignature_BPWeap_Tink_Turret_BasicBL2");

	ABPWeap_Tink_Turret_BasicBL2_C_BndEvt__WeaponFireProjectile_K2Node_ComponentBoundEvent_3_WeaponUsedEvent__DelegateSignature_BPWeap_Tink_Turret_BasicBL2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_Tink_Turret_BasicBL2.BPWeap_Tink_Turret_BasicBL2_C.BndEvt__WeaponFireProjectile_K2Node_ComponentBoundEvent_0_WeaponUsedEvent__DelegateSignature_BPWeap_Tink_Turret_BasicBL2
// (BlueprintEvent)

void ABPWeap_Tink_Turret_BasicBL2_C::BndEvt__WeaponFireProjectile_K2Node_ComponentBoundEvent_0_WeaponUsedEvent__DelegateSignature_BPWeap_Tink_Turret_BasicBL2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_Tink_Turret_BasicBL2.BPWeap_Tink_Turret_BasicBL2_C.BndEvt__WeaponFireProjectile_K2Node_ComponentBoundEvent_0_WeaponUsedEvent__DelegateSignature_BPWeap_Tink_Turret_BasicBL2");

	ABPWeap_Tink_Turret_BasicBL2_C_BndEvt__WeaponFireProjectile_K2Node_ComponentBoundEvent_0_WeaponUsedEvent__DelegateSignature_BPWeap_Tink_Turret_BasicBL2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_Tink_Turret_BasicBL2.BPWeap_Tink_Turret_BasicBL2_C.ExecuteUbergraph_BPWeap_Tink_Turret_BasicBL2
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_Tink_Turret_BasicBL2_C::ExecuteUbergraph_BPWeap_Tink_Turret_BasicBL2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_Tink_Turret_BasicBL2.BPWeap_Tink_Turret_BasicBL2_C.ExecuteUbergraph_BPWeap_Tink_Turret_BasicBL2");

	ABPWeap_Tink_Turret_BasicBL2_C_ExecuteUbergraph_BPWeap_Tink_Turret_BasicBL2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
