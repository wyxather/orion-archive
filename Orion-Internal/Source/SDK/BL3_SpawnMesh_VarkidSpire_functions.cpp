// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_SpawnMesh_VarkidSpire_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpawnMesh_VarkidSpire.SpawnMesh_VarkidSpire_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASpawnMesh_VarkidSpire_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnMesh_VarkidSpire.SpawnMesh_VarkidSpire_C.UserConstructionScript");

	ASpawnMesh_VarkidSpire_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
