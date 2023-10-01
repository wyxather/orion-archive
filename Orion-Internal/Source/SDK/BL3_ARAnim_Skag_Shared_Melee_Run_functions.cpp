// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARAnim_Skag_Shared_Melee_Run_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ARAnim_Skag_Shared_Melee_Run.ARAnim_Skag_Shared_Melee_Run_C.Notify_TongueLashRtoL
// (BlueprintCallable, BlueprintEvent)

void UARAnim_Skag_Shared_Melee_Run_C::Notify_TongueLashRtoL()
{
	static auto fn = UObject::FindObject<UFunction>("Function ARAnim_Skag_Shared_Melee_Run.ARAnim_Skag_Shared_Melee_Run_C.Notify_TongueLashRtoL");

	UARAnim_Skag_Shared_Melee_Run_C_Notify_TongueLashRtoL_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARAnim_Skag_Shared_Melee_Run.ARAnim_Skag_Shared_Melee_Run_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UARAnim_Skag_Shared_Melee_Run_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARAnim_Skag_Shared_Melee_Run.ARAnim_Skag_Shared_Melee_Run_C.OnBegin");

	UARAnim_Skag_Shared_Melee_Run_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARAnim_Skag_Shared_Melee_Run.ARAnim_Skag_Shared_Melee_Run_C.Notify_Bite
// (BlueprintCallable, BlueprintEvent)

void UARAnim_Skag_Shared_Melee_Run_C::Notify_Bite()
{
	static auto fn = UObject::FindObject<UFunction>("Function ARAnim_Skag_Shared_Melee_Run.ARAnim_Skag_Shared_Melee_Run_C.Notify_Bite");

	UARAnim_Skag_Shared_Melee_Run_C_Notify_Bite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARAnim_Skag_Shared_Melee_Run.ARAnim_Skag_Shared_Melee_Run_C.Notify_ClawRtoL
// (BlueprintCallable, BlueprintEvent)

void UARAnim_Skag_Shared_Melee_Run_C::Notify_ClawRtoL()
{
	static auto fn = UObject::FindObject<UFunction>("Function ARAnim_Skag_Shared_Melee_Run.ARAnim_Skag_Shared_Melee_Run_C.Notify_ClawRtoL");

	UARAnim_Skag_Shared_Melee_Run_C_Notify_ClawRtoL_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARAnim_Skag_Shared_Melee_Run.ARAnim_Skag_Shared_Melee_Run_C.ExecuteUbergraph_ARAnim_Skag_Shared_Melee_Run
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UARAnim_Skag_Shared_Melee_Run_C::ExecuteUbergraph_ARAnim_Skag_Shared_Melee_Run(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARAnim_Skag_Shared_Melee_Run.ARAnim_Skag_Shared_Melee_Run_C.ExecuteUbergraph_ARAnim_Skag_Shared_Melee_Run");

	UARAnim_Skag_Shared_Melee_Run_C_ExecuteUbergraph_ARAnim_Skag_Shared_Melee_Run_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
