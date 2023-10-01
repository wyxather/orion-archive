// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_SkagButtmunch_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPChar_SkagButtmunch.BPChar_SkagButtmunch_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_SkagButtmunch_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_SkagButtmunch.BPChar_SkagButtmunch_C.UserConstructionScript");

	ABPChar_SkagButtmunch_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_SkagButtmunch.BPChar_SkagButtmunch_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_SkagButtmunch
// (BlueprintEvent)
// Parameters:
// class AActor*                  DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_SkagButtmunch_C::BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_SkagButtmunch(class AActor* DamageReceiver, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_SkagButtmunch.BPChar_SkagButtmunch_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_SkagButtmunch");

	ABPChar_SkagButtmunch_C_BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_SkagButtmunch_Params params;
	params.DamageReceiver = DamageReceiver;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_SkagButtmunch.BPChar_SkagButtmunch_C.ExecuteUbergraph_BPChar_SkagButtmunch
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_SkagButtmunch_C::ExecuteUbergraph_BPChar_SkagButtmunch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_SkagButtmunch.BPChar_SkagButtmunch_C.ExecuteUbergraph_BPChar_SkagButtmunch");

	ABPChar_SkagButtmunch_C_ExecuteUbergraph_BPChar_SkagButtmunch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
