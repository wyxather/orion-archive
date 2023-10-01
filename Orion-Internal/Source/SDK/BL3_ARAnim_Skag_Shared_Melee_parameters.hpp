#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARAnim_Skag_Shared_Melee_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ARAnim_Skag_Shared_Melee.ARAnim_Skag_Shared_Melee_C.OnBegin
struct UARAnim_Skag_Shared_Melee_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ARAnim_Skag_Shared_Melee.ARAnim_Skag_Shared_Melee_C.Notify_Bite
struct UARAnim_Skag_Shared_Melee_C_Notify_Bite_Params
{
};

// Function ARAnim_Skag_Shared_Melee.ARAnim_Skag_Shared_Melee_C.Notify_ClawLtoR
struct UARAnim_Skag_Shared_Melee_C_Notify_ClawLtoR_Params
{
};

// Function ARAnim_Skag_Shared_Melee.ARAnim_Skag_Shared_Melee_C.Notify_ClawRtoL
struct UARAnim_Skag_Shared_Melee_C_Notify_ClawRtoL_Params
{
};

// Function ARAnim_Skag_Shared_Melee.ARAnim_Skag_Shared_Melee_C.ExecuteUbergraph_ARAnim_Skag_Shared_Melee
struct UARAnim_Skag_Shared_Melee_C_ExecuteUbergraph_ARAnim_Skag_Shared_Melee_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
