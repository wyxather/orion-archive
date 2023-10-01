// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_SpawnMesh_DoorSmall_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpawnMesh_DoorSmall.SpawnMesh_DoorSmall_C.SetBarricadeArtStyle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_SpawnMesh_DoorSmallBarricades> BarricadeArtStyle              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASpawnMesh_DoorSmall_C::SetBarricadeArtStyle(TEnumAsByte<Enum_SpawnMesh_DoorSmallBarricades> BarricadeArtStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnMesh_DoorSmall.SpawnMesh_DoorSmall_C.SetBarricadeArtStyle");

	ASpawnMesh_DoorSmall_C_SetBarricadeArtStyle_Params params;
	params.BarricadeArtStyle = BarricadeArtStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpawnMesh_DoorSmall.SpawnMesh_DoorSmall_C.SetDoorArtStyle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_SpawnMesh_DoorSmall> DoorArtStyle                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASpawnMesh_DoorSmall_C::SetDoorArtStyle(TEnumAsByte<Enum_SpawnMesh_DoorSmall> DoorArtStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnMesh_DoorSmall.SpawnMesh_DoorSmall_C.SetDoorArtStyle");

	ASpawnMesh_DoorSmall_C_SetDoorArtStyle_Params params;
	params.DoorArtStyle = DoorArtStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpawnMesh_DoorSmall.SpawnMesh_DoorSmall_C.InitByAnimType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Enum_SpawnMesh_DoorSmallAnimStyle> DoorAnimType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASpawnMesh_DoorSmall_C::InitByAnimType(TEnumAsByte<Enum_SpawnMesh_DoorSmallAnimStyle> DoorAnimType)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnMesh_DoorSmall.SpawnMesh_DoorSmall_C.InitByAnimType");

	ASpawnMesh_DoorSmall_C_InitByAnimType_Params params;
	params.DoorAnimType = DoorAnimType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpawnMesh_DoorSmall.SpawnMesh_DoorSmall_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASpawnMesh_DoorSmall_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnMesh_DoorSmall.SpawnMesh_DoorSmall_C.UserConstructionScript");

	ASpawnMesh_DoorSmall_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpawnMesh_DoorSmall.SpawnMesh_DoorSmall_C.BndEvt__Barricade_K2Node_ComponentBoundEvent_1_ComponentSleepSignature__DelegateSignature_SpawnMesh_DoorSmall
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     SleepingComponent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   BoneName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASpawnMesh_DoorSmall_C::BndEvt__Barricade_K2Node_ComponentBoundEvent_1_ComponentSleepSignature__DelegateSignature_SpawnMesh_DoorSmall(class UPrimitiveComponent* SleepingComponent, const struct FName& BoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnMesh_DoorSmall.SpawnMesh_DoorSmall_C.BndEvt__Barricade_K2Node_ComponentBoundEvent_1_ComponentSleepSignature__DelegateSignature_SpawnMesh_DoorSmall");

	ASpawnMesh_DoorSmall_C_BndEvt__Barricade_K2Node_ComponentBoundEvent_1_ComponentSleepSignature__DelegateSignature_SpawnMesh_DoorSmall_Params params;
	params.SleepingComponent = SleepingComponent;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpawnMesh_DoorSmall.SpawnMesh_DoorSmall_C.SpawnMesh_TriggerDestruction
// (Public, BlueprintCallable, BlueprintEvent)

void ASpawnMesh_DoorSmall_C::SpawnMesh_TriggerDestruction()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnMesh_DoorSmall.SpawnMesh_DoorSmall_C.SpawnMesh_TriggerDestruction");

	ASpawnMesh_DoorSmall_C_SpawnMesh_TriggerDestruction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpawnMesh_DoorSmall.SpawnMesh_DoorSmall_C.ExecuteUbergraph_SpawnMesh_DoorSmall
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASpawnMesh_DoorSmall_C::ExecuteUbergraph_SpawnMesh_DoorSmall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnMesh_DoorSmall.SpawnMesh_DoorSmall_C.ExecuteUbergraph_SpawnMesh_DoorSmall");

	ASpawnMesh_DoorSmall_C_ExecuteUbergraph_SpawnMesh_DoorSmall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
