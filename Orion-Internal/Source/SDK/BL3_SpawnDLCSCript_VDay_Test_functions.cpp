// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_SpawnDLCSCript_VDay_Test_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpawnDLCSCript_VDay_Test.SpawnDLCSCript_VDay_Test_C.OnActorSpawned
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USpawnerComponent**      SpawnerComponent               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USpawnDLCSCript_VDay_Test_C::OnActorSpawned(class USpawnerComponent** SpawnerComponent, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnDLCSCript_VDay_Test.SpawnDLCSCript_VDay_Test_C.OnActorSpawned");

	USpawnDLCSCript_VDay_Test_C_OnActorSpawned_Params params;
	params.SpawnerComponent = SpawnerComponent;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
