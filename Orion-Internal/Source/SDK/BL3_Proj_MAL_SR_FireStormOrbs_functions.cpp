// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_MAL_SR_FireStormOrbs_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_MAL_SR_FireStormOrbs.Proj_MAL_SR_FireStormOrbs_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProj_MAL_SR_FireStormOrbs_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_MAL_SR_FireStormOrbs.Proj_MAL_SR_FireStormOrbs_C.UserConstructionScript");

	AProj_MAL_SR_FireStormOrbs_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_MAL_SR_FireStormOrbs.Proj_MAL_SR_FireStormOrbs_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProj_MAL_SR_FireStormOrbs_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_MAL_SR_FireStormOrbs.Proj_MAL_SR_FireStormOrbs_C.ReceiveBeginPlay");

	AProj_MAL_SR_FireStormOrbs_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_MAL_SR_FireStormOrbs.Proj_MAL_SR_FireStormOrbs_C.ExecuteUbergraph_Proj_MAL_SR_FireStormOrbs
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_MAL_SR_FireStormOrbs_C::ExecuteUbergraph_Proj_MAL_SR_FireStormOrbs(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_MAL_SR_FireStormOrbs.Proj_MAL_SR_FireStormOrbs_C.ExecuteUbergraph_Proj_MAL_SR_FireStormOrbs");

	AProj_MAL_SR_FireStormOrbs_C_ExecuteUbergraph_Proj_MAL_SR_FireStormOrbs_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
