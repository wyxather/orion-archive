// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_EnforcerBasic_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPChar_EnforcerBasic.BPChar_EnforcerBasic_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_EnforcerBasic_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_EnforcerBasic.BPChar_EnforcerBasic_C.UserConstructionScript");

	ABPChar_EnforcerBasic_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_EnforcerBasic.BPChar_EnforcerBasic_C.Enforcer_TransformToGun
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_EnforcerBasic_C::Enforcer_TransformToGun()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_EnforcerBasic.BPChar_EnforcerBasic_C.Enforcer_TransformToGun");

	ABPChar_EnforcerBasic_C_Enforcer_TransformToGun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_EnforcerBasic.BPChar_EnforcerBasic_C.CE_AttemptTransformToGun
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageReactionEventSummary DamageSummary                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ABPChar_EnforcerBasic_C::CE_AttemptTransformToGun(const struct FDamageReactionEventSummary& DamageSummary)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_EnforcerBasic.BPChar_EnforcerBasic_C.CE_AttemptTransformToGun");

	ABPChar_EnforcerBasic_C_CE_AttemptTransformToGun_Params params;
	params.DamageSummary = DamageSummary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_EnforcerBasic.BPChar_EnforcerBasic_C.ExecuteUbergraph_BPChar_EnforcerBasic
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_EnforcerBasic_C::ExecuteUbergraph_BPChar_EnforcerBasic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_EnforcerBasic.BPChar_EnforcerBasic_C.ExecuteUbergraph_BPChar_EnforcerBasic");

	ABPChar_EnforcerBasic_C_ExecuteUbergraph_BPChar_EnforcerBasic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
