// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_VendingMachineBase_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_VendingMachineBase.BP_VendingMachineBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_VendingMachineBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VendingMachineBase.BP_VendingMachineBase_C.UserConstructionScript");

	ABP_VendingMachineBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VendingMachineBase.BP_VendingMachineBase_C.OnPlayerStopInteraction
// (Event, Public, BlueprintEvent)
// Parameters:
// class AOakPlayerController**   Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VendingMachineBase_C::OnPlayerStopInteraction(class AOakPlayerController** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VendingMachineBase.BP_VendingMachineBase_C.OnPlayerStopInteraction");

	ABP_VendingMachineBase_C_OnPlayerStopInteraction_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VendingMachineBase.BP_VendingMachineBase_C.K2_OnSoldSomething
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 InventoryActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VendingMachineBase_C::K2_OnSoldSomething(class AActor** InventoryActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VendingMachineBase.BP_VendingMachineBase_C.K2_OnSoldSomething");

	ABP_VendingMachineBase_C_K2_OnSoldSomething_Params params;
	params.InventoryActor = InventoryActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VendingMachineBase.BP_VendingMachineBase_C.K2_OnSoldAllJunk
// (Event, Protected, BlueprintEvent)

void ABP_VendingMachineBase_C::K2_OnSoldAllJunk()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VendingMachineBase.BP_VendingMachineBase_C.K2_OnSoldAllJunk");

	ABP_VendingMachineBase_C_K2_OnSoldAllJunk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VendingMachineBase.BP_VendingMachineBase_C.OnPlayerBeginInteraction
// (Event, Public, BlueprintEvent)
// Parameters:
// class AOakPlayerController**   Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VendingMachineBase_C::OnPlayerBeginInteraction(class AOakPlayerController** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VendingMachineBase.BP_VendingMachineBase_C.OnPlayerBeginInteraction");

	ABP_VendingMachineBase_C_OnPlayerBeginInteraction_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VendingMachineBase.BP_VendingMachineBase_C.K2_OnShelfStablySelected
// (Event, Protected, BlueprintEvent)
// Parameters:
// EVendingMachineTrayTileType*   Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 InventoryActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VendingMachineBase_C::K2_OnShelfStablySelected(EVendingMachineTrayTileType* Type, class AActor** InventoryActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VendingMachineBase.BP_VendingMachineBase_C.K2_OnShelfStablySelected");

	ABP_VendingMachineBase_C_K2_OnShelfStablySelected_Params params;
	params.Type = Type;
	params.InventoryActor = InventoryActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VendingMachineBase.BP_VendingMachineBase_C.K2_OnBoughtSomething
// (Event, Protected, BlueprintEvent)
// Parameters:
// EVendingMachineBuyType*        Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 InventoryActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VendingMachineBase_C::K2_OnBoughtSomething(EVendingMachineBuyType* Type, class AActor** InventoryActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VendingMachineBase.BP_VendingMachineBase_C.K2_OnBoughtSomething");

	ABP_VendingMachineBase_C_K2_OnBoughtSomething_Params params;
	params.Type = Type;
	params.InventoryActor = InventoryActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VendingMachineBase.BP_VendingMachineBase_C.ExecuteUbergraph_BP_VendingMachineBase
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_VendingMachineBase_C::ExecuteUbergraph_BP_VendingMachineBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_VendingMachineBase.BP_VendingMachineBase_C.ExecuteUbergraph_BP_VendingMachineBase");

	ABP_VendingMachineBase_C_ExecuteUbergraph_BP_VendingMachineBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
