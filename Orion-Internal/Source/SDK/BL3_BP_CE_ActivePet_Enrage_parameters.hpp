#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_CE_ActivePet_Enrage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_CE_ActivePet_Enrage.BP_CE_ActivePet_Enrage_C.OnBegin
struct UBP_CE_ActivePet_Enrage_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CE_ActivePet_Enrage.BP_CE_ActivePet_Enrage_C.OnEnd
struct UBP_CE_ActivePet_Enrage_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CE_ActivePet_Enrage.BP_CE_ActivePet_Enrage_C.ExecuteUbergraph_BP_CE_ActivePet_Enrage
struct UBP_CE_ActivePet_Enrage_C_ExecuteUbergraph_BP_CE_ActivePet_Enrage_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
