// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_Wildfire_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PassiveSkill_Siren_Wildfire.PassiveSkill_Siren_Wildfire_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassiveSkill_Siren_Wildfire_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Wildfire.PassiveSkill_Siren_Wildfire_C.OnActivated");

	UPassiveSkill_Siren_Wildfire_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_Wildfire.PassiveSkill_Siren_Wildfire_C.WildfireOnCausedElementalEffect
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Causer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FStatusEffectSpec       Spec                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPassiveSkill_Siren_Wildfire_C::WildfireOnCausedElementalEffect(class AActor* Causer, const struct FStatusEffectSpec& Spec)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Wildfire.PassiveSkill_Siren_Wildfire_C.WildfireOnCausedElementalEffect");

	UPassiveSkill_Siren_Wildfire_C_WildfireOnCausedElementalEffect_Params params;
	params.Causer = Causer;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_Wildfire.PassiveSkill_Siren_Wildfire_C.WildfireOnCausedMaxResource
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EOakStatusEffectResourceEffectType ResourceEffectType             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Siren_Wildfire_C::WildfireOnCausedMaxResource(class AActor* Target, EOakStatusEffectResourceEffectType ResourceEffectType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Wildfire.PassiveSkill_Siren_Wildfire_C.WildfireOnCausedMaxResource");

	UPassiveSkill_Siren_Wildfire_C_WildfireOnCausedMaxResource_Params params;
	params.Target = Target;
	params.ResourceEffectType = ResourceEffectType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_Wildfire.PassiveSkill_Siren_Wildfire_C.OpenWildfireGates
// (BlueprintCallable, BlueprintEvent)

void UPassiveSkill_Siren_Wildfire_C::OpenWildfireGates()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Wildfire.PassiveSkill_Siren_Wildfire_C.OpenWildfireGates");

	UPassiveSkill_Siren_Wildfire_C_OpenWildfireGates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_Wildfire.PassiveSkill_Siren_Wildfire_C.CloseWildfireGates
// (BlueprintCallable, BlueprintEvent)

void UPassiveSkill_Siren_Wildfire_C::CloseWildfireGates()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Wildfire.PassiveSkill_Siren_Wildfire_C.CloseWildfireGates");

	UPassiveSkill_Siren_Wildfire_C_CloseWildfireGates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_Wildfire.PassiveSkill_Siren_Wildfire_C.ExecuteUbergraph_PassiveSkill_Siren_Wildfire
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Siren_Wildfire_C::ExecuteUbergraph_PassiveSkill_Siren_Wildfire(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_Wildfire.PassiveSkill_Siren_Wildfire_C.ExecuteUbergraph_PassiveSkill_Siren_Wildfire");

	UPassiveSkill_Siren_Wildfire_C_ExecuteUbergraph_PassiveSkill_Siren_Wildfire_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
