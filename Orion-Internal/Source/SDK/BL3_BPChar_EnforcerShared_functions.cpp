// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_EnforcerShared_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPChar_EnforcerShared.BPChar_EnforcerShared_C.Enforcer_GetType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_EnforcerVariants> EnforcerType                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPChar_EnforcerShared_C::Enforcer_GetType(TEnumAsByte<Enum_EnforcerVariants>* EnforcerType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_EnforcerShared.BPChar_EnforcerShared_C.Enforcer_GetType");

	ABPChar_EnforcerShared_C_Enforcer_GetType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EnforcerType != nullptr)
		*EnforcerType = params.EnforcerType;
}


// Function BPChar_EnforcerShared.BPChar_EnforcerShared_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_EnforcerShared_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_EnforcerShared.BPChar_EnforcerShared_C.UserConstructionScript");

	ABPChar_EnforcerShared_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_EnforcerShared.BPChar_EnforcerShared_C.Enforcer_Anointed_Death
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_EnforcerShared_C::Enforcer_Anointed_Death()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_EnforcerShared.BPChar_EnforcerShared_C.Enforcer_Anointed_Death");

	ABPChar_EnforcerShared_C_Enforcer_Anointed_Death_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_EnforcerShared.BPChar_EnforcerShared_C.Enforcer_TransformToGun
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_EnforcerShared_C::Enforcer_TransformToGun()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_EnforcerShared.BPChar_EnforcerShared_C.Enforcer_TransformToGun");

	ABPChar_EnforcerShared_C_Enforcer_TransformToGun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_EnforcerShared.BPChar_EnforcerShared_C.Enforcer_AnointedJoe_SpawnAI
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_EnforcerShared_C::Enforcer_AnointedJoe_SpawnAI()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_EnforcerShared.BPChar_EnforcerShared_C.Enforcer_AnointedJoe_SpawnAI");

	ABPChar_EnforcerShared_C_Enforcer_AnointedJoe_SpawnAI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_EnforcerShared.BPChar_EnforcerShared_C.Enforcer_AnointedJoe_ShieldDown
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_EnforcerShared_C::Enforcer_AnointedJoe_ShieldDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_EnforcerShared.BPChar_EnforcerShared_C.Enforcer_AnointedJoe_ShieldDown");

	ABPChar_EnforcerShared_C_Enforcer_AnointedJoe_ShieldDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_EnforcerShared.BPChar_EnforcerShared_C.Enforcer_AllowButtStagger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           AllowButtStagger               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_EnforcerShared_C::Enforcer_AllowButtStagger(bool AllowButtStagger)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_EnforcerShared.BPChar_EnforcerShared_C.Enforcer_AllowButtStagger");

	ABPChar_EnforcerShared_C_Enforcer_AllowButtStagger_Params params;
	params.AllowButtStagger = AllowButtStagger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_EnforcerShared.BPChar_EnforcerShared_C.Enforcer_ForcedDirectionalStagger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageReactionEventSummary DamageSummary                  (BlueprintVisible, BlueprintReadOnly, Parm)

void ABPChar_EnforcerShared_C::Enforcer_ForcedDirectionalStagger(const struct FDamageReactionEventSummary& DamageSummary)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_EnforcerShared.BPChar_EnforcerShared_C.Enforcer_ForcedDirectionalStagger");

	ABPChar_EnforcerShared_C_Enforcer_ForcedDirectionalStagger_Params params;
	params.DamageSummary = DamageSummary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_EnforcerShared.BPChar_EnforcerShared_C.CE_ShieldStagger
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageReactionEventSummary Damage_Summary                 (BlueprintVisible, BlueprintReadOnly, Parm)

void ABPChar_EnforcerShared_C::CE_ShieldStagger(const struct FDamageReactionEventSummary& Damage_Summary)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_EnforcerShared.BPChar_EnforcerShared_C.CE_ShieldStagger");

	ABPChar_EnforcerShared_C_CE_ShieldStagger_Params params;
	params.Damage_Summary = Damage_Summary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_EnforcerShared.BPChar_EnforcerShared_C.CE_ExtremityStagger
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageReactionEventSummary Damage_Summary                 (BlueprintVisible, BlueprintReadOnly, Parm)

void ABPChar_EnforcerShared_C::CE_ExtremityStagger(const struct FDamageReactionEventSummary& Damage_Summary)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_EnforcerShared.BPChar_EnforcerShared_C.CE_ExtremityStagger");

	ABPChar_EnforcerShared_C_CE_ExtremityStagger_Params params;
	params.Damage_Summary = Damage_Summary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_EnforcerShared.BPChar_EnforcerShared_C.CE_GrenadeStagger
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageReactionEventSummary Damage_Summary                 (BlueprintVisible, BlueprintReadOnly, Parm)

void ABPChar_EnforcerShared_C::CE_GrenadeStagger(const struct FDamageReactionEventSummary& Damage_Summary)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_EnforcerShared.BPChar_EnforcerShared_C.CE_GrenadeStagger");

	ABPChar_EnforcerShared_C_CE_GrenadeStagger_Params params;
	params.Damage_Summary = Damage_Summary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_EnforcerShared.BPChar_EnforcerShared_C.BndEvt__DamageComponent_K2Node_ComponentBoundEvent_4_DamageCompDiedDelegate__DelegateSignature_BPChar_EnforcerBasic
// (BlueprintEvent)
// Parameters:
// class AActor*                  DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_EnforcerShared_C::BndEvt__DamageComponent_K2Node_ComponentBoundEvent_4_DamageCompDiedDelegate__DelegateSignature_BPChar_EnforcerBasic(class AActor* DamageReceiver, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_EnforcerShared.BPChar_EnforcerShared_C.BndEvt__DamageComponent_K2Node_ComponentBoundEvent_4_DamageCompDiedDelegate__DelegateSignature_BPChar_EnforcerBasic");

	ABPChar_EnforcerShared_C_BndEvt__DamageComponent_K2Node_ComponentBoundEvent_4_DamageCompDiedDelegate__DelegateSignature_BPChar_EnforcerBasic_Params params;
	params.DamageReceiver = DamageReceiver;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_EnforcerShared.BPChar_EnforcerShared_C.CE_GoreHeadHideBeard
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGoreRegionEventSummary GoreSummary                    (BlueprintVisible, BlueprintReadOnly, Parm)

void ABPChar_EnforcerShared_C::CE_GoreHeadHideBeard(const struct FGoreRegionEventSummary& GoreSummary)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_EnforcerShared.BPChar_EnforcerShared_C.CE_GoreHeadHideBeard");

	ABPChar_EnforcerShared_C_CE_GoreHeadHideBeard_Params params;
	params.GoreSummary = GoreSummary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_EnforcerShared.BPChar_EnforcerShared_C.ExecuteUbergraph_BPChar_EnforcerShared
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_EnforcerShared_C::ExecuteUbergraph_BPChar_EnforcerShared(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_EnforcerShared.BPChar_EnforcerShared_C.ExecuteUbergraph_BPChar_EnforcerShared");

	ABPChar_EnforcerShared_C_ExecuteUbergraph_BPChar_EnforcerShared_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
