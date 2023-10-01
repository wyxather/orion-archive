// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_Enforcer_BountyPrologue_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPChar_Enforcer_BountyPrologue.BPChar_Enforcer_BountyPrologue_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_Enforcer_BountyPrologue_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Enforcer_BountyPrologue.BPChar_Enforcer_BountyPrologue_C.UserConstructionScript");

	ABPChar_Enforcer_BountyPrologue_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Enforcer_BountyPrologue.BPChar_Enforcer_BountyPrologue_C.CE_HitRegionButt
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageReactionEventSummary DamageSummary                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ABPChar_Enforcer_BountyPrologue_C::CE_HitRegionButt(const struct FDamageReactionEventSummary& DamageSummary)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Enforcer_BountyPrologue.BPChar_Enforcer_BountyPrologue_C.CE_HitRegionButt");

	ABPChar_Enforcer_BountyPrologue_C_CE_HitRegionButt_Params params;
	params.DamageSummary = DamageSummary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Enforcer_BountyPrologue.BPChar_Enforcer_BountyPrologue_C.Enforcer_AllowButtStagger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          AllowButtStagger               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Enforcer_BountyPrologue_C::Enforcer_AllowButtStagger(bool* AllowButtStagger)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Enforcer_BountyPrologue.BPChar_Enforcer_BountyPrologue_C.Enforcer_AllowButtStagger");

	ABPChar_Enforcer_BountyPrologue_C_Enforcer_AllowButtStagger_Params params;
	params.AllowButtStagger = AllowButtStagger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Enforcer_BountyPrologue.BPChar_Enforcer_BountyPrologue_C.ExecuteUbergraph_BPChar_Enforcer_BountyPrologue
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_Enforcer_BountyPrologue_C::ExecuteUbergraph_BPChar_Enforcer_BountyPrologue(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Enforcer_BountyPrologue.BPChar_Enforcer_BountyPrologue_C.ExecuteUbergraph_BPChar_Enforcer_BountyPrologue");

	ABPChar_Enforcer_BountyPrologue_C_ExecuteUbergraph_BPChar_Enforcer_BountyPrologue_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_Enforcer_BountyPrologue.BPChar_Enforcer_BountyPrologue_C.Event_WasButtholed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABPChar_Enforcer_BountyPrologue_C::Event_WasButtholed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_Enforcer_BountyPrologue.BPChar_Enforcer_BountyPrologue_C.Event_WasButtholed__DelegateSignature");

	ABPChar_Enforcer_BountyPrologue_C_Event_WasButtholed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
