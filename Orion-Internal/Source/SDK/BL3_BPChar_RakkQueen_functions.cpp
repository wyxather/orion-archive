// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_RakkQueen_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPChar_RakkQueen.BPChar_RakkQueen_C.DropCash
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Lots                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_RakkQueen_C::DropCash(bool Lots)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_RakkQueen.BPChar_RakkQueen_C.DropCash");

	ABPChar_RakkQueen_C_DropCash_Params params;
	params.Lots = Lots;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_RakkQueen.BPChar_RakkQueen_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPChar_RakkQueen_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_RakkQueen.BPChar_RakkQueen_C.UserConstructionScript");

	ABPChar_RakkQueen_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_RakkQueen.BPChar_RakkQueen_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_BPChar_RakkBloated
// (BlueprintEvent)
// Parameters:
// class UDamageComponent*        DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageCauserComponent*  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FReceivedDamageDetails  Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void ABPChar_RakkQueen_C::BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_BPChar_RakkBloated(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_RakkQueen.BPChar_RakkQueen_C.BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_BPChar_RakkBloated");

	ABPChar_RakkQueen_C_BndEvt__OakDamageComponent_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_BPChar_RakkBloated_Params params;
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


// Function BPChar_RakkQueen.BPChar_RakkQueen_C.ResetCashDrop
// (BlueprintCallable, BlueprintEvent)

void ABPChar_RakkQueen_C::ResetCashDrop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_RakkQueen.BPChar_RakkQueen_C.ResetCashDrop");

	ABPChar_RakkQueen_C_ResetCashDrop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_RakkQueen.BPChar_RakkQueen_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPChar_RakkQueen_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_RakkQueen.BPChar_RakkQueen_C.ReceiveBeginPlay");

	ABPChar_RakkQueen_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPChar_RakkQueen.BPChar_RakkQueen_C.ExecuteUbergraph_BPChar_RakkQueen
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPChar_RakkQueen_C::ExecuteUbergraph_BPChar_RakkQueen(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPChar_RakkQueen.BPChar_RakkQueen_C.ExecuteUbergraph_BPChar_RakkQueen");

	ABPChar_RakkQueen_C_ExecuteUbergraph_BPChar_RakkQueen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
