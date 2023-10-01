#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARAnim_Skag_Shared_Barf_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ARAnim_Skag_Shared_Barf.ARAnim_Skag_Shared_Barf_C.Notify_BreathStart
struct UARAnim_Skag_Shared_Barf_C_Notify_BreathStart_Params
{
};

// Function ARAnim_Skag_Shared_Barf.ARAnim_Skag_Shared_Barf_C.Notify_BreathStop
struct UARAnim_Skag_Shared_Barf_C_Notify_BreathStop_Params
{
};

// Function ARAnim_Skag_Shared_Barf.ARAnim_Skag_Shared_Barf_C.OnEnd
struct UARAnim_Skag_Shared_Barf_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ARAnim_Skag_Shared_Barf.ARAnim_Skag_Shared_Barf_C.OnBegin
struct UARAnim_Skag_Shared_Barf_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ARAnim_Skag_Shared_Barf.ARAnim_Skag_Shared_Barf_C.ExecuteUbergraph_ARAnim_Skag_Shared_Barf
struct UARAnim_Skag_Shared_Barf_C_ExecuteUbergraph_ARAnim_Skag_Shared_Barf_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
