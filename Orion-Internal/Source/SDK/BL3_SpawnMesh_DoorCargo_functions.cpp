// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_SpawnMesh_DoorCargo_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpawnMesh_DoorCargo.SpawnMesh_DoorCargo_C.SetDoorArtStyle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_Spawnmesh_DoorCargo> DoorArtStyle                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASpawnMesh_DoorCargo_C::SetDoorArtStyle(TEnumAsByte<Enum_Spawnmesh_DoorCargo> DoorArtStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnMesh_DoorCargo.SpawnMesh_DoorCargo_C.SetDoorArtStyle");

	ASpawnMesh_DoorCargo_C_SetDoorArtStyle_Params params;
	params.DoorArtStyle = DoorArtStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpawnMesh_DoorCargo.SpawnMesh_DoorCargo_C.InitByAnimType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_Spawnmesh_DoorCargoAnimStyle> DoorAnimType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASpawnMesh_DoorCargo_C::InitByAnimType(TEnumAsByte<Enum_Spawnmesh_DoorCargoAnimStyle> DoorAnimType)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnMesh_DoorCargo.SpawnMesh_DoorCargo_C.InitByAnimType");

	ASpawnMesh_DoorCargo_C_InitByAnimType_Params params;
	params.DoorAnimType = DoorAnimType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpawnMesh_DoorCargo.SpawnMesh_DoorCargo_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASpawnMesh_DoorCargo_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnMesh_DoorCargo.SpawnMesh_DoorCargo_C.UserConstructionScript");

	ASpawnMesh_DoorCargo_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
