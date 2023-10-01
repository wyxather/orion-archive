// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Gunner_CausedElementalEffectParent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Passive_Gunner_CausedElementalEffectParent.Passive_Gunner_CausedElementalEffectParent_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassive_Gunner_CausedElementalEffectParent_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_CausedElementalEffectParent.Passive_Gunner_CausedElementalEffectParent_C.OnActivated");

	UPassive_Gunner_CausedElementalEffectParent_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_CausedElementalEffectParent.Passive_Gunner_CausedElementalEffectParent_C.GunnerCausedElementalEffect
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Causer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FStatusEffectSpec       Spec                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPassive_Gunner_CausedElementalEffectParent_C::GunnerCausedElementalEffect(class AActor* Causer, const struct FStatusEffectSpec& Spec)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_CausedElementalEffectParent.Passive_Gunner_CausedElementalEffectParent_C.GunnerCausedElementalEffect");

	UPassive_Gunner_CausedElementalEffectParent_C_GunnerCausedElementalEffect_Params params;
	params.Causer = Causer;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_CausedElementalEffectParent.Passive_Gunner_CausedElementalEffectParent_C.Gunner_IronBearEnteredAndReady
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter_IronBear*  IronBear                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Gunner_CausedElementalEffectParent_C::Gunner_IronBearEnteredAndReady(class AOakCharacter_IronBear* IronBear)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_CausedElementalEffectParent.Passive_Gunner_CausedElementalEffectParent_C.Gunner_IronBearEnteredAndReady");

	UPassive_Gunner_CausedElementalEffectParent_C_Gunner_IronBearEnteredAndReady_Params params;
	params.IronBear = IronBear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_CausedElementalEffectParent.Passive_Gunner_CausedElementalEffectParent_C.ExecuteUbergraph_Passive_Gunner_CausedElementalEffectParent
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Gunner_CausedElementalEffectParent_C::ExecuteUbergraph_Passive_Gunner_CausedElementalEffectParent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_CausedElementalEffectParent.Passive_Gunner_CausedElementalEffectParent_C.ExecuteUbergraph_Passive_Gunner_CausedElementalEffectParent");

	UPassive_Gunner_CausedElementalEffectParent_C_ExecuteUbergraph_Passive_Gunner_CausedElementalEffectParent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
