// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PetLoader_EyeLaser_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.AttackCommandUsed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAction_PetLoader_EyeLaser_C::AttackCommandUsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.AttackCommandUsed");

	UAction_PetLoader_EyeLaser_C_AttackCommandUsed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)

void UAction_PetLoader_EyeLaser_C::CustomEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.CustomEvent");

	UAction_PetLoader_EyeLaser_C_CustomEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.OnServerEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_PetLoader_EyeLaser_C::OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.OnServerEnd");

	UAction_PetLoader_EyeLaser_C_OnServerEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_PetLoader_EyeLaser_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.OnEnd");

	UAction_PetLoader_EyeLaser_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.Start_EyeLaser
// (BlueprintCallable, BlueprintEvent)

void UAction_PetLoader_EyeLaser_C::Start_EyeLaser()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.Start_EyeLaser");

	UAction_PetLoader_EyeLaser_C_Start_EyeLaser_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.Stop_EyeLaser
// (BlueprintCallable, BlueprintEvent)

void UAction_PetLoader_EyeLaser_C::Stop_EyeLaser()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.Stop_EyeLaser");

	UAction_PetLoader_EyeLaser_C_Stop_EyeLaser_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.CustomEvent_4
// (BlueprintCallable, BlueprintEvent)

void UAction_PetLoader_EyeLaser_C::CustomEvent_4()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.CustomEvent_4");

	UAction_PetLoader_EyeLaser_C_CustomEvent_4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.Start_EyeLaserCharge
// (BlueprintCallable, BlueprintEvent)

void UAction_PetLoader_EyeLaser_C::Start_EyeLaserCharge()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.Start_EyeLaserCharge");

	UAction_PetLoader_EyeLaser_C_Start_EyeLaserCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.OnServerBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_PetLoader_EyeLaser_C::OnServerBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.OnServerBegin");

	UAction_PetLoader_EyeLaser_C_OnServerBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.Audio_EyeBeam_Charge
// (BlueprintCallable, BlueprintEvent)

void UAction_PetLoader_EyeLaser_C::Audio_EyeBeam_Charge()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.Audio_EyeBeam_Charge");

	UAction_PetLoader_EyeLaser_C_Audio_EyeBeam_Charge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.ExecuteUbergraph_Action_PetLoader_EyeLaser
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_PetLoader_EyeLaser_C::ExecuteUbergraph_Action_PetLoader_EyeLaser(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PetLoader_EyeLaser.Action_PetLoader_EyeLaser_C.ExecuteUbergraph_Action_PetLoader_EyeLaser");

	UAction_PetLoader_EyeLaser_C_ExecuteUbergraph_Action_PetLoader_EyeLaser_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
