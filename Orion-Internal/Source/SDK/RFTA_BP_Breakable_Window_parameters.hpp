#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_BP_Breakable_Window_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_Breakable_Window.BP_Breakable_Window_C.OnDeath
struct ABP_Breakable_Window_C_OnDeath_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// Function BP_Breakable_Window.BP_Breakable_Window_C.OnNotifyDead
struct ABP_Breakable_Window_C_OnNotifyDead_Params
{
	struct FDamageInfo*                                DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function BP_Breakable_Window.BP_Breakable_Window_C.ExecuteUbergraph_BP_Breakable_Window
struct ABP_Breakable_Window_C_ExecuteUbergraph_BP_Breakable_Window_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
