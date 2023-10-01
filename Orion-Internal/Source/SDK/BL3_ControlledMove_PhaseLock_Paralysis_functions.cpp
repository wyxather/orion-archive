// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ControlledMove_PhaseLock_Paralysis_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ControlledMove_PhaseLock_Paralysis.ControlledMove_PhaseLock_Paralysis_C.CanStayInParalysis
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bRes                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UControlledMove_PhaseLock_Paralysis_C::CanStayInParalysis(bool* bRes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_Paralysis.ControlledMove_PhaseLock_Paralysis_C.CanStayInParalysis");

	UControlledMove_PhaseLock_Paralysis_C_CanStayInParalysis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bRes != nullptr)
		*bRes = params.bRes;
}


// Function ControlledMove_PhaseLock_Paralysis.ControlledMove_PhaseLock_Paralysis_C.OnServerStart
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         MoveDuration                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Instigator                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UControlledMove_PhaseLock_Paralysis_C::OnServerStart(float* MoveDuration, class AActor** TargetActor, class AActor** Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_Paralysis.ControlledMove_PhaseLock_Paralysis_C.OnServerStart");

	UControlledMove_PhaseLock_Paralysis_C_OnServerStart_Params params;
	params.MoveDuration = MoveDuration;
	params.TargetActor = TargetActor;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlledMove_PhaseLock_Paralysis.ControlledMove_PhaseLock_Paralysis_C.OnTakeDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageCauserComponent*  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FReceivedDamageDetails  Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UControlledMove_PhaseLock_Paralysis_C::OnTakeDamage(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_Paralysis.ControlledMove_PhaseLock_Paralysis_C.OnTakeDamage");

	UControlledMove_PhaseLock_Paralysis_C_OnTakeDamage_Params params;
	params.DamageReceiver = DamageReceiver;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.DamageSource = DamageSource;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlledMove_PhaseLock_Paralysis.ControlledMove_PhaseLock_Paralysis_C.OnServerStop
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bInterrupted                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UControlledMove_PhaseLock_Paralysis_C::OnServerStop(bool* bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_Paralysis.ControlledMove_PhaseLock_Paralysis_C.OnServerStop");

	UControlledMove_PhaseLock_Paralysis_C_OnServerStop_Params params;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlledMove_PhaseLock_Paralysis.ControlledMove_PhaseLock_Paralysis_C.EndParalysisEarly
// (BlueprintCallable, BlueprintEvent)

void UControlledMove_PhaseLock_Paralysis_C::EndParalysisEarly()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_Paralysis.ControlledMove_PhaseLock_Paralysis_C.EndParalysisEarly");

	UControlledMove_PhaseLock_Paralysis_C_EndParalysisEarly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlledMove_PhaseLock_Paralysis.ControlledMove_PhaseLock_Paralysis_C.UnbindFromAll
// (BlueprintCallable, BlueprintEvent)

void UControlledMove_PhaseLock_Paralysis_C::UnbindFromAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_Paralysis.ControlledMove_PhaseLock_Paralysis_C.UnbindFromAll");

	UControlledMove_PhaseLock_Paralysis_C_UnbindFromAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlledMove_PhaseLock_Paralysis.ControlledMove_PhaseLock_Paralysis_C.OnDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UControlledMove_PhaseLock_Paralysis_C::OnDeath(class AActor* DamageReceiver, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_Paralysis.ControlledMove_PhaseLock_Paralysis_C.OnDeath");

	UControlledMove_PhaseLock_Paralysis_C_OnDeath_Params params;
	params.DamageReceiver = DamageReceiver;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ControlledMove_PhaseLock_Paralysis.ControlledMove_PhaseLock_Paralysis_C.ExecuteUbergraph_ControlledMove_PhaseLock_Paralysis
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UControlledMove_PhaseLock_Paralysis_C::ExecuteUbergraph_ControlledMove_PhaseLock_Paralysis(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ControlledMove_PhaseLock_Paralysis.ControlledMove_PhaseLock_Paralysis_C.ExecuteUbergraph_ControlledMove_PhaseLock_Paralysis");

	UControlledMove_PhaseLock_Paralysis_C_ExecuteUbergraph_ControlledMove_PhaseLock_Paralysis_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
