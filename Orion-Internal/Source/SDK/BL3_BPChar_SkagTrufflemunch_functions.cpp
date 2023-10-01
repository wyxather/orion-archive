// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_SkagTrufflemunch_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPChar_SkagTrufflemunch.BPChar_SkagTrufflemunch_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_SkagTrufflemunch_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_SkagTrufflemunch.BPChar_SkagTrufflemunch_C.UserConstructionScript");

	ABPChar_SkagTrufflemunch_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_SkagTrufflemunch.BPChar_SkagTrufflemunch_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_SkagTrufflemunch
// (BlueprintEvent)
// Parameters:
// class AActor*                  DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_SkagTrufflemunch_C::BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_SkagTrufflemunch(class AActor* DamageReceiver, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_SkagTrufflemunch.BPChar_SkagTrufflemunch_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_SkagTrufflemunch");

	ABPChar_SkagTrufflemunch_C_BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_SkagTrufflemunch_Params params;
	params.DamageReceiver = DamageReceiver;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_SkagTrufflemunch.BPChar_SkagTrufflemunch_C.ExecuteUbergraph_BPChar_SkagTrufflemunch
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_SkagTrufflemunch_C::ExecuteUbergraph_BPChar_SkagTrufflemunch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_SkagTrufflemunch.BPChar_SkagTrufflemunch_C.ExecuteUbergraph_BPChar_SkagTrufflemunch");

	ABPChar_SkagTrufflemunch_C_ExecuteUbergraph_BPChar_SkagTrufflemunch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
