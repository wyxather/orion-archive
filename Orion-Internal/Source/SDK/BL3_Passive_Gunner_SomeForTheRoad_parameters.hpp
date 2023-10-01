#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Gunner_SomeForTheRoad_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Passive_Gunner_SomeForTheRoad.Passive_Gunner_SomeForTheRoad_C.OnActivated
struct UPassive_Gunner_SomeForTheRoad_C_OnActivated_Params
{
};

// Function Passive_Gunner_SomeForTheRoad.Passive_Gunner_SomeForTheRoad_C.BronzeAgeRage_ExitedIronBear
struct UPassive_Gunner_SomeForTheRoad_C_BronzeAgeRage_ExitedIronBear_Params
{
	class AOakCharacter_IronBear*                      IronBear;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Gunner_SomeForTheRoad.Passive_Gunner_SomeForTheRoad_C.ExecuteUbergraph_Passive_Gunner_SomeForTheRoad
struct UPassive_Gunner_SomeForTheRoad_C_ExecuteUbergraph_Passive_Gunner_SomeForTheRoad_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
