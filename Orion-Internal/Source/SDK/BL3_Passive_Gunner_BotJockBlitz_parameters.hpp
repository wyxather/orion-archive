#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Gunner_BotJockBlitz_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Passive_Gunner_BotJockBlitz.Passive_Gunner_BotJockBlitz_C.CalculateAbilityState
struct UPassive_Gunner_BotJockBlitz_C_CalculateAbilityState_Params
{
	EGbxAbilityState                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Passive_Gunner_BotJockBlitz.Passive_Gunner_BotJockBlitz_C.OnDeactivated
struct UPassive_Gunner_BotJockBlitz_C_OnDeactivated_Params
{
};

// Function Passive_Gunner_BotJockBlitz.Passive_Gunner_BotJockBlitz_C.OnPaused
struct UPassive_Gunner_BotJockBlitz_C_OnPaused_Params
{
};

// Function Passive_Gunner_BotJockBlitz.Passive_Gunner_BotJockBlitz_C.OnResumed
struct UPassive_Gunner_BotJockBlitz_C_OnResumed_Params
{
};

// Function Passive_Gunner_BotJockBlitz.Passive_Gunner_BotJockBlitz_C.OnActivated
struct UPassive_Gunner_BotJockBlitz_C_OnActivated_Params
{
};

// Function Passive_Gunner_BotJockBlitz.Passive_Gunner_BotJockBlitz_C.ExecuteUbergraph_Passive_Gunner_BotJockBlitz
struct UPassive_Gunner_BotJockBlitz_C_ExecuteUbergraph_Passive_Gunner_BotJockBlitz_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
