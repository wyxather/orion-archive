// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_SkagPup_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPChar_SkagPup.BPChar_SkagPup_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_SkagPup_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_SkagPup.BPChar_SkagPup_C.UserConstructionScript");

	ABPChar_SkagPup_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_SkagPup.BPChar_SkagPup_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPChar_SkagPup_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_SkagPup.BPChar_SkagPup_C.ReceiveBeginPlay");

	ABPChar_SkagPup_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_SkagPup.BPChar_SkagPup_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_1_DamageCompDiedDelegate__DelegateSignature_BPChar_SkagPup
// (BlueprintEvent)
// Parameters:
// class AActor*                  DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_SkagPup_C::BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_1_DamageCompDiedDelegate__DelegateSignature_BPChar_SkagPup(class AActor* DamageReceiver, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_SkagPup.BPChar_SkagPup_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_1_DamageCompDiedDelegate__DelegateSignature_BPChar_SkagPup");

	ABPChar_SkagPup_C_BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_1_DamageCompDiedDelegate__DelegateSignature_BPChar_SkagPup_Params params;
	params.DamageReceiver = DamageReceiver;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_SkagPup.BPChar_SkagPup_C.ExecuteUbergraph_BPChar_SkagPup
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_SkagPup_C::ExecuteUbergraph_BPChar_SkagPup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_SkagPup.BPChar_SkagPup_C.ExecuteUbergraph_BPChar_SkagPup");

	ABPChar_SkagPup_C_ExecuteUbergraph_BPChar_SkagPup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
