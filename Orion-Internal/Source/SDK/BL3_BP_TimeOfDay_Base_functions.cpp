// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_TimeOfDay_Base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_TimeOfDay_Base.BP_TimeOfDay_Base_C.UpdateParameters
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_TimeOfDay_Base_C::UpdateParameters()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeOfDay_Base.BP_TimeOfDay_Base_C.UpdateParameters");

	ABP_TimeOfDay_Base_C_UpdateParameters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimeOfDay_Base.BP_TimeOfDay_Base_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_TimeOfDay_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeOfDay_Base.BP_TimeOfDay_Base_C.UserConstructionScript");

	ABP_TimeOfDay_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimeOfDay_Base.BP_TimeOfDay_Base_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TimeOfDay_Base_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeOfDay_Base.BP_TimeOfDay_Base_C.ReceiveTick");

	ABP_TimeOfDay_Base_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimeOfDay_Base.BP_TimeOfDay_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_TimeOfDay_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeOfDay_Base.BP_TimeOfDay_Base_C.ReceiveBeginPlay");

	ABP_TimeOfDay_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_TimeOfDay_Base.BP_TimeOfDay_Base_C.ExecuteUbergraph_BP_TimeOfDay_Base
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_TimeOfDay_Base_C::ExecuteUbergraph_BP_TimeOfDay_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TimeOfDay_Base.BP_TimeOfDay_Base_C.ExecuteUbergraph_BP_TimeOfDay_Base");

	ABP_TimeOfDay_Base_C_ExecuteUbergraph_BP_TimeOfDay_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
