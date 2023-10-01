// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Debuff_StaticField_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Debuff_StaticField.Action_Debuff_StaticField_C.MarkTargetShocked
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 OtherTarget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAction_Debuff_StaticField_C** OtherAction                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         Closeness                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Debuff_StaticField_C::MarkTargetShocked(class AActor** OtherTarget, class UAction_Debuff_StaticField_C** OtherAction, float* Closeness)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_StaticField.Action_Debuff_StaticField_C.MarkTargetShocked");

	UAction_Debuff_StaticField_C_MarkTargetShocked_Params params;
	params.OtherTarget = OtherTarget;
	params.OtherAction = OtherAction;
	params.Closeness = Closeness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Debuff_StaticField.Action_Debuff_StaticField_C.GetSparkPoint
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ACharacterGunfire**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Point                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Debuff_StaticField_C::GetSparkPoint(class ACharacterGunfire** Character, float* Alpha, struct FVector* Point)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_StaticField.Action_Debuff_StaticField_C.GetSparkPoint");

	UAction_Debuff_StaticField_C_GetSparkPoint_Params params;
	params.Character = Character;
	params.Alpha = Alpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Point != nullptr)
		*Point = params.Point;
}


// Function Action_Debuff_StaticField.Action_Debuff_StaticField_C.UpdatePotentialTarget
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAction_Debuff_StaticField_C** OtherAction                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacterGunfire**      OtherCharacter                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         Distance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Debuff_StaticField_C::UpdatePotentialTarget(class UAction_Debuff_StaticField_C** OtherAction, class ACharacterGunfire** OtherCharacter, float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_StaticField.Action_Debuff_StaticField_C.UpdatePotentialTarget");

	UAction_Debuff_StaticField_C_UpdatePotentialTarget_Params params;
	params.OtherAction = OtherAction;
	params.OtherCharacter = OtherCharacter;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Debuff_StaticField.Action_Debuff_StaticField_C.OnTick
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Debuff_StaticField_C::OnTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_StaticField.Action_Debuff_StaticField_C.OnTick");

	UAction_Debuff_StaticField_C_OnTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Debuff_StaticField.Action_Debuff_StaticField_C.OnTakeDamage
// 00007FF6F8B35350
// (BlueprintAuthorityOnly, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FDamageInfo*            DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UAction_Debuff_StaticField_C::OnTakeDamage(struct FDamageInfo* DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_StaticField.Action_Debuff_StaticField_C.OnTakeDamage");

	UAction_Debuff_StaticField_C_OnTakeDamage_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Debuff_StaticField.Action_Debuff_StaticField_C.Trigger
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire**      OtherCharacter                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool*                          DelayedExplode                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor**                 TriggerCause                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Debuff_StaticField_C::Trigger(class ACharacterGunfire** OtherCharacter, bool* DelayedExplode, class AActor** TriggerCause)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_StaticField.Action_Debuff_StaticField_C.Trigger");

	UAction_Debuff_StaticField_C_Trigger_Params params;
	params.OtherCharacter = OtherCharacter;
	params.DelayedExplode = DelayedExplode;
	params.TriggerCause = TriggerCause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Debuff_StaticField.Action_Debuff_StaticField_C.DoSpark
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire**      OtherCharacter                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         Closeness                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Debuff_StaticField_C::DoSpark(class ACharacterGunfire** OtherCharacter, float* Closeness)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_StaticField.Action_Debuff_StaticField_C.DoSpark");

	UAction_Debuff_StaticField_C_DoSpark_Params params;
	params.OtherCharacter = OtherCharacter;
	params.Closeness = Closeness;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Debuff_StaticField.Action_Debuff_StaticField_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Debuff_StaticField_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_StaticField.Action_Debuff_StaticField_C.OnActionStart");

	UAction_Debuff_StaticField_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Debuff_StaticField.Action_Debuff_StaticField_C.ListenForShockDamage
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UAction_Debuff_StaticField_C::ListenForShockDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_StaticField.Action_Debuff_StaticField_C.ListenForShockDamage");

	UAction_Debuff_StaticField_C_ListenForShockDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Debuff_StaticField.Action_Debuff_StaticField_C.ExecuteUbergraph_Action_Debuff_StaticField
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Debuff_StaticField_C::ExecuteUbergraph_Action_Debuff_StaticField(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_StaticField.Action_Debuff_StaticField_C.ExecuteUbergraph_Action_Debuff_StaticField");

	UAction_Debuff_StaticField_C_ExecuteUbergraph_Action_Debuff_StaticField_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
