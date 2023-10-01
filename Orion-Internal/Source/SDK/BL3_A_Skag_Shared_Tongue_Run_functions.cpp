// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Skag_Shared_Tongue_Run_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_Skag_Shared_Tongue_Run.A_Skag_Shared_Tongue_Run_C.Notify_TongueLashRtoL
// (BlueprintCallable, BlueprintEvent)

void UA_Skag_Shared_Tongue_Run_C::Notify_TongueLashRtoL()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Skag_Shared_Tongue_Run.A_Skag_Shared_Tongue_Run_C.Notify_TongueLashRtoL");

	UA_Skag_Shared_Tongue_Run_C_Notify_TongueLashRtoL_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Skag_Shared_Tongue_Run.A_Skag_Shared_Tongue_Run_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Skag_Shared_Tongue_Run_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Skag_Shared_Tongue_Run.A_Skag_Shared_Tongue_Run_C.OnBegin");

	UA_Skag_Shared_Tongue_Run_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_Skag_Shared_Tongue_Run.A_Skag_Shared_Tongue_Run_C.ExecuteUbergraph_A_Skag_Shared_Tongue_Run
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_Skag_Shared_Tongue_Run_C::ExecuteUbergraph_A_Skag_Shared_Tongue_Run(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_Skag_Shared_Tongue_Run.A_Skag_Shared_Tongue_Run_C.ExecuteUbergraph_A_Skag_Shared_Tongue_Run");

	UA_Skag_Shared_Tongue_Run_C_ExecuteUbergraph_A_Skag_Shared_Tongue_Run_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
