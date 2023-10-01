// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_SkagChubby_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPChar_SkagChubby.BPChar_SkagChubby_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_SkagChubby_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_SkagChubby.BPChar_SkagChubby_C.UserConstructionScript");

	ABPChar_SkagChubby_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_SkagChubby.BPChar_SkagChubby_C.DE_LowHealth
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageReactionEventSummary DamageSummary                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ABPChar_SkagChubby_C::DE_LowHealth(const struct FDamageReactionEventSummary& DamageSummary)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_SkagChubby.BPChar_SkagChubby_C.DE_LowHealth");

	ABPChar_SkagChubby_C_DE_LowHealth_Params params;
	params.DamageSummary = DamageSummary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_SkagChubby.BPChar_SkagChubby_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_SkagChubby
// (BlueprintEvent)
// Parameters:
// class AActor*                  DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_SkagChubby_C::BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_SkagChubby(class AActor* DamageReceiver, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_SkagChubby.BPChar_SkagChubby_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_SkagChubby");

	ABPChar_SkagChubby_C_BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_SkagChubby_Params params;
	params.DamageReceiver = DamageReceiver;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_SkagChubby.BPChar_SkagChubby_C.ExecuteUbergraph_BPChar_SkagChubby
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_SkagChubby_C::ExecuteUbergraph_BPChar_SkagChubby(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_SkagChubby.BPChar_SkagChubby_C.ExecuteUbergraph_BPChar_SkagChubby");

	ABPChar_SkagChubby_C_ExecuteUbergraph_BPChar_SkagChubby_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
