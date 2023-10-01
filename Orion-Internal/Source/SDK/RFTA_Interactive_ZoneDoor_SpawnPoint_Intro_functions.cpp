// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Interactive_ZoneDoor_SpawnPoint_Intro_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Interactive_ZoneDoor_SpawnPoint_Intro.Interactive_ZoneDoor_SpawnPoint_Intro_C.OnPreSpawn
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInteractive_ZoneDoor_SpawnPoint_Intro_C::OnPreSpawn(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_ZoneDoor_SpawnPoint_Intro.Interactive_ZoneDoor_SpawnPoint_Intro_C.OnPreSpawn");

	AInteractive_ZoneDoor_SpawnPoint_Intro_C_OnPreSpawn_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Interactive_ZoneDoor_SpawnPoint_Intro.Interactive_ZoneDoor_SpawnPoint_Intro_C.ExecuteUbergraph_Interactive_ZoneDoor_SpawnPoint_Intro
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInteractive_ZoneDoor_SpawnPoint_Intro_C::ExecuteUbergraph_Interactive_ZoneDoor_SpawnPoint_Intro(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_ZoneDoor_SpawnPoint_Intro.Interactive_ZoneDoor_SpawnPoint_Intro_C.ExecuteUbergraph_Interactive_ZoneDoor_SpawnPoint_Intro");

	AInteractive_ZoneDoor_SpawnPoint_Intro_C_ExecuteUbergraph_Interactive_ZoneDoor_SpawnPoint_Intro_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
