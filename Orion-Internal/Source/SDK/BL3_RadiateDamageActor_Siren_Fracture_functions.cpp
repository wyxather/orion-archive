// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_RadiateDamageActor_Siren_Fracture_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.DoDamageToEnemy
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Enemy                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARadiateDamageActor_Siren_Fracture_C::DoDamageToEnemy(class AActor* Enemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.DoDamageToEnemy");

	ARadiateDamageActor_Siren_Fracture_C_DoDamageToEnemy_Params params;
	params.Enemy = Enemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.GetFractureDamage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ARadiateDamageActor_Siren_Fracture_C::GetFractureDamage(float* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.GetFractureDamage");

	ARadiateDamageActor_Siren_Fracture_C_GetFractureDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


// Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.OnRep_PhasetranceCombo
// (BlueprintCallable, BlueprintEvent)

void ARadiateDamageActor_Siren_Fracture_C::OnRep_PhasetranceCombo()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.OnRep_PhasetranceCombo");

	ARadiateDamageActor_Siren_Fracture_C_OnRep_PhasetranceCombo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.SetupModData
// (Public, BlueprintCallable, BlueprintEvent)

void ARadiateDamageActor_Siren_Fracture_C::SetupModData()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.SetupModData");

	ARadiateDamageActor_Siren_Fracture_C_SetupModData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.DoAreaDamage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ARadiateDamageActor_Siren_Fracture_C::DoAreaDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.DoAreaDamage");

	ARadiateDamageActor_Siren_Fracture_C_DoAreaDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.K2_GetOwnedActionAbility
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UOakActionAbility*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UOakActionAbility* ARadiateDamageActor_Siren_Fracture_C::K2_GetOwnedActionAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.K2_GetOwnedActionAbility");

	ARadiateDamageActor_Siren_Fracture_C_K2_GetOwnedActionAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ARadiateDamageActor_Siren_Fracture_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.UserConstructionScript");

	ARadiateDamageActor_Siren_Fracture_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ARadiateDamageActor_Siren_Fracture_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.ReceiveBeginPlay");

	ARadiateDamageActor_Siren_Fracture_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.OnHitEnemy
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 EnemyActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARadiateDamageActor_Siren_Fracture_C::OnHitEnemy(class AActor** EnemyActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.OnHitEnemy");

	ARadiateDamageActor_Siren_Fracture_C_OnHitEnemy_Params params;
	params.EnemyActor = EnemyActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARadiateDamageActor_Siren_Fracture_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.ReceiveEndPlay");

	ARadiateDamageActor_Siren_Fracture_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.OnPerformRadiateDamageTasks
// (Event, Public, BlueprintEvent)

void ARadiateDamageActor_Siren_Fracture_C::OnPerformRadiateDamageTasks()
{
	static auto fn = UObject::FindObject<UFunction>("Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.OnPerformRadiateDamageTasks");

	ARadiateDamageActor_Siren_Fracture_C_OnPerformRadiateDamageTasks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.ExecuteUbergraph_RadiateDamageActor_Siren_Fracture
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ARadiateDamageActor_Siren_Fracture_C::ExecuteUbergraph_RadiateDamageActor_Siren_Fracture(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RadiateDamageActor_Siren_Fracture.RadiateDamageActor_Siren_Fracture_C.ExecuteUbergraph_RadiateDamageActor_Siren_Fracture");

	ARadiateDamageActor_Siren_Fracture_C_ExecuteUbergraph_RadiateDamageActor_Siren_Fracture_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
