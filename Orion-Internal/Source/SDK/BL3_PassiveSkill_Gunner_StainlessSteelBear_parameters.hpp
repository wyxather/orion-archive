#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Gunner_StainlessSteelBear_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PassiveSkill_Gunner_StainlessSteelBear.PassiveSkill_Gunner_StainlessSteelBear_C.OnActivated
struct UPassiveSkill_Gunner_StainlessSteelBear_C_OnActivated_Params
{
};

// Function PassiveSkill_Gunner_StainlessSteelBear.PassiveSkill_Gunner_StainlessSteelBear_C.StainlessSteelBear_AutoBearStarted
struct UPassiveSkill_Gunner_StainlessSteelBear_C_StainlessSteelBear_AutoBearStarted_Params
{
};

// Function PassiveSkill_Gunner_StainlessSteelBear.PassiveSkill_Gunner_StainlessSteelBear_C.StainlessSteelBear_IronBearEnteredAndReady
struct UPassiveSkill_Gunner_StainlessSteelBear_C_StainlessSteelBear_IronBearEnteredAndReady_Params
{
	class AOakCharacter_IronBear*                      IronBear;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PassiveSkill_Gunner_StainlessSteelBear.PassiveSkill_Gunner_StainlessSteelBear_C.ExecuteUbergraph_PassiveSkill_Gunner_StainlessSteelBear
struct UPassiveSkill_Gunner_StainlessSteelBear_C_ExecuteUbergraph_PassiveSkill_Gunner_StainlessSteelBear_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
