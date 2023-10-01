// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Ammo_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ammo_Base.Ammo_Base_C.SplitAmmoAmongPlayers
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAmmo_Base_C::SplitAmmoAmongPlayers(float* Amount, class AActor** Owner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ammo_Base.Ammo_Base_C.SplitAmmoAmongPlayers");

	AAmmo_Base_C_SplitAmmoAmongPlayers_Params params;
	params.Amount = Amount;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ammo_Base.Ammo_Base_C.GetAmmoPickupMod
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ACharacterGunfire**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Mod                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAmmo_Base_C::GetAmmoPickupMod(class ACharacterGunfire** Character, float* Mod)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ammo_Base.Ammo_Base_C.GetAmmoPickupMod");

	AAmmo_Base_C_GetAmmoPickupMod_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Mod != nullptr)
		*Mod = params.Mod;
}


// Function Ammo_Base.Ammo_Base_C.PreAdd
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryComponent**    Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AAmmo_Base_C::PreAdd(class UInventoryComponent** Inventory, int* Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ammo_Base.Ammo_Base_C.PreAdd");

	AAmmo_Base_C_PreAdd_Params params;
	params.Inventory = Inventory;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Ammo_Base.Ammo_Base_C.ValidateAdd
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryComponent**    Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int*                           DesiredQuantity                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            AllowedQuantity                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AAmmo_Base_C::ValidateAdd(class UInventoryComponent** Inventory, int* DesiredQuantity, int* AllowedQuantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ammo_Base.Ammo_Base_C.ValidateAdd");

	AAmmo_Base_C_ValidateAdd_Params params;
	params.Inventory = Inventory;
	params.DesiredQuantity = DesiredQuantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AllowedQuantity != nullptr)
		*AllowedQuantity = params.AllowedQuantity;

	return params.ReturnValue;
}


// Function Ammo_Base.Ammo_Base_C.ReceiveTick
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAmmo_Base_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ammo_Base.Ammo_Base_C.ReceiveTick");

	AAmmo_Base_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ammo_Base.Ammo_Base_C.ExecuteUbergraph_Ammo_Base
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAmmo_Base_C::ExecuteUbergraph_Ammo_Base(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ammo_Base.Ammo_Base_C.ExecuteUbergraph_Ammo_Base");

	AAmmo_Base_C_ExecuteUbergraph_Ammo_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
