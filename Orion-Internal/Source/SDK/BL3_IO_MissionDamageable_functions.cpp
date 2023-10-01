// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_MissionDamageable_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IO_MissionDamageable.IO_MissionDamageable_C.SetDamageableGlowValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Value__0_1_                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_MissionDamageable_C::SetDamageableGlowValue(float Value__0_1_)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionDamageable.IO_MissionDamageable_C.SetDamageableGlowValue");

	AIO_MissionDamageable_C_SetDamageableGlowValue_Params params;
	params.Value__0_1_ = Value__0_1_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionDamageable.IO_MissionDamageable_C.SetMissionDamageableState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_MissionDamageableState> DamageableState                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_MissionDamageable_C::SetMissionDamageableState(TEnumAsByte<Enum_MissionDamageableState> DamageableState)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionDamageable.IO_MissionDamageable_C.SetMissionDamageableState");

	AIO_MissionDamageable_C_SetMissionDamageableState_Params params;
	params.DamageableState = DamageableState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionDamageable.IO_MissionDamageable_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AIO_MissionDamageable_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionDamageable.IO_MissionDamageable_C.UserConstructionScript");

	AIO_MissionDamageable_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionDamageable.IO_MissionDamageable_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AIO_MissionDamageable_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionDamageable.IO_MissionDamageable_C.Timeline_0__FinishedFunc");

	AIO_MissionDamageable_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionDamageable.IO_MissionDamageable_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AIO_MissionDamageable_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionDamageable.IO_MissionDamageable_C.Timeline_0__UpdateFunc");

	AIO_MissionDamageable_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionDamageable.IO_MissionDamageable_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_BP_IO_Switch_Parent_V1_Damageable
// (BlueprintEvent)
// Parameters:
// class UDamageComponent*        DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageCauserComponent*  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FReceivedDamageDetails  Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void AIO_MissionDamageable_C::BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_BP_IO_Switch_Parent_V1_Damageable(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionDamageable.IO_MissionDamageable_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_BP_IO_Switch_Parent_V1_Damageable");

	AIO_MissionDamageable_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_BP_IO_Switch_Parent_V1_Damageable_Params params;
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


// Function IO_MissionDamageable.IO_MissionDamageable_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AIO_MissionDamageable_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionDamageable.IO_MissionDamageable_C.ReceiveBeginPlay");

	AIO_MissionDamageable_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionDamageable.IO_MissionDamageable_C.FlashMaterialsOnHit
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)

void AIO_MissionDamageable_C::FlashMaterialsOnHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionDamageable.IO_MissionDamageable_C.FlashMaterialsOnHit");

	AIO_MissionDamageable_C_FlashMaterialsOnHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionDamageable.IO_MissionDamageable_C.PlayFeedback_Destroying
// (BlueprintCallable, BlueprintEvent)

void AIO_MissionDamageable_C::PlayFeedback_Destroying()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionDamageable.IO_MissionDamageable_C.PlayFeedback_Destroying");

	AIO_MissionDamageable_C_PlayFeedback_Destroying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionDamageable.IO_MissionDamageable_C.PlayFeedback_Destroyed
// (BlueprintCallable, BlueprintEvent)

void AIO_MissionDamageable_C::PlayFeedback_Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionDamageable.IO_MissionDamageable_C.PlayFeedback_Destroyed");

	AIO_MissionDamageable_C_PlayFeedback_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionDamageable.IO_MissionDamageable_C.PlayFeedback_Damageable
// (BlueprintCallable, BlueprintEvent)

void AIO_MissionDamageable_C::PlayFeedback_Damageable()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionDamageable.IO_MissionDamageable_C.PlayFeedback_Damageable");

	AIO_MissionDamageable_C_PlayFeedback_Damageable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionDamageable.IO_MissionDamageable_C.PlayFeedback_Default
// (BlueprintCallable, BlueprintEvent)

void AIO_MissionDamageable_C::PlayFeedback_Default()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionDamageable.IO_MissionDamageable_C.PlayFeedback_Default");

	AIO_MissionDamageable_C_PlayFeedback_Default_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionDamageable.IO_MissionDamageable_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_IO_MissionDamageable_UNIX1533573730
// (BlueprintEvent)
// Parameters:
// class UDamageComponent*        DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UDamageCauserComponent*  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AIO_MissionDamageable_C::BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_IO_MissionDamageable_UNIX1533573730(class UDamageComponent* DamageReceiver, class UDamageCauserComponent* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionDamageable.IO_MissionDamageable_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_IO_MissionDamageable_UNIX1533573730");

	AIO_MissionDamageable_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_DamageCompHealthDepletedDelegate__DelegateSignature_IO_MissionDamageable_UNIX1533573730_Params params;
	params.DamageReceiver = DamageReceiver;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionDamageable.IO_MissionDamageable_C.__UserState_MissionDamageableState_1
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_MissionDamageable_C::__UserState_MissionDamageableState_1(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionDamageable.IO_MissionDamageable_C.__UserState_MissionDamageableState_1");

	AIO_MissionDamageable_C___UserState_MissionDamageableState_1_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionDamageable.IO_MissionDamageable_C.__UserState_MissionDamageableState_2
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_MissionDamageable_C::__UserState_MissionDamageableState_2(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionDamageable.IO_MissionDamageable_C.__UserState_MissionDamageableState_2");

	AIO_MissionDamageable_C___UserState_MissionDamageableState_2_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionDamageable.IO_MissionDamageable_C.__UserState_MissionDamageableState_3
// (BlueprintEvent)
// Parameters:
// bool                           bFromLoad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_MissionDamageable_C::__UserState_MissionDamageableState_3(bool bFromLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionDamageable.IO_MissionDamageable_C.__UserState_MissionDamageableState_3");

	AIO_MissionDamageable_C___UserState_MissionDamageableState_3_Params params;
	params.bFromLoad = bFromLoad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionDamageable.IO_MissionDamageable_C.MissionDamageableTookNonZeroDamage_Multicast
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NumberOfTimesHit               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_MissionDamageable_C::MissionDamageableTookNonZeroDamage_Multicast(int NumberOfTimesHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionDamageable.IO_MissionDamageable_C.MissionDamageableTookNonZeroDamage_Multicast");

	AIO_MissionDamageable_C_MissionDamageableTookNonZeroDamage_Multicast_Params params;
	params.NumberOfTimesHit = NumberOfTimesHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionDamageable.IO_MissionDamageable_C.ExecuteUbergraph_IO_MissionDamageable
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_MissionDamageable_C::ExecuteUbergraph_IO_MissionDamageable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionDamageable.IO_MissionDamageable_C.ExecuteUbergraph_IO_MissionDamageable");

	AIO_MissionDamageable_C_ExecuteUbergraph_IO_MissionDamageable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionDamageable.IO_MissionDamageable_C.MissionDamageableTookDamage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NumberOfTimesHit               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_MissionDamageable_C::MissionDamageableTookDamage__DelegateSignature(int NumberOfTimesHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionDamageable.IO_MissionDamageable_C.MissionDamageableTookDamage__DelegateSignature");

	AIO_MissionDamageable_C_MissionDamageableTookDamage__DelegateSignature_Params params;
	params.NumberOfTimesHit = NumberOfTimesHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionDamageable.IO_MissionDamageable_C.MissionDamageableIsDamageable__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AIO_MissionDamageable_C::MissionDamageableIsDamageable__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionDamageable.IO_MissionDamageable_C.MissionDamageableIsDamageable__DelegateSignature");

	AIO_MissionDamageable_C_MissionDamageableIsDamageable__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionDamageable.IO_MissionDamageable_C.MissionDamageableDestroyed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AIO_MissionDamageable_C::MissionDamageableDestroyed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionDamageable.IO_MissionDamageable_C.MissionDamageableDestroyed__DelegateSignature");

	AIO_MissionDamageable_C_MissionDamageableDestroyed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
