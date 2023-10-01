// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_SpawnMesh_Skeletal_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_SpawnMesh_Skeletal.BP_SpawnMesh_Skeletal_C.SetAnimationTickEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpawnMesh_Skeletal_C::SetAnimationTickEnabled(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnMesh_Skeletal.BP_SpawnMesh_Skeletal_C.SetAnimationTickEnabled");

	ABP_SpawnMesh_Skeletal_C_SetAnimationTickEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawnMesh_Skeletal.BP_SpawnMesh_Skeletal_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SpawnMesh_Skeletal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnMesh_Skeletal.BP_SpawnMesh_Skeletal_C.UserConstructionScript");

	ABP_SpawnMesh_Skeletal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawnMesh_Skeletal.BP_SpawnMesh_Skeletal_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SpawnMesh_Skeletal_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnMesh_Skeletal.BP_SpawnMesh_Skeletal_C.ReceiveBeginPlay");

	ABP_SpawnMesh_Skeletal_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawnMesh_Skeletal.BP_SpawnMesh_Skeletal_C.BndEvt__GbxAction_K2Node_ComponentBoundEvent_1_ActionComponentStopDelegate__DelegateSignature_SpawnMesh_ZipLine
// (BlueprintEvent)
// Parameters:
// class UClass*                  Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EGbxActionEndState             EndState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpawnMesh_Skeletal_C::BndEvt__GbxAction_K2Node_ComponentBoundEvent_1_ActionComponentStopDelegate__DelegateSignature_SpawnMesh_ZipLine(class UClass* Action, EGbxActionEndState EndState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnMesh_Skeletal.BP_SpawnMesh_Skeletal_C.BndEvt__GbxAction_K2Node_ComponentBoundEvent_1_ActionComponentStopDelegate__DelegateSignature_SpawnMesh_ZipLine");

	ABP_SpawnMesh_Skeletal_C_BndEvt__GbxAction_K2Node_ComponentBoundEvent_1_ActionComponentStopDelegate__DelegateSignature_SpawnMesh_ZipLine_Params params;
	params.Action = Action;
	params.EndState = EndState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SpawnMesh_Skeletal.BP_SpawnMesh_Skeletal_C.ExecuteUbergraph_BP_SpawnMesh_Skeletal
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SpawnMesh_Skeletal_C::ExecuteUbergraph_BP_SpawnMesh_Skeletal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpawnMesh_Skeletal.BP_SpawnMesh_Skeletal_C.ExecuteUbergraph_BP_SpawnMesh_Skeletal");

	ABP_SpawnMesh_Skeletal_C_ExecuteUbergraph_BP_SpawnMesh_Skeletal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
