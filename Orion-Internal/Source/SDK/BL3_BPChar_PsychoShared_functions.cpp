// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_PsychoShared_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPChar_PsychoShared.BPChar_PsychoShared_C.PsychoShared_GetVariant
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_PsychoVariants> PsychoVariant                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPChar_PsychoShared_C::PsychoShared_GetVariant(TEnumAsByte<Enum_PsychoVariants>* PsychoVariant)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PsychoShared.BPChar_PsychoShared_C.PsychoShared_GetVariant");

	ABPChar_PsychoShared_C_PsychoShared_GetVariant_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PsychoVariant != nullptr)
		*PsychoVariant = params.PsychoVariant;
}


// Function BPChar_PsychoShared.BPChar_PsychoShared_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_PsychoShared_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PsychoShared.BPChar_PsychoShared_C.UserConstructionScript");

	ABPChar_PsychoShared_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PsychoShared.BPChar_PsychoShared_C.PsychoShared_MaskBreak
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageReactionEventSummary Damage_Summary                 (BlueprintVisible, BlueprintReadOnly, Parm)

void ABPChar_PsychoShared_C::PsychoShared_MaskBreak(const struct FDamageReactionEventSummary& Damage_Summary)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PsychoShared.BPChar_PsychoShared_C.PsychoShared_MaskBreak");

	ABPChar_PsychoShared_C_PsychoShared_MaskBreak_Params params;
	params.Damage_Summary = Damage_Summary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PsychoShared.BPChar_PsychoShared_C.PsychoShared_FireBreath
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_PsychoShared_FireBreathFunctions> FireBreath_Function            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_PsychoShared_C::PsychoShared_FireBreath(TEnumAsByte<Enum_PsychoShared_FireBreathFunctions> FireBreath_Function)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PsychoShared.BPChar_PsychoShared_C.PsychoShared_FireBreath");

	ABPChar_PsychoShared_C_PsychoShared_FireBreath_Params params;
	params.FireBreath_Function = FireBreath_Function;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PsychoShared.BPChar_PsychoShared_C.PsychoShared_StolenProjFinished
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_PsychoShared_C::PsychoShared_StolenProjFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PsychoShared.BPChar_PsychoShared_C.PsychoShared_StolenProjFinished");

	ABPChar_PsychoShared_C_PsychoShared_StolenProjFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PsychoShared.BPChar_PsychoShared_C.PsychoShared_Anointed_Death
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_PsychoShared_C::PsychoShared_Anointed_Death()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PsychoShared.BPChar_PsychoShared_C.PsychoShared_Anointed_Death");

	ABPChar_PsychoShared_C_PsychoShared_Anointed_Death_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PsychoShared.BPChar_PsychoShared_C.PsychoLoot_Flee_Beam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Start                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_PsychoShared_C::PsychoLoot_Flee_Beam(bool Start)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PsychoShared.BPChar_PsychoShared_C.PsychoLoot_Flee_Beam");

	ABPChar_PsychoShared_C_PsychoLoot_Flee_Beam_Params params;
	params.Start = Start;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PsychoShared.BPChar_PsychoShared_C.PsychoShared_FacePlant
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageReactionEventSummary Damage_Summary                 (BlueprintVisible, BlueprintReadOnly, Parm)

void ABPChar_PsychoShared_C::PsychoShared_FacePlant(const struct FDamageReactionEventSummary& Damage_Summary)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PsychoShared.BPChar_PsychoShared_C.PsychoShared_FacePlant");

	ABPChar_PsychoShared_C_PsychoShared_FacePlant_Params params;
	params.Damage_Summary = Damage_Summary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PsychoShared.BPChar_PsychoShared_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_HitReactionPlayedDelegate__DelegateSignature_BPChar_PsychoFirebrand
// (BlueprintEvent)
// Parameters:
// class AActor*                  DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UHitReactionTag*         Tag                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_PsychoShared_C::BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_HitReactionPlayedDelegate__DelegateSignature_BPChar_PsychoFirebrand(class AActor* DamageReceiver, class AActor* DamageCauser, class UHitReactionTag* Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PsychoShared.BPChar_PsychoShared_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_HitReactionPlayedDelegate__DelegateSignature_BPChar_PsychoFirebrand");

	ABPChar_PsychoShared_C_BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_HitReactionPlayedDelegate__DelegateSignature_BPChar_PsychoFirebrand_Params params;
	params.DamageReceiver = DamageReceiver;
	params.DamageCauser = DamageCauser;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PsychoShared.BPChar_PsychoShared_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPChar_PsychoShared_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PsychoShared.BPChar_PsychoShared_C.ReceiveBeginPlay");

	ABPChar_PsychoShared_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PsychoShared.BPChar_PsychoShared_C.BndEvt__DamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_PsychoMaleShared
// (BlueprintEvent)
// Parameters:
// class AActor*                  DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_PsychoShared_C::BndEvt__DamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_PsychoMaleShared(class AActor* DamageReceiver, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PsychoShared.BPChar_PsychoShared_C.BndEvt__DamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_PsychoMaleShared");

	ABPChar_PsychoShared_C_BndEvt__DamageComponent_K2Node_ComponentBoundEvent_0_DamageCompDiedDelegate__DelegateSignature_BPChar_PsychoMaleShared_Params params;
	params.DamageReceiver = DamageReceiver;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PsychoShared.BPChar_PsychoShared_C.PsychoShared_TargetChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_PsychoShared_C::PsychoShared_TargetChanged(class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PsychoShared.BPChar_PsychoShared_C.PsychoShared_TargetChanged");

	ABPChar_PsychoShared_C_PsychoShared_TargetChanged_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PsychoShared.BPChar_PsychoShared_C.CE_VehicleEnter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPawnAttachSlotComponent* PawnAttachSlotComponent        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABPChar_PsychoShared_C::CE_VehicleEnter(class UPawnAttachSlotComponent* PawnAttachSlotComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PsychoShared.BPChar_PsychoShared_C.CE_VehicleEnter");

	ABPChar_PsychoShared_C_CE_VehicleEnter_Params params;
	params.PawnAttachSlotComponent = PawnAttachSlotComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PsychoShared.BPChar_PsychoShared_C.CE_EnterTurret
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPawnAttachSlotComponent* PawnAttachSlotComponent        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABPChar_PsychoShared_C::CE_EnterTurret(class UPawnAttachSlotComponent* PawnAttachSlotComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PsychoShared.BPChar_PsychoShared_C.CE_EnterTurret");

	ABPChar_PsychoShared_C_CE_EnterTurret_Params params;
	params.PawnAttachSlotComponent = PawnAttachSlotComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PsychoShared.BPChar_PsychoShared_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_1_HitReactionPlayedDelegate__DelegateSignature_BPChar_Goon_UNIX1553272339
// (BlueprintEvent)
// Parameters:
// class AActor*                  DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UHitReactionTag*         Tag                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_PsychoShared_C::BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_1_HitReactionPlayedDelegate__DelegateSignature_BPChar_Goon_UNIX1553272339(class AActor* DamageReceiver, class AActor* DamageCauser, class UHitReactionTag* Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PsychoShared.BPChar_PsychoShared_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_1_HitReactionPlayedDelegate__DelegateSignature_BPChar_Goon_UNIX1553272339");

	ABPChar_PsychoShared_C_BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_1_HitReactionPlayedDelegate__DelegateSignature_BPChar_Goon_UNIX1553272339_Params params;
	params.DamageReceiver = DamageReceiver;
	params.DamageCauser = DamageCauser;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_PsychoShared.BPChar_PsychoShared_C.ExecuteUbergraph_BPChar_PsychoShared
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_PsychoShared_C::ExecuteUbergraph_BPChar_PsychoShared(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_PsychoShared.BPChar_PsychoShared_C.ExecuteUbergraph_BPChar_PsychoShared");

	ABPChar_PsychoShared_C_ExecuteUbergraph_BPChar_PsychoShared_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
