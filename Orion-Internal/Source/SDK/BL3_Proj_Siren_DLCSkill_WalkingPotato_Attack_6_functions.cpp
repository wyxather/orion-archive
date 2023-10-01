// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Siren_DLCSkill_WalkingPotato_Attack_6_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_Siren_DLCSkill_WalkingPotato_Attack_6.Proj_Siren_DLCSkill_WalkingPotato_Attack_5_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProj_Siren_DLCSkill_WalkingPotato_Attack_5_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Siren_DLCSkill_WalkingPotato_Attack_6.Proj_Siren_DLCSkill_WalkingPotato_Attack_5_C.UserConstructionScript");

	AProj_Siren_DLCSkill_WalkingPotato_Attack_5_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Siren_DLCSkill_WalkingPotato_Attack_6.Proj_Siren_DLCSkill_WalkingPotato_Attack_5_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProj_Siren_DLCSkill_WalkingPotato_Attack_5_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Siren_DLCSkill_WalkingPotato_Attack_6.Proj_Siren_DLCSkill_WalkingPotato_Attack_5_C.ReceiveBeginPlay");

	AProj_Siren_DLCSkill_WalkingPotato_Attack_5_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Siren_DLCSkill_WalkingPotato_Attack_6.Proj_Siren_DLCSkill_WalkingPotato_Attack_5_C.SirenDLCActionSkill_OnCausedAnyDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCausedDamageDetails    Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void AProj_Siren_DLCSkill_WalkingPotato_Attack_5_C::SirenDLCActionSkill_OnCausedAnyDamage(class AActor* DamageInstigator, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AActor* DamagedActor, const struct FCausedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Siren_DLCSkill_WalkingPotato_Attack_6.Proj_Siren_DLCSkill_WalkingPotato_Attack_5_C.SirenDLCActionSkill_OnCausedAnyDamage");

	AProj_Siren_DLCSkill_WalkingPotato_Attack_5_C_SirenDLCActionSkill_OnCausedAnyDamage_Params params;
	params.DamageInstigator = DamageInstigator;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.DamageSource = DamageSource;
	params.DamagedActor = DamagedActor;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Siren_DLCSkill_WalkingPotato_Attack_6.Proj_Siren_DLCSkill_WalkingPotato_Attack_5_C.OnOrbStateSending
// (Public, BlueprintCallable, BlueprintEvent)

void AProj_Siren_DLCSkill_WalkingPotato_Attack_5_C::OnOrbStateSending()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Siren_DLCSkill_WalkingPotato_Attack_6.Proj_Siren_DLCSkill_WalkingPotato_Attack_5_C.OnOrbStateSending");

	AProj_Siren_DLCSkill_WalkingPotato_Attack_5_C_OnOrbStateSending_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Siren_DLCSkill_WalkingPotato_Attack_6.Proj_Siren_DLCSkill_WalkingPotato_Attack_5_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_2_TakeAnyPipelineDamageDelegate__DelegateSignature_Proj_Mayhem2_ItFollows
// (BlueprintEvent)
// Parameters:
// class UDamageComponent**       DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float*                         Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType**         DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource**          DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageCauserComponent** DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FReceivedDamageDetails* Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void AProj_Siren_DLCSkill_WalkingPotato_Attack_5_C::BndEvt__OakDamage_K2Node_ComponentBoundEvent_2_TakeAnyPipelineDamageDelegate__DelegateSignature_Proj_Mayhem2_ItFollows(class UDamageComponent** DamageReceiver, float* Damage, class UGbxDamageType** DamageType, class UDamageSource** DamageSource, class AController** InstigatedBy, class UDamageCauserComponent** DamageCauser, struct FReceivedDamageDetails* Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Siren_DLCSkill_WalkingPotato_Attack_6.Proj_Siren_DLCSkill_WalkingPotato_Attack_5_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_2_TakeAnyPipelineDamageDelegate__DelegateSignature_Proj_Mayhem2_ItFollows");

	AProj_Siren_DLCSkill_WalkingPotato_Attack_5_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_2_TakeAnyPipelineDamageDelegate__DelegateSignature_Proj_Mayhem2_ItFollows_Params params;
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


// Function Proj_Siren_DLCSkill_WalkingPotato_Attack_6.Proj_Siren_DLCSkill_WalkingPotato_Attack_5_C.SirenDLCActionSkill_OnCausedDeath
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AProj_Siren_DLCSkill_WalkingPotato_Attack_5_C::SirenDLCActionSkill_OnCausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Siren_DLCSkill_WalkingPotato_Attack_6.Proj_Siren_DLCSkill_WalkingPotato_Attack_5_C.SirenDLCActionSkill_OnCausedDeath");

	AProj_Siren_DLCSkill_WalkingPotato_Attack_5_C_SirenDLCActionSkill_OnCausedDeath_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Siren_DLCSkill_WalkingPotato_Attack_6.Proj_Siren_DLCSkill_WalkingPotato_Attack_5_C.ExecuteUbergraph_Proj_Siren_DLCSkill_WalkingPotato_Attack_6
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_Siren_DLCSkill_WalkingPotato_Attack_5_C::ExecuteUbergraph_Proj_Siren_DLCSkill_WalkingPotato_Attack_6(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Siren_DLCSkill_WalkingPotato_Attack_6.Proj_Siren_DLCSkill_WalkingPotato_Attack_5_C.ExecuteUbergraph_Proj_Siren_DLCSkill_WalkingPotato_Attack_6");

	AProj_Siren_DLCSkill_WalkingPotato_Attack_5_C_ExecuteUbergraph_Proj_Siren_DLCSkill_WalkingPotato_Attack_6_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
