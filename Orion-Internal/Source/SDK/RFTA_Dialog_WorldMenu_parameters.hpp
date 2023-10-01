#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Dialog_WorldMenu_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Dialog_WorldMenu.Dialog_WorldMenu_C.BeginSurvivalMode
struct ADialog_WorldMenu_C_BeginSurvivalMode_Params
{
};

// Function Dialog_WorldMenu.Dialog_WorldMenu_C.SetContext
struct ADialog_WorldMenu_C_SetContext_Params
{
	class AActor**                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
