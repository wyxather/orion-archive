// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_AOE_Attack_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_AOE_Attack.Action_AOE_Attack_C.GetFilterActor
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  FilterActor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_AOE_Attack_C::GetFilterActor(class AActor** FilterActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AOE_Attack.Action_AOE_Attack_C.GetFilterActor");

	UAction_AOE_Attack_C_GetFilterActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FilterActor != nullptr)
		*FilterActor = params.FilterActor;
}


// Function Action_AOE_Attack.Action_AOE_Attack_C.PreprocessAOE
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NumHits                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_AOE_Attack_C::PreprocessAOE(int* NumHits)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AOE_Attack.Action_AOE_Attack_C.PreprocessAOE");

	UAction_AOE_Attack_C_PreprocessAOE_Params params;
	params.NumHits = NumHits;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_AOE_Attack.Action_AOE_Attack_C.DoSecondaryEffect
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         Falloff                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDamageInfo*            DamageInfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UAction_AOE_Attack_C::DoSecondaryEffect(class AActor** Target, float* Falloff, struct FDamageInfo* DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AOE_Attack.Action_AOE_Attack_C.DoSecondaryEffect");

	UAction_AOE_Attack_C_DoSecondaryEffect_Params params;
	params.Target = Target;
	params.Falloff = Falloff;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_AOE_Attack.Action_AOE_Attack_C.GetDamage
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Damage                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_AOE_Attack_C::GetDamage(float* Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AOE_Attack.Action_AOE_Attack_C.GetDamage");

	UAction_AOE_Attack_C_GetDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Damage != nullptr)
		*Damage = params.Damage;
}


// Function Action_AOE_Attack.Action_AOE_Attack_C.IsValidTarget
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor**                 _Target                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_AOE_Attack_C::IsValidTarget(class AActor** _Target, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AOE_Attack.Action_AOE_Attack_C.IsValidTarget");

	UAction_AOE_Attack_C_IsValidTarget_Params params;
	params._Target = _Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Action_AOE_Attack.Action_AOE_Attack_C.PostDamage
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         Falloff                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         DamageReceived                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_AOE_Attack_C::PostDamage(class AActor** Target, float* Falloff, float* DamageReceived)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AOE_Attack.Action_AOE_Attack_C.PostDamage");

	UAction_AOE_Attack_C_PostDamage_Params params;
	params.Target = Target;
	params.Falloff = Falloff;
	params.DamageReceived = DamageReceived;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_AOE_Attack.Action_AOE_Attack_C.Get Impact Point
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult              HitInfo                        (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UAction_AOE_Attack_C::Get_Impact_Point(struct FVector* Location, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AOE_Attack.Action_AOE_Attack_C.Get Impact Point");

	UAction_AOE_Attack_C_Get_Impact_Point_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitInfo != nullptr)
		*HitInfo = params.HitInfo;
}


// Function Action_AOE_Attack.Action_AOE_Attack_C.Do Damage Falloff
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UAction_AOE_Attack_C::Do_Damage_Falloff(float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AOE_Attack.Action_AOE_Attack_C.Do Damage Falloff");

	UAction_AOE_Attack_C_Do_Damage_Falloff_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Action_AOE_Attack.Action_AOE_Attack_C.GetImpactDirection
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector*                Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_AOE_Attack_C::GetImpactDirection(struct FVector* Source, class AActor** Target, struct FVector* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AOE_Attack.Action_AOE_Attack_C.GetImpactDirection");

	UAction_AOE_Attack_C_GetImpactDirection_Params params;
	params.Source = Source;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Action_AOE_Attack.Action_AOE_Attack_C.Get Socket Location
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  InSocketName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector UAction_AOE_Attack_C::Get_Socket_Location(struct FName* InSocketName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AOE_Attack.Action_AOE_Attack_C.Get Socket Location");

	UAction_AOE_Attack_C_Get_Socket_Location_Params params;
	params.InSocketName = InSocketName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Action_AOE_Attack.Action_AOE_Attack_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_AOE_Attack_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AOE_Attack.Action_AOE_Attack_C.OnActionStart");

	UAction_AOE_Attack_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_AOE_Attack.Action_AOE_Attack_C.ExecuteUbergraph_Action_AOE_Attack
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_AOE_Attack_C::ExecuteUbergraph_Action_AOE_Attack(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AOE_Attack.Action_AOE_Attack_C.ExecuteUbergraph_Action_AOE_Attack");

	UAction_AOE_Attack_C_ExecuteUbergraph_Action_AOE_Attack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
