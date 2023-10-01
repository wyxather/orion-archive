#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_CE_Standin_PetLoader_DigistructIn_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CE_Standin_PetLoader_DigistructIn.CE_Standin_PetLoader_DigistructIn_C.OnBegin
struct UCE_Standin_PetLoader_DigistructIn_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CE_Standin_PetLoader_DigistructIn.CE_Standin_PetLoader_DigistructIn_C.OnEnd
struct UCE_Standin_PetLoader_DigistructIn_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CE_Standin_PetLoader_DigistructIn.CE_Standin_PetLoader_DigistructIn_C.ExecuteUbergraph_CE_Standin_PetLoader_DigistructIn
struct UCE_Standin_PetLoader_DigistructIn_C_ExecuteUbergraph_CE_Standin_PetLoader_DigistructIn_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
