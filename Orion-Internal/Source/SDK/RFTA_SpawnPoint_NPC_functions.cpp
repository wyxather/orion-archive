// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_SpawnPoint_NPC_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpawnPoint_NPC.SpawnPoint_NPC_C.UserConstructionScript
// 00007FF6F8B35350
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASpawnPoint_NPC_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnPoint_NPC.SpawnPoint_NPC_C.UserConstructionScript");

	ASpawnPoint_NPC_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
