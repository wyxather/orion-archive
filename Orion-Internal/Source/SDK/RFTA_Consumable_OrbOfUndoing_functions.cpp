// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Consumable_OrbOfUndoing_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Consumable_OrbOfUndoing.Consumable_OrbOfUndoing_C.ModifyInspectInfo
// 00007FF6F8B35350
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemInstanceData**      InInstanceData                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInspectInfo            Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AConsumable_OrbOfUndoing_C::ModifyInspectInfo(class AActor** Actor, class UItemInstanceData** InInstanceData, struct FInspectInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_OrbOfUndoing.Consumable_OrbOfUndoing_C.ModifyInspectInfo");

	AConsumable_OrbOfUndoing_C_ModifyInspectInfo_Params params;
	params.Actor = Actor;
	params.InInstanceData = InInstanceData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;
}


// Function Consumable_OrbOfUndoing.Consumable_OrbOfUndoing_C.OnActivate
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AConsumable_OrbOfUndoing_C::OnActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_OrbOfUndoing.Consumable_OrbOfUndoing_C.OnActivate");

	AConsumable_OrbOfUndoing_C_OnActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Consumable_OrbOfUndoing.Consumable_OrbOfUndoing_C.ClientInitTraitChange
// 00007FF6F8B35350
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTraitsComponent**       Traits                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AConsumable_OrbOfUndoing_C::ClientInitTraitChange(class UTraitsComponent** Traits)
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_OrbOfUndoing.Consumable_OrbOfUndoing_C.ClientInitTraitChange");

	AConsumable_OrbOfUndoing_C_ClientInitTraitChange_Params params;
	params.Traits = Traits;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Consumable_OrbOfUndoing.Consumable_OrbOfUndoing_C.SetTraitLevels
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void AConsumable_OrbOfUndoing_C::SetTraitLevels()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_OrbOfUndoing.Consumable_OrbOfUndoing_C.SetTraitLevels");

	AConsumable_OrbOfUndoing_C_SetTraitLevels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Consumable_OrbOfUndoing.Consumable_OrbOfUndoing_C.ServerTraitChange
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void AConsumable_OrbOfUndoing_C::ServerTraitChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_OrbOfUndoing.Consumable_OrbOfUndoing_C.ServerTraitChange");

	AConsumable_OrbOfUndoing_C_ServerTraitChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Consumable_OrbOfUndoing.Consumable_OrbOfUndoing_C.OnEquipped
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void AConsumable_OrbOfUndoing_C::OnEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_OrbOfUndoing.Consumable_OrbOfUndoing_C.OnEquipped");

	AConsumable_OrbOfUndoing_C_OnEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Consumable_OrbOfUndoing.Consumable_OrbOfUndoing_C.ExecuteUbergraph_Consumable_OrbOfUndoing
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AConsumable_OrbOfUndoing_C::ExecuteUbergraph_Consumable_OrbOfUndoing(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_OrbOfUndoing.Consumable_OrbOfUndoing_C.ExecuteUbergraph_Consumable_OrbOfUndoing");

	AConsumable_OrbOfUndoing_C_ExecuteUbergraph_Consumable_OrbOfUndoing_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
