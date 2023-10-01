// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_ElectricBattery_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IO_ElectricBattery.IO_ElectricBattery_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AIO_ElectricBattery_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_ElectricBattery.IO_ElectricBattery_C.UserConstructionScript");

	AIO_ElectricBattery_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_ElectricBattery.IO_ElectricBattery_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_4_TakeAnyPipelineDamageDelegate__DelegateSignature_IO_Combat_Cauldron
// (BlueprintEvent)
// Parameters:
// class UDamageComponent*        DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageCauserComponent*  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FReceivedDamageDetails  Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void AIO_ElectricBattery_C::BndEvt__OakDamage_K2Node_ComponentBoundEvent_4_TakeAnyPipelineDamageDelegate__DelegateSignature_IO_Combat_Cauldron(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_ElectricBattery.IO_ElectricBattery_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_4_TakeAnyPipelineDamageDelegate__DelegateSignature_IO_Combat_Cauldron");

	AIO_ElectricBattery_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_4_TakeAnyPipelineDamageDelegate__DelegateSignature_IO_Combat_Cauldron_Params params;
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


// Function IO_ElectricBattery.IO_ElectricBattery_C.ScriptedExplode
// (BlueprintCallable, BlueprintEvent)

void AIO_ElectricBattery_C::ScriptedExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_ElectricBattery.IO_ElectricBattery_C.ScriptedExplode");

	AIO_ElectricBattery_C_ScriptedExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_ElectricBattery.IO_ElectricBattery_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AIO_ElectricBattery_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_ElectricBattery.IO_ElectricBattery_C.ReceiveBeginPlay");

	AIO_ElectricBattery_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_ElectricBattery.IO_ElectricBattery_C.__UserState_BatteryState_1
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_ElectricBattery_C::__UserState_BatteryState_1(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_ElectricBattery.IO_ElectricBattery_C.__UserState_BatteryState_1");

	AIO_ElectricBattery_C___UserState_BatteryState_1_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_ElectricBattery.IO_ElectricBattery_C.__UserState_BatteryState_2
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_ElectricBattery_C::__UserState_BatteryState_2(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_ElectricBattery.IO_ElectricBattery_C.__UserState_BatteryState_2");

	AIO_ElectricBattery_C___UserState_BatteryState_2_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_ElectricBattery.IO_ElectricBattery_C.ExecuteUbergraph_IO_ElectricBattery
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_ElectricBattery_C::ExecuteUbergraph_IO_ElectricBattery(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_ElectricBattery.IO_ElectricBattery_C.ExecuteUbergraph_IO_ElectricBattery");

	AIO_ElectricBattery_C_ExecuteUbergraph_IO_ElectricBattery_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_ElectricBattery.IO_ElectricBattery_C.BatteryRecharged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AIO_ElectricBattery_C::BatteryRecharged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_ElectricBattery.IO_ElectricBattery_C.BatteryRecharged__DelegateSignature");

	AIO_ElectricBattery_C_BatteryRecharged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_ElectricBattery.IO_ElectricBattery_C.GeneratorExploded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AIO_ElectricBattery_C::GeneratorExploded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_ElectricBattery.IO_ElectricBattery_C.GeneratorExploded__DelegateSignature");

	AIO_ElectricBattery_C_GeneratorExploded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
