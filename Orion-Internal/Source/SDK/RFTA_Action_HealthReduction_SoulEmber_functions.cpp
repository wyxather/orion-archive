// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_HealthReduction_SoulEmber_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_HealthReduction_SoulEmber.Action_HealthReduction_SoulEmber_C.CheckTag
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          DoesExtraBlastDamage           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          DamageScalar                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_HealthReduction_SoulEmber_C::CheckTag(bool* DoesExtraBlastDamage, float* DamageScalar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_HealthReduction_SoulEmber.Action_HealthReduction_SoulEmber_C.CheckTag");

	UAction_HealthReduction_SoulEmber_C_CheckTag_Params params;
	params.DoesExtraBlastDamage = DoesExtraBlastDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageScalar != nullptr)
		*DamageScalar = params.DamageScalar;
}


// Function Action_HealthReduction_SoulEmber.Action_HealthReduction_SoulEmber_C.HasSoulEmber
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ATrinket_SoulEmber_C*    AsTrinket_Soul_Ember           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_HealthReduction_SoulEmber_C::HasSoulEmber(class ATrinket_SoulEmber_C** AsTrinket_Soul_Ember)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_HealthReduction_SoulEmber.Action_HealthReduction_SoulEmber_C.HasSoulEmber");

	UAction_HealthReduction_SoulEmber_C_HasSoulEmber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AsTrinket_Soul_Ember != nullptr)
		*AsTrinket_Soul_Ember = params.AsTrinket_Soul_Ember;
}


// Function Action_HealthReduction_SoulEmber.Action_HealthReduction_SoulEmber_C.OnComputeStats
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_HealthReduction_SoulEmber_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_HealthReduction_SoulEmber.Action_HealthReduction_SoulEmber_C.OnComputeStats");

	UAction_HealthReduction_SoulEmber_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_HealthReduction_SoulEmber.Action_HealthReduction_SoulEmber_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_HealthReduction_SoulEmber_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_HealthReduction_SoulEmber.Action_HealthReduction_SoulEmber_C.OnActionStart");

	UAction_HealthReduction_SoulEmber_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_HealthReduction_SoulEmber.Action_HealthReduction_SoulEmber_C.ExecuteUbergraph_Action_HealthReduction_SoulEmber
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_HealthReduction_SoulEmber_C::ExecuteUbergraph_Action_HealthReduction_SoulEmber(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_HealthReduction_SoulEmber.Action_HealthReduction_SoulEmber_C.ExecuteUbergraph_Action_HealthReduction_SoulEmber");

	UAction_HealthReduction_SoulEmber_C_ExecuteUbergraph_Action_HealthReduction_SoulEmber_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
