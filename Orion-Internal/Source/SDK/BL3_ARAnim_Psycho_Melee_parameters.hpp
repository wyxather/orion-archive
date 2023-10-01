#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARAnim_Psycho_Melee_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ARAnim_Psycho_Melee.ARAnim_Psycho_Melee_C.OnBegin
struct UARAnim_Psycho_Melee_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ARAnim_Psycho_Melee.ARAnim_Psycho_Melee_C.MeleeStrike
struct UARAnim_Psycho_Melee_C_MeleeStrike_Params
{
};

// Function ARAnim_Psycho_Melee.ARAnim_Psycho_Melee_C.ExecuteUbergraph_ARAnim_Psycho_Melee
struct UARAnim_Psycho_Melee_C_ExecuteUbergraph_ARAnim_Psycho_Melee_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
