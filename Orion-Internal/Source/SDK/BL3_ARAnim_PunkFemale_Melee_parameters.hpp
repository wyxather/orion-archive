#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARAnim_PunkFemale_Melee_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ARAnim_PunkFemale_Melee.ARAnim_PunkFemale_Melee_C.OnBegin
struct UARAnim_PunkFemale_Melee_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ARAnim_PunkFemale_Melee.ARAnim_PunkFemale_Melee_C.Notify_Melee
struct UARAnim_PunkFemale_Melee_C_Notify_Melee_Params
{
};

// Function ARAnim_PunkFemale_Melee.ARAnim_PunkFemale_Melee_C.Notify_MeleePunch
struct UARAnim_PunkFemale_Melee_C_Notify_MeleePunch_Params
{
};

// Function ARAnim_PunkFemale_Melee.ARAnim_PunkFemale_Melee_C.Notify_MeleeKick
struct UARAnim_PunkFemale_Melee_C_Notify_MeleeKick_Params
{
};

// Function ARAnim_PunkFemale_Melee.ARAnim_PunkFemale_Melee_C.ExecuteUbergraph_ARAnim_PunkFemale_Melee
struct UARAnim_PunkFemale_Melee_C_ExecuteUbergraph_ARAnim_PunkFemale_Melee_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
