#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_ArmorSkill_ModifySingleStat_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ArmorSkill_ModifySingleStat.ArmorSkill_ModifySingleStat_C.GetValue
struct UArmorSkill_ModifySingleStat_C_GetValue_Params
{
	int*                                               Tier;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ArmorSkill_ModifySingleStat.ArmorSkill_ModifySingleStat_C.OnComputeStats
struct UArmorSkill_ModifySingleStat_C_OnComputeStats_Params
{
};

// Function ArmorSkill_ModifySingleStat.ArmorSkill_ModifySingleStat_C.ExecuteUbergraph_ArmorSkill_ModifySingleStat
struct UArmorSkill_ModifySingleStat_C_ExecuteUbergraph_ArmorSkill_ModifySingleStat_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
