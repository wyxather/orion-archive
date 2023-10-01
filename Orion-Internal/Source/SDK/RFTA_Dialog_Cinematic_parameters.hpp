#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Dialog_Cinematic_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Dialog_Cinematic.Dialog_Cinematic_C.SetContext
struct ADialog_Cinematic_C_SetContext_Params
{
	class ULevelSequence**                             Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Dialog_Cinematic.Dialog_Cinematic_C.OnEndDialog
struct ADialog_Cinematic_C_OnEndDialog_Params
{
};

// Function Dialog_Cinematic.Dialog_Cinematic_C.ExecuteUbergraph_Dialog_Cinematic
struct ADialog_Cinematic_C_ExecuteUbergraph_Dialog_Cinematic_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
