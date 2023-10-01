// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Ringer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_Ringer.Proj_Ringer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProj_Ringer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Ringer.Proj_Ringer_C.UserConstructionScript");

	AProj_Ringer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Ringer.Proj_Ringer_C.InitializeElement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EOakElementalType              ElementType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_Ringer_C::InitializeElement(EOakElementalType ElementType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Ringer.Proj_Ringer_C.InitializeElement");

	AProj_Ringer_C_InitializeElement_Params params;
	params.ElementType = ElementType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Ringer.Proj_Ringer_C.TinkSuicideBomb_SetFuseTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewFuseTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_Ringer_C::TinkSuicideBomb_SetFuseTimer(float NewFuseTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Ringer.Proj_Ringer_C.TinkSuicideBomb_SetFuseTimer");

	AProj_Ringer_C_TinkSuicideBomb_SetFuseTimer_Params params;
	params.NewFuseTime = NewFuseTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Ringer.Proj_Ringer_C.TinkSuicideBomb_SetCurrentHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewCurrentHealth               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_Ringer_C::TinkSuicideBomb_SetCurrentHealth(float NewCurrentHealth)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Ringer.Proj_Ringer_C.TinkSuicideBomb_SetCurrentHealth");

	AProj_Ringer_C_TinkSuicideBomb_SetCurrentHealth_Params params;
	params.NewCurrentHealth = NewCurrentHealth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Ringer.Proj_Ringer_C.TinkSuicideBomb_StartSuicide
// (Public, BlueprintCallable, BlueprintEvent)

void AProj_Ringer_C::TinkSuicideBomb_StartSuicide()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Ringer.Proj_Ringer_C.TinkSuicideBomb_StartSuicide");

	AProj_Ringer_C_TinkSuicideBomb_StartSuicide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Ringer.Proj_Ringer_C.HNT_Prime
// (Net, NetMulticast, Public, BlueprintCallable, BlueprintEvent)

void AProj_Ringer_C::HNT_Prime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Ringer.Proj_Ringer_C.HNT_Prime");

	AProj_Ringer_C_HNT_Prime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Ringer.Proj_Ringer_C.HNT_Drop
// (Net, NetMulticast, Public, BlueprintCallable, BlueprintEvent)

void AProj_Ringer_C::HNT_Drop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Ringer.Proj_Ringer_C.HNT_Drop");

	AProj_Ringer_C_HNT_Drop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Ringer.Proj_Ringer_C.HNT_Throw
// (Net, NetMulticast, Public, BlueprintCallable, BlueprintEvent)

void AProj_Ringer_C::HNT_Throw()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Ringer.Proj_Ringer_C.HNT_Throw");

	AProj_Ringer_C_HNT_Throw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Ringer.Proj_Ringer_C.BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileBounceDelegate__DelegateSignature_Proj_PsychoMale_Shared_ThrownMelee
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector                 ImpactVelocity                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProj_Ringer_C::BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileBounceDelegate__DelegateSignature_Proj_PsychoMale_Shared_ThrownMelee(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Ringer.Proj_Ringer_C.BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileBounceDelegate__DelegateSignature_Proj_PsychoMale_Shared_ThrownMelee");

	AProj_Ringer_C_BndEvt__GbxProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileBounceDelegate__DelegateSignature_Proj_PsychoMale_Shared_ThrownMelee_Params params;
	params.ImpactResult = ImpactResult;
	params.ImpactVelocity = ImpactVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Ringer.Proj_Ringer_C.OnExplode
// (Event, Protected, BlueprintEvent)

void AProj_Ringer_C::OnExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Ringer.Proj_Ringer_C.OnExplode");

	AProj_Ringer_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Ringer.Proj_Ringer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProj_Ringer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Ringer.Proj_Ringer_C.ReceiveBeginPlay");

	AProj_Ringer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Ringer.Proj_Ringer_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_2_DamageCompHealthDepletedDelegate__DelegateSignature_Proj_TinkSuicide_ExplosiveBomb
// (BlueprintEvent)
// Parameters:
// class UDamageComponent*        DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UDamageCauserComponent*  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AProj_Ringer_C::BndEvt__OakDamage_K2Node_ComponentBoundEvent_2_DamageCompHealthDepletedDelegate__DelegateSignature_Proj_TinkSuicide_ExplosiveBomb(class UDamageComponent* DamageReceiver, class UDamageCauserComponent* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Ringer.Proj_Ringer_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_2_DamageCompHealthDepletedDelegate__DelegateSignature_Proj_TinkSuicide_ExplosiveBomb");

	AProj_Ringer_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_2_DamageCompHealthDepletedDelegate__DelegateSignature_Proj_TinkSuicide_ExplosiveBomb_Params params;
	params.DamageReceiver = DamageReceiver;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Ringer.Proj_Ringer_C.OnHitDamagableObject
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProj_Ringer_C::OnHitDamagableObject(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Ringer.Proj_Ringer_C.OnHitDamagableObject");

	AProj_Ringer_C_OnHitDamagableObject_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Ringer.Proj_Ringer_C.FuseTimerExpired
// (BlueprintCallable, BlueprintEvent)

void AProj_Ringer_C::FuseTimerExpired()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Ringer.Proj_Ringer_C.FuseTimerExpired");

	AProj_Ringer_C_FuseTimerExpired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Ringer.Proj_Ringer_C.ExecuteUbergraph_Proj_Ringer
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_Ringer_C::ExecuteUbergraph_Proj_Ringer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Ringer.Proj_Ringer_C.ExecuteUbergraph_Proj_Ringer");

	AProj_Ringer_C_ExecuteUbergraph_Proj_Ringer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
