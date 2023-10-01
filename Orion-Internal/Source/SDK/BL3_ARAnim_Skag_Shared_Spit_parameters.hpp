#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARAnim_Skag_Shared_Spit_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ARAnim_Skag_Shared_Spit.ARAnim_Skag_Shared_Spit_C.OnBegin
struct UARAnim_Skag_Shared_Spit_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ARAnim_Skag_Shared_Spit.ARAnim_Skag_Shared_Spit_C.OnEnd
struct UARAnim_Skag_Shared_Spit_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ARAnim_Skag_Shared_Spit.ARAnim_Skag_Shared_Spit_C.NotifyState_Spit_Abort
struct UARAnim_Skag_Shared_Spit_C_NotifyState_Spit_Abort_Params
{
};

// Function ARAnim_Skag_Shared_Spit.ARAnim_Skag_Shared_Spit_C.NotifyState_Spit_Begin
struct UARAnim_Skag_Shared_Spit_C_NotifyState_Spit_Begin_Params
{
};

// Function ARAnim_Skag_Shared_Spit.ARAnim_Skag_Shared_Spit_C.NotifyState_Spit_End
struct UARAnim_Skag_Shared_Spit_C_NotifyState_Spit_End_Params
{
};

// Function ARAnim_Skag_Shared_Spit.ARAnim_Skag_Shared_Spit_C.ExecuteUbergraph_ARAnim_Skag_Shared_Spit
struct UARAnim_Skag_Shared_Spit_C_ExecuteUbergraph_ARAnim_Skag_Shared_Spit_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
