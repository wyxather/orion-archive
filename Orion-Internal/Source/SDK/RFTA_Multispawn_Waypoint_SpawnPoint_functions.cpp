// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Multispawn_Waypoint_SpawnPoint_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Multispawn_Waypoint_SpawnPoint.Multispawn_Waypoint_SpawnPoint_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void AMultispawn_Waypoint_SpawnPoint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Multispawn_Waypoint_SpawnPoint.Multispawn_Waypoint_SpawnPoint_C.ReceiveBeginPlay");

	AMultispawn_Waypoint_SpawnPoint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Multispawn_Waypoint_SpawnPoint.Multispawn_Waypoint_SpawnPoint_C.OnPostSpawn
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMultispawn_Waypoint_SpawnPoint_C::OnPostSpawn(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Multispawn_Waypoint_SpawnPoint.Multispawn_Waypoint_SpawnPoint_C.OnPostSpawn");

	AMultispawn_Waypoint_SpawnPoint_C_OnPostSpawn_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Multispawn_Waypoint_SpawnPoint.Multispawn_Waypoint_SpawnPoint_C.PossessedBy
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController**            NewController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMultispawn_Waypoint_SpawnPoint_C::PossessedBy(class AController** NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Multispawn_Waypoint_SpawnPoint.Multispawn_Waypoint_SpawnPoint_C.PossessedBy");

	AMultispawn_Waypoint_SpawnPoint_C_PossessedBy_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Multispawn_Waypoint_SpawnPoint.Multispawn_Waypoint_SpawnPoint_C.StartPreSpawn
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMultispawn_Waypoint_SpawnPoint_C::StartPreSpawn(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Multispawn_Waypoint_SpawnPoint.Multispawn_Waypoint_SpawnPoint_C.StartPreSpawn");

	AMultispawn_Waypoint_SpawnPoint_C_StartPreSpawn_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Multispawn_Waypoint_SpawnPoint.Multispawn_Waypoint_SpawnPoint_C.ExecuteUbergraph_Multispawn_Waypoint_SpawnPoint
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMultispawn_Waypoint_SpawnPoint_C::ExecuteUbergraph_Multispawn_Waypoint_SpawnPoint(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Multispawn_Waypoint_SpawnPoint.Multispawn_Waypoint_SpawnPoint_C.ExecuteUbergraph_Multispawn_Waypoint_SpawnPoint");

	AMultispawn_Waypoint_SpawnPoint_C_ExecuteUbergraph_Multispawn_Waypoint_SpawnPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Multispawn_Waypoint_SpawnPoint.Multispawn_Waypoint_SpawnPoint_C.EventPossessedBy__DelegateSignature
// 00007FF6F8B35350
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController**            NewController                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMultispawn_Waypoint_SpawnPoint_C::EventPossessedBy__DelegateSignature(class AController** NewController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Multispawn_Waypoint_SpawnPoint.Multispawn_Waypoint_SpawnPoint_C.EventPossessedBy__DelegateSignature");

	AMultispawn_Waypoint_SpawnPoint_C_EventPossessedBy__DelegateSignature_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
