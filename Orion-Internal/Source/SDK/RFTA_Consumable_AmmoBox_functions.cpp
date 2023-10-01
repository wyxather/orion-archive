// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Consumable_AmmoBox_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Consumable_AmmoBox.Consumable_AmmoBox_C.ModifyInspectInfo
// 00007FF6F8B35350
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemInstanceData**      InInstanceData                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInspectInfo            Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AConsumable_AmmoBox_C::ModifyInspectInfo(class AActor** Actor, class UItemInstanceData** InInstanceData, struct FInspectInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_AmmoBox.Consumable_AmmoBox_C.ModifyInspectInfo");

	AConsumable_AmmoBox_C_ModifyInspectInfo_Params params;
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


// Function Consumable_AmmoBox.Consumable_AmmoBox_C.ValidateUse
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AConsumable_AmmoBox_C::ValidateUse(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_AmmoBox.Consumable_AmmoBox_C.ValidateUse");

	AConsumable_AmmoBox_C_ValidateUse_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Consumable_AmmoBox.Consumable_AmmoBox_C.Regenerate
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AConsumable_AmmoBox_C::Regenerate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_AmmoBox.Consumable_AmmoBox_C.Regenerate");

	AConsumable_AmmoBox_C_Regenerate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Consumable_AmmoBox.Consumable_AmmoBox_C.HasFullAmmo
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AConsumable_AmmoBox_C::HasFullAmmo(class AActor** Actor, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_AmmoBox.Consumable_AmmoBox_C.HasFullAmmo");

	AConsumable_AmmoBox_C_HasFullAmmo_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Consumable_AmmoBox.Consumable_AmmoBox_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void AConsumable_AmmoBox_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_AmmoBox.Consumable_AmmoBox_C.ReceiveBeginPlay");

	AConsumable_AmmoBox_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Consumable_AmmoBox.Consumable_AmmoBox_C.ExecuteUbergraph_Consumable_AmmoBox
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AConsumable_AmmoBox_C::ExecuteUbergraph_Consumable_AmmoBox(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_AmmoBox.Consumable_AmmoBox_C.ExecuteUbergraph_Consumable_AmmoBox");

	AConsumable_AmmoBox_C_ExecuteUbergraph_Consumable_AmmoBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
