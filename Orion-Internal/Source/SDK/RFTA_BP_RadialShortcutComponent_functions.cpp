// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_RadialShortcutComponent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.HandleEntitlement
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 ItemBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Handled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_RadialShortcutComponent_C::HandleEntitlement(class UClass** ItemBP, bool* Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.HandleEntitlement");

	UBP_RadialShortcutComponent_C_HandleEntitlement_Params params;
	params.ItemBP = ItemBP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handled != nullptr)
		*Handled = params.Handled;
}


// Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.ValidateEntitlements
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_RadialShortcutComponent_C::ValidateEntitlements()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.ValidateEntitlements");

	UBP_RadialShortcutComponent_C_ValidateEntitlements_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.AutoPopulate
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_RadialShortcutComponent_C::AutoPopulate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.AutoPopulate");

	UBP_RadialShortcutComponent_C_AutoPopulate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.HasSlottedItem
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Radial                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass**                 ItemBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           NumSlots                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_RadialShortcutComponent_C::HasSlottedItem(struct FName* Radial, class UClass** ItemBP, int* NumSlots, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.HasSlottedItem");

	UBP_RadialShortcutComponent_C_HasSlottedItem_Params params;
	params.Radial = Radial;
	params.ItemBP = ItemBP;
	params.NumSlots = NumSlots;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.OnRep_Items
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void UBP_RadialShortcutComponent_C::OnRep_Items()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.OnRep_Items");

	UBP_RadialShortcutComponent_C_OnRep_Items_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.AutoSlotItem
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 ItemBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RadialShortcutComponent_C::AutoSlotItem(class UClass** ItemBP)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.AutoSlotItem");

	UBP_RadialShortcutComponent_C_AutoSlotItem_Params params;
	params.ItemBP = ItemBP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.RemoveBySlot
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Radial                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RadialShortcutComponent_C::RemoveBySlot(struct FName* Radial, int* Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.RemoveBySlot");

	UBP_RadialShortcutComponent_C_RemoveBySlot_Params params;
	params.Radial = Radial;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.RemoveByItem
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Radial                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass**                 Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RadialShortcutComponent_C::RemoveByItem(struct FName* Radial, class UClass** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.RemoveByItem");

	UBP_RadialShortcutComponent_C_RemoveByItem_Params params;
	params.Radial = Radial;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.SetSlot
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Radial                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass**                 ItemBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RadialShortcutComponent_C::SetSlot(struct FName* Radial, int* Slot, class UClass** ItemBP)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.SetSlot");

	UBP_RadialShortcutComponent_C_SetSlot_Params params;
	params.Radial = Radial;
	params.Slot = Slot;
	params.ItemBP = ItemBP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.GetSlotCount
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Radial                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RadialShortcutComponent_C::GetSlotCount(struct FName* Radial, int* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.GetSlotCount");

	UBP_RadialShortcutComponent_C_GetSlotCount_Params params;
	params.Radial = Radial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.GetSlot
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Radial                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RadialShortcutComponent_C::GetSlot(struct FName* Radial, int* Slot, class UClass** Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.GetSlot");

	UBP_RadialShortcutComponent_C_GetSlot_Params params;
	params.Radial = Radial;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.ServerSetSlot
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Radial                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass**                 ItemBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RadialShortcutComponent_C::ServerSetSlot(struct FName* Radial, int* Slot, class UClass** ItemBP)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.ServerSetSlot");

	UBP_RadialShortcutComponent_C_ServerSetSlot_Params params;
	params.Radial = Radial;
	params.Slot = Slot;
	params.ItemBP = ItemBP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.UseItem
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char*                 Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RadialShortcutComponent_C::UseItem(unsigned char* Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.UseItem");

	UBP_RadialShortcutComponent_C_UseItem_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.SimulateSetSlot
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Radial                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass**                 ItemBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RadialShortcutComponent_C::SimulateSetSlot(struct FName* Radial, int* Slot, class UClass** ItemBP)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.SimulateSetSlot");

	UBP_RadialShortcutComponent_C_SimulateSetSlot_Params params;
	params.Radial = Radial;
	params.Slot = Slot;
	params.ItemBP = ItemBP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.ServerUseItem
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char*                 Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RadialShortcutComponent_C::ServerUseItem(unsigned char* Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.ServerUseItem");

	UBP_RadialShortcutComponent_C_ServerUseItem_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UBP_RadialShortcutComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.ReceiveBeginPlay");

	UBP_RadialShortcutComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.OnAddItem
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 ItemBP                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RadialShortcutComponent_C::OnAddItem(class UClass** ItemBP, int* Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.OnAddItem");

	UBP_RadialShortcutComponent_C_OnAddItem_Params params;
	params.ItemBP = ItemBP;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.ExecuteUbergraph_BP_RadialShortcutComponent
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RadialShortcutComponent_C::ExecuteUbergraph_BP_RadialShortcutComponent(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.ExecuteUbergraph_BP_RadialShortcutComponent");

	UBP_RadialShortcutComponent_C_ExecuteUbergraph_BP_RadialShortcutComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.OnSlotUsed__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char*                 Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RadialShortcutComponent_C::OnSlotUsed__DelegateSignature(unsigned char* Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.OnSlotUsed__DelegateSignature");

	UBP_RadialShortcutComponent_C_OnSlotUsed__DelegateSignature_Params params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.OnChanged__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_RadialShortcutComponent_C::OnChanged__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialShortcutComponent.BP_RadialShortcutComponent_C.OnChanged__DelegateSignature");

	UBP_RadialShortcutComponent_C_OnChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
