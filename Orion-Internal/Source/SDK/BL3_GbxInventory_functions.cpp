// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxInventory_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GbxInventory.InventoryAspectData.K2_OnBeginPlay
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class AActor*                  InventoryActor                 (Parm, ZeroConstructor, IsPlainOldData)
// class UInventoryBalanceStateComponent* InventoryBalanceState          (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UInventoryAspectData::K2_OnBeginPlay(class AActor* InventoryActor, class UInventoryBalanceStateComponent* InventoryBalanceState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryAspectData.K2_OnBeginPlay");

	UInventoryAspectData_K2_OnBeginPlay_Params params;
	params.InventoryActor = InventoryActor;
	params.InventoryBalanceState = InventoryBalanceState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxInventory.InventoryAspectData.K2_OnApplyAspect
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class AActor*                  InventoryActor                 (Parm, ZeroConstructor, IsPlainOldData)
// class UInventoryBalanceStateComponent* InventoryBalanceState          (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UInventoryAspectData::K2_OnApplyAspect(class AActor* InventoryActor, class UInventoryBalanceStateComponent* InventoryBalanceState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryAspectData.K2_OnApplyAspect");

	UInventoryAspectData_K2_OnApplyAspect_Params params;
	params.InventoryActor = InventoryActor;
	params.InventoryBalanceState = InventoryBalanceState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxInventory.InventoryAspectData.K2_GetFriendlyDescription
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UInventoryAspectData::K2_GetFriendlyDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryAspectData.K2_GetFriendlyDescription");

	UInventoryAspectData_K2_GetFriendlyDescription_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryAspectData.K2_CloneAppearance
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class AActor*                  CloneActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  InventoryActor                 (Parm, ZeroConstructor, IsPlainOldData)
// class UInventoryBalanceStateComponent* InventoryBalanceState          (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UInventoryAspectData::K2_CloneAppearance(class AActor* CloneActor, class AActor* InventoryActor, class UInventoryBalanceStateComponent* InventoryBalanceState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryAspectData.K2_CloneAppearance");

	UInventoryAspectData_K2_CloneAppearance_Params params;
	params.CloneActor = CloneActor;
	params.InventoryActor = InventoryActor;
	params.InventoryBalanceState = InventoryBalanceState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxInventory.InventoryData.EnumeratePickupFlyToTargets
// (Final, Native, Public, HasOutParms, Const)
// Parameters:
// TArray<struct FName>           Targets                        (Parm, OutParm, ZeroConstructor)

void UInventoryData::EnumeratePickupFlyToTargets(TArray<struct FName>* Targets)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryData.EnumeratePickupFlyToTargets");

	UInventoryData_EnumeratePickupFlyToTargets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Targets != nullptr)
		*Targets = params.Targets;
}


// Function GbxInventory.InventoryListComponent.SizeInInventory
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AInventoryItemPickup*    PickupToTest                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UInventoryListComponent::SizeInInventory(class AInventoryItemPickup* PickupToTest)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.SizeInInventory");

	UInventoryListComponent_SizeInInventory_Params params;
	params.PickupToTest = PickupToTest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryListComponent.ServerTransferItem
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FInventoryListEntryHandle InventoryItemHandle            (ConstParm, Parm, ReferenceParm)
// class AActor*                  DestinationActor               (Parm, ZeroConstructor, IsPlainOldData)
// int                            Quantity                       (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryListComponent::ServerTransferItem(const struct FInventoryListEntryHandle& InventoryItemHandle, class AActor* DestinationActor, int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.ServerTransferItem");

	UInventoryListComponent_ServerTransferItem_Params params;
	params.InventoryItemHandle = InventoryItemHandle;
	params.DestinationActor = DestinationActor;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxInventory.InventoryListComponent.ServerSetItemUIFlags
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// struct FInventoryListEntryHandle Handle                         (ConstParm, Parm, ReferenceParm)
// unsigned char                  Flags                          (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  FlagsMask                      (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryListComponent::ServerSetItemUIFlags(const struct FInventoryListEntryHandle& Handle, unsigned char Flags, unsigned char FlagsMask)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.ServerSetItemUIFlags");

	UInventoryListComponent_ServerSetItemUIFlags_Params params;
	params.Handle = Handle;
	params.Flags = Flags;
	params.FlagsMask = FlagsMask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxInventory.InventoryListComponent.ServerSetItemsUIFlags
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class UInventoryCategoryData*  Category                       (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Flags                          (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  FlagsMask                      (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryListComponent::ServerSetItemsUIFlags(class UInventoryCategoryData* Category, unsigned char Flags, unsigned char FlagsMask)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.ServerSetItemsUIFlags");

	UInventoryListComponent_ServerSetItemsUIFlags_Params params;
	params.Category = Category;
	params.Flags = Flags;
	params.FlagsMask = FlagsMask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxInventory.InventoryListComponent.ServerRemoveItem
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FInventoryListEntryHandle InventoryItemHandle            (ConstParm, Parm, ReferenceParm)

void UInventoryListComponent::ServerRemoveItem(const struct FInventoryListEntryHandle& InventoryItemHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.ServerRemoveItem");

	UInventoryListComponent_ServerRemoveItem_Params params;
	params.InventoryItemHandle = InventoryItemHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxInventory.InventoryListComponent.ServerRemoveCustomizationPartFromInventoryActor
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FInventoryListEntryHandle InventoryItemHandle            (ConstParm, Parm, ReferenceParm)
// class UInventoryCustomizationPartData* Part                           (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryListComponent::ServerRemoveCustomizationPartFromInventoryActor(const struct FInventoryListEntryHandle& InventoryItemHandle, class UInventoryCustomizationPartData* Part)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.ServerRemoveCustomizationPartFromInventoryActor");

	UInventoryListComponent_ServerRemoveCustomizationPartFromInventoryActor_Params params;
	params.InventoryItemHandle = InventoryItemHandle;
	params.Part = Part;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxInventory.InventoryListComponent.ServerDropItem
// (Net, NetReliable, Native, Event, Public, NetServer, HasDefaults, NetValidate)
// Parameters:
// struct FInventoryListEntryHandle InventoryItemHandle            (ConstParm, Parm, ReferenceParm)
// struct FVector                 InitialLocation                (ConstParm, Parm, ReferenceParm, IsPlainOldData)
// struct FRotator                InitialRotation                (ConstParm, Parm, ReferenceParm, IsPlainOldData)

void UInventoryListComponent::ServerDropItem(const struct FInventoryListEntryHandle& InventoryItemHandle, const struct FVector& InitialLocation, const struct FRotator& InitialRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.ServerDropItem");

	UInventoryListComponent_ServerDropItem_Params params;
	params.InventoryItemHandle = InventoryItemHandle;
	params.InitialLocation = InitialLocation;
	params.InitialRotation = InitialRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxInventory.InventoryListComponent.ServerConsumeItem
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FInventoryListEntryHandle InventoryItemHandle            (ConstParm, Parm, ReferenceParm)
// int                            Quantity                       (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryListComponent::ServerConsumeItem(const struct FInventoryListEntryHandle& InventoryItemHandle, int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.ServerConsumeItem");

	UInventoryListComponent_ServerConsumeItem_Params params;
	params.InventoryItemHandle = InventoryItemHandle;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxInventory.InventoryListComponent.ServerAddCustomizationPartToInventoryActor
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// struct FInventoryListEntryHandle InventoryItemHandle            (ConstParm, Parm, ReferenceParm)
// class UInventoryCustomizationPartData* Part                           (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryListComponent::ServerAddCustomizationPartToInventoryActor(const struct FInventoryListEntryHandle& InventoryItemHandle, class UInventoryCustomizationPartData* Part)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.ServerAddCustomizationPartToInventoryActor");

	UInventoryListComponent_ServerAddCustomizationPartToInventoryActor_Params params;
	params.InventoryItemHandle = InventoryItemHandle;
	params.Part = Part;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxInventory.InventoryListComponent.IsInventoryFull
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryListComponent::IsInventoryFull()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.IsInventoryFull");

	UInventoryListComponent_IsInventoryFull_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryListComponent.HasActorInList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  ItemActor                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryListComponent::HasActorInList(class AActor* ItemActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.HasActorInList");

	UInventoryListComponent_HasActorInList_Params params;
	params.ItemActor = ItemActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryListComponent.GetStoredInventoryActor
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FInventoryListEntryHandle InventoryItemHandle            (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UInventoryListComponent::GetStoredInventoryActor(const struct FInventoryListEntryHandle& InventoryItemHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.GetStoredInventoryActor");

	UInventoryListComponent_GetStoredInventoryActor_Params params;
	params.InventoryItemHandle = InventoryItemHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryListComponent.GetSelectedItemQuantity
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UInventoryCategoryData*  ChildTypeToGet                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Quantity                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            MaxQuantity                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UInventoryListComponent::GetSelectedItemQuantity(class UInventoryCategoryData* ChildTypeToGet, int* Quantity, int* MaxQuantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.GetSelectedItemQuantity");

	UInventoryListComponent_GetSelectedItemQuantity_Params params;
	params.ChildTypeToGet = ChildTypeToGet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Quantity != nullptr)
		*Quantity = params.Quantity;
	if (MaxQuantity != nullptr)
		*MaxQuantity = params.MaxQuantity;
}


// Function GbxInventory.InventoryListComponent.GetMaxInventoryItems
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UInventoryListComponent::GetMaxInventoryItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.GetMaxInventoryItems");

	UInventoryListComponent_GetMaxInventoryItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryListComponent.GetItem
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FInventoryListEntryHandle InventoryItemHandle            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FInventoryListEntry     ListEntry                      (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryListComponent::GetItem(const struct FInventoryListEntryHandle& InventoryItemHandle, struct FInventoryListEntry* ListEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.GetItem");

	UInventoryListComponent_GetItem_Params params;
	params.InventoryItemHandle = InventoryItemHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ListEntry != nullptr)
		*ListEntry = params.ListEntry;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryListComponent.GetInventoryListEntryDisplayName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FInventoryListEntry     ListEntry                      (Parm, OutParm)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UInventoryListComponent::STATIC_GetInventoryListEntryDisplayName(struct FInventoryListEntry* ListEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.GetInventoryListEntryDisplayName");

	UInventoryListComponent_GetInventoryListEntryDisplayName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ListEntry != nullptr)
		*ListEntry = params.ListEntry;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryListComponent.GetInventoryListEntryDisplayDescription
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FInventoryListEntry     ListEntry                      (Parm, OutParm)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UInventoryListComponent::STATIC_GetInventoryListEntryDisplayDescription(struct FInventoryListEntry* ListEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.GetInventoryListEntryDisplayDescription");

	UInventoryListComponent_GetInventoryListEntryDisplayDescription_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ListEntry != nullptr)
		*ListEntry = params.ListEntry;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryListComponent.GetInventoryItemCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UInventoryListComponent::GetInventoryItemCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.GetInventoryItemCount");

	UInventoryListComponent_GetInventoryItemCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryListComponent.GetInventoryHandlesOfType
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UInventoryCategoryData*  ChildTypeToGet                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FInventoryListEntryHandle> ItemHandleList                 (Parm, OutParm, ZeroConstructor)

void UInventoryListComponent::GetInventoryHandlesOfType(class UInventoryCategoryData* ChildTypeToGet, TArray<struct FInventoryListEntryHandle>* ItemHandleList)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.GetInventoryHandlesOfType");

	UInventoryListComponent_GetInventoryHandlesOfType_Params params;
	params.ChildTypeToGet = ChildTypeToGet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemHandleList != nullptr)
		*ItemHandleList = params.ItemHandleList;
}


// Function GbxInventory.InventoryListComponent.GetInventoryDisplayName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  InventoryActor                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UInventoryListComponent::STATIC_GetInventoryDisplayName(class AActor* InventoryActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.GetInventoryDisplayName");

	UInventoryListComponent_GetInventoryDisplayName_Params params;
	params.InventoryActor = InventoryActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryListComponent.GetInventoryDisplayDescription
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  InventoryActor                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UInventoryListComponent::STATIC_GetInventoryDisplayDescription(class AActor* InventoryActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.GetInventoryDisplayDescription");

	UInventoryListComponent_GetInventoryDisplayDescription_Params params;
	params.InventoryActor = InventoryActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryListComponent.GetCategoryOnlyInventoryHandles
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UInventoryCategoryData*  ChildTypeToGet                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FInventoryListEntryHandle> ItemHandleList                 (Parm, OutParm, ZeroConstructor)

void UInventoryListComponent::GetCategoryOnlyInventoryHandles(class UInventoryCategoryData* ChildTypeToGet, TArray<struct FInventoryListEntryHandle>* ItemHandleList)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.GetCategoryOnlyInventoryHandles");

	UInventoryListComponent_GetCategoryOnlyInventoryHandles_Params params;
	params.ChildTypeToGet = ChildTypeToGet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemHandleList != nullptr)
		*ItemHandleList = params.ItemHandleList;
}


// Function GbxInventory.InventoryListComponent.GetCategoryItemQuantity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UInventoryCategoryData*  ItemCategory                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UInventoryListComponent::GetCategoryItemQuantity(class UInventoryCategoryData* ItemCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.GetCategoryItemQuantity");

	UInventoryListComponent_GetCategoryItemQuantity_Params params;
	params.ItemCategory = ItemCategory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryListComponent.GetAndConsumeSelected
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UInventoryCategoryData*  TypeToConsume                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Quantity                       (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UInventoryListComponent::GetAndConsumeSelected(class UInventoryCategoryData* TypeToConsume, int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.GetAndConsumeSelected");

	UInventoryListComponent_GetAndConsumeSelected_Params params;
	params.TypeToConsume = TypeToConsume;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryListComponent.GetAndConsumeItem
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FInventoryListEntryHandle InventoryItemHandle            (ConstParm, Parm, OutParm, ReferenceParm)
// int                            Quantity                       (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UInventoryListComponent::GetAndConsumeItem(const struct FInventoryListEntryHandle& InventoryItemHandle, int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.GetAndConsumeItem");

	UInventoryListComponent_GetAndConsumeItem_Params params;
	params.InventoryItemHandle = InventoryItemHandle;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryListComponent.ClearInventory
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           DestroyInventory               (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryListComponent::ClearInventory(bool DestroyInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.ClearInventory");

	UInventoryListComponent_ClearInventory_Params params;
	params.DestroyInventory = DestroyInventory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxInventory.InventoryListComponent.CanUseSelected
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UInventoryCategoryData*  ChildTypeToUse                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Quantity                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryListComponent::CanUseSelected(class UInventoryCategoryData* ChildTypeToUse, int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.CanUseSelected");

	UInventoryListComponent_CanUseSelected_Params params;
	params.ChildTypeToUse = ChildTypeToUse;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryListComponent.CanSwapItemForPickup
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  Item                           (Parm, ZeroConstructor, IsPlainOldData)
// class AInventoryItemPickup*    Pickup                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryListComponent::CanSwapItemForPickup(class AActor* Item, class AInventoryItemPickup* Pickup)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.CanSwapItemForPickup");

	UInventoryListComponent_CanSwapItemForPickup_Params params;
	params.Item = Item;
	params.Pickup = Pickup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryListComponent.AddOrUpdateCategoryOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UInventoryCategoryData*  ItemCategory                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Quantity                       (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryListComponent::AddOrUpdateCategoryOnly(class UInventoryCategoryData* ItemCategory, int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.AddOrUpdateCategoryOnly");

	UInventoryListComponent_AddOrUpdateCategoryOnly_Params params;
	params.ItemCategory = ItemCategory;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxInventory.InventoryListComponent.AddItemFromPickup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AInventoryItemPickup*    PickupActor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FInventoryListEntryHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FInventoryListEntryHandle UInventoryListComponent::AddItemFromPickup(class AInventoryItemPickup* PickupActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.AddItemFromPickup");

	UInventoryListComponent_AddItemFromPickup_Params params;
	params.PickupActor = PickupActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryListComponent.AddExternalItemEx
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UInventoryCategoryData*  ItemCategory                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ActorToAdd                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Quantity                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            Flags                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bConditionalDestroyActor       (Parm, ZeroConstructor, IsPlainOldData)
// int                            DesiredSlot                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBypassInventoryFull           (Parm, ZeroConstructor, IsPlainOldData)
// struct FInventoryListEntryHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FInventoryListEntryHandle UInventoryListComponent::AddExternalItemEx(class UInventoryCategoryData* ItemCategory, class AActor* ActorToAdd, int Quantity, int Flags, bool bConditionalDestroyActor, int DesiredSlot, bool bBypassInventoryFull)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.AddExternalItemEx");

	UInventoryListComponent_AddExternalItemEx_Params params;
	params.ItemCategory = ItemCategory;
	params.ActorToAdd = ActorToAdd;
	params.Quantity = Quantity;
	params.Flags = Flags;
	params.bConditionalDestroyActor = bConditionalDestroyActor;
	params.DesiredSlot = DesiredSlot;
	params.bBypassInventoryFull = bBypassInventoryFull;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryListComponent.AddExternalItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UInventoryCategoryData*  ItemCategory                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ActorToAdd                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            Quantity                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           AddedByPickup                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoEquip                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bConditionalDestroyActor       (Parm, ZeroConstructor, IsPlainOldData)
// int                            DesiredSlot                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bBypassInventoryFull           (Parm, ZeroConstructor, IsPlainOldData)
// struct FInventoryListEntryHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FInventoryListEntryHandle UInventoryListComponent::AddExternalItem(class UInventoryCategoryData* ItemCategory, class AActor* ActorToAdd, int Quantity, bool AddedByPickup, bool bAutoEquip, bool bConditionalDestroyActor, int DesiredSlot, bool bBypassInventoryFull)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.AddExternalItem");

	UInventoryListComponent_AddExternalItem_Params params;
	params.ItemCategory = ItemCategory;
	params.ActorToAdd = ActorToAdd;
	params.Quantity = Quantity;
	params.AddedByPickup = AddedByPickup;
	params.bAutoEquip = bAutoEquip;
	params.bConditionalDestroyActor = bConditionalDestroyActor;
	params.DesiredSlot = DesiredSlot;
	params.bBypassInventoryFull = bBypassInventoryFull;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryListComponent.AddCategory
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UInventoryCategoryData*  ItemCategory                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           TrackQuantity                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryListComponent::AddCategory(class UInventoryCategoryData* ItemCategory, bool TrackQuantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryListComponent.AddCategory");

	UInventoryListComponent_AddCategory_Params params;
	params.ItemCategory = ItemCategory;
	params.TrackQuantity = TrackQuantity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryBalanceStateComponent.PostBeginPlay
// (Native, Protected)

void UInventoryBalanceStateComponent::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.PostBeginPlay");

	UInventoryBalanceStateComponent_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxInventory.InventoryBalanceStateComponent.OnRep_ReplicatedUIStats
// (Final, Native, Protected)

void UInventoryBalanceStateComponent::OnRep_ReplicatedUIStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.OnRep_ReplicatedUIStats");

	UInventoryBalanceStateComponent_OnRep_ReplicatedUIStats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxInventory.InventoryBalanceStateComponent.NotifyUnequipped
// (Native, Public, BlueprintCallable)
// Parameters:
// class APawn*                   OldInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryBalanceStateComponent::NotifyUnequipped(class APawn* OldInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.NotifyUnequipped");

	UInventoryBalanceStateComponent_NotifyUnequipped_Params params;
	params.OldInstigator = OldInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxInventory.InventoryBalanceStateComponent.NotifyEquipped
// (Native, Public, BlueprintCallable)
// Parameters:
// class APawn*                   NewInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryBalanceStateComponent::NotifyEquipped(class APawn* NewInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.NotifyEquipped");

	UInventoryBalanceStateComponent_NotifyEquipped_Params params;
	params.NewInstigator = NewInstigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxInventory.InventoryBalanceStateComponent.NotifyAttached
// (Native, Public, BlueprintCallable)
// Parameters:
// class APawn*                   Instigator                     (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryBalanceStateComponent::NotifyAttached(class APawn* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.NotifyAttached");

	UInventoryBalanceStateComponent_NotifyAttached_Params params;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxInventory.InventoryBalanceStateComponent.K2_GetDamageType
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UInventoryBalanceStateComponent::K2_GetDamageType()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.K2_GetDamageType");

	UInventoryBalanceStateComponent_K2_GetDamageType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryBalanceStateComponent.IsManufactureredBy
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UManufacturerData*       Manufacturer                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryBalanceStateComponent::IsManufactureredBy(class UManufacturerData* Manufacturer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.IsManufactureredBy");

	UInventoryBalanceStateComponent_IsManufactureredBy_Params params;
	params.Manufacturer = Manufacturer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryBalanceStateComponent.GetReRollCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char UInventoryBalanceStateComponent::GetReRollCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.GetReRollCount");

	UInventoryBalanceStateComponent_GetReRollCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryBalanceStateComponent.GetPartList
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UInventoryPartData*> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<class UInventoryPartData*> UInventoryBalanceStateComponent::GetPartList()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.GetPartList");

	UInventoryBalanceStateComponent_GetPartList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryBalanceStateComponent.GetMonetaryValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UInventoryBalanceStateComponent::GetMonetaryValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.GetMonetaryValue");

	UInventoryBalanceStateComponent_GetMonetaryValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryBalanceStateComponent.GetManufacturer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UManufacturerData*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UManufacturerData* UInventoryBalanceStateComponent::GetManufacturer()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.GetManufacturer");

	UInventoryBalanceStateComponent_GetManufacturer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryScoreValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UInventoryBalanceStateComponent::GetInventoryScoreValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.GetInventoryScoreValue");

	UInventoryBalanceStateComponent_GetInventoryScoreValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityLootBeamOverride
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UParticleSystem*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UParticleSystem* UInventoryBalanceStateComponent::GetInventoryRarityLootBeamOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityLootBeamOverride");

	UInventoryBalanceStateComponent_GetInventoryRarityLootBeamOverride_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityLootBeamHeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UInventoryBalanceStateComponent::GetInventoryRarityLootBeamHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityLootBeamHeight");

	UInventoryBalanceStateComponent_GetInventoryRarityLootBeamHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityLootAudioStinger
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWwiseEvent*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWwiseEvent* UInventoryBalanceStateComponent::GetInventoryRarityLootAudioStinger()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityLootAudioStinger");

	UInventoryBalanceStateComponent_GetInventoryRarityLootAudioStinger_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityLifeSpanType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EDropLifeSpanType              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EDropLifeSpanType UInventoryBalanceStateComponent::GetInventoryRarityLifeSpanType()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityLifeSpanType");

	UInventoryBalanceStateComponent_GetInventoryRarityLifeSpanType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityLifeSpan
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UInventoryBalanceStateComponent::GetInventoryRarityLifeSpan()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityLifeSpan");

	UInventoryBalanceStateComponent_GetInventoryRarityLifeSpan_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityFrameName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString UInventoryBalanceStateComponent::GetInventoryRarityFrameName()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityFrameName");

	UInventoryBalanceStateComponent_GetInventoryRarityFrameName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityDisplayName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FText UInventoryBalanceStateComponent::GetInventoryRarityDisplayName()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityDisplayName");

	UInventoryBalanceStateComponent_GetInventoryRarityDisplayName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInventoryRarityData*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UInventoryRarityData* UInventoryBalanceStateComponent::GetInventoryRarityData()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityData");

	UInventoryBalanceStateComponent_GetInventoryRarityData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityColorOutline
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UInventoryBalanceStateComponent::GetInventoryRarityColorOutline()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityColorOutline");

	UInventoryBalanceStateComponent_GetInventoryRarityColorOutline_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityColorFX
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UInventoryBalanceStateComponent::GetInventoryRarityColorFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.GetInventoryRarityColorFX");

	UInventoryBalanceStateComponent_GetInventoryRarityColorFX_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryDisplayRarityOutline
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryBalanceStateComponent::GetInventoryDisplayRarityOutline()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.GetInventoryDisplayRarityOutline");

	UInventoryBalanceStateComponent_GetInventoryDisplayRarityOutline_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInventoryData*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UInventoryData* UInventoryBalanceStateComponent::GetInventoryData()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.GetInventoryData");

	UInventoryBalanceStateComponent_GetInventoryData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryBalanceStateComponent.GetInventoryBalanceData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInventoryBalanceData*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UInventoryBalanceData* UInventoryBalanceStateComponent::GetInventoryBalanceData()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.GetInventoryBalanceData");

	UInventoryBalanceStateComponent_GetInventoryBalanceData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryBalanceStateComponent.GetGenericPartList
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UInventoryGenericPartData*> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<class UInventoryGenericPartData*> UInventoryBalanceStateComponent::GetGenericPartList()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.GetGenericPartList");

	UInventoryBalanceStateComponent_GetGenericPartList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryBalanceStateComponent.GetDisplayName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UInventoryBalanceStateComponent::GetDisplayName()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.GetDisplayName");

	UInventoryBalanceStateComponent_GetDisplayName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryBalanceStateComponent.GetDamageType
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UInventoryBalanceStateComponent::GetDamageType()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.GetDamageType");

	UInventoryBalanceStateComponent_GetDamageType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryBalanceStateComponent.GetCustomizationPartList
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UInventoryCustomizationPartData*> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<class UInventoryCustomizationPartData*> UInventoryBalanceStateComponent::GetCustomizationPartList()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.GetCustomizationPartList");

	UInventoryBalanceStateComponent_GetCustomizationPartList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryBalanceStateComponent.CloneAppearance
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class AActor*                  DestActor                      (Parm, ZeroConstructor, IsPlainOldData)
// class USceneComponent*         ParentComp                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           bAbsoluteScale                 (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryBalanceStateComponent::CloneAppearance(class AActor* DestActor, class USceneComponent* ParentComp, bool bAbsoluteScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBalanceStateComponent.CloneAppearance");

	UInventoryBalanceStateComponent_CloneAppearance_Params params;
	params.DestActor = DestActor;
	params.ParentComp = ParentComp;
	params.bAbsoluteScale = bAbsoluteScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxInventory.InventoryItemPickup.WaitForBalanceState
// (Final, Native, Private)

void AInventoryItemPickup::WaitForBalanceState()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryItemPickup.WaitForBalanceState");

	AInventoryItemPickup_WaitForBalanceState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxInventory.InventoryItemPickup.SetCanOnlyBePickedUpByOwner
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bNewCanOnlyBePickedUpByOwnerController (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             OwnerController                (Parm, ZeroConstructor, IsPlainOldData)

void AInventoryItemPickup::SetCanOnlyBePickedUpByOwner(bool bNewCanOnlyBePickedUpByOwnerController, class AController* OwnerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryItemPickup.SetCanOnlyBePickedUpByOwner");

	AInventoryItemPickup_SetCanOnlyBePickedUpByOwner_Params params;
	params.bNewCanOnlyBePickedUpByOwnerController = bNewCanOnlyBePickedUpByOwnerController;
	params.OwnerController = OwnerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxInventory.InventoryItemPickup.ResetBumpOnPickupFail
// (Final, Native, Private)

void AInventoryItemPickup::ResetBumpOnPickupFail()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryItemPickup.ResetBumpOnPickupFail");

	AInventoryItemPickup_ResetBumpOnPickupFail_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxInventory.InventoryItemPickup.OnUsedBy
// (Native, Public, HasOutParms)
// Parameters:
// struct FUseEvent               UseEvent                       (ConstParm, Parm, OutParm, ReferenceParm)

void AInventoryItemPickup::OnUsedBy(const struct FUseEvent& UseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryItemPickup.OnUsedBy");

	AInventoryItemPickup_OnUsedBy_Params params;
	params.UseEvent = UseEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxInventory.InventoryItemPickup.OnRespawnEvent
// (Event, Public, BlueprintEvent)

void AInventoryItemPickup::OnRespawnEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryItemPickup.OnRespawnEvent");

	AInventoryItemPickup_OnRespawnEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxInventory.InventoryItemPickup.OnRep_RepLootSpawnAction
// (Final, Native, Private)

void AInventoryItemPickup::OnRep_RepLootSpawnAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryItemPickup.OnRep_RepLootSpawnAction");

	AInventoryItemPickup_OnRep_RepLootSpawnAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxInventory.InventoryItemPickup.OnRep_PickupActorClientSpawnData
// (Native, Public)

void AInventoryItemPickup::OnRep_PickupActorClientSpawnData()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryItemPickup.OnRep_PickupActorClientSpawnData");

	AInventoryItemPickup_OnRep_PickupActorClientSpawnData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxInventory.InventoryItemPickup.OnRep_PickupActor
// (Final, Native, Public)

void AInventoryItemPickup::OnRep_PickupActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryItemPickup.OnRep_PickupActor");

	AInventoryItemPickup_OnRep_PickupActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxInventory.InventoryItemPickup.OnRep_PickedUpBy
// (Native, Public)

void AInventoryItemPickup::OnRep_PickedUpBy()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryItemPickup.OnRep_PickedUpBy");

	AInventoryItemPickup_OnRep_PickedUpBy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxInventory.InventoryItemPickup.OnRep_IsActive
// (Native, Public)

void AInventoryItemPickup::OnRep_IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryItemPickup.OnRep_IsActive");

	AInventoryItemPickup_OnRep_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxInventory.InventoryItemPickup.OnRep_BumpAngularDir
// (Native, Protected)

void AInventoryItemPickup::OnRep_BumpAngularDir()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryItemPickup.OnRep_BumpAngularDir");

	AInventoryItemPickup_OnRep_BumpAngularDir_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxInventory.InventoryItemPickup.OnPickedUpEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  WasPickedUpBy                  (Parm, ZeroConstructor, IsPlainOldData)

void AInventoryItemPickup::OnPickedUpEvent(class AActor* WasPickedUpBy)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryItemPickup.OnPickedUpEvent");

	AInventoryItemPickup_OnPickedUpEvent_Params params;
	params.WasPickedUpBy = WasPickedUpBy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxInventory.InventoryItemPickup.OnLookedAtByPlayer
// (Native, Public, HasDefaults)
// Parameters:
// class APlayerController*       InstigatingPlayer              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCanInteractWith               (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewUsableComponentImpactPoint  (Parm, IsPlainOldData)
// float                          NewUsableDistanceAway          (Parm, ZeroConstructor, IsPlainOldData)

void AInventoryItemPickup::OnLookedAtByPlayer(class APlayerController* InstigatingPlayer, bool bCanInteractWith, const struct FVector& NewUsableComponentImpactPoint, float NewUsableDistanceAway)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryItemPickup.OnLookedAtByPlayer");

	AInventoryItemPickup_OnLookedAtByPlayer_Params params;
	params.InstigatingPlayer = InstigatingPlayer;
	params.bCanInteractWith = bCanInteractWith;
	params.NewUsableComponentImpactPoint = NewUsableComponentImpactPoint;
	params.NewUsableDistanceAway = NewUsableDistanceAway;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxInventory.InventoryItemPickup.IsPickupInitialized
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AInventoryItemPickup::IsPickupInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryItemPickup.IsPickupInitialized");

	AInventoryItemPickup_IsPickupInitialized_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryItemPickup.GiveInventoryToUser
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Other                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAutoEquip                     (Parm, ZeroConstructor, IsPlainOldData)

void AInventoryItemPickup::GiveInventoryToUser(class AActor* Other, bool bAutoEquip)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryItemPickup.GiveInventoryToUser");

	AInventoryItemPickup_GiveInventoryToUser_Params params;
	params.Other = Other;
	params.bAutoEquip = bAutoEquip;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxInventory.InventoryItemPickup.GetMeshComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMeshComponent*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMeshComponent* AInventoryItemPickup::GetMeshComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryItemPickup.GetMeshComponent");

	AInventoryItemPickup_GetMeshComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryItemPickup.GetInventoryRarityLootBeamOverride
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UParticleSystem*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UParticleSystem* AInventoryItemPickup::GetInventoryRarityLootBeamOverride()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryItemPickup.GetInventoryRarityLootBeamOverride");

	AInventoryItemPickup_GetInventoryRarityLootBeamOverride_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryItemPickup.GetInventoryRarityLootAudioStinger
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWwiseEvent*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWwiseEvent* AInventoryItemPickup::GetInventoryRarityLootAudioStinger()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryItemPickup.GetInventoryRarityLootAudioStinger");

	AInventoryItemPickup_GetInventoryRarityLootAudioStinger_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryItemPickup.GetInventoryRarityLifeSpanType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EDropLifeSpanType              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EDropLifeSpanType AInventoryItemPickup::GetInventoryRarityLifeSpanType()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryItemPickup.GetInventoryRarityLifeSpanType");

	AInventoryItemPickup_GetInventoryRarityLifeSpanType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryItemPickup.GetInventoryRarityColorOutline
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor AInventoryItemPickup::GetInventoryRarityColorOutline()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryItemPickup.GetInventoryRarityColorOutline");

	AInventoryItemPickup_GetInventoryRarityColorOutline_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryItemPickup.GetInventoryRarityColorFX
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor AInventoryItemPickup::GetInventoryRarityColorFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryItemPickup.GetInventoryRarityColorFX");

	AInventoryItemPickup_GetInventoryRarityColorFX_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryItemPickup.GetInventoryDisplayRarityOutline
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AInventoryItemPickup::GetInventoryDisplayRarityOutline()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryItemPickup.GetInventoryDisplayRarityOutline");

	AInventoryItemPickup_GetInventoryDisplayRarityOutline_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryItemPickup.GetInventoryBalanceStateComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInventoryBalanceStateComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UInventoryBalanceStateComponent* AInventoryItemPickup::GetInventoryBalanceStateComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryItemPickup.GetInventoryBalanceStateComponent");

	AInventoryItemPickup_GetInventoryBalanceStateComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryItemPickup.DeactivatePickup
// (Final, Native, Public, BlueprintCallable)

void AInventoryItemPickup::DeactivatePickup()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryItemPickup.DeactivatePickup");

	AInventoryItemPickup_DeactivatePickup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxInventory.InventoryItemPickup.CanBePickedUp
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Other                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           UsedByOther                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseHeld                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForMassPickup                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AInventoryItemPickup::CanBePickedUp(class AActor* Other, bool UsedByOther, bool bUseHeld, bool bForMassPickup)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryItemPickup.CanBePickedUp");

	AInventoryItemPickup_CanBePickedUp_Params params;
	params.Other = Other;
	params.UsedByOther = UsedByOther;
	params.bUseHeld = bUseHeld;
	params.bForMassPickup = bForMassPickup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryItemPickup.ActivatePickup
// (Final, Native, Public, BlueprintCallable)

void AInventoryItemPickup::ActivatePickup()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryItemPickup.ActivatePickup");

	AInventoryItemPickup_ActivatePickup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxInventory.InventoryItemPickup.ActivateAfterSpawnDelay
// (Native, Public, BlueprintCallable)

void AInventoryItemPickup::ActivateAfterSpawnDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryItemPickup.ActivateAfterSpawnDelay");

	AInventoryItemPickup_ActivateAfterSpawnDelay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxInventory.DroppedInventoryItemPickup.OnRep_ShrinkLifeSpan
// (Final, Native, Public)

void ADroppedInventoryItemPickup::OnRep_ShrinkLifeSpan()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.DroppedInventoryItemPickup.OnRep_ShrinkLifeSpan");

	ADroppedInventoryItemPickup_OnRep_ShrinkLifeSpan_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxInventory.DroppedInventoryItemPickup.OnRep_InitialMassScale
// (Final, Native, Public)

void ADroppedInventoryItemPickup::OnRep_InitialMassScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.DroppedInventoryItemPickup.OnRep_InitialMassScale");

	ADroppedInventoryItemPickup_OnRep_InitialMassScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxInventory.DroppedInventoryItemPickup.OnRep_DroppedQuantity
// (Final, Native, Public)

void ADroppedInventoryItemPickup::OnRep_DroppedQuantity()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.DroppedInventoryItemPickup.OnRep_DroppedQuantity");

	ADroppedInventoryItemPickup_OnRep_DroppedQuantity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxInventory.DroppedInventoryItemPickup.OnPickupHit
// (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ADroppedInventoryItemPickup::OnPickupHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.DroppedInventoryItemPickup.OnPickupHit");

	ADroppedInventoryItemPickup_OnPickupHit_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxInventory.DroppedInventoryItemPickup.OnPhysicsWake
// (Final, Native, Private)
// Parameters:
// class UPrimitiveComponent*     WakingComponent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void ADroppedInventoryItemPickup::OnPhysicsWake(class UPrimitiveComponent* WakingComponent, const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.DroppedInventoryItemPickup.OnPhysicsWake");

	ADroppedInventoryItemPickup_OnPhysicsWake_Params params;
	params.WakingComponent = WakingComponent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxInventory.DroppedInventoryItemPickup.OnPhysicsSleep
// (Final, Native, Private)
// Parameters:
// class UPrimitiveComponent*     WakingComponent                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData)

void ADroppedInventoryItemPickup::OnPhysicsSleep(class UPrimitiveComponent* WakingComponent, const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.DroppedInventoryItemPickup.OnPhysicsSleep");

	ADroppedInventoryItemPickup_OnPhysicsSleep_Params params;
	params.WakingComponent = WakingComponent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxInventory.InventoryPartData.GetMonetaryValueModifier
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FAttributeInitializationData ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FAttributeInitializationData UInventoryPartData::GetMonetaryValueModifier()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryPartData.GetMonetaryValueModifier");

	UInventoryPartData_GetMonetaryValueModifier_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryRarityData.GetRaritySortValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UInventoryRarityData::GetRaritySortValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryRarityData.GetRaritySortValue");

	UInventoryRarityData_GetRaritySortValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryRarityData.GetRarityOutlineDepthStencilValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UInventoryRarityData::GetRarityOutlineDepthStencilValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryRarityData.GetRarityOutlineDepthStencilValue");

	UInventoryRarityData_GetRarityOutlineDepthStencilValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryRarityData.GetRarityLootBeamOverride
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           bInventoryHasAFoilPart         (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UParticleSystem* UInventoryRarityData::GetRarityLootBeamOverride(bool bInventoryHasAFoilPart)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryRarityData.GetRarityLootBeamOverride");

	UInventoryRarityData_GetRarityLootBeamOverride_Params params;
	params.bInventoryHasAFoilPart = bInventoryHasAFoilPart;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryRarityData.GetRarityLootBeamHeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UInventoryRarityData::GetRarityLootBeamHeight()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryRarityData.GetRarityLootBeamHeight");

	UInventoryRarityData_GetRarityLootBeamHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryRarityData.GetRarityLootAudioStinger
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWwiseEvent*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWwiseEvent* UInventoryRarityData::GetRarityLootAudioStinger()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryRarityData.GetRarityLootAudioStinger");

	UInventoryRarityData_GetRarityLootAudioStinger_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryRarityData.GetRarityLifeSpanType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EDropLifeSpanType              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EDropLifeSpanType UInventoryRarityData::GetRarityLifeSpanType()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryRarityData.GetRarityLifeSpanType");

	UInventoryRarityData_GetRarityLifeSpanType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryRarityData.GetRarityLifeSpan
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UInventoryRarityData::GetRarityLifeSpan()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryRarityData.GetRarityLifeSpan");

	UInventoryRarityData_GetRarityLifeSpan_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryRarityData.GetRarityDisplayName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FText UInventoryRarityData::GetRarityDisplayName()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryRarityData.GetRarityDisplayName");

	UInventoryRarityData_GetRarityDisplayName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryRarityData.GetRarityColorOutline
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UInventoryRarityData::GetRarityColorOutline()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryRarityData.GetRarityColorOutline");

	UInventoryRarityData_GetRarityColorOutline_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryRarityData.GetRarityColorFX
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UInventoryRarityData::GetRarityColorFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryRarityData.GetRarityColorFX");

	UInventoryRarityData_GetRarityColorFX_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryRarityData.GetItemScoreRarityModifier
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FAttributeInitializationData ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FAttributeInitializationData UInventoryRarityData::GetItemScoreRarityModifier()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryRarityData.GetItemScoreRarityModifier");

	UInventoryRarityData_GetItemScoreRarityModifier_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryRarityData.GetDisplayRarityOutline
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInventoryRarityData::GetDisplayRarityOutline()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryRarityData.GetDisplayRarityOutline");

	UInventoryRarityData_GetDisplayRarityOutline_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.LootableComponent.SpawnAndDropLoot
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   SelectedConfigurationName      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULootableComponent::SpawnAndDropLoot(struct FName* SelectedConfigurationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.LootableComponent.SpawnAndDropLoot");

	ULootableComponent_SpawnAndDropLoot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedConfigurationName != nullptr)
		*SelectedConfigurationName = params.SelectedConfigurationName;
}


// Function GbxInventory.LootableComponent.SpawnAndAttachLoot
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   SelectedConfigurationName      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULootableComponent::SpawnAndAttachLoot(struct FName* SelectedConfigurationName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.LootableComponent.SpawnAndAttachLoot");

	ULootableComponent_SpawnAndAttachLoot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedConfigurationName != nullptr)
		*SelectedConfigurationName = params.SelectedConfigurationName;
}


// Function GbxInventory.LootableComponent.SetBalanceContextOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  NewOverrideContext             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bOnlyUseForGameStage           (Parm, ZeroConstructor, IsPlainOldData)

void ULootableComponent::SetBalanceContextOverride(class AActor* NewOverrideContext, bool bOnlyUseForGameStage)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.LootableComponent.SetBalanceContextOverride");

	ULootableComponent_SetBalanceContextOverride_Params params;
	params.NewOverrideContext = NewOverrideContext;
	params.bOnlyUseForGameStage = bOnlyUseForGameStage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxInventory.LootableComponent.InitializeLootConfigurations
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class ULootableBalanceData*    LootableBalanceData            (Parm, ZeroConstructor, IsPlainOldData)

void ULootableComponent::InitializeLootConfigurations(class ULootableBalanceData* LootableBalanceData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.LootableComponent.InitializeLootConfigurations");

	ULootableComponent_InitializeLootConfigurations_Params params;
	params.LootableBalanceData = LootableBalanceData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxInventory.LootableComponent.GetAttachedPickups
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class ADroppedInventoryItemPickup*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class ADroppedInventoryItemPickup*> ULootableComponent::GetAttachedPickups()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.LootableComponent.GetAttachedPickups");

	ULootableComponent_GetAttachedPickups_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.LootableComponent.ActivateAttachedLoot
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)

void ULootableComponent::ActivateAttachedLoot()
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.LootableComponent.ActivateAttachedLoot");

	ULootableComponent_ActivateAttachedLoot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxInventory.InventoryBlueprintLibrary.GetPossibleGenericParts
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UInventoryBalanceStateComponent* InventoryBalanceState          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FGameplayTagContainer   Tags                           (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           bMustHaveAllTags               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bExcludeCurrentlySelectedParts (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UInventoryGenericPartData*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UInventoryGenericPartData*> UInventoryBlueprintLibrary::STATIC_GetPossibleGenericParts(class UInventoryBalanceStateComponent* InventoryBalanceState, const struct FGameplayTagContainer& Tags, bool bMustHaveAllTags, bool bExcludeCurrentlySelectedParts)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBlueprintLibrary.GetPossibleGenericParts");

	UInventoryBlueprintLibrary_GetPossibleGenericParts_Params params;
	params.InventoryBalanceState = InventoryBalanceState;
	params.Tags = Tags;
	params.bMustHaveAllTags = bMustHaveAllTags;
	params.bExcludeCurrentlySelectedParts = bExcludeCurrentlySelectedParts;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryBlueprintLibrary.GetInventoryBalanceState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Inventory                      (Parm, ZeroConstructor, IsPlainOldData)
// class UInventoryBalanceStateComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UInventoryBalanceStateComponent* UInventoryBlueprintLibrary::STATIC_GetInventoryBalanceState(class AActor* Inventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBlueprintLibrary.GetInventoryBalanceState");

	UInventoryBlueprintLibrary_GetInventoryBalanceState_Params params;
	params.Inventory = Inventory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryBlueprintLibrary.CreateInventory
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCreatePickup                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SpawnLocation                  (Parm, IsPlainOldData)
// struct FInventoryBalanceStateInitializationData InitData                       (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UInventoryBlueprintLibrary::STATIC_CreateInventory(class UObject* WorldContextObject, bool bCreatePickup, const struct FVector& SpawnLocation, const struct FInventoryBalanceStateInitializationData& InitData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBlueprintLibrary.CreateInventory");

	UInventoryBlueprintLibrary_CreateInventory_Params params;
	params.WorldContextObject = WorldContextObject;
	params.bCreatePickup = bCreatePickup;
	params.SpawnLocation = SpawnLocation;
	params.InitData = InitData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryBlueprintLibrary.CloneInventory
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  SourceInventory                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UInventoryBlueprintLibrary::STATIC_CloneInventory(class AActor* SourceInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBlueprintLibrary.CloneInventory");

	UInventoryBlueprintLibrary_CloneInventory_Params params;
	params.SourceInventory = SourceInventory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryBlueprintLibrary.BuildInventory
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCreatePickup                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SpawnLocation                  (Parm, IsPlainOldData)
// struct FInventoryBalanceStateInitializationData InitData                       (Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UInventoryBlueprintLibrary::STATIC_BuildInventory(class UObject* WorldContextObject, bool bCreatePickup, const struct FVector& SpawnLocation, const struct FInventoryBalanceStateInitializationData& InitData)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryBlueprintLibrary.BuildInventory");

	UInventoryBlueprintLibrary_BuildInventory_Params params;
	params.WorldContextObject = WorldContextObject;
	params.bCreatePickup = bCreatePickup;
	params.SpawnLocation = SpawnLocation;
	params.InitData = InitData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GbxInventory.InventoryGenericPartExpansionData.EnumeratePartListForPartType
// (Final, Native, Private, HasOutParms, Const)
// Parameters:
// unsigned char                  PartType                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UActorPartData*>  OutPartList                    (Parm, OutParm, ZeroConstructor)

void UInventoryGenericPartExpansionData::EnumeratePartListForPartType(unsigned char PartType, TArray<class UActorPartData*>* OutPartList)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryGenericPartExpansionData.EnumeratePartListForPartType");

	UInventoryGenericPartExpansionData_EnumeratePartListForPartType_Params params;
	params.PartType = PartType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPartList != nullptr)
		*OutPartList = params.OutPartList;
}


// Function GbxInventory.InventoryOwnerInterface.AttachedItemPickedUp
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class AInventoryItemPickup*    InventoryItemPickedUp          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  PickedUpBy                     (Parm, ZeroConstructor, IsPlainOldData)

void UInventoryOwnerInterface::AttachedItemPickedUp(class AInventoryItemPickup* InventoryItemPickedUp, class AActor* PickedUpBy)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.InventoryOwnerInterface.AttachedItemPickedUp");

	UInventoryOwnerInterface_AttachedItemPickedUp_Params params;
	params.InventoryItemPickedUp = InventoryItemPickedUp;
	params.PickedUpBy = PickedUpBy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GbxInventory.ItemPoolPartSelectionOverrideData.EnumerateInventoryParts
// (Final, Native, Private, HasOutParms)
// Parameters:
// unsigned char                  PartType                       (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UActorPartData*>  OutPartList                    (Parm, OutParm, ZeroConstructor)

void UItemPoolPartSelectionOverrideData::EnumerateInventoryParts(unsigned char PartType, TArray<class UActorPartData*>* OutPartList)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.ItemPoolPartSelectionOverrideData.EnumerateInventoryParts");

	UItemPoolPartSelectionOverrideData_EnumerateInventoryParts_Params params;
	params.PartType = PartType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPartList != nullptr)
		*OutPartList = params.OutPartList;
}


// Function GbxInventory.LootFunctionLibrary.SpawnItemsRaw
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UItemPoolListData*> ItemPoolLists                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FItemPoolInfo>   ExtraItemPools                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            GameStage                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 Location                       (Parm, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, IsPlainOldData)
// float                          InitialVelocity                (Parm, ZeroConstructor, IsPlainOldData)

void ULootFunctionLibrary::STATIC_SpawnItemsRaw(class UObject* WorldContextObject, TArray<class UItemPoolListData*> ItemPoolLists, TArray<struct FItemPoolInfo> ExtraItemPools, int GameStage, const struct FVector& Location, const struct FRotator& Rotation, float InitialVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function GbxInventory.LootFunctionLibrary.SpawnItemsRaw");

	ULootFunctionLibrary_SpawnItemsRaw_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ItemPoolLists = ItemPoolLists;
	params.ExtraItemPools = ExtraItemPools;
	params.GameStage = GameStage;
	params.Location = Location;
	params.Rotation = Rotation;
	params.InitialVelocity = InitialVelocity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
