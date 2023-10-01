// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_ArmorSkill_Reciprocity_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ArmorSkill_Reciprocity.ArmorSkill_Reciprocity_C.AllowAction
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 ActionBP                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FDamageInfo*            InDamageInfo                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UArmorSkill_Reciprocity_C::AllowAction(class UClass** ActionBP, struct FDamageInfo* InDamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Reciprocity.ArmorSkill_Reciprocity_C.AllowAction");

	UArmorSkill_Reciprocity_C_AllowAction_Params params;
	params.ActionBP = ActionBP;
	params.InDamageInfo = InDamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ArmorSkill_Reciprocity.ArmorSkill_Reciprocity_C.OnTimerExpired
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UArmorSkill_Reciprocity_C::OnTimerExpired()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Reciprocity.ArmorSkill_Reciprocity_C.OnTimerExpired");

	UArmorSkill_Reciprocity_C_OnTimerExpired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArmorSkill_Reciprocity.ArmorSkill_Reciprocity_C.ResetTimer
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UArmorSkill_Reciprocity_C::ResetTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Reciprocity.ArmorSkill_Reciprocity_C.ResetTimer");

	UArmorSkill_Reciprocity_C_ResetTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArmorSkill_Reciprocity.ArmorSkill_Reciprocity_C.GetDamageReductionMod
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArmorSkill_Reciprocity_C::GetDamageReductionMod(int* Level, float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Reciprocity.ArmorSkill_Reciprocity_C.GetDamageReductionMod");

	UArmorSkill_Reciprocity_C_GetDamageReductionMod_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function ArmorSkill_Reciprocity.ArmorSkill_Reciprocity_C.RemoveLevel
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArmorSkill_Reciprocity_C::RemoveLevel(class UClass** Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Reciprocity.ArmorSkill_Reciprocity_C.RemoveLevel");

	UArmorSkill_Reciprocity_C_RemoveLevel_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArmorSkill_Reciprocity.ArmorSkill_Reciprocity_C.GetTierDescription
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           Tier                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Out                            (Parm, OutParm)

void UArmorSkill_Reciprocity_C::GetTierDescription(class AActor** Actor, int* Tier, struct FText* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Reciprocity.ArmorSkill_Reciprocity_C.GetTierDescription");

	UArmorSkill_Reciprocity_C_GetTierDescription_Params params;
	params.Actor = Actor;
	params.Tier = Tier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function ArmorSkill_Reciprocity.ArmorSkill_Reciprocity_C.GetDescription
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Out                            (Parm, OutParm)

void UArmorSkill_Reciprocity_C::GetDescription(class AActor** Actor, struct FText* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Reciprocity.ArmorSkill_Reciprocity_C.GetDescription");

	UArmorSkill_Reciprocity_C_GetDescription_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function ArmorSkill_Reciprocity.ArmorSkill_Reciprocity_C.GetDamageScalar
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           Tier                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          RangedDamageScalar             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          MeleeDamageScalar              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ModDamageScalar                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          SummonedCreatureDamageScalar   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArmorSkill_Reciprocity_C::GetDamageScalar(int* Tier, float* RangedDamageScalar, float* MeleeDamageScalar, float* ModDamageScalar, float* SummonedCreatureDamageScalar)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Reciprocity.ArmorSkill_Reciprocity_C.GetDamageScalar");

	UArmorSkill_Reciprocity_C_GetDamageScalar_Params params;
	params.Tier = Tier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RangedDamageScalar != nullptr)
		*RangedDamageScalar = params.RangedDamageScalar;
	if (MeleeDamageScalar != nullptr)
		*MeleeDamageScalar = params.MeleeDamageScalar;
	if (ModDamageScalar != nullptr)
		*ModDamageScalar = params.ModDamageScalar;
	if (SummonedCreatureDamageScalar != nullptr)
		*SummonedCreatureDamageScalar = params.SummonedCreatureDamageScalar;
}


// Function ArmorSkill_Reciprocity.ArmorSkill_Reciprocity_C.Trigger
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Power                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArmorSkill_Reciprocity_C::Trigger(int* Power)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Reciprocity.ArmorSkill_Reciprocity_C.Trigger");

	UArmorSkill_Reciprocity_C_Trigger_Params params;
	params.Power = Power;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArmorSkill_Reciprocity.ArmorSkill_Reciprocity_C.OnLevelChanged
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UArmorSkill_Reciprocity_C::OnLevelChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Reciprocity.ArmorSkill_Reciprocity_C.OnLevelChanged");

	UArmorSkill_Reciprocity_C_OnLevelChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArmorSkill_Reciprocity.ArmorSkill_Reciprocity_C.OnActionStop
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UArmorSkill_Reciprocity_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Reciprocity.ArmorSkill_Reciprocity_C.OnActionStop");

	UArmorSkill_Reciprocity_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArmorSkill_Reciprocity.ArmorSkill_Reciprocity_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UArmorSkill_Reciprocity_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Reciprocity.ArmorSkill_Reciprocity_C.OnActionStart");

	UArmorSkill_Reciprocity_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArmorSkill_Reciprocity.ArmorSkill_Reciprocity_C.OnComputeStats
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UArmorSkill_Reciprocity_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Reciprocity.ArmorSkill_Reciprocity_C.OnComputeStats");

	UArmorSkill_Reciprocity_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArmorSkill_Reciprocity.ArmorSkill_Reciprocity_C.OnTierChanged
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UArmorSkill_Reciprocity_C::OnTierChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Reciprocity.ArmorSkill_Reciprocity_C.OnTierChanged");

	UArmorSkill_Reciprocity_C_OnTierChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArmorSkill_Reciprocity.ArmorSkill_Reciprocity_C.ReleaseLevel
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UArmorSkill_Reciprocity_C::ReleaseLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Reciprocity.ArmorSkill_Reciprocity_C.ReleaseLevel");

	UArmorSkill_Reciprocity_C_ReleaseLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArmorSkill_Reciprocity.ArmorSkill_Reciprocity_C.ExecuteUbergraph_ArmorSkill_Reciprocity
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArmorSkill_Reciprocity_C::ExecuteUbergraph_ArmorSkill_Reciprocity(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Reciprocity.ArmorSkill_Reciprocity_C.ExecuteUbergraph_ArmorSkill_Reciprocity");

	UArmorSkill_Reciprocity_C_ExecuteUbergraph_ArmorSkill_Reciprocity_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
