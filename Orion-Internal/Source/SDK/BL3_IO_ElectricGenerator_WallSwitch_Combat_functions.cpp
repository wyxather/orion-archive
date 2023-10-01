// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_ElectricGenerator_WallSwitch_Combat_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IO_ElectricGenerator_WallSwitch_Combat.IO_ElectricGenerator_WallSwitch_Combat_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AIO_ElectricGenerator_WallSwitch_Combat_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_ElectricGenerator_WallSwitch_Combat.IO_ElectricGenerator_WallSwitch_Combat_C.UserConstructionScript");

	AIO_ElectricGenerator_WallSwitch_Combat_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_ElectricGenerator_WallSwitch_Combat.IO_ElectricGenerator_WallSwitch_Combat_C.Timeline_Transition__FinishedFunc
// (BlueprintEvent)

void AIO_ElectricGenerator_WallSwitch_Combat_C::Timeline_Transition__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_ElectricGenerator_WallSwitch_Combat.IO_ElectricGenerator_WallSwitch_Combat_C.Timeline_Transition__FinishedFunc");

	AIO_ElectricGenerator_WallSwitch_Combat_C_Timeline_Transition__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_ElectricGenerator_WallSwitch_Combat.IO_ElectricGenerator_WallSwitch_Combat_C.Timeline_Transition__UpdateFunc
// (BlueprintEvent)

void AIO_ElectricGenerator_WallSwitch_Combat_C::Timeline_Transition__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_ElectricGenerator_WallSwitch_Combat.IO_ElectricGenerator_WallSwitch_Combat_C.Timeline_Transition__UpdateFunc");

	AIO_ElectricGenerator_WallSwitch_Combat_C_Timeline_Transition__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_ElectricGenerator_WallSwitch_Combat.IO_ElectricGenerator_WallSwitch_Combat_C.ElecticityPresentation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           On                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_ElectricGenerator_WallSwitch_Combat_C::ElecticityPresentation(bool On)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_ElectricGenerator_WallSwitch_Combat.IO_ElectricGenerator_WallSwitch_Combat_C.ElecticityPresentation");

	AIO_ElectricGenerator_WallSwitch_Combat_C_ElecticityPresentation_Params params;
	params.On = On;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_ElectricGenerator_WallSwitch_Combat.IO_ElectricGenerator_WallSwitch_Combat_C.__UserState_ElectricState_2
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_ElectricGenerator_WallSwitch_Combat_C::__UserState_ElectricState_2(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_ElectricGenerator_WallSwitch_Combat.IO_ElectricGenerator_WallSwitch_Combat_C.__UserState_ElectricState_2");

	AIO_ElectricGenerator_WallSwitch_Combat_C___UserState_ElectricState_2_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_ElectricGenerator_WallSwitch_Combat.IO_ElectricGenerator_WallSwitch_Combat_C.__UserState_ElectricState_1
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_ElectricGenerator_WallSwitch_Combat_C::__UserState_ElectricState_1(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_ElectricGenerator_WallSwitch_Combat.IO_ElectricGenerator_WallSwitch_Combat_C.__UserState_ElectricState_1");

	AIO_ElectricGenerator_WallSwitch_Combat_C___UserState_ElectricState_1_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_ElectricGenerator_WallSwitch_Combat.IO_ElectricGenerator_WallSwitch_Combat_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AIO_ElectricGenerator_WallSwitch_Combat_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_ElectricGenerator_WallSwitch_Combat.IO_ElectricGenerator_WallSwitch_Combat_C.ReceiveBeginPlay");

	AIO_ElectricGenerator_WallSwitch_Combat_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_ElectricGenerator_WallSwitch_Combat.IO_ElectricGenerator_WallSwitch_Combat_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_IO_ElectricGenerator_WallSwitch_Combat
// (BlueprintEvent)
// Parameters:
// class UDamageComponent*        DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageCauserComponent*  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FReceivedDamageDetails  Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void AIO_ElectricGenerator_WallSwitch_Combat_C::BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_IO_ElectricGenerator_WallSwitch_Combat(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_ElectricGenerator_WallSwitch_Combat.IO_ElectricGenerator_WallSwitch_Combat_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_IO_ElectricGenerator_WallSwitch_Combat");

	AIO_ElectricGenerator_WallSwitch_Combat_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_IO_ElectricGenerator_WallSwitch_Combat_Params params;
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


// Function IO_ElectricGenerator_WallSwitch_Combat.IO_ElectricGenerator_WallSwitch_Combat_C.AudioHitSwitch
// (BlueprintCallable, BlueprintEvent)

void AIO_ElectricGenerator_WallSwitch_Combat_C::AudioHitSwitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_ElectricGenerator_WallSwitch_Combat.IO_ElectricGenerator_WallSwitch_Combat_C.AudioHitSwitch");

	AIO_ElectricGenerator_WallSwitch_Combat_C_AudioHitSwitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_ElectricGenerator_WallSwitch_Combat.IO_ElectricGenerator_WallSwitch_Combat_C.ExecuteUbergraph_IO_ElectricGenerator_WallSwitch_Combat
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_ElectricGenerator_WallSwitch_Combat_C::ExecuteUbergraph_IO_ElectricGenerator_WallSwitch_Combat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_ElectricGenerator_WallSwitch_Combat.IO_ElectricGenerator_WallSwitch_Combat_C.ExecuteUbergraph_IO_ElectricGenerator_WallSwitch_Combat");

	AIO_ElectricGenerator_WallSwitch_Combat_C_ExecuteUbergraph_IO_ElectricGenerator_WallSwitch_Combat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
