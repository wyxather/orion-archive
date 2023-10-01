// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_ATL_Tracker_Puck_Child_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_ATL_Tracker_Puck_Child.Proj_ATL_Tracker_Puck_Child_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProj_ATL_Tracker_Puck_Child_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_Tracker_Puck_Child.Proj_ATL_Tracker_Puck_Child_C.UserConstructionScript");

	AProj_ATL_Tracker_Puck_Child_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_ATL_Tracker_Puck_Child.Proj_ATL_Tracker_Puck_Child_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProj_ATL_Tracker_Puck_Child_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_Tracker_Puck_Child.Proj_ATL_Tracker_Puck_Child_C.ReceiveBeginPlay");

	AProj_ATL_Tracker_Puck_Child_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_ATL_Tracker_Puck_Child.Proj_ATL_Tracker_Puck_Child_C.SingleTargetTag
// (Public, BlueprintCallable, BlueprintEvent)

void AProj_ATL_Tracker_Puck_Child_C::SingleTargetTag()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_Tracker_Puck_Child.Proj_ATL_Tracker_Puck_Child_C.SingleTargetTag");

	AProj_ATL_Tracker_Puck_Child_C_SingleTargetTag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_ATL_Tracker_Puck_Child.Proj_ATL_Tracker_Puck_Child_C.ExecuteUbergraph_Proj_ATL_Tracker_Puck_Child
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_ATL_Tracker_Puck_Child_C::ExecuteUbergraph_Proj_ATL_Tracker_Puck_Child(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_Tracker_Puck_Child.Proj_ATL_Tracker_Puck_Child_C.ExecuteUbergraph_Proj_ATL_Tracker_Puck_Child");

	AProj_ATL_Tracker_Puck_Child_C_ExecuteUbergraph_Proj_ATL_Tracker_Puck_Child_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
