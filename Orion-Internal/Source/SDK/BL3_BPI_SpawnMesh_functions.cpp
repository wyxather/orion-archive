// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_SpawnMesh_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_SpawnMesh.BPI_SpawnMesh_C.SpawnMesh_TriggerDestruction
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_SpawnMesh_C::SpawnMesh_TriggerDestruction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_SpawnMesh.BPI_SpawnMesh_C.SpawnMesh_TriggerDestruction");

	UBPI_SpawnMesh_C_SpawnMesh_TriggerDestruction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
