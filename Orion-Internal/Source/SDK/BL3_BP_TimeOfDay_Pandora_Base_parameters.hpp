#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_TimeOfDay_Pandora_Base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_TimeOfDay_Pandora_Base.BP_TimeOfDay_Pandora_Base_C.GetWorldPhaseLockStart
struct ABP_TimeOfDay_Pandora_Base_C_GetWorldPhaseLockStart_Params
{
	struct FVector                                     World_Location;                                           // (Parm, OutParm, IsPlainOldData)
};

// Function BP_TimeOfDay_Pandora_Base.BP_TimeOfDay_Pandora_Base_C.Enable_Phase_Lock
struct ABP_TimeOfDay_Pandora_Base_C_Enable_Phase_Lock_Params
{
	bool                                               Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TimeOfDay_Pandora_Base.BP_TimeOfDay_Pandora_Base_C.SetMoonState
struct ABP_TimeOfDay_Pandora_Base_C_SetMoonState_Params
{
	TEnumAsByte<Enum_IO_EridiumVortex>                 MoonState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_TimeOfDay_Pandora_Base.BP_TimeOfDay_Pandora_Base_C.UserConstructionScript
struct ABP_TimeOfDay_Pandora_Base_C_UserConstructionScript_Params
{
};

// Function BP_TimeOfDay_Pandora_Base.BP_TimeOfDay_Pandora_Base_C.PostVortexMoon
struct ABP_TimeOfDay_Pandora_Base_C_PostVortexMoon_Params
{
};

// Function BP_TimeOfDay_Pandora_Base.BP_TimeOfDay_Pandora_Base_C.FireHawkMoon
struct ABP_TimeOfDay_Pandora_Base_C_FireHawkMoon_Params
{
};

// Function BP_TimeOfDay_Pandora_Base.BP_TimeOfDay_Pandora_Base_C.ExecuteUbergraph_BP_TimeOfDay_Pandora_Base
struct ABP_TimeOfDay_Pandora_Base_C_ExecuteUbergraph_BP_TimeOfDay_Pandora_Base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
