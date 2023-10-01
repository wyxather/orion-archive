// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPIO_Lootable_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPIO_Lootable.BPIO_Lootable_C.PlayAudio
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABPIO_Lootable_C::PlayAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable.BPIO_Lootable_C.PlayAudio");

	ABPIO_Lootable_C_PlayAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPIO_Lootable.BPIO_Lootable_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABPIO_Lootable_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable.BPIO_Lootable_C.UserConstructionScript");

	ABPIO_Lootable_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPIO_Lootable.BPIO_Lootable_C.OnLocked
// (Event, Protected, BlueprintEvent)

void ABPIO_Lootable_C::OnLocked()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable.BPIO_Lootable_C.OnLocked");

	ABPIO_Lootable_C_OnLocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPIO_Lootable.BPIO_Lootable_C.OnEnabling
// (Event, Protected, BlueprintEvent)

void ABPIO_Lootable_C::OnEnabling()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable.BPIO_Lootable_C.OnEnabling");

	ABPIO_Lootable_C_OnEnabling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPIO_Lootable.BPIO_Lootable_C.OnEnabled
// (Event, Protected, BlueprintEvent)

void ABPIO_Lootable_C::OnEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable.BPIO_Lootable_C.OnEnabled");

	ABPIO_Lootable_C_OnEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPIO_Lootable.BPIO_Lootable_C.OnDisabling
// (Event, Protected, BlueprintEvent)

void ABPIO_Lootable_C::OnDisabling()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable.BPIO_Lootable_C.OnDisabling");

	ABPIO_Lootable_C_OnDisabling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPIO_Lootable.BPIO_Lootable_C.OnDisabled
// (Event, Protected, BlueprintEvent)

void ABPIO_Lootable_C::OnDisabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable.BPIO_Lootable_C.OnDisabled");

	ABPIO_Lootable_C_OnDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPIO_Lootable.BPIO_Lootable_C.OnAllPickupsDetached_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ADroppedInventoryItemPickup* Pickup                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  PickedUpBy                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPIO_Lootable_C::OnAllPickupsDetached_Event(class ADroppedInventoryItemPickup* Pickup, class AActor* PickedUpBy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable.BPIO_Lootable_C.OnAllPickupsDetached_Event");

	ABPIO_Lootable_C_OnAllPickupsDetached_Event_Params params;
	params.Pickup = Pickup;
	params.PickedUpBy = PickedUpBy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPIO_Lootable.BPIO_Lootable_C.OnPickupDetached_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ADroppedInventoryItemPickup* Pickup                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  PickedUpBy                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPIO_Lootable_C::OnPickupDetached_Event_1(class ADroppedInventoryItemPickup* Pickup, class AActor* PickedUpBy)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable.BPIO_Lootable_C.OnPickupDetached_Event_1");

	ABPIO_Lootable_C_OnPickupDetached_Event_1_Params params;
	params.Pickup = Pickup;
	params.PickedUpBy = PickedUpBy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPIO_Lootable.BPIO_Lootable_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPIO_Lootable_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable.BPIO_Lootable_C.ReceiveBeginPlay");

	ABPIO_Lootable_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPIO_Lootable.BPIO_Lootable_C.BndEvt__UsableComponent_K2Node_ComponentBoundEvent_2_UsableUsedOnChannelSignature__DelegateSignature_BPIO_Lootable
// (BlueprintEvent)
// Parameters:
// class AController*             UserController                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     UsedComponent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABPIO_Lootable_C::BndEvt__UsableComponent_K2Node_ComponentBoundEvent_2_UsableUsedOnChannelSignature__DelegateSignature_BPIO_Lootable(class AController* UserController, class UPrimitiveComponent* UsedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable.BPIO_Lootable_C.BndEvt__UsableComponent_K2Node_ComponentBoundEvent_2_UsableUsedOnChannelSignature__DelegateSignature_BPIO_Lootable");

	ABPIO_Lootable_C_BndEvt__UsableComponent_K2Node_ComponentBoundEvent_2_UsableUsedOnChannelSignature__DelegateSignature_BPIO_Lootable_Params params;
	params.UserController = UserController;
	params.UsedComponent = UsedComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPIO_Lootable.BPIO_Lootable_C.ExecuteUbergraph_BPIO_Lootable
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPIO_Lootable_C::ExecuteUbergraph_BPIO_Lootable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable.BPIO_Lootable_C.ExecuteUbergraph_BPIO_Lootable");

	ABPIO_Lootable_C_ExecuteUbergraph_BPIO_Lootable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPIO_Lootable.BPIO_Lootable_C.On_Opening__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABPIO_Lootable_C::On_Opening__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable.BPIO_Lootable_C.On_Opening__DelegateSignature");

	ABPIO_Lootable_C_On_Opening__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPIO_Lootable.BPIO_Lootable_C.On_AllLootTaken__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ADroppedInventoryItemPickup* PickedUpItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPIO_Lootable_C::On_AllLootTaken__DelegateSignature(class ADroppedInventoryItemPickup* PickedUpItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable.BPIO_Lootable_C.On_AllLootTaken__DelegateSignature");

	ABPIO_Lootable_C_On_AllLootTaken__DelegateSignature_Params params;
	params.PickedUpItem = PickedUpItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPIO_Lootable.BPIO_Lootable_C.On_AnyLootTaken__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ADroppedInventoryItemPickup* PickedUpItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPIO_Lootable_C::On_AnyLootTaken__DelegateSignature(class ADroppedInventoryItemPickup* PickedUpItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable.BPIO_Lootable_C.On_AnyLootTaken__DelegateSignature");

	ABPIO_Lootable_C_On_AnyLootTaken__DelegateSignature_Params params;
	params.PickedUpItem = PickedUpItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPIO_Lootable.BPIO_Lootable_C.On_Opened__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABPIO_Lootable_C::On_Opened__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable.BPIO_Lootable_C.On_Opened__DelegateSignature");

	ABPIO_Lootable_C_On_Opened__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
