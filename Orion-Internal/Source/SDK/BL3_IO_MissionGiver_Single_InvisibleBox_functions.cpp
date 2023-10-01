// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IO_MissionGiver_Single_InvisibleBox_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IO_MissionGiver_Single_InvisibleBox.IO_MissionGiver_Single_InvisibleBox_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AIO_MissionGiver_Single_InvisibleBox_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionGiver_Single_InvisibleBox.IO_MissionGiver_Single_InvisibleBox_C.UserConstructionScript");

	AIO_MissionGiver_Single_InvisibleBox_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionGiver_Single_InvisibleBox.IO_MissionGiver_Single_InvisibleBox_C.Play_Feedback_MissionsAvailable
// (BlueprintCallable, BlueprintEvent)

void AIO_MissionGiver_Single_InvisibleBox_C::Play_Feedback_MissionsAvailable()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionGiver_Single_InvisibleBox.IO_MissionGiver_Single_InvisibleBox_C.Play_Feedback_MissionsAvailable");

	AIO_MissionGiver_Single_InvisibleBox_C_Play_Feedback_MissionsAvailable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionGiver_Single_InvisibleBox.IO_MissionGiver_Single_InvisibleBox_C.Play_Feedback_NoMissionsAvailable
// (BlueprintCallable, BlueprintEvent)

void AIO_MissionGiver_Single_InvisibleBox_C::Play_Feedback_NoMissionsAvailable()
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionGiver_Single_InvisibleBox.IO_MissionGiver_Single_InvisibleBox_C.Play_Feedback_NoMissionsAvailable");

	AIO_MissionGiver_Single_InvisibleBox_C_Play_Feedback_NoMissionsAvailable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IO_MissionGiver_Single_InvisibleBox.IO_MissionGiver_Single_InvisibleBox_C.ExecuteUbergraph_IO_MissionGiver_Single_InvisibleBox
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIO_MissionGiver_Single_InvisibleBox_C::ExecuteUbergraph_IO_MissionGiver_Single_InvisibleBox(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IO_MissionGiver_Single_InvisibleBox.IO_MissionGiver_Single_InvisibleBox_C.ExecuteUbergraph_IO_MissionGiver_Single_InvisibleBox");

	AIO_MissionGiver_Single_InvisibleBox_C_ExecuteUbergraph_IO_MissionGiver_Single_InvisibleBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
