// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARAnim_Skag_Shared_Barf_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ARAnim_Skag_Shared_Barf.ARAnim_Skag_Shared_Barf_C.Notify_BreathStart
// (BlueprintCallable, BlueprintEvent)

void UARAnim_Skag_Shared_Barf_C::Notify_BreathStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function ARAnim_Skag_Shared_Barf.ARAnim_Skag_Shared_Barf_C.Notify_BreathStart");

	UARAnim_Skag_Shared_Barf_C_Notify_BreathStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARAnim_Skag_Shared_Barf.ARAnim_Skag_Shared_Barf_C.Notify_BreathStop
// (BlueprintCallable, BlueprintEvent)

void UARAnim_Skag_Shared_Barf_C::Notify_BreathStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function ARAnim_Skag_Shared_Barf.ARAnim_Skag_Shared_Barf_C.Notify_BreathStop");

	UARAnim_Skag_Shared_Barf_C_Notify_BreathStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARAnim_Skag_Shared_Barf.ARAnim_Skag_Shared_Barf_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UARAnim_Skag_Shared_Barf_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARAnim_Skag_Shared_Barf.ARAnim_Skag_Shared_Barf_C.OnEnd");

	UARAnim_Skag_Shared_Barf_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARAnim_Skag_Shared_Barf.ARAnim_Skag_Shared_Barf_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UARAnim_Skag_Shared_Barf_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARAnim_Skag_Shared_Barf.ARAnim_Skag_Shared_Barf_C.OnBegin");

	UARAnim_Skag_Shared_Barf_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARAnim_Skag_Shared_Barf.ARAnim_Skag_Shared_Barf_C.ExecuteUbergraph_ARAnim_Skag_Shared_Barf
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UARAnim_Skag_Shared_Barf_C::ExecuteUbergraph_ARAnim_Skag_Shared_Barf(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARAnim_Skag_Shared_Barf.ARAnim_Skag_Shared_Barf_C.ExecuteUbergraph_ARAnim_Skag_Shared_Barf");

	UARAnim_Skag_Shared_Barf_C_ExecuteUbergraph_ARAnim_Skag_Shared_Barf_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
