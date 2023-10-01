#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARAnim_PunkFemale_Taunt_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ARAnim_PunkFemale_Taunt.ARAnim_PunkFemale_Taunt_C.OnEnd
struct UARAnim_PunkFemale_Taunt_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ARAnim_PunkFemale_Taunt.ARAnim_PunkFemale_Taunt_C.ExecuteUbergraph_ARAnim_PunkFemale_Taunt
struct UARAnim_PunkFemale_Taunt_C_ExecuteUbergraph_ARAnim_PunkFemale_Taunt_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
