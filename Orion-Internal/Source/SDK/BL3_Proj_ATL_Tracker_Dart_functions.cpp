// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_ATL_Tracker_Dart_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_ATL_Tracker_Dart.Proj_ATL_Tracker_Dart_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProj_ATL_Tracker_Dart_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_Tracker_Dart.Proj_ATL_Tracker_Dart_C.UserConstructionScript");

	AProj_ATL_Tracker_Dart_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_ATL_Tracker_Dart.Proj_ATL_Tracker_Dart_C.SingleTargetTag
// (Public, BlueprintCallable, BlueprintEvent)

void AProj_ATL_Tracker_Dart_C::SingleTargetTag()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_Tracker_Dart.Proj_ATL_Tracker_Dart_C.SingleTargetTag");

	AProj_ATL_Tracker_Dart_C_SingleTargetTag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_ATL_Tracker_Dart.Proj_ATL_Tracker_Dart_C.ExecuteUbergraph_Proj_ATL_Tracker_Dart
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_ATL_Tracker_Dart_C::ExecuteUbergraph_Proj_ATL_Tracker_Dart(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_ATL_Tracker_Dart.Proj_ATL_Tracker_Dart_C.ExecuteUbergraph_Proj_ATL_Tracker_Dart");

	AProj_ATL_Tracker_Dart_C_ExecuteUbergraph_Proj_ATL_Tracker_Dart_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
