#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Dialog_Tutorial_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Dialog_Tutorial.Dialog_Tutorial_C.Init
struct ADialog_Tutorial_C_Init_Params
{
	class UClass**                                     Tutorial;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor**                                     ContextActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool*                                              Left;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Dialog_Tutorial.Dialog_Tutorial_C.OnEndDialog
struct ADialog_Tutorial_C_OnEndDialog_Params
{
};

// Function Dialog_Tutorial.Dialog_Tutorial_C.ExecuteUbergraph_Dialog_Tutorial
struct ADialog_Tutorial_C_ExecuteUbergraph_Dialog_Tutorial_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
