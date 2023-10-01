// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Mod_UnstableQuilFireProjectiles_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Mod_UnstableQuilFireProjectiles.Action_Mod_UnstableQuilFireProjectiles_C.DoneWithBurst
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DoneFiring                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_Mod_UnstableQuilFireProjectiles_C::DoneWithBurst(bool* DoneFiring)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_UnstableQuilFireProjectiles.Action_Mod_UnstableQuilFireProjectiles_C.DoneWithBurst");

	UAction_Mod_UnstableQuilFireProjectiles_C_DoneWithBurst_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DoneFiring != nullptr)
		*DoneFiring = params.DoneFiring;
}


// Function Action_Mod_UnstableQuilFireProjectiles.Action_Mod_UnstableQuilFireProjectiles_C.IsInFrontOfPlayer
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacterGunfire**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           InFront                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_Mod_UnstableQuilFireProjectiles_C::IsInFrontOfPlayer(struct FVector* Location, class ACharacterGunfire** Character, bool* InFront)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_UnstableQuilFireProjectiles.Action_Mod_UnstableQuilFireProjectiles_C.IsInFrontOfPlayer");

	UAction_Mod_UnstableQuilFireProjectiles_C_IsInFrontOfPlayer_Params params;
	params.Location = Location;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InFront != nullptr)
		*InFront = params.InFront;
}


// Function Action_Mod_UnstableQuilFireProjectiles.Action_Mod_UnstableQuilFireProjectiles_C.GetCrosshairDirection
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacterGunfire**      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector*                GunStartLoc                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector*                GunEndLoc                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Dir                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Mod_UnstableQuilFireProjectiles_C::GetCrosshairDirection(class ACharacterGunfire** Character, struct FVector* GunStartLoc, struct FVector* GunEndLoc, struct FVector* Dir)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_UnstableQuilFireProjectiles.Action_Mod_UnstableQuilFireProjectiles_C.GetCrosshairDirection");

	UAction_Mod_UnstableQuilFireProjectiles_C_GetCrosshairDirection_Params params;
	params.Character = Character;
	params.GunStartLoc = GunStartLoc;
	params.GunEndLoc = GunEndLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dir != nullptr)
		*Dir = params.Dir;
}


// Function Action_Mod_UnstableQuilFireProjectiles.Action_Mod_UnstableQuilFireProjectiles_C.GetEndProjectileLocation
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Dir                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Mod_UnstableQuilFireProjectiles_C::GetEndProjectileLocation(struct FVector* Dir)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_UnstableQuilFireProjectiles.Action_Mod_UnstableQuilFireProjectiles_C.GetEndProjectileLocation");

	UAction_Mod_UnstableQuilFireProjectiles_C_GetEndProjectileLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dir != nullptr)
		*Dir = params.Dir;
}


// Function Action_Mod_UnstableQuilFireProjectiles.Action_Mod_UnstableQuilFireProjectiles_C.FireProjectileInstance
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           InstanceIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Mod_UnstableQuilFireProjectiles_C::FireProjectileInstance(int* InstanceIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_UnstableQuilFireProjectiles.Action_Mod_UnstableQuilFireProjectiles_C.FireProjectileInstance");

	UAction_Mod_UnstableQuilFireProjectiles_C_FireProjectileInstance_Params params;
	params.InstanceIndex = InstanceIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Mod_UnstableQuilFireProjectiles.Action_Mod_UnstableQuilFireProjectiles_C.GetSocketLocationFromOwner
// 00007FF6F8B35350
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 SocketLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Mod_UnstableQuilFireProjectiles_C::GetSocketLocationFromOwner(struct FVector* SocketLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_UnstableQuilFireProjectiles.Action_Mod_UnstableQuilFireProjectiles_C.GetSocketLocationFromOwner");

	UAction_Mod_UnstableQuilFireProjectiles_C_GetSocketLocationFromOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SocketLocation != nullptr)
		*SocketLocation = params.SocketLocation;
}


// Function Action_Mod_UnstableQuilFireProjectiles.Action_Mod_UnstableQuilFireProjectiles_C.FireProjectiles
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAction_Mod_UnstableQuilFireProjectiles_C::FireProjectiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_UnstableQuilFireProjectiles.Action_Mod_UnstableQuilFireProjectiles_C.FireProjectiles");

	UAction_Mod_UnstableQuilFireProjectiles_C_FireProjectiles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Mod_UnstableQuilFireProjectiles.Action_Mod_UnstableQuilFireProjectiles_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Mod_UnstableQuilFireProjectiles_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_UnstableQuilFireProjectiles.Action_Mod_UnstableQuilFireProjectiles_C.OnActionStart");

	UAction_Mod_UnstableQuilFireProjectiles_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Mod_UnstableQuilFireProjectiles.Action_Mod_UnstableQuilFireProjectiles_C.FireAllProjectiles
// 00007FF6F8B35350
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NumProjectiles                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ARemnantRangedWeaponMod_C** Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         BurstIncrementDelay            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName*                  Socket                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor**                 Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Mod_UnstableQuilFireProjectiles_C::FireAllProjectiles(int* NumProjectiles, class ARemnantRangedWeaponMod_C** Weapon, float* BurstIncrementDelay, struct FName* Socket, class AActor** Owner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_UnstableQuilFireProjectiles.Action_Mod_UnstableQuilFireProjectiles_C.FireAllProjectiles");

	UAction_Mod_UnstableQuilFireProjectiles_C_FireAllProjectiles_Params params;
	params.NumProjectiles = NumProjectiles;
	params.Weapon = Weapon;
	params.BurstIncrementDelay = BurstIncrementDelay;
	params.Socket = Socket;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Mod_UnstableQuilFireProjectiles.Action_Mod_UnstableQuilFireProjectiles_C.ExecuteUbergraph_Action_Mod_UnstableQuilFireProjectiles
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Mod_UnstableQuilFireProjectiles_C::ExecuteUbergraph_Action_Mod_UnstableQuilFireProjectiles(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_UnstableQuilFireProjectiles.Action_Mod_UnstableQuilFireProjectiles_C.ExecuteUbergraph_Action_Mod_UnstableQuilFireProjectiles");

	UAction_Mod_UnstableQuilFireProjectiles_C_ExecuteUbergraph_Action_Mod_UnstableQuilFireProjectiles_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
