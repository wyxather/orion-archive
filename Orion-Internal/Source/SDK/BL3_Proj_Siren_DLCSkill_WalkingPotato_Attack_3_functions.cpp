// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Siren_DLCSkill_WalkingPotato_Attack_3_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_Siren_DLCSkill_WalkingPotato_Attack_3.Proj_Siren_DLCSkill_WalkingPotato_Attack_2_C.DamageScalar
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProj_Siren_DLCSkill_WalkingPotato_Attack_2_C::DamageScalar(float* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Siren_DLCSkill_WalkingPotato_Attack_3.Proj_Siren_DLCSkill_WalkingPotato_Attack_2_C.DamageScalar");

	AProj_Siren_DLCSkill_WalkingPotato_Attack_2_C_DamageScalar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Proj_Siren_DLCSkill_WalkingPotato_Attack_3.Proj_Siren_DLCSkill_WalkingPotato_Attack_2_C.GetOrbAreaDamageType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProj_Siren_DLCSkill_WalkingPotato_Attack_2_C::GetOrbAreaDamageType(class UClass** res)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Siren_DLCSkill_WalkingPotato_Attack_3.Proj_Siren_DLCSkill_WalkingPotato_Attack_2_C.GetOrbAreaDamageType");

	AProj_Siren_DLCSkill_WalkingPotato_Attack_2_C_GetOrbAreaDamageType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function Proj_Siren_DLCSkill_WalkingPotato_Attack_3.Proj_Siren_DLCSkill_WalkingPotato_Attack_2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProj_Siren_DLCSkill_WalkingPotato_Attack_2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Siren_DLCSkill_WalkingPotato_Attack_3.Proj_Siren_DLCSkill_WalkingPotato_Attack_2_C.UserConstructionScript");

	AProj_Siren_DLCSkill_WalkingPotato_Attack_2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Siren_DLCSkill_WalkingPotato_Attack_3.Proj_Siren_DLCSkill_WalkingPotato_Attack_2_C.OnOrbStateSending
// (Public, BlueprintCallable, BlueprintEvent)

void AProj_Siren_DLCSkill_WalkingPotato_Attack_2_C::OnOrbStateSending()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Siren_DLCSkill_WalkingPotato_Attack_3.Proj_Siren_DLCSkill_WalkingPotato_Attack_2_C.OnOrbStateSending");

	AProj_Siren_DLCSkill_WalkingPotato_Attack_2_C_OnOrbStateSending_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Siren_DLCSkill_WalkingPotato_Attack_3.Proj_Siren_DLCSkill_WalkingPotato_Attack_2_C.BndEvt__FFYLTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Proj_Siren_DLCSkill_WalkingPotato_Attack_3
// (BlueprintEvent)
// Parameters:
// class AActor*                  TouchingActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bIsPlayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UActorComponent*         ComponentTouched               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AProj_Siren_DLCSkill_WalkingPotato_Attack_2_C::BndEvt__FFYLTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Proj_Siren_DLCSkill_WalkingPotato_Attack_3(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Siren_DLCSkill_WalkingPotato_Attack_3.Proj_Siren_DLCSkill_WalkingPotato_Attack_2_C.BndEvt__FFYLTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Proj_Siren_DLCSkill_WalkingPotato_Attack_3");

	AProj_Siren_DLCSkill_WalkingPotato_Attack_2_C_BndEvt__FFYLTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_Proj_Siren_DLCSkill_WalkingPotato_Attack_3_Params params;
	params.TouchingActor = TouchingActor;
	params.bIsPlayer = bIsPlayer;
	params.ComponentTouched = ComponentTouched;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Siren_DLCSkill_WalkingPotato_Attack_3.Proj_Siren_DLCSkill_WalkingPotato_Attack_2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProj_Siren_DLCSkill_WalkingPotato_Attack_2_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Siren_DLCSkill_WalkingPotato_Attack_3.Proj_Siren_DLCSkill_WalkingPotato_Attack_2_C.ReceiveBeginPlay");

	AProj_Siren_DLCSkill_WalkingPotato_Attack_2_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_Siren_DLCSkill_WalkingPotato_Attack_3.Proj_Siren_DLCSkill_WalkingPotato_Attack_2_C.ExecuteUbergraph_Proj_Siren_DLCSkill_WalkingPotato_Attack_3
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_Siren_DLCSkill_WalkingPotato_Attack_2_C::ExecuteUbergraph_Proj_Siren_DLCSkill_WalkingPotato_Attack_3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_Siren_DLCSkill_WalkingPotato_Attack_3.Proj_Siren_DLCSkill_WalkingPotato_Attack_2_C.ExecuteUbergraph_Proj_Siren_DLCSkill_WalkingPotato_Attack_3");

	AProj_Siren_DLCSkill_WalkingPotato_Attack_2_C_ExecuteUbergraph_Proj_Siren_DLCSkill_WalkingPotato_Attack_3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
