// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPAmmoItem_AllAmmo_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPAmmoItem_AllAmmo.BPAmmoItem_AllAmmo_C.ReceiveBeginPlay
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void ABPAmmoItem_AllAmmo_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAmmoItem_AllAmmo.BPAmmoItem_AllAmmo_C.ReceiveBeginPlay");

	ABPAmmoItem_AllAmmo_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPAmmoItem_AllAmmo.BPAmmoItem_AllAmmo_C.FillAmmo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AOakCharacter*           PickupInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxAttributeData*       CurrentValue                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxAttributeData*       MaxValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPAmmoItem_AllAmmo_C::FillAmmo(class AOakCharacter* PickupInstigator, class UGbxAttributeData* CurrentValue, class UGbxAttributeData* MaxValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAmmoItem_AllAmmo.BPAmmoItem_AllAmmo_C.FillAmmo");

	ABPAmmoItem_AllAmmo_C_FillAmmo_Params params;
	params.PickupInstigator = PickupInstigator;
	params.CurrentValue = CurrentValue;
	params.MaxValue = MaxValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPAmmoItem_AllAmmo.BPAmmoItem_AllAmmo_C.PickedUp
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AOakCharacter*           PickupInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPAmmoItem_AllAmmo_C::PickedUp(class AOakCharacter* PickupInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAmmoItem_AllAmmo.BPAmmoItem_AllAmmo_C.PickedUp");

	ABPAmmoItem_AllAmmo_C_PickedUp_Params params;
	params.PickupInstigator = PickupInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPAmmoItem_AllAmmo.BPAmmoItem_AllAmmo_C.CanBePickedUp
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AOakCharacter**          PickupInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          UsedByInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AInventoryItemPickup**   WorldPickupActor               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABPAmmoItem_AllAmmo_C::CanBePickedUp(class AOakCharacter** PickupInstigator, int* Quantity, bool* UsedByInstigator, class AInventoryItemPickup** WorldPickupActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPAmmoItem_AllAmmo.BPAmmoItem_AllAmmo_C.CanBePickedUp");

	ABPAmmoItem_AllAmmo_C_CanBePickedUp_Params params;
	params.PickupInstigator = PickupInstigator;
	params.Quantity = Quantity;
	params.UsedByInstigator = UsedByInstigator;
	params.WorldPickupActor = WorldPickupActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
