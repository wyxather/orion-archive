// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PetSpiderant_Burrow_Start_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_PetSpiderant_Burrow_Start.A_PetSpiderant_Burrow_Start_C.GbxAsyncRequest_Miss_773CF08C4F2C21AA085FBD94BCB3F3D5
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UA_PetSpiderant_Burrow_Start_C::GbxAsyncRequest_Miss_773CF08C4F2C21AA085FBD94BCB3F3D5(const struct FHitResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PetSpiderant_Burrow_Start.A_PetSpiderant_Burrow_Start_C.GbxAsyncRequest_Miss_773CF08C4F2C21AA085FBD94BCB3F3D5");

	UA_PetSpiderant_Burrow_Start_C_GbxAsyncRequest_Miss_773CF08C4F2C21AA085FBD94BCB3F3D5_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PetSpiderant_Burrow_Start.A_PetSpiderant_Burrow_Start_C.GbxAsyncRequest_Hit_773CF08C4F2C21AA085FBD94BCB3F3D5
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult              Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UA_PetSpiderant_Burrow_Start_C::GbxAsyncRequest_Hit_773CF08C4F2C21AA085FBD94BCB3F3D5(const struct FHitResult& Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PetSpiderant_Burrow_Start.A_PetSpiderant_Burrow_Start_C.GbxAsyncRequest_Hit_773CF08C4F2C21AA085FBD94BCB3F3D5");

	UA_PetSpiderant_Burrow_Start_C_GbxAsyncRequest_Hit_773CF08C4F2C21AA085FBD94BCB3F3D5_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PetSpiderant_Burrow_Start.A_PetSpiderant_Burrow_Start_C.TraceToGround
// (BlueprintCallable, BlueprintEvent)

void UA_PetSpiderant_Burrow_Start_C::TraceToGround()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PetSpiderant_Burrow_Start.A_PetSpiderant_Burrow_Start_C.TraceToGround");

	UA_PetSpiderant_Burrow_Start_C_TraceToGround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PetSpiderant_Burrow_Start.A_PetSpiderant_Burrow_Start_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PetSpiderant_Burrow_Start_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PetSpiderant_Burrow_Start.A_PetSpiderant_Burrow_Start_C.OnBegin");

	UA_PetSpiderant_Burrow_Start_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PetSpiderant_Burrow_Start.A_PetSpiderant_Burrow_Start_C.Notify_SetBurrowStance
// (BlueprintCallable, BlueprintEvent)

void UA_PetSpiderant_Burrow_Start_C::Notify_SetBurrowStance()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PetSpiderant_Burrow_Start.A_PetSpiderant_Burrow_Start_C.Notify_SetBurrowStance");

	UA_PetSpiderant_Burrow_Start_C_Notify_SetBurrowStance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PetSpiderant_Burrow_Start.A_PetSpiderant_Burrow_Start_C.ExecuteUbergraph_A_PetSpiderant_Burrow_Start
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PetSpiderant_Burrow_Start_C::ExecuteUbergraph_A_PetSpiderant_Burrow_Start(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PetSpiderant_Burrow_Start.A_PetSpiderant_Burrow_Start_C.ExecuteUbergraph_A_PetSpiderant_Burrow_Start");

	UA_PetSpiderant_Burrow_Start_C_ExecuteUbergraph_A_PetSpiderant_Burrow_Start_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
