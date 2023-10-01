// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Prologue_M_FineDining_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Prologue_M_FineDining.Prologue_M_FineDining_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APrologue_M_FineDining_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Prologue_M_FineDining.Prologue_M_FineDining_C.ReceiveBeginPlay");

	APrologue_M_FineDining_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Prologue_M_FineDining.Prologue_M_FineDining_C.OnTakeAnyDamage_SpatulaDecal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageCauserComponent*  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FReceivedDamageDetails  Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void APrologue_M_FineDining_C::OnTakeAnyDamage_SpatulaDecal(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Prologue_M_FineDining.Prologue_M_FineDining_C.OnTakeAnyDamage_SpatulaDecal");

	APrologue_M_FineDining_C_OnTakeAnyDamage_SpatulaDecal_Params params;
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


// Function Prologue_M_FineDining.Prologue_M_FineDining_C.ExecuteUbergraph_Prologue_M_FineDining
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void APrologue_M_FineDining_C::ExecuteUbergraph_Prologue_M_FineDining(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Prologue_M_FineDining.Prologue_M_FineDining_C.ExecuteUbergraph_Prologue_M_FineDining");

	APrologue_M_FineDining_C_ExecuteUbergraph_Prologue_M_FineDining_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
