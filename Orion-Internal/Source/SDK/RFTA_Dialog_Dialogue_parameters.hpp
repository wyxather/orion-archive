#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Dialog_Dialogue_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Dialog_Dialogue.Dialog_Dialogue_C.UnbindEvents
struct ADialog_Dialogue_C_UnbindEvents_Params
{
};

// Function Dialog_Dialogue.Dialog_Dialogue_C.EndDialog
struct ADialog_Dialogue_C_EndDialog_Params
{
};

// Function Dialog_Dialogue.Dialog_Dialogue_C.SetInitiator
struct ADialog_Dialogue_C_SetInitiator_Params
{
	class AActor**                                     Initiator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Dialog_Dialogue.Dialog_Dialogue_C.SetContext
struct ADialog_Dialogue_C_SetContext_Params
{
	class AActor**                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Dialog_Dialogue.Dialog_Dialogue_C.OnBeginDialog
struct ADialog_Dialogue_C_OnBeginDialog_Params
{
};

// Function Dialog_Dialogue.Dialog_Dialogue_C.OnEndDialog
struct ADialog_Dialogue_C_OnEndDialog_Params
{
};

// Function Dialog_Dialogue.Dialog_Dialogue_C.ExecuteUbergraph_Dialog_Dialogue
struct ADialog_Dialogue_C_ExecuteUbergraph_Dialog_Dialogue_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
