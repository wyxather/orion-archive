#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ANav_Tinkloot_DropDown_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ANav_Tinkloot_DropDown.ANav_Tinkloot_DropDown_C.OnBegin
struct UANav_Tinkloot_DropDown_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ANav_Tinkloot_DropDown.ANav_Tinkloot_DropDown_C.OnEnd
struct UANav_Tinkloot_DropDown_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ANav_Tinkloot_DropDown.ANav_Tinkloot_DropDown_C.ExecuteUbergraph_ANav_Tinkloot_DropDown
struct UANav_Tinkloot_DropDown_C_ExecuteUbergraph_ANav_Tinkloot_DropDown_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
