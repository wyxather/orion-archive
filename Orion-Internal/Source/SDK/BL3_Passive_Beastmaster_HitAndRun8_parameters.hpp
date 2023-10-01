#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_HitAndRun8_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Passive_Beastmaster_HitAndRun8.Passive_Beastmaster_HitAndRun8_C.OnActivated
struct UPassive_Beastmaster_HitAndRun8_C_OnActivated_Params
{
};

// Function Passive_Beastmaster_HitAndRun8.Passive_Beastmaster_HitAndRun8_C.OnReloaded_HitAndRun8
struct UPassive_Beastmaster_HitAndRun8_C_OnReloaded_HitAndRun8_Params
{
	class AWeapon*                                     EventWeapon;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCompleted;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_Beastmaster_HitAndRun8.Passive_Beastmaster_HitAndRun8_C.ExecuteUbergraph_Passive_Beastmaster_HitAndRun8
struct UPassive_Beastmaster_HitAndRun8_C_ExecuteUbergraph_Passive_Beastmaster_HitAndRun8_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
