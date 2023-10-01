#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Mod_SongOfSwords_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Mod_SongOfSwords.Action_Mod_SongOfSwords_C.Check Is Friendly?
struct UAction_Mod_SongOfSwords_C_Check_Is_Friendly__Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	class AActor*                                      Cause;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Action_Mod_SongOfSwords.Action_Mod_SongOfSwords_C.OnPostComputeStats
struct UAction_Mod_SongOfSwords_C_OnPostComputeStats_Params
{
};

// Function Action_Mod_SongOfSwords.Action_Mod_SongOfSwords_C.ExecuteUbergraph_Action_Mod_SongOfSwords
struct UAction_Mod_SongOfSwords_C_ExecuteUbergraph_Action_Mod_SongOfSwords_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
