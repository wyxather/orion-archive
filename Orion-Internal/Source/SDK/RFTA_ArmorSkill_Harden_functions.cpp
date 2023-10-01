// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_ArmorSkill_Harden_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ArmorSkill_Harden.ArmorSkill_Harden_C.GetTierDescriptionLevel
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           Tier                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArmorSkill_Harden_C::GetTierDescriptionLevel(int* Tier, float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Harden.ArmorSkill_Harden_C.GetTierDescriptionLevel");

	UArmorSkill_Harden_C_GetTierDescriptionLevel_Params params;
	params.Tier = Tier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function ArmorSkill_Harden.ArmorSkill_Harden_C.GetMoveSpeedMod
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           Tier                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArmorSkill_Harden_C::GetMoveSpeedMod(int* Tier, float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Harden.ArmorSkill_Harden_C.GetMoveSpeedMod");

	UArmorSkill_Harden_C_GetMoveSpeedMod_Params params;
	params.Tier = Tier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function ArmorSkill_Harden.ArmorSkill_Harden_C.GetBrokenMovementSpeedMod
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           Tier                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArmorSkill_Harden_C::GetBrokenMovementSpeedMod(int* Tier, float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Harden.ArmorSkill_Harden_C.GetBrokenMovementSpeedMod");

	UArmorSkill_Harden_C_GetBrokenMovementSpeedMod_Params params;
	params.Tier = Tier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function ArmorSkill_Harden.ArmorSkill_Harden_C.FilterIncomingDamage
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo*            DamageInfo                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FDamageInfo             DamageInfoOut                  (Parm, OutParm, ContainsInstancedReference)
// bool                           ShouldApplyDamage              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UArmorSkill_Harden_C::FilterIncomingDamage(struct FDamageInfo* DamageInfo, struct FDamageInfo* DamageInfoOut, bool* ShouldApplyDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Harden.ArmorSkill_Harden_C.FilterIncomingDamage");

	UArmorSkill_Harden_C_FilterIncomingDamage_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageInfoOut != nullptr)
		*DamageInfoOut = params.DamageInfoOut;
	if (ShouldApplyDamage != nullptr)
		*ShouldApplyDamage = params.ShouldApplyDamage;
}


// Function ArmorSkill_Harden.ArmorSkill_Harden_C.ResetFresnel
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UArmorSkill_Harden_C::ResetFresnel()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Harden.ArmorSkill_Harden_C.ResetFresnel");

	UArmorSkill_Harden_C_ResetFresnel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArmorSkill_Harden.ArmorSkill_Harden_C.SetFresnelTime
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArmorSkill_Harden_C::SetFresnelTime(float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Harden.ArmorSkill_Harden_C.SetFresnelTime");

	UArmorSkill_Harden_C_SetFresnelTime_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArmorSkill_Harden.ArmorSkill_Harden_C.SetMaterialValues
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         NewStackLevel                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArmorSkill_Harden_C::SetMaterialValues(float* NewStackLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Harden.ArmorSkill_Harden_C.SetMaterialValues");

	UArmorSkill_Harden_C_SetMaterialValues_Params params;
	params.NewStackLevel = NewStackLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArmorSkill_Harden.ArmorSkill_Harden_C.GetNumStacks
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArmorSkill_Harden_C::GetNumStacks(int* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Harden.ArmorSkill_Harden_C.GetNumStacks");

	UArmorSkill_Harden_C_GetNumStacks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function ArmorSkill_Harden.ArmorSkill_Harden_C.OnTimerExpired
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UArmorSkill_Harden_C::OnTimerExpired()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Harden.ArmorSkill_Harden_C.OnTimerExpired");

	UArmorSkill_Harden_C_OnTimerExpired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArmorSkill_Harden.ArmorSkill_Harden_C.ResetTimer
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UArmorSkill_Harden_C::ResetTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Harden.ArmorSkill_Harden_C.ResetTimer");

	UArmorSkill_Harden_C_ResetTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArmorSkill_Harden.ArmorSkill_Harden_C.GetTierDescription
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           Tier                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Out                            (Parm, OutParm)

void UArmorSkill_Harden_C::GetTierDescription(class AActor** Actor, int* Tier, struct FText* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Harden.ArmorSkill_Harden_C.GetTierDescription");

	UArmorSkill_Harden_C_GetTierDescription_Params params;
	params.Actor = Actor;
	params.Tier = Tier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function ArmorSkill_Harden.ArmorSkill_Harden_C.GetDescription
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FText                   Out                            (Parm, OutParm)

void UArmorSkill_Harden_C::GetDescription(class AActor** Actor, struct FText* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Harden.ArmorSkill_Harden_C.GetDescription");

	UArmorSkill_Harden_C_GetDescription_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function ArmorSkill_Harden.ArmorSkill_Harden_C.GetDamageReductionMod
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           Tier                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArmorSkill_Harden_C::GetDamageReductionMod(int* Tier, float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Harden.ArmorSkill_Harden_C.GetDamageReductionMod");

	UArmorSkill_Harden_C_GetDamageReductionMod_Params params;
	params.Tier = Tier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function ArmorSkill_Harden.ArmorSkill_Harden_C.OnActionStop
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UArmorSkill_Harden_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Harden.ArmorSkill_Harden_C.OnActionStop");

	UArmorSkill_Harden_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArmorSkill_Harden.ArmorSkill_Harden_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UArmorSkill_Harden_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Harden.ArmorSkill_Harden_C.OnActionStart");

	UArmorSkill_Harden_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArmorSkill_Harden.ArmorSkill_Harden_C.OnTick
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArmorSkill_Harden_C::OnTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Harden.ArmorSkill_Harden_C.OnTick");

	UArmorSkill_Harden_C_OnTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArmorSkill_Harden.ArmorSkill_Harden_C.OnLevelChanged
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UArmorSkill_Harden_C::OnLevelChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Harden.ArmorSkill_Harden_C.OnLevelChanged");

	UArmorSkill_Harden_C_OnLevelChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArmorSkill_Harden.ArmorSkill_Harden_C.CustomOnLevelChanged
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UArmorSkill_Harden_C::CustomOnLevelChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Harden.ArmorSkill_Harden_C.CustomOnLevelChanged");

	UArmorSkill_Harden_C_CustomOnLevelChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArmorSkill_Harden.ArmorSkill_Harden_C.OnComputeStats
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UArmorSkill_Harden_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Harden.ArmorSkill_Harden_C.OnComputeStats");

	UArmorSkill_Harden_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArmorSkill_Harden.ArmorSkill_Harden_C.ExecuteUbergraph_ArmorSkill_Harden
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArmorSkill_Harden_C::ExecuteUbergraph_ArmorSkill_Harden(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArmorSkill_Harden.ArmorSkill_Harden_C.ExecuteUbergraph_ArmorSkill_Harden");

	UArmorSkill_Harden_C_ExecuteUbergraph_ArmorSkill_Harden_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
