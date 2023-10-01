// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PsychoMale_Shared_ThrowRunning_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_PsychoMale_Shared_ThrowRunning.A_PsychoMale_Shared_ThrowRunning_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PsychoMale_Shared_ThrowRunning_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PsychoMale_Shared_ThrowRunning.A_PsychoMale_Shared_ThrowRunning_C.OnBegin");

	UA_PsychoMale_Shared_ThrowRunning_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PsychoMale_Shared_ThrowRunning.A_PsychoMale_Shared_ThrowRunning_C.ThrowAndRespawnMelee_Begin
// (BlueprintCallable, BlueprintEvent)

void UA_PsychoMale_Shared_ThrowRunning_C::ThrowAndRespawnMelee_Begin()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PsychoMale_Shared_ThrowRunning.A_PsychoMale_Shared_ThrowRunning_C.ThrowAndRespawnMelee_Begin");

	UA_PsychoMale_Shared_ThrowRunning_C_ThrowAndRespawnMelee_Begin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PsychoMale_Shared_ThrowRunning.A_PsychoMale_Shared_ThrowRunning_C.ThrowAndRespawnMelee_End
// (BlueprintCallable, BlueprintEvent)

void UA_PsychoMale_Shared_ThrowRunning_C::ThrowAndRespawnMelee_End()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PsychoMale_Shared_ThrowRunning.A_PsychoMale_Shared_ThrowRunning_C.ThrowAndRespawnMelee_End");

	UA_PsychoMale_Shared_ThrowRunning_C_ThrowAndRespawnMelee_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PsychoMale_Shared_ThrowRunning.A_PsychoMale_Shared_ThrowRunning_C.ThrowAndRespawnMelee_Abort
// (BlueprintCallable, BlueprintEvent)

void UA_PsychoMale_Shared_ThrowRunning_C::ThrowAndRespawnMelee_Abort()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PsychoMale_Shared_ThrowRunning.A_PsychoMale_Shared_ThrowRunning_C.ThrowAndRespawnMelee_Abort");

	UA_PsychoMale_Shared_ThrowRunning_C_ThrowAndRespawnMelee_Abort_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PsychoMale_Shared_ThrowRunning.A_PsychoMale_Shared_ThrowRunning_C.ExecuteUbergraph_A_PsychoMale_Shared_ThrowRunning
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PsychoMale_Shared_ThrowRunning_C::ExecuteUbergraph_A_PsychoMale_Shared_ThrowRunning(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PsychoMale_Shared_ThrowRunning.A_PsychoMale_Shared_ThrowRunning_C.ExecuteUbergraph_A_PsychoMale_Shared_ThrowRunning");

	UA_PsychoMale_Shared_ThrowRunning_C_ExecuteUbergraph_A_PsychoMale_Shared_ThrowRunning_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
