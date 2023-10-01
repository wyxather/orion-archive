// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_PhotoModeController_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PhotoModeController.BP_PhotoModeController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_PhotoModeController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhotoModeController.BP_PhotoModeController_C.UserConstructionScript");

	ABP_PhotoModeController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PhotoModeController.BP_PhotoModeController_C.OnEnterPhotoMode
// (Event, Public, BlueprintEvent)

void ABP_PhotoModeController_C::OnEnterPhotoMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhotoModeController.BP_PhotoModeController_C.OnEnterPhotoMode");

	ABP_PhotoModeController_C_OnEnterPhotoMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PhotoModeController.BP_PhotoModeController_C.OnExitPhotoMode
// (Event, Public, BlueprintEvent)

void ABP_PhotoModeController_C::OnExitPhotoMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhotoModeController.BP_PhotoModeController_C.OnExitPhotoMode");

	ABP_PhotoModeController_C_OnExitPhotoMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PhotoModeController.BP_PhotoModeController_C.ExecuteUbergraph_BP_PhotoModeController
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_PhotoModeController_C::ExecuteUbergraph_BP_PhotoModeController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PhotoModeController.BP_PhotoModeController_C.ExecuteUbergraph_BP_PhotoModeController");

	ABP_PhotoModeController_C_ExecuteUbergraph_BP_PhotoModeController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
