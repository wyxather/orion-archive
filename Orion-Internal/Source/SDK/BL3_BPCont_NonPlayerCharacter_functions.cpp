// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPCont_NonPlayerCharacter_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPCont_NonPlayerCharacter.BPCont_NonPlayerCharacter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPCont_NonPlayerCharacter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPCont_NonPlayerCharacter.BPCont_NonPlayerCharacter_C.UserConstructionScript");

	ABPCont_NonPlayerCharacter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPCont_NonPlayerCharacter.BPCont_NonPlayerCharacter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPCont_NonPlayerCharacter_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPCont_NonPlayerCharacter.BPCont_NonPlayerCharacter_C.ReceiveTick");

	ABPCont_NonPlayerCharacter_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPCont_NonPlayerCharacter.BPCont_NonPlayerCharacter_C.TargetHealthCheck
// (BlueprintCallable, BlueprintEvent)

void ABPCont_NonPlayerCharacter_C::TargetHealthCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPCont_NonPlayerCharacter.BPCont_NonPlayerCharacter_C.TargetHealthCheck");

	ABPCont_NonPlayerCharacter_C_TargetHealthCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPCont_NonPlayerCharacter.BPCont_NonPlayerCharacter_C.TargetTakesDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageCauserComponent*  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FReceivedDamageDetails  Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void ABPCont_NonPlayerCharacter_C::TargetTakesDamage(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPCont_NonPlayerCharacter.BPCont_NonPlayerCharacter_C.TargetTakesDamage");

	ABPCont_NonPlayerCharacter_C_TargetTakesDamage_Params params;
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


// Function BPCont_NonPlayerCharacter.BPCont_NonPlayerCharacter_C.TargetDies
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPCont_NonPlayerCharacter_C::TargetDies(class AActor* DamageReceiver, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPCont_NonPlayerCharacter.BPCont_NonPlayerCharacter_C.TargetDies");

	ABPCont_NonPlayerCharacter_C_TargetDies_Params params;
	params.DamageReceiver = DamageReceiver;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPCont_NonPlayerCharacter.BPCont_NonPlayerCharacter_C.BndEvt__Targeting_K2Node_ComponentBoundEvent_6_TargetingComponentTargetListChangedSignature__DelegateSignature_BPCont_NonPlayerCharacter
// (BlueprintEvent)
// Parameters:
// class UTargetingComponent*     TargetingComponent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABPCont_NonPlayerCharacter_C::BndEvt__Targeting_K2Node_ComponentBoundEvent_6_TargetingComponentTargetListChangedSignature__DelegateSignature_BPCont_NonPlayerCharacter(class UTargetingComponent* TargetingComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPCont_NonPlayerCharacter.BPCont_NonPlayerCharacter_C.BndEvt__Targeting_K2Node_ComponentBoundEvent_6_TargetingComponentTargetListChangedSignature__DelegateSignature_BPCont_NonPlayerCharacter");

	ABPCont_NonPlayerCharacter_C_BndEvt__Targeting_K2Node_ComponentBoundEvent_6_TargetingComponentTargetListChangedSignature__DelegateSignature_BPCont_NonPlayerCharacter_Params params;
	params.TargetingComponent = TargetingComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPCont_NonPlayerCharacter.BPCont_NonPlayerCharacter_C.ExecuteUbergraph_BPCont_NonPlayerCharacter
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPCont_NonPlayerCharacter_C::ExecuteUbergraph_BPCont_NonPlayerCharacter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPCont_NonPlayerCharacter.BPCont_NonPlayerCharacter_C.ExecuteUbergraph_BPCont_NonPlayerCharacter");

	ABPCont_NonPlayerCharacter_C_ExecuteUbergraph_BPCont_NonPlayerCharacter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
