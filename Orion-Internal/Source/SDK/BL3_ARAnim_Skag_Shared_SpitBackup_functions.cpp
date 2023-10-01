// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARAnim_Skag_Shared_SpitBackup_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ARAnim_Skag_Shared_SpitBackup.ARAnim_Skag_Shared_SpitBackup_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UARAnim_Skag_Shared_SpitBackup_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARAnim_Skag_Shared_SpitBackup.ARAnim_Skag_Shared_SpitBackup_C.OnBegin");

	UARAnim_Skag_Shared_SpitBackup_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARAnim_Skag_Shared_SpitBackup.ARAnim_Skag_Shared_SpitBackup_C.NotifyState_Spit_Begin
// (BlueprintCallable, BlueprintEvent)

void UARAnim_Skag_Shared_SpitBackup_C::NotifyState_Spit_Begin()
{
	static auto fn = UObject::FindObject<UFunction>("Function ARAnim_Skag_Shared_SpitBackup.ARAnim_Skag_Shared_SpitBackup_C.NotifyState_Spit_Begin");

	UARAnim_Skag_Shared_SpitBackup_C_NotifyState_Spit_Begin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARAnim_Skag_Shared_SpitBackup.ARAnim_Skag_Shared_SpitBackup_C.NotifyState_Spit_End
// (BlueprintCallable, BlueprintEvent)

void UARAnim_Skag_Shared_SpitBackup_C::NotifyState_Spit_End()
{
	static auto fn = UObject::FindObject<UFunction>("Function ARAnim_Skag_Shared_SpitBackup.ARAnim_Skag_Shared_SpitBackup_C.NotifyState_Spit_End");

	UARAnim_Skag_Shared_SpitBackup_C_NotifyState_Spit_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARAnim_Skag_Shared_SpitBackup.ARAnim_Skag_Shared_SpitBackup_C.NotifyState_Spit_Abort
// (BlueprintCallable, BlueprintEvent)

void UARAnim_Skag_Shared_SpitBackup_C::NotifyState_Spit_Abort()
{
	static auto fn = UObject::FindObject<UFunction>("Function ARAnim_Skag_Shared_SpitBackup.ARAnim_Skag_Shared_SpitBackup_C.NotifyState_Spit_Abort");

	UARAnim_Skag_Shared_SpitBackup_C_NotifyState_Spit_Abort_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARAnim_Skag_Shared_SpitBackup.ARAnim_Skag_Shared_SpitBackup_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UARAnim_Skag_Shared_SpitBackup_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARAnim_Skag_Shared_SpitBackup.ARAnim_Skag_Shared_SpitBackup_C.OnEnd");

	UARAnim_Skag_Shared_SpitBackup_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARAnim_Skag_Shared_SpitBackup.ARAnim_Skag_Shared_SpitBackup_C.ExecuteUbergraph_ARAnim_Skag_Shared_SpitBackup
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UARAnim_Skag_Shared_SpitBackup_C::ExecuteUbergraph_ARAnim_Skag_Shared_SpitBackup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARAnim_Skag_Shared_SpitBackup.ARAnim_Skag_Shared_SpitBackup_C.ExecuteUbergraph_ARAnim_Skag_Shared_SpitBackup");

	UARAnim_Skag_Shared_SpitBackup_C_ExecuteUbergraph_ARAnim_Skag_Shared_SpitBackup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
