#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_PetLoader_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AITree_PetLoader.AITree_PetLoader_C.BndEvt__PetShared_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_PetLoader
struct UAITree_PetLoader_C_BndEvt__PetShared_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_PetLoader_Params
{
	class AGbxAIController*                            AIController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AGbxCharacter*                               Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FAIActionBlueprintContext                   Context;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function AITree_PetLoader.AITree_PetLoader_C.ExecuteUbergraph_AITree_PetLoader
struct UAITree_PetLoader_C_ExecuteUbergraph_AITree_PetLoader_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
