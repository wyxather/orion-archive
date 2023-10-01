#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Gunner_FullCan_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Passive_Gunner_FullCan.Passive_Gunner_FullCan_C.OnActivated
struct UPassive_Gunner_FullCan_C_OnActivated_Params
{
};

// Function Passive_Gunner_FullCan.Passive_Gunner_FullCan_C.EnteredIronBear_FullCan
struct UPassive_Gunner_FullCan_C_EnteredIronBear_FullCan_Params
{
	class AOakCharacter_IronBear*                      IronBear;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Gunner_FullCan.Passive_Gunner_FullCan_C.ExitedIronBear_FullCan
struct UPassive_Gunner_FullCan_C_ExitedIronBear_FullCan_Params
{
	class AOakCharacter_IronBear*                      IronBear;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Gunner_FullCan.Passive_Gunner_FullCan_C.ExecuteUbergraph_Passive_Gunner_FullCan
struct UPassive_Gunner_FullCan_C_ExecuteUbergraph_Passive_Gunner_FullCan_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
