// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_SpawnPoint_Intro_WakeUp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpawnPoint_Intro_WakeUp.SpawnPoint_Intro_WakeUp_C.OnPreSpawn
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASpawnPoint_Intro_WakeUp_C::OnPreSpawn(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnPoint_Intro_WakeUp.SpawnPoint_Intro_WakeUp_C.OnPreSpawn");

	ASpawnPoint_Intro_WakeUp_C_OnPreSpawn_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpawnPoint_Intro_WakeUp.SpawnPoint_Intro_WakeUp_C.ExecuteUbergraph_SpawnPoint_Intro_WakeUp
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASpawnPoint_Intro_WakeUp_C::ExecuteUbergraph_SpawnPoint_Intro_WakeUp(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnPoint_Intro_WakeUp.SpawnPoint_Intro_WakeUp_C.ExecuteUbergraph_SpawnPoint_Intro_WakeUp");

	ASpawnPoint_Intro_WakeUp_C_ExecuteUbergraph_SpawnPoint_Intro_WakeUp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
