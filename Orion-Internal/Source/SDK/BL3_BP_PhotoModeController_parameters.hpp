#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_PhotoModeController_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_PhotoModeController.BP_PhotoModeController_C.UserConstructionScript
struct ABP_PhotoModeController_C_UserConstructionScript_Params
{
};

// Function BP_PhotoModeController.BP_PhotoModeController_C.OnEnterPhotoMode
struct ABP_PhotoModeController_C_OnEnterPhotoMode_Params
{
};

// Function BP_PhotoModeController.BP_PhotoModeController_C.OnExitPhotoMode
struct ABP_PhotoModeController_C_OnExitPhotoMode_Params
{
};

// Function BP_PhotoModeController.BP_PhotoModeController_C.ExecuteUbergraph_BP_PhotoModeController
struct ABP_PhotoModeController_C_ExecuteUbergraph_BP_PhotoModeController_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
