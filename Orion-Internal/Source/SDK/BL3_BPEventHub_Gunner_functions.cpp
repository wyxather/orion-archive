// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPEventHub_Gunner_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPEventHub_Gunner.BPEventHub_Gunner_C.IronBear_AutoBear_Ended__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasValidChargeTarget           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ChargeTarget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPEventHub_Gunner_C::IronBear_AutoBear_Ended__DelegateSignature(bool HasValidChargeTarget, class AActor* ChargeTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPEventHub_Gunner.BPEventHub_Gunner_C.IronBear_AutoBear_Ended__DelegateSignature");

	UBPEventHub_Gunner_C_IronBear_AutoBear_Ended__DelegateSignature_Params params;
	params.HasValidChargeTarget = HasValidChargeTarget;
	params.ChargeTarget = ChargeTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPEventHub_Gunner.BPEventHub_Gunner_C.IronBear_AutoBear_Started__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPEventHub_Gunner_C::IronBear_AutoBear_Started__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPEventHub_Gunner.BPEventHub_Gunner_C.IronBear_AutoBear_Started__DelegateSignature");

	UBPEventHub_Gunner_C_IronBear_AutoBear_Started__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPEventHub_Gunner.BPEventHub_Gunner_C.IronBear_DakkaTurret_Emptied__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ExitingActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPEventHub_Gunner_C::IronBear_DakkaTurret_Emptied__DelegateSignature(class AActor* ExitingActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPEventHub_Gunner.BPEventHub_Gunner_C.IronBear_DakkaTurret_Emptied__DelegateSignature");

	UBPEventHub_Gunner_C_IronBear_DakkaTurret_Emptied__DelegateSignature_Params params;
	params.ExitingActor = ExitingActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPEventHub_Gunner.BPEventHub_Gunner_C.IronBear_DakkaTurret_Entered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  EnteredActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPEventHub_Gunner_C::IronBear_DakkaTurret_Entered__DelegateSignature(class AActor* EnteredActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPEventHub_Gunner.BPEventHub_Gunner_C.IronBear_DakkaTurret_Entered__DelegateSignature");

	UBPEventHub_Gunner_C_IronBear_DakkaTurret_Entered__DelegateSignature_Params params;
	params.EnteredActor = EnteredActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPEventHub_Gunner.BPEventHub_Gunner_C.IronBear_BubbleShield_StartRecharge__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPEventHub_Gunner_C::IronBear_BubbleShield_StartRecharge__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPEventHub_Gunner.BPEventHub_Gunner_C.IronBear_BubbleShield_StartRecharge__DelegateSignature");

	UBPEventHub_Gunner_C_IronBear_BubbleShield_StartRecharge__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPEventHub_Gunner.BPEventHub_Gunner_C.IronBear_BubbleShield_Depleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPEventHub_Gunner_C::IronBear_BubbleShield_Depleted__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPEventHub_Gunner.BPEventHub_Gunner_C.IronBear_BubbleShield_Depleted__DelegateSignature");

	UBPEventHub_Gunner_C_IronBear_BubbleShield_Depleted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPEventHub_Gunner.BPEventHub_Gunner_C.IronBear_GundamBear_Used__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPEventHub_Gunner_C::IronBear_GundamBear_Used__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPEventHub_Gunner.BPEventHub_Gunner_C.IronBear_GundamBear_Used__DelegateSignature");

	UBPEventHub_Gunner_C_IronBear_GundamBear_Used__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPEventHub_Gunner.BPEventHub_Gunner_C.SkillEvent_BronzeAgeRage_Start__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPEventHub_Gunner_C::SkillEvent_BronzeAgeRage_Start__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPEventHub_Gunner.BPEventHub_Gunner_C.SkillEvent_BronzeAgeRage_Start__DelegateSignature");

	UBPEventHub_Gunner_C_SkillEvent_BronzeAgeRage_Start__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPEventHub_Gunner.BPEventHub_Gunner_C.SkillEvent_BronzeAgeRage_End__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPEventHub_Gunner_C::SkillEvent_BronzeAgeRage_End__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPEventHub_Gunner.BPEventHub_Gunner_C.SkillEvent_BronzeAgeRage_End__DelegateSignature");

	UBPEventHub_Gunner_C_SkillEvent_BronzeAgeRage_End__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPEventHub_Gunner.BPEventHub_Gunner_C.SkillEvent_Capacitation__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPEventHub_Gunner_C::SkillEvent_Capacitation__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPEventHub_Gunner.BPEventHub_Gunner_C.SkillEvent_Capacitation__DelegateSignature");

	UBPEventHub_Gunner_C_SkillEvent_Capacitation__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPEventHub_Gunner.BPEventHub_Gunner_C.SkillEvent_HighVoltage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Enemy                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPEventHub_Gunner_C::SkillEvent_HighVoltage__DelegateSignature(class AActor* Enemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPEventHub_Gunner.BPEventHub_Gunner_C.SkillEvent_HighVoltage__DelegateSignature");

	UBPEventHub_Gunner_C_SkillEvent_HighVoltage__DelegateSignature_Params params;
	params.Enemy = Enemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPEventHub_Gunner.BPEventHub_Gunner_C.SkillEvent_IronScience__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPEventHub_Gunner_C::SkillEvent_IronScience__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPEventHub_Gunner.BPEventHub_Gunner_C.SkillEvent_IronScience__DelegateSignature");

	UBPEventHub_Gunner_C_SkillEvent_IronScience__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
