#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Gunner_Tenacious_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Passive_Gunner_Tenacious.Passive_Gunner_Tenacious_C.OnActivated
struct UPassive_Gunner_Tenacious_C_OnActivated_Params
{
};

// Function Passive_Gunner_Tenacious.Passive_Gunner_Tenacious_C.ShieldDepleted_TencaiousDefense
struct UPassive_Gunner_Tenacious_C_ShieldDepleted_TencaiousDefense_Params
{
	struct FGameResourcePoolReference                  ResourcePool;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Passive_Gunner_Tenacious.Passive_Gunner_Tenacious_C.OnDeactivated
struct UPassive_Gunner_Tenacious_C_OnDeactivated_Params
{
};

// Function Passive_Gunner_Tenacious.Passive_Gunner_Tenacious_C.OnFilled_TencaciousDefense
struct UPassive_Gunner_Tenacious_C_OnFilled_TencaciousDefense_Params
{
	struct FGameResourcePoolReference                  ResourcePool;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Passive_Gunner_Tenacious.Passive_Gunner_Tenacious_C.SetTriggerStateByShieldAmount
struct UPassive_Gunner_Tenacious_C_SetTriggerStateByShieldAmount_Params
{
};

// Function Passive_Gunner_Tenacious.Passive_Gunner_Tenacious_C.ExecuteUbergraph_Passive_Gunner_Tenacious
struct UPassive_Gunner_Tenacious_C_ExecuteUbergraph_Passive_Gunner_Tenacious_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
