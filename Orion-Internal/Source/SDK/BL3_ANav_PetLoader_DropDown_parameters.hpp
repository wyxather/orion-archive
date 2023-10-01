#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ANav_PetLoader_DropDown_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ANav_PetLoader_DropDown.ANav_PetLoader_DropDown_C.OnEnd
struct UANav_PetLoader_DropDown_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ANav_PetLoader_DropDown.ANav_PetLoader_DropDown_C.OnBegin
struct UANav_PetLoader_DropDown_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ANav_PetLoader_DropDown.ANav_PetLoader_DropDown_C.Loader_JumpEnd
struct UANav_PetLoader_DropDown_C_Loader_JumpEnd_Params
{
};

// Function ANav_PetLoader_DropDown.ANav_PetLoader_DropDown_C.Loader_JumpStart
struct UANav_PetLoader_DropDown_C_Loader_JumpStart_Params
{
};

// Function ANav_PetLoader_DropDown.ANav_PetLoader_DropDown_C.ExecuteUbergraph_ANav_PetLoader_DropDown
struct UANav_PetLoader_DropDown_C_ExecuteUbergraph_ANav_PetLoader_DropDown_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
