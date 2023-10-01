// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPIO_Lootable_Mailbox_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPIO_Lootable_Mailbox.BPIO_Lootable_Mailbox_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPIO_Lootable_Mailbox_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable_Mailbox.BPIO_Lootable_Mailbox_C.UserConstructionScript");

	ABPIO_Lootable_Mailbox_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPIO_Lootable_Mailbox.BPIO_Lootable_Mailbox_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_BPIO_Lootable_Mailbox
// (BlueprintEvent)
// Parameters:
// class UDamageComponent*        DamageReceiver                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType*          DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource*           DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageCauserComponent*  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FReceivedDamageDetails  Details                        (BlueprintVisible, BlueprintReadOnly, Parm)

void ABPIO_Lootable_Mailbox_C::BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_BPIO_Lootable_Mailbox(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable_Mailbox.BPIO_Lootable_Mailbox_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_BPIO_Lootable_Mailbox");

	ABPIO_Lootable_Mailbox_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_0_TakeAnyPipelineDamageDelegate__DelegateSignature_BPIO_Lootable_Mailbox_Params params;
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


// Function BPIO_Lootable_Mailbox.BPIO_Lootable_Mailbox_C.BndEvt__UsableComponent_K2Node_ComponentBoundEvent_1_UsableUsedOnChannelSignature__DelegateSignature_BPIO_Lootable_Mailbox
// (BlueprintEvent)
// Parameters:
// class AController*             UserController                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     UsedComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABPIO_Lootable_Mailbox_C::BndEvt__UsableComponent_K2Node_ComponentBoundEvent_1_UsableUsedOnChannelSignature__DelegateSignature_BPIO_Lootable_Mailbox(class AController* UserController, class UPrimitiveComponent* UsedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable_Mailbox.BPIO_Lootable_Mailbox_C.BndEvt__UsableComponent_K2Node_ComponentBoundEvent_1_UsableUsedOnChannelSignature__DelegateSignature_BPIO_Lootable_Mailbox");

	ABPIO_Lootable_Mailbox_C_BndEvt__UsableComponent_K2Node_ComponentBoundEvent_1_UsableUsedOnChannelSignature__DelegateSignature_BPIO_Lootable_Mailbox_Params params;
	params.UserController = UserController;
	params.UsedComponent = UsedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPIO_Lootable_Mailbox.BPIO_Lootable_Mailbox_C.ExecuteUbergraph_BPIO_Lootable_Mailbox
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPIO_Lootable_Mailbox_C::ExecuteUbergraph_BPIO_Lootable_Mailbox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable_Mailbox.BPIO_Lootable_Mailbox_C.ExecuteUbergraph_BPIO_Lootable_Mailbox");

	ABPIO_Lootable_Mailbox_C_ExecuteUbergraph_BPIO_Lootable_Mailbox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
