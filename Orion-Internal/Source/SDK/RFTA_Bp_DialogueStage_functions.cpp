// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Bp_DialogueStage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Bp_DialogueStage.Bp_DialogueStage_C.StageCameraTargetMatches
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FEventTreeStage*        Stage                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Matches                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABp_DialogueStage_C::StageCameraTargetMatches(struct FEventTreeStage* Stage, bool* Matches)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_DialogueStage.Bp_DialogueStage_C.StageCameraTargetMatches");

	ABp_DialogueStage_C_StageCameraTargetMatches_Params params;
	params.Stage = Stage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Matches != nullptr)
		*Matches = params.Matches;
}


// Function Bp_DialogueStage.Bp_DialogueStage_C.ExitAnimatedCamera
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ABp_DialogueStage_C::ExitAnimatedCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_DialogueStage.Bp_DialogueStage_C.ExitAnimatedCamera");

	ABp_DialogueStage_C_ExitAnimatedCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_DialogueStage.Bp_DialogueStage_C.ShowDialog
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ABp_DialogueStage_C::ShowDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_DialogueStage.Bp_DialogueStage_C.ShowDialog");

	ABp_DialogueStage_C_ShowDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_DialogueStage.Bp_DialogueStage_C.SetActive
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABp_DialogueStage_C::SetActive(bool* Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_DialogueStage.Bp_DialogueStage_C.SetActive");

	ABp_DialogueStage_C_SetActive_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_DialogueStage.Bp_DialogueStage_C.CacheEventRegion
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ABp_DialogueStage_C::CacheEventRegion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_DialogueStage.Bp_DialogueStage_C.CacheEventRegion");

	ABp_DialogueStage_C_CacheEventRegion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_DialogueStage.Bp_DialogueStage_C.SetupCamera
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ABp_DialogueStage_C::SetupCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_DialogueStage.Bp_DialogueStage_C.SetupCamera");

	ABp_DialogueStage_C_SetupCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_DialogueStage.Bp_DialogueStage_C.IsLocalPlayerInEventRegion
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABp_DialogueStage_C::IsLocalPlayerInEventRegion(bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_DialogueStage.Bp_DialogueStage_C.IsLocalPlayerInEventRegion");

	ABp_DialogueStage_C_IsLocalPlayerInEventRegion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Bp_DialogueStage.Bp_DialogueStage_C.OrientNPCToPlayer
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ABp_DialogueStage_C::OrientNPCToPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_DialogueStage.Bp_DialogueStage_C.OrientNPCToPlayer");

	ABp_DialogueStage_C_OrientNPCToPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_DialogueStage.Bp_DialogueStage_C.SetupShouldViewStage
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          DoView                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABp_DialogueStage_C::SetupShouldViewStage(bool* DoView)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_DialogueStage.Bp_DialogueStage_C.SetupShouldViewStage");

	ABp_DialogueStage_C_SetupShouldViewStage_Params params;
	params.DoView = DoView;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_DialogueStage.Bp_DialogueStage_C.CleanupCharacters
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ABp_DialogueStage_C::CleanupCharacters()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_DialogueStage.Bp_DialogueStage_C.CleanupCharacters");

	ABp_DialogueStage_C_CleanupCharacters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_DialogueStage.Bp_DialogueStage_C.SetupCharacters
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void ABp_DialogueStage_C::SetupCharacters()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_DialogueStage.Bp_DialogueStage_C.SetupCharacters");

	ABp_DialogueStage_C_SetupCharacters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_DialogueStage.Bp_DialogueStage_C.SetupAnimatedCamera
// 00007FF6F8B35350
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABp_DialogueStage_C::SetupAnimatedCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_DialogueStage.Bp_DialogueStage_C.SetupAnimatedCamera");

	ABp_DialogueStage_C_SetupAnimatedCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_DialogueStage.Bp_DialogueStage_C.SetupStage
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FEventTreeStage*        Stage                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABp_DialogueStage_C::SetupStage(struct FEventTreeStage* Stage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_DialogueStage.Bp_DialogueStage_C.SetupStage");

	ABp_DialogueStage_C_SetupStage_Params params;
	params.Stage = Stage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_DialogueStage.Bp_DialogueStage_C.Begin
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void ABp_DialogueStage_C::Begin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_DialogueStage.Bp_DialogueStage_C.Begin");

	ABp_DialogueStage_C_Begin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_DialogueStage.Bp_DialogueStage_C.End
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void ABp_DialogueStage_C::End()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_DialogueStage.Bp_DialogueStage_C.End");

	ABp_DialogueStage_C_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_DialogueStage.Bp_DialogueStage_C.OnSpectateTargetChanged_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 SpectateTarget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABp_DialogueStage_C::OnSpectateTargetChanged_Event_1(class AActor** SpectateTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_DialogueStage.Bp_DialogueStage_C.OnSpectateTargetChanged_Event_1");

	ABp_DialogueStage_C_OnSpectateTargetChanged_Event_1_Params params;
	params.SpectateTarget = SpectateTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_DialogueStage.Bp_DialogueStage_C.OnUpdateActiveState_Event_1
// 00007FF6F8B35350
// (BlueprintCallable, BlueprintEvent)

void ABp_DialogueStage_C::OnUpdateActiveState_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_DialogueStage.Bp_DialogueStage_C.OnUpdateActiveState_Event_1");

	ABp_DialogueStage_C_OnUpdateActiveState_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Bp_DialogueStage.Bp_DialogueStage_C.ExecuteUbergraph_Bp_DialogueStage
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABp_DialogueStage_C::ExecuteUbergraph_Bp_DialogueStage(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Bp_DialogueStage.Bp_DialogueStage_C.ExecuteUbergraph_Bp_DialogueStage");

	ABp_DialogueStage_C_ExecuteUbergraph_Bp_DialogueStage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
