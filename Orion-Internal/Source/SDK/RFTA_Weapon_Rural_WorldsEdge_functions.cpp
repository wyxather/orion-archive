// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Weapon_Rural_WorldsEdge_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Weapon_Rural_WorldsEdge.Weapon_Rural_WorldsEdge_C.WorldsEdgeFireProjectiles
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void AWeapon_Rural_WorldsEdge_C::WorldsEdgeFireProjectiles()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Rural_WorldsEdge.Weapon_Rural_WorldsEdge_C.WorldsEdgeFireProjectiles");

	AWeapon_Rural_WorldsEdge_C_WorldsEdgeFireProjectiles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Rural_WorldsEdge.Weapon_Rural_WorldsEdge_C.ModifyInspectInfo
// 00007FF6F8B35350
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemInstanceData**      InInstanceData                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInspectInfo            Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWeapon_Rural_WorldsEdge_C::ModifyInspectInfo(class AActor** Actor, class UItemInstanceData** InInstanceData, struct FInspectInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Rural_WorldsEdge.Weapon_Rural_WorldsEdge_C.ModifyInspectInfo");

	AWeapon_Rural_WorldsEdge_C_ModifyInspectInfo_Params params;
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


// Function Weapon_Rural_WorldsEdge.Weapon_Rural_WorldsEdge_C.Set Light Intensity
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         NewIntensity                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeapon_Rural_WorldsEdge_C::Set_Light_Intensity(float* NewIntensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Rural_WorldsEdge.Weapon_Rural_WorldsEdge_C.Set Light Intensity");

	AWeapon_Rural_WorldsEdge_C_Set_Light_Intensity_Params params;
	params.NewIntensity = NewIntensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Rural_WorldsEdge.Weapon_Rural_WorldsEdge_C.OnNotInHand
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void AWeapon_Rural_WorldsEdge_C::OnNotInHand()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Rural_WorldsEdge.Weapon_Rural_WorldsEdge_C.OnNotInHand");

	AWeapon_Rural_WorldsEdge_C_OnNotInHand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Rural_WorldsEdge.Weapon_Rural_WorldsEdge_C.OnActivated
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void AWeapon_Rural_WorldsEdge_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Rural_WorldsEdge.Weapon_Rural_WorldsEdge_C.OnActivated");

	AWeapon_Rural_WorldsEdge_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Rural_WorldsEdge.Weapon_Rural_WorldsEdge_C.OnInHand
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void AWeapon_Rural_WorldsEdge_C::OnInHand()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Rural_WorldsEdge.Weapon_Rural_WorldsEdge_C.OnInHand");

	AWeapon_Rural_WorldsEdge_C_OnInHand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Rural_WorldsEdge.Weapon_Rural_WorldsEdge_C.OnCharacterEvent
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeapon_Rural_WorldsEdge_C::OnCharacterEvent(struct FName* EventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Rural_WorldsEdge.Weapon_Rural_WorldsEdge_C.OnCharacterEvent");

	AWeapon_Rural_WorldsEdge_C_OnCharacterEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Rural_WorldsEdge.Weapon_Rural_WorldsEdge_C.Server_FireProjectiles
// 00007FF6F8B35350
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                Origin_                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator*               Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWeapon_Rural_WorldsEdge_C::Server_FireProjectiles(struct FVector* Origin_, struct FRotator* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Rural_WorldsEdge.Weapon_Rural_WorldsEdge_C.Server_FireProjectiles");

	AWeapon_Rural_WorldsEdge_C_Server_FireProjectiles_Params params;
	params.Origin_ = Origin_;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weapon_Rural_WorldsEdge.Weapon_Rural_WorldsEdge_C.ExecuteUbergraph_Weapon_Rural_WorldsEdge
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWeapon_Rural_WorldsEdge_C::ExecuteUbergraph_Weapon_Rural_WorldsEdge(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Rural_WorldsEdge.Weapon_Rural_WorldsEdge_C.ExecuteUbergraph_Weapon_Rural_WorldsEdge");

	AWeapon_Rural_WorldsEdge_C_ExecuteUbergraph_Weapon_Rural_WorldsEdge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
