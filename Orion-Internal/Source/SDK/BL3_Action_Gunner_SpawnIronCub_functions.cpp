// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Gunner_SpawnIronCub_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Gunner_SpawnIronCub.Action_Gunner_SpawnIronCub_C.AN_SpawnIronCub
// (BlueprintCallable, BlueprintEvent)

void UAction_Gunner_SpawnIronCub_C::AN_SpawnIronCub()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Gunner_SpawnIronCub.Action_Gunner_SpawnIronCub_C.AN_SpawnIronCub");

	UAction_Gunner_SpawnIronCub_C_AN_SpawnIronCub_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Gunner_SpawnIronCub.Action_Gunner_SpawnIronCub_C.OnServerEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Gunner_SpawnIronCub_C::OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Gunner_SpawnIronCub.Action_Gunner_SpawnIronCub_C.OnServerEnd");

	UAction_Gunner_SpawnIronCub_C_OnServerEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Gunner_SpawnIronCub.Action_Gunner_SpawnIronCub_C.AN_EnableDevice
// (BlueprintCallable, BlueprintEvent)

void UAction_Gunner_SpawnIronCub_C::AN_EnableDevice()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Gunner_SpawnIronCub.Action_Gunner_SpawnIronCub_C.AN_EnableDevice");

	UAction_Gunner_SpawnIronCub_C_AN_EnableDevice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Gunner_SpawnIronCub.Action_Gunner_SpawnIronCub_C.AN_DisableDevice
// (BlueprintCallable, BlueprintEvent)

void UAction_Gunner_SpawnIronCub_C::AN_DisableDevice()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Gunner_SpawnIronCub.Action_Gunner_SpawnIronCub_C.AN_DisableDevice");

	UAction_Gunner_SpawnIronCub_C_AN_DisableDevice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Gunner_SpawnIronCub.Action_Gunner_SpawnIronCub_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Gunner_SpawnIronCub_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Gunner_SpawnIronCub.Action_Gunner_SpawnIronCub_C.OnBegin");

	UAction_Gunner_SpawnIronCub_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Gunner_SpawnIronCub.Action_Gunner_SpawnIronCub_C.AN_EnableHologram
// (BlueprintCallable, BlueprintEvent)

void UAction_Gunner_SpawnIronCub_C::AN_EnableHologram()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Gunner_SpawnIronCub.Action_Gunner_SpawnIronCub_C.AN_EnableHologram");

	UAction_Gunner_SpawnIronCub_C_AN_EnableHologram_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Gunner_SpawnIronCub.Action_Gunner_SpawnIronCub_C.AN_DisableHologram
// (BlueprintCallable, BlueprintEvent)

void UAction_Gunner_SpawnIronCub_C::AN_DisableHologram()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Gunner_SpawnIronCub.Action_Gunner_SpawnIronCub_C.AN_DisableHologram");

	UAction_Gunner_SpawnIronCub_C_AN_DisableHologram_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Gunner_SpawnIronCub.Action_Gunner_SpawnIronCub_C.ExecuteUbergraph_Action_Gunner_SpawnIronCub
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Gunner_SpawnIronCub_C::ExecuteUbergraph_Action_Gunner_SpawnIronCub(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Gunner_SpawnIronCub.Action_Gunner_SpawnIronCub_C.ExecuteUbergraph_Action_Gunner_SpawnIronCub");

	UAction_Gunner_SpawnIronCub_C_ExecuteUbergraph_Action_Gunner_SpawnIronCub_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
