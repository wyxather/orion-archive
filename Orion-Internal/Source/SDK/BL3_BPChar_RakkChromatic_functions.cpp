// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_RakkChromatic_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPChar_RakkChromatic.BPChar_RakkChromatic_C.InitializeDamageCounters
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_RakkChromatic_C::InitializeDamageCounters()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_RakkChromatic.BPChar_RakkChromatic_C.InitializeDamageCounters");

	ABPChar_RakkChromatic_C_InitializeDamageCounters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_RakkChromatic.BPChar_RakkChromatic_C.ChromaticChangeToElement
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EOakElementalType              ElementalType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_RakkChromatic_C::ChromaticChangeToElement(EOakElementalType ElementalType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_RakkChromatic.BPChar_RakkChromatic_C.ChromaticChangeToElement");

	ABPChar_RakkChromatic_C_ChromaticChangeToElement_Params params;
	params.ElementalType = ElementalType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_RakkChromatic.BPChar_RakkChromatic_C.UpdateDamageCounters
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TotalDamageOfType              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// EOakElementalType              ElementalType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPChar_RakkChromatic_C::UpdateDamageCounters(float Damage, class UDamageType* DamageType, float* TotalDamageOfType, EOakElementalType* ElementalType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_RakkChromatic.BPChar_RakkChromatic_C.UpdateDamageCounters");

	ABPChar_RakkChromatic_C_UpdateDamageCounters_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TotalDamageOfType != nullptr)
		*TotalDamageOfType = params.TotalDamageOfType;
	if (ElementalType != nullptr)
		*ElementalType = params.ElementalType;
}


// Function BPChar_RakkChromatic.BPChar_RakkChromatic_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_RakkChromatic_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_RakkChromatic.BPChar_RakkChromatic_C.UserConstructionScript");

	ABPChar_RakkChromatic_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_RakkChromatic.BPChar_RakkChromatic_C.TryChromaticSwitch
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_RakkChromatic_C::TryChromaticSwitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_RakkChromatic.BPChar_RakkChromatic_C.TryChromaticSwitch");

	ABPChar_RakkChromatic_C_TryChromaticSwitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_RakkChromatic.BPChar_RakkChromatic_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_BPChar_RakkChromatic
// (BlueprintEvent)
// Parameters:
// class UDamageComponent*        DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageCauserComponent*  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FReceivedDamageDetails  Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void ABPChar_RakkChromatic_C::BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_BPChar_RakkChromatic(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_RakkChromatic.BPChar_RakkChromatic_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_BPChar_RakkChromatic");

	ABPChar_RakkChromatic_C_BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_BPChar_RakkChromatic_Params params;
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


// Function BPChar_RakkChromatic.BPChar_RakkChromatic_C.ChromaticSwitchWarmup
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_RakkChromatic_C::ChromaticSwitchWarmup()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_RakkChromatic.BPChar_RakkChromatic_C.ChromaticSwitchWarmup");

	ABPChar_RakkChromatic_C_ChromaticSwitchWarmup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_RakkChromatic.BPChar_RakkChromatic_C.ChromaticSwitchCooldown
// (Public, BlueprintCallable, BlueprintEvent)

void ABPChar_RakkChromatic_C::ChromaticSwitchCooldown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_RakkChromatic.BPChar_RakkChromatic_C.ChromaticSwitchCooldown");

	ABPChar_RakkChromatic_C_ChromaticSwitchCooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_RakkChromatic.BPChar_RakkChromatic_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPChar_RakkChromatic_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_RakkChromatic.BPChar_RakkChromatic_C.ReceiveBeginPlay");

	ABPChar_RakkChromatic_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_RakkChromatic.BPChar_RakkChromatic_C.ImbueWithElement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EOakElementalType*             ElementalType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_RakkChromatic_C::ImbueWithElement(EOakElementalType* ElementalType, class AActor** Source, float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_RakkChromatic.BPChar_RakkChromatic_C.ImbueWithElement");

	ABPChar_RakkChromatic_C_ImbueWithElement_Params params;
	params.ElementalType = ElementalType;
	params.Source = Source;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_RakkChromatic.BPChar_RakkChromatic_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_1_DamageCompDiedDelegate__DelegateSignature_BPChar_RakkChromatic
// (BlueprintEvent)
// Parameters:
// class AActor*                  DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_RakkChromatic_C::BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_1_DamageCompDiedDelegate__DelegateSignature_BPChar_RakkChromatic(class AActor* DamageReceiver, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_RakkChromatic.BPChar_RakkChromatic_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_1_DamageCompDiedDelegate__DelegateSignature_BPChar_RakkChromatic");

	ABPChar_RakkChromatic_C_BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_1_DamageCompDiedDelegate__DelegateSignature_BPChar_RakkChromatic_Params params;
	params.DamageReceiver = DamageReceiver;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_RakkChromatic.BPChar_RakkChromatic_C.ExecuteUbergraph_BPChar_RakkChromatic
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_RakkChromatic_C::ExecuteUbergraph_BPChar_RakkChromatic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_RakkChromatic.BPChar_RakkChromatic_C.ExecuteUbergraph_BPChar_RakkChromatic");

	ABPChar_RakkChromatic_C_ExecuteUbergraph_BPChar_RakkChromatic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
