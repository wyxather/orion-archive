// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_SpawnPoint_Intro_WakeUp_Cot_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpawnPoint_Intro_WakeUp_Cot.SpawnPoint_Intro_WakeUp_Cot_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void ASpawnPoint_Intro_WakeUp_Cot_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnPoint_Intro_WakeUp_Cot.SpawnPoint_Intro_WakeUp_Cot_C.ReceiveBeginPlay");

	ASpawnPoint_Intro_WakeUp_Cot_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpawnPoint_Intro_WakeUp_Cot.SpawnPoint_Intro_WakeUp_Cot_C.OnPreSpawn
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASpawnPoint_Intro_WakeUp_Cot_C::OnPreSpawn(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnPoint_Intro_WakeUp_Cot.SpawnPoint_Intro_WakeUp_Cot_C.OnPreSpawn");

	ASpawnPoint_Intro_WakeUp_Cot_C_OnPreSpawn_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpawnPoint_Intro_WakeUp_Cot.SpawnPoint_Intro_WakeUp_Cot_C.ExecuteUbergraph_SpawnPoint_Intro_WakeUp_Cot
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASpawnPoint_Intro_WakeUp_Cot_C::ExecuteUbergraph_SpawnPoint_Intro_WakeUp_Cot(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnPoint_Intro_WakeUp_Cot.SpawnPoint_Intro_WakeUp_Cot_C.ExecuteUbergraph_SpawnPoint_Intro_WakeUp_Cot");

	ASpawnPoint_Intro_WakeUp_Cot_C_ExecuteUbergraph_SpawnPoint_Intro_WakeUp_Cot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
